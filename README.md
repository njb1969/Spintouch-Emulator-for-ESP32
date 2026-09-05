# SpinTouch BLE Emulator

An ESPHome firmware project that turns an ESP32-S3 into a fake **LaMotte
WaterLink SpinTouch** pool/spa water tester — a real, physical Bluetooth
device that reads chemical values (chlorine, pH, alkalinity, etc.) off a
disposable test disk. This emulator advertises the same BLE service,
speaks the same protocol, and broadcasts made-up test results, so you can:

- Exercise the [joyfulhouse/lamotte-spintouch](https://github.com/joyfulhouse/lamotte-spintouch)
  Home Assistant integration without owning the real hardware, or
- Build and test your own custom BLE reader against a realistic,
  protocol-correct data source.

It runs completely standalone once flashed: on boot, it immediately
generates a random test result — random disk type, random sanitizer,
random values for every chemical — and keeps generating fresh results
automatically from then on, with no button presses, no dashboard, and no
manual input required.

---

## How it works, in one paragraph

The ESP32-S3 runs a BLE GATT server that reproduces the real SpinTouch's
service UUID and four characteristics. Whenever something connects to it
(Home Assistant, or your own tool), it waits 2 seconds, then builds a
91-byte fake test result — a random disk series, random sanitizer, and
random values for every relevant chemical — and sends a BLE notification.
Whatever's listening reads the payload the same way it would from a real
device. It also re-runs this whole sequence on its own every 60 seconds
while something stays connected, and once again on every boot.

---

## Hardware

### ESP32-S3 board

Any ESP32-S3 board works, but this config was built and tested against a
small board that only exposes **5V, GND, and pins 1–13** (no separate
3.3V pin broken out). If your board exposes more pins under different
labels, the GPIO choice below still applies — it's based on the ESP32-S3
*chip's* fixed strapping pins, not this specific board.

### 16×2 character LCD

An HD44780-compatible 16×2 character display, wired via a **PCF8574 I2C
backpack** (the near-universal way these are sold — look for 4 pins
labeled something like `VSS`, `VDD`, `SDA`, `SCK`). If yours is wired
directly to GPIO pins with no backpack (RS/RW/E/D0–D7, 10+ pins), this
config needs the `lcd_gpio` platform instead — not what's built here.

### Wiring

| LCD backpack pin | Connects to |
|---|---|
| VSS | GND |
| VDD | 5V |
| SDA | GPIO4 |
| SCK | GPIO5 *(this is the I2C clock line, same as SCL — some backpacks just label it differently)* |

**GPIO4/GPIO5 were chosen deliberately.** On the ESP32-S3 chip, the only
pins with a real boot/strapping role are GPIO0, GPIO3, GPIO45, and
GPIO46. Within the 1–13 range this board exposes, GPIO4/5 are the first
clean, unambiguous pair after GPIO3 (a strapping pin — skip it), and
they're physically adjacent for easy wiring.

**A caution worth knowing:** this board has no 3.3V pin, only 5V. Most
PCF8574 backpacks pull the I2C bus up toward VDD, so if VDD is 5V, the
bus idles close to 5V — out of spec for the ESP32-S3's GPIOs (3.6V
absolute max), even though plenty of hobby builds run it this way
without obvious failure. A bidirectional I2C logic-level shifter between
the two voltage domains is the clean fix if you want to be strict about
it.

### I2C backpack address

Configured for **`0x27`**, one of the two near-universal defaults for
these backpacks. If the screen stays blank, **`0x3F`** (ESPHome's own
default) is the first thing to try swapping in `spintouch-emulator.yaml`.

---

## Software

