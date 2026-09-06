# Flashing the SpinTouch Emulator

Step-by-step instructions for getting `spintouch-emulator.yaml` from this
repo running on a physical ESP32-S3 board, using ESPHome. No prior ESPHome
experience assumed.

These steps use the **ESPHome Dashboard** running as a Home Assistant
add-on — the most common, most fully browser-based way to do this, and
the one this project was actually built and tested with (works entirely
from a Chromebook, no separate software install needed). If you don't
run Home Assistant, see [No Home Assistant?](#no-home-assistant) at the
end.

---

## What you need

- A Home Assistant instance with the **ESPHome Device Builder** add-on
  installed (Settings → Add-ons → Add-on Store → search "ESPHome")
- An ESP32-S3 board and a USB-C cable
- The 16×2 I2C character LCD, wired per the main [README](README.md)'s
  hardware section
- `spintouch-emulator.yaml` from this repo

---

## Step 1 — Copy the config file into place

Get `spintouch-emulator.yaml` into your Home Assistant `/config/esphome/`
folder. The easiest ways to do this:

- Open the ESPHome Dashboard, click the **⋮** (overflow) menu → **Import
  from File**, and select `spintouch-emulator.yaml` directly, **or**
- Use the Studio Code Server add-on, the Samba share, or the File Editor
  add-on to drop the file straight into `/config/esphome/`.

Either way, once it's there, you should see **"spintouch-emulator"** as
a card on the ESPHome Dashboard's main page.

---

## Step 2 — Add your Wi-Fi credentials

This config expects `!secret wifi_ssid` and `!secret wifi_password` —
it never has your actual Wi-Fi details written into it directly.

1. In the ESPHome Dashboard, click **Secrets** (top right).
2. Add:
   ```yaml
   wifi_ssid: "your-network-name"
   wifi_password: "your-network-password"
   ```
3. Save.

---

## Step 3 — First flash (this one needs the USB cable)

Every *later* update can happen wirelessly — this first one can't, since
the device isn't on your Wi-Fi network yet.

1. Plug the ESP32-S3 into your computer via USB-C.
2. On the `spintouch-emulator` card in the Dashboard, click **Install**.
3. Choose **Plug into this computer**.
4. Your browser will ask you to pick a device — this is Chrome's native
   WebSerial permission popup, not something ESPHome draws itself. If
   you're unsure which entry is your board: unplug it, open the picker,
   note what's listed, then plug it back in and reopen the picker —
   whatever's new is unambiguously your device.
5. **If nothing shows up in that list at all:** this board uses native
   USB (no separate USB-to-serial chip), which can be fussy about
   showing up in normal run mode. Hold the **BOOT** button, plug in the
   USB-C cable while still holding it, then release — this forces the
   chip into bootloader mode, which your browser should then detect.
6. Once selected, compiling and flashing happens automatically — this
   takes a few minutes the first time. Watch the log panel; a
   successful run ends with something like `Successfully compiled
   program` followed by the device rebooting.

---

## Step 4 — Confirm it's working

- The LCD should light up within a few seconds of boot, showing a
  scrolling ticker of chemical values on the top row and a status line
  (e.g. `D303 Chlorine`) on the bottom row.
- Back in Home Assistant, the device should also appear under
  **Settings → Devices & Services → ESPHome** as its own device, with
  entities for Disk Series, Sanitizer, the 12 chemical numbers, and a
  Run Test button.
- If you've also installed the real
  [LaMotte WaterLink Spin Touch](https://github.com/joyfulhouse/lamotte-spintouch)
  integration, it should discover the emulator via Bluetooth
  automatically — see that integration's own docs for adding it.

---

## Future updates

Once it's on your Wi-Fi, you don't need the USB cable again. Edit the
YAML, click **Install** on the Dashboard card, and choose the wireless
option instead of "Plug into this computer" — ESPHome pushes the update
over the network.

---

## Troubleshooting

| Symptom | Likely cause |
|---|---|
| Build fails with a compile error | Check the exact error against the **Known ESPHome API gotchas** section in the main README — a couple of real ones were hit and documented while building this |
| Screen stays blank | Try I2C address `0x3F` instead of `0x27` (both are common defaults for these backpacks) |
| Device doesn't show up in Home Assistant at all | Confirm it's actually on your Wi-Fi first (check the ESPHome Dashboard - it should show as online); Bluetooth discovery is separate from Wi-Fi and doesn't require the ESPHome-native HA integration to be added |
| Sensors show "unavailable" in the real integration | Expected for whichever chemical isn't part of the *current* disk/sanitizer combination - see the Disk/Sanitizer table in the main README |

---

## No Home Assistant?

ESPHome also has a standalone browser tool at
[web.esphome.io](https://web.esphome.io) that flashes over USB without
needing Home Assistant or any add-on at all — useful if you just want to
run the emulator on its own network, controlled via its own web
interface rather than through Home Assistant. The Wi-Fi/secrets and
first-flash-needs-USB concepts above are the same either way; consult
[ESPHome's own getting-started guide](https://esphome.io/guides/getting_started_command_line.html)
for that tool's exact current steps, since its interface isn't identical
to the Dashboard's.