- **ESPHome**, flashed via [ESPHome Web](https://web.esphome.io) or the
  Home Assistant ESPHome Dashboard add-on. Both work entirely from a
  browser (WebSerial) — no native toolchain or USB-passthrough Linux
  container needed, which matters if you're building this from a
  Chromebook.
- A `secrets.yaml` alongside `spintouch-emulator.yaml`, containing:
  ```yaml
  wifi_ssid: "your-network-name"
  wifi_password: "your-network-password"
  ```
- If testing against the real integration: install
  [joyfulhouse/lamotte-spintouch](https://github.com/joyfulhouse/lamotte-spintouch)
  in Home Assistant via HACS.

### Flashing from a Chromebook

The port picker you'll see is Chrome's native WebSerial device chooser,
not something ESPHome draws itself. If you're unsure which entry is your
board: unplug it, open the picker, note what's listed, then plug it in
and reopen the picker — whatever's new is unambiguously your device.

This board uses **native USB** (no separate USB-to-serial bridge chip),
which can be fussier about showing up in normal run mode. If nothing
appears in the port list at all, hold the **BOOT** button, plug in the
USB-C cable while still holding it, then release — this forces the chip
into bootloader mode, which Chrome should then detect.

---

## Autonomous operation

Three separate triggers all run the exact same test sequence
(`run_test_script`), so they all behave identically — each one
independently re-randomizes everything and broadcasts a fresh result:

| Trigger | When it fires |
|---|---|
| **Boot** | Every power-on, and every hardware reset (the physical EN/RESET button restarts the chip exactly like a power cycle) |
| **On connect** | 2 seconds after any BLE client connects — whether that's the first-ever connection, or a reconnection after a gap |
| **Every 60 seconds** | Only while a client is currently connected (tracked via a `client_connected` flag) — silently does nothing if no one's listening |

### Why "on connect" instead of a fixed timer

The real HA integration's coordinator disconnects ~10 seconds after
reading a result, then deliberately stays disconnected for a full 5
minutes (to let a real LaMotte phone app get exclusive access) before
reconnecting. That's baked into the integration itself, not something
this emulator controls. A notification broadcast during that 5-minute
gap reaches nobody — there's no subscribed client to receive it. Firing
on `on_connect` instead re-syncs to *whatever* cadence the connected
client actually uses, guaranteeing zero wasted broadcasts, whether
that's HA's 5-minute cycle or a custom reader that just stays connected
persistently.

### What randomizes each run

Every trigger re-rolls, independently and uniformly at random:

- All 12 chemical values, each within its real-world-plausible range
  (see the Disk/Sanitizer table below for exact ranges)
- **Disk Series** — one of 203, 204, 303, 304
- **Sanitizer** — one of Chlorine, Bromine, Salt

So over time, with no interface needed at all, you'll naturally see
every disk/sanitizer combination the emulator supports — including the
Bromine and Phosphate readings, which only appear for certain
combinations (see below).

---

## Disk series & sanitizer support

The real SpinTouch protocol varies which chemicals a disk reports based
on both the physical disk series and which sanitizer you've told it
you're using. This emulator reproduces that exactly:

| Disk series | Calcium range | Iron? | Borate or Phosphate? |
|---|---|---|---|
| 203 | Standard (param `0x0F`) | Yes | Phosphate |
| 204 | High range (param `0x08`) | No | Phosphate |
| 303 | Standard (param `0x0F`) | Yes | Borate |
| 304 | High range (param `0x08`) | No | Borate |

Every disk also always reports: pH, Total Alkalinity, Cyanuric Acid,
Copper, and Salt.

**Sanitizer** determines whether Free Chlorine + Total Chlorine are
reported, or a single Bromine reading instead:

| Sanitizer | What's reported |
|---|---|
| Chlorine | Free Chlorine + Total Chlorine |
| Salt | Free Chlorine + Total Chlorine (a salt cell just generates chlorine — same readings, different metadata byte) |
| Bromine | Bromine only |

**This is why Bromine and Phosphate can show "unavailable" in Home
Assistant** — that's not a bug. The real integration creates a sensor
entity for every possible chemical up front, but only reports a value
for whichever ones actually appeared in the last test. A Chlorine/303
test genuinely can't produce a Bromine reading, the same way a real
physical 303 disk running a chlorine test couldn't either. Since the
disk/sanitizer now rotates randomly on every autonomous test, you'll see
all of these appear over time without needing to do anything.

### Chemical value ranges

| Chemical | Range |
|---|---|
| Free Chlorine | 0–15 |
| Total Chlorine | 0–15 |
| Bromine | 0–33 |
| pH | 6.0–9.0 |
| Total Alkalinity | 0–250 |
| Calcium Hardness | 0–1200 |
| Cyanuric Acid | 0–300 |
| Copper | 0–5 |
| Iron | 0–5 |
| Borate | 0–100 |
| Phosphate | 0–2500 |
| Salt | 0–10000 |

---

## Entities exposed to Home Assistant

This device shows up in HA as its own **ESPHome device** (separate from
the "LaMotte WaterLink Spin Touch" integration, which reads it over BLE).
It exposes:

- **Disk Series** (select) — 203 / 204 / 303 / 304
- **Sanitizer** (select) — Chlorine / Bromine / Salt
- 12 **number** entities, one per chemical
- **Run Test** (button) — manually triggers an immediate test, same as
  the automatic triggers

Since every autonomous trigger now randomizes everything itself, these
entities are mostly useful as a live readout of *what the last test
actually contained*, or as a manual override if you want to force a
specific combination rather than wait for the random rotation to land
on it.

---

## The LCD display

- **Row 0** — a scrolling ticker (one character every 250ms) of every
  value that's actually part of the current disk/sanitizer selection.
  This always matches what the emulator would broadcast right now — it
  reads from the exact same entities `run_test_script` does.
- **Row 1** — a static status line: `D<disk> <sanitizer>`, e.g.
  `D303 Chlorine`.

---

## Protocol reference

Reproduced from
[RESEARCH.md](https://github.com/joyfulhouse/lamotte-spintouch/blob/main/RESEARCH.md)
and `custom_components/spintouch/const.py` / `coordinator.py` in the
real integration's repo — every UUID and byte offset below was copied
verbatim from those files, not retyped from memory.

### BLE service & characteristics

All under service UUID `00000000-0000-1000-8000-bbbd00000000`:

| Characteristic | UUID (`...bbbd0000####`) | Purpose |
|---|---|---|
| TTEST | `0010` | Read — the 91-byte test result payload |
| TESTAVAIL | `0011` | Read/Notify — single-byte status |
| SENDTEST | `0012` | Read/Write — logged, not otherwise used |
| TESTACK | `0013` | Read/Write — client writes `0x01` here to acknowledge |
| Device Info | `0031` | Read — static, for protocol completeness |

### 91-byte payload structure

| Offset | Size | Contents |
|---|---|---|
| 0–3 | 4 | Start signature `01 02 03 05` |
| 4–75 | 72 | Up to 12 entries × 6 bytes each: `[param_id][decimals][float32_le value]`, zero-padded for unused slots |
| 76–83 | 8 | Timestamp: YY-MM-DD-HH-MM-SS-AMPM-Military |
| 84–86 | 3 | Metadata: num_valid_results, disk_type_index, sanitizer_type_index |
| 87–90 | 4 | End signature `07 0B 0D 11` |

### Connection lifecycle

1. Device advertises the service UUID continuously.
2. Client connects, subscribes to notifications on TESTAVAIL.
3. Emulator sets TESTAVAIL to `0x03` (testing in progress) — **not**
   notified, since the real coordinator triggers a read on *any*
   notification regardless of the byte's value, and notifying here
   would make it try to read before the payload exists.
4. After a few seconds, the emulator builds the TTEST payload and sets
   TESTAVAIL to `0x04` (test complete) — **this one is notified.**
5. Client reads TTEST, parses it, writes `0x01` to TESTACK.
6. Emulator logs the ACK and resets TESTAVAIL back to `0x02` (ready).

### On timestamps

The 8 timestamp bytes matter structurally (fixed offset, fixed size),
but their *meaning* only matters if you're testing against the real HA
integration specifically — its coordinator uses timestamp equality as
its sole signal for "is this actually new data," and silently ignores a
result whose timestamp matches the previous one. If you're building
your own reader, the BLE notification itself is already the "new data"
signal — you don't need to parse or validate what's in those 8 bytes at
all, you just need to skip past them structurally to reach the metadata
and end signature that follow.

---

## Known ESPHome API gotchas hit while building this

Worth knowing if you update ESPHome and something stops compiling:

- **`Select.state` was removed** in recent ESPHome versions in favor of
  `current_option()`. If you see `has no member named 'state'` on a
  select, that's why.
- **`current_option()` returns `StringRef`**, not `const char*`, as of
  ESPHome 2026.1.0. Assigning it to a `std::string` works fine
  (implicit conversion), but passing it directly through a variadic
  `%s`-style logging call needs an explicit `.c_str()` first, or you'll
  get a format-mismatch warning and garbled log output.

---

## Verification performed while building this

Before anything was flashed, the byte-building logic was extracted into
a standalone C++ test harness, compiled independently, and the exact
generated payloads were fed through the real, unmodified
`SpinTouchData.update_from_bytes()` parser from the actual integration
repo — confirmed correct for both a Disk 303 / Chlorine case and a Disk
204 / Bromine / high-range-calcium case, including the calculated
sensors (Combined Chlorine, FC/CYA Ratio). The randomization logic was
also run 200,000 times in isolation to confirm every value stays within
range and all disk/sanitizer combinations appear with even distribution.

---

## Disclaimer

Not affiliated with or endorsed by LaMotte. Built against the publicly
documented, reverse-engineered protocol in
[joyfulhouse/lamotte-spintouch](https://github.com/joyfulhouse/lamotte-spintouch)
for interoperability testing purposes.
