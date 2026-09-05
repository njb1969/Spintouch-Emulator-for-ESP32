// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
alignas(logger::Logger) static unsigned char logger__logger_logger_id__pstorage[sizeof(logger::Logger)];
static logger::Logger *const logger_logger_id = reinterpret_cast<logger::Logger *>(logger__logger_logger_id__pstorage);
#ifndef __PICOLIBC__
using std::isnan;
#endif
using std::min;
using std::max;
#include <new>
using namespace time;
using namespace display;
using namespace select;
using namespace number;
using namespace button;
alignas(wifi::WiFiComponent) static unsigned char wifi__wifi_wificomponent_id__pstorage[sizeof(wifi::WiFiComponent)];
static wifi::WiFiComponent *const wifi_wificomponent_id = reinterpret_cast<wifi::WiFiComponent *>(wifi__wifi_wificomponent_id__pstorage);
alignas(mdns::MDNSComponent) static unsigned char mdns__mdns_mdnscomponent_id__pstorage[sizeof(mdns::MDNSComponent)];
static mdns::MDNSComponent *const mdns_mdnscomponent_id = reinterpret_cast<mdns::MDNSComponent *>(mdns__mdns_mdnscomponent_id__pstorage);
alignas(network::NetworkComponent) static unsigned char network__network_networkcomponent_id__pstorage[sizeof(network::NetworkComponent)];
static network::NetworkComponent *const network_networkcomponent_id = reinterpret_cast<network::NetworkComponent *>(network__network_networkcomponent_id__pstorage);
alignas(esphome::ESPHomeOTAComponent) static unsigned char esphome__esphome_esphomeotacomponent_id__pstorage[sizeof(esphome::ESPHomeOTAComponent)];
static esphome::ESPHomeOTAComponent *const esphome_esphomeotacomponent_id = reinterpret_cast<esphome::ESPHomeOTAComponent *>(esphome__esphome_esphomeotacomponent_id__pstorage);
alignas(preferences::IntervalSyncer) static unsigned char preferences__preferences_intervalsyncer_id__pstorage[sizeof(preferences::IntervalSyncer)];
static preferences::IntervalSyncer *const preferences_intervalsyncer_id = reinterpret_cast<preferences::IntervalSyncer *>(preferences__preferences_intervalsyncer_id__pstorage);
alignas(safe_mode::SafeModeComponent) static unsigned char safe_mode__safe_mode_safemodecomponent_id__pstorage[sizeof(safe_mode::SafeModeComponent)];
static safe_mode::SafeModeComponent *const safe_mode_safemodecomponent_id = reinterpret_cast<safe_mode::SafeModeComponent *>(safe_mode__safe_mode_safemodecomponent_id__pstorage);
alignas(api::APIServer) static unsigned char api__api_apiserver_id__pstorage[sizeof(api::APIServer)];
static api::APIServer *const api_apiserver_id = reinterpret_cast<api::APIServer *>(api__api_apiserver_id__pstorage);
using namespace api;
alignas(StartupTrigger) static unsigned char esphome__startuptrigger_id__pstorage[sizeof(StartupTrigger)];
static StartupTrigger *const startuptrigger_id = reinterpret_cast<StartupTrigger *>(esphome__startuptrigger_id__pstorage);
alignas(Automation<>) static unsigned char esphome__automation_id__pstorage[sizeof(Automation<>)];
static Automation<> *const automation_id = reinterpret_cast<Automation<> *>(esphome__automation_id__pstorage);
using namespace i2c;
alignas(i2c::IDFI2CBus) static unsigned char i2c__i2c_idfi2cbus_id__pstorage[sizeof(i2c::IDFI2CBus)];
static i2c::IDFI2CBus *const i2c_idfi2cbus_id = reinterpret_cast<i2c::IDFI2CBus *>(i2c__i2c_idfi2cbus_id__pstorage);
alignas(homeassistant::HomeassistantTime) static unsigned char homeassistant__ha_time__pstorage[sizeof(homeassistant::HomeassistantTime)];
static homeassistant::HomeassistantTime *const ha_time = reinterpret_cast<homeassistant::HomeassistantTime *>(homeassistant__ha_time__pstorage);
alignas(lcd_pcf8574::PCF8574LCDDisplay) static unsigned char lcd_pcf8574__spintouch_lcd__pstorage[sizeof(lcd_pcf8574::PCF8574LCDDisplay)];
static lcd_pcf8574::PCF8574LCDDisplay *const spintouch_lcd = reinterpret_cast<lcd_pcf8574::PCF8574LCDDisplay *>(lcd_pcf8574__spintouch_lcd__pstorage);
alignas(template_::TemplateSelect<false, true, false, 2>) static unsigned char template__disk_select__pstorage[sizeof(template_::TemplateSelect<false, true, false, 2>)];
static template_::TemplateSelect<false, true, false, 2> *const disk_select = reinterpret_cast<template_::TemplateSelect<false, true, false, 2> *>(template__disk_select__pstorage);
alignas(template_::TemplateSelect<false, true, false, 0>) static unsigned char template__sanitizer_select__pstorage[sizeof(template_::TemplateSelect<false, true, false, 0>)];
static template_::TemplateSelect<false, true, false, 0> *const sanitizer_select = reinterpret_cast<template_::TemplateSelect<false, true, false, 0> *>(template__sanitizer_select__pstorage);
alignas(template_::TemplateNumber) static unsigned char template__n_fc__pstorage[sizeof(template_::TemplateNumber)];
static template_::TemplateNumber *const n_fc = reinterpret_cast<template_::TemplateNumber *>(template__n_fc__pstorage);
alignas(template_::TemplateNumber) static unsigned char template__n_tc__pstorage[sizeof(template_::TemplateNumber)];
static template_::TemplateNumber *const n_tc = reinterpret_cast<template_::TemplateNumber *>(template__n_tc__pstorage);
alignas(template_::TemplateNumber) static unsigned char template__n_br__pstorage[sizeof(template_::TemplateNumber)];
static template_::TemplateNumber *const n_br = reinterpret_cast<template_::TemplateNumber *>(template__n_br__pstorage);
alignas(template_::TemplateNumber) static unsigned char template__n_ph__pstorage[sizeof(template_::TemplateNumber)];
static template_::TemplateNumber *const n_ph = reinterpret_cast<template_::TemplateNumber *>(template__n_ph__pstorage);
alignas(template_::TemplateNumber) static unsigned char template__n_alk__pstorage[sizeof(template_::TemplateNumber)];
static template_::TemplateNumber *const n_alk = reinterpret_cast<template_::TemplateNumber *>(template__n_alk__pstorage);
alignas(template_::TemplateNumber) static unsigned char template__n_ca__pstorage[sizeof(template_::TemplateNumber)];
static template_::TemplateNumber *const n_ca = reinterpret_cast<template_::TemplateNumber *>(template__n_ca__pstorage);
alignas(template_::TemplateNumber) static unsigned char template__n_cya__pstorage[sizeof(template_::TemplateNumber)];
static template_::TemplateNumber *const n_cya = reinterpret_cast<template_::TemplateNumber *>(template__n_cya__pstorage);
alignas(template_::TemplateNumber) static unsigned char template__n_cu__pstorage[sizeof(template_::TemplateNumber)];
static template_::TemplateNumber *const n_cu = reinterpret_cast<template_::TemplateNumber *>(template__n_cu__pstorage);
alignas(template_::TemplateNumber) static unsigned char template__n_fe__pstorage[sizeof(template_::TemplateNumber)];
static template_::TemplateNumber *const n_fe = reinterpret_cast<template_::TemplateNumber *>(template__n_fe__pstorage);
alignas(template_::TemplateNumber) static unsigned char template__n_bor__pstorage[sizeof(template_::TemplateNumber)];
static template_::TemplateNumber *const n_bor = reinterpret_cast<template_::TemplateNumber *>(template__n_bor__pstorage);
alignas(template_::TemplateNumber) static unsigned char template__n_phos__pstorage[sizeof(template_::TemplateNumber)];
static template_::TemplateNumber *const n_phos = reinterpret_cast<template_::TemplateNumber *>(template__n_phos__pstorage);
alignas(template_::TemplateNumber) static unsigned char template__n_salt__pstorage[sizeof(template_::TemplateNumber)];
static template_::TemplateNumber *const n_salt = reinterpret_cast<template_::TemplateNumber *>(template__n_salt__pstorage);
alignas(template_::TemplateButton) static unsigned char template__template__templatebutton_id__pstorage[sizeof(template_::TemplateButton)];
static template_::TemplateButton *const template__templatebutton_id = reinterpret_cast<template_::TemplateButton *>(template__template__templatebutton_id__pstorage);
alignas(Automation<>) static unsigned char esphome__automation_id_2__pstorage[sizeof(Automation<>)];
static Automation<> *const automation_id_2 = reinterpret_cast<Automation<> *>(esphome__automation_id_2__pstorage);
alignas(script::SingleScript<>) static unsigned char script__run_test_script__pstorage[sizeof(script::SingleScript<>)];
static script::SingleScript<> *const run_test_script = reinterpret_cast<script::SingleScript<> *>(script__run_test_script__pstorage);
alignas(Automation<>) static unsigned char esphome__automation_id_3__pstorage[sizeof(Automation<>)];
static Automation<> *const automation_id_3 = reinterpret_cast<Automation<> *>(esphome__automation_id_3__pstorage);
alignas(StatelessLambdaAction<>) static unsigned char esphome__lambdaaction_id__pstorage[sizeof(StatelessLambdaAction<>)];
static StatelessLambdaAction<> *const lambdaaction_id = reinterpret_cast<StatelessLambdaAction<> *>(esphome__lambdaaction_id__pstorage);
alignas(StatelessLambdaAction<>) static unsigned char esphome__lambdaaction_id_2__pstorage[sizeof(StatelessLambdaAction<>)];
static StatelessLambdaAction<> *const lambdaaction_id_2 = reinterpret_cast<StatelessLambdaAction<> *>(esphome__lambdaaction_id_2__pstorage);
alignas(interval::IntervalTrigger) static unsigned char interval__interval_intervaltrigger_id__pstorage[sizeof(interval::IntervalTrigger)];
static interval::IntervalTrigger *const interval_intervaltrigger_id = reinterpret_cast<interval::IntervalTrigger *>(interval__interval_intervaltrigger_id__pstorage);
alignas(Automation<>) static unsigned char esphome__automation_id_4__pstorage[sizeof(Automation<>)];
static Automation<> *const automation_id_4 = reinterpret_cast<Automation<> *>(esphome__automation_id_4__pstorage);
alignas(esp32_ble_server::BLEServer) static unsigned char esp32_ble_server__ble_server__pstorage[sizeof(esp32_ble_server::BLEServer)];
static esp32_ble_server::BLEServer *const ble_server = reinterpret_cast<esp32_ble_server::BLEServer *>(esp32_ble_server__ble_server__pstorage);
alignas(esp32_ble::ESP32BLE) static unsigned char esp32_ble__esp32_ble_esp32ble_id__pstorage[sizeof(esp32_ble::ESP32BLE)];
static esp32_ble::ESP32BLE *const esp32_ble_esp32ble_id = reinterpret_cast<esp32_ble::ESP32BLE *>(esp32_ble__esp32_ble_esp32ble_id__pstorage);
alignas(script::ScriptExecuteAction<script::Script<>>) static unsigned char script__script_scriptexecuteaction_id__pstorage[sizeof(script::ScriptExecuteAction<script::Script<>>)];
static script::ScriptExecuteAction<script::Script<>> *const script_scriptexecuteaction_id = reinterpret_cast<script::ScriptExecuteAction<script::Script<>> *>(script__script_scriptexecuteaction_id__pstorage);
alignas(script::ScriptExecuteAction<script::Script<>>) static unsigned char script__script_scriptexecuteaction_id_2__pstorage[sizeof(script::ScriptExecuteAction<script::Script<>>)];
static script::ScriptExecuteAction<script::Script<>> *const script_scriptexecuteaction_id_2 = reinterpret_cast<script::ScriptExecuteAction<script::Script<>> *>(script__script_scriptexecuteaction_id_2__pstorage);
static esp32_ble_server::BLEService *esp32_ble_server_bleservice_id;
static esp32_ble_server::BLECharacteristic *ttest_char;
static esp32_ble_server::BLECharacteristic *testavail_char;
alignas(esp32_ble_server::BLEDescriptor) static unsigned char esp32_ble_server__esp32_ble_server_bledescriptor_id__pstorage[sizeof(esp32_ble_server::BLEDescriptor)];
static esp32_ble_server::BLEDescriptor *const esp32_ble_server_bledescriptor_id = reinterpret_cast<esp32_ble_server::BLEDescriptor *>(esp32_ble_server__esp32_ble_server_bledescriptor_id__pstorage);
static esp32_ble_server::BLECharacteristic *sendtest_char;
alignas(Automation<std::vector<uint8_t>, uint16_t>) static unsigned char esphome__automation_id_7__pstorage[sizeof(Automation<std::vector<uint8_t>, uint16_t>)];
static Automation<std::vector<uint8_t>, uint16_t> *const automation_id_7 = reinterpret_cast<Automation<std::vector<uint8_t>, uint16_t> *>(esphome__automation_id_7__pstorage);
alignas(StatelessLambdaAction<std::vector<uint8_t>, uint16_t>) static unsigned char esphome__lambdaaction_id_5__pstorage[sizeof(StatelessLambdaAction<std::vector<uint8_t>, uint16_t>)];
static StatelessLambdaAction<std::vector<uint8_t>, uint16_t> *const lambdaaction_id_5 = reinterpret_cast<StatelessLambdaAction<std::vector<uint8_t>, uint16_t> *>(esphome__lambdaaction_id_5__pstorage);
static esp32_ble_server::BLECharacteristic *testack_char;
alignas(Automation<std::vector<uint8_t>, uint16_t>) static unsigned char esphome__automation_id_8__pstorage[sizeof(Automation<std::vector<uint8_t>, uint16_t>)];
static Automation<std::vector<uint8_t>, uint16_t> *const automation_id_8 = reinterpret_cast<Automation<std::vector<uint8_t>, uint16_t> *>(esphome__automation_id_8__pstorage);
alignas(StatelessLambdaAction<std::vector<uint8_t>, uint16_t>) static unsigned char esphome__lambdaaction_id_6__pstorage[sizeof(StatelessLambdaAction<std::vector<uint8_t>, uint16_t>)];
static StatelessLambdaAction<std::vector<uint8_t>, uint16_t> *const lambdaaction_id_6 = reinterpret_cast<StatelessLambdaAction<std::vector<uint8_t>, uint16_t> *>(esphome__lambdaaction_id_6__pstorage);
alignas(esp32_ble_server::esp32_ble_server_automations::BLECharacteristicSetValueAction<std::vector<uint8_t>, uint16_t>) static unsigned char esp32_ble_server__esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_7__pstorage[sizeof(esp32_ble_server::esp32_ble_server_automations::BLECharacteristicSetValueAction<std::vector<uint8_t>, uint16_t>)];
static esp32_ble_server::esp32_ble_server_automations::BLECharacteristicSetValueAction<std::vector<uint8_t>, uint16_t> *const esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_7 = reinterpret_cast<esp32_ble_server::esp32_ble_server_automations::BLECharacteristicSetValueAction<std::vector<uint8_t>, uint16_t> *>(esp32_ble_server__esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_7__pstorage);
static esp32_ble_server::BLECharacteristic *device_info_char;
static esp32_ble_server::BLEService *esp32_ble_server_bleservice_id_2;
static esp32_ble_server::BLECharacteristic *esp32_ble_server_blecharacteristic_id;
static esp32_ble_server::BLECharacteristic *esp32_ble_server_blecharacteristic_id_2;
static esp32_ble_server::BLECharacteristic *esp32_ble_server_blecharacteristic_id_3;
alignas(Automation<uint16_t>) static unsigned char esphome__automation_id_5__pstorage[sizeof(Automation<uint16_t>)];
static Automation<uint16_t> *const automation_id_5 = reinterpret_cast<Automation<uint16_t> *>(esphome__automation_id_5__pstorage);
alignas(esp32_ble_server::esp32_ble_server_automations::BLECharacteristicSetValueAction<>) static unsigned char esp32_ble_server__esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id__pstorage[sizeof(esp32_ble_server::esp32_ble_server_automations::BLECharacteristicSetValueAction<>)];
static esp32_ble_server::esp32_ble_server_automations::BLECharacteristicSetValueAction<> *const esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id = reinterpret_cast<esp32_ble_server::esp32_ble_server_automations::BLECharacteristicSetValueAction<> *>(esp32_ble_server__esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id__pstorage);
alignas(DelayAction<>) static unsigned char esphome__delayaction_id__pstorage[sizeof(DelayAction<>)];
static DelayAction<> *const delayaction_id = reinterpret_cast<DelayAction<> *>(esphome__delayaction_id__pstorage);
alignas(esp32_ble_server::esp32_ble_server_automations::BLECharacteristicSetValueAction<>) static unsigned char esp32_ble_server__esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_2__pstorage[sizeof(esp32_ble_server::esp32_ble_server_automations::BLECharacteristicSetValueAction<>)];
static esp32_ble_server::esp32_ble_server_automations::BLECharacteristicSetValueAction<> *const esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_2 = reinterpret_cast<esp32_ble_server::esp32_ble_server_automations::BLECharacteristicSetValueAction<> *>(esp32_ble_server__esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_2__pstorage);
alignas(esp32_ble_server::esp32_ble_server_automations::BLECharacteristicSetValueAction<>) static unsigned char esp32_ble_server__esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_3__pstorage[sizeof(esp32_ble_server::esp32_ble_server_automations::BLECharacteristicSetValueAction<>)];
static esp32_ble_server::esp32_ble_server_automations::BLECharacteristicSetValueAction<> *const esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_3 = reinterpret_cast<esp32_ble_server::esp32_ble_server_automations::BLECharacteristicSetValueAction<> *>(esp32_ble_server__esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_3__pstorage);
alignas(esp32_ble_server::esp32_ble_server_automations::BLECharacteristicNotifyAction<>) static unsigned char esp32_ble_server__esp32_ble_server_esp32_ble_server_automations_blecharacteristicnotifyaction_id__pstorage[sizeof(esp32_ble_server::esp32_ble_server_automations::BLECharacteristicNotifyAction<>)];
static esp32_ble_server::esp32_ble_server_automations::BLECharacteristicNotifyAction<> *const esp32_ble_server_esp32_ble_server_automations_blecharacteristicnotifyaction_id = reinterpret_cast<esp32_ble_server::esp32_ble_server_automations::BLECharacteristicNotifyAction<> *>(esp32_ble_server__esp32_ble_server_esp32_ble_server_automations_blecharacteristicnotifyaction_id__pstorage);
alignas(globals::GlobalsComponent<int>) static unsigned char globals__scroll_pos__pstorage[sizeof(globals::GlobalsComponent<int>)];
static globals::GlobalsComponent<int> *const scroll_pos = reinterpret_cast<globals::GlobalsComponent<int> *>(globals__scroll_pos__pstorage);
alignas(globals::GlobalsComponent<bool>) static unsigned char globals__client_connected__pstorage[sizeof(globals::GlobalsComponent<bool>)];
static globals::GlobalsComponent<bool> *const client_connected = reinterpret_cast<globals::GlobalsComponent<bool> *>(globals__client_connected__pstorage);
alignas(StatelessLambdaCondition<>) static unsigned char esphome__lambdacondition_id__pstorage[sizeof(StatelessLambdaCondition<>)];
static StatelessLambdaCondition<> *const lambdacondition_id = reinterpret_cast<StatelessLambdaCondition<> *>(esphome__lambdacondition_id__pstorage);
alignas(IfAction<false>) static unsigned char esphome__ifaction_id__pstorage[sizeof(IfAction<false>)];
static IfAction<false> *const ifaction_id = reinterpret_cast<IfAction<false> *>(esphome__ifaction_id__pstorage);
alignas(script::ScriptExecuteAction<script::Script<>>) static unsigned char script__script_scriptexecuteaction_id_3__pstorage[sizeof(script::ScriptExecuteAction<script::Script<>>)];
static script::ScriptExecuteAction<script::Script<>> *const script_scriptexecuteaction_id_3 = reinterpret_cast<script::ScriptExecuteAction<script::Script<>> *>(script__script_scriptexecuteaction_id_3__pstorage);
alignas(StatelessLambdaAction<uint16_t>) static unsigned char esphome__lambdaaction_id_3__pstorage[sizeof(StatelessLambdaAction<uint16_t>)];
static StatelessLambdaAction<uint16_t> *const lambdaaction_id_3 = reinterpret_cast<StatelessLambdaAction<uint16_t> *>(esphome__lambdaaction_id_3__pstorage);
alignas(DelayAction<uint16_t>) static unsigned char esphome__delayaction_id_2__pstorage[sizeof(DelayAction<uint16_t>)];
static DelayAction<uint16_t> *const delayaction_id_2 = reinterpret_cast<DelayAction<uint16_t> *>(esphome__delayaction_id_2__pstorage);
alignas(script::ScriptExecuteAction<script::Script<>, uint16_t>) static unsigned char script__script_scriptexecuteaction_id_4__pstorage[sizeof(script::ScriptExecuteAction<script::Script<>, uint16_t>)];
static script::ScriptExecuteAction<script::Script<>, uint16_t> *const script_scriptexecuteaction_id_4 = reinterpret_cast<script::ScriptExecuteAction<script::Script<>, uint16_t> *>(script__script_scriptexecuteaction_id_4__pstorage);
alignas(Automation<uint16_t>) static unsigned char esphome__automation_id_6__pstorage[sizeof(Automation<uint16_t>)];
static Automation<uint16_t> *const automation_id_6 = reinterpret_cast<Automation<uint16_t> *>(esphome__automation_id_6__pstorage);
alignas(StatelessLambdaAction<uint16_t>) static unsigned char esphome__lambdaaction_id_4__pstorage[sizeof(StatelessLambdaAction<uint16_t>)];
static StatelessLambdaAction<uint16_t> *const lambdaaction_id_4 = reinterpret_cast<StatelessLambdaAction<uint16_t> *>(esphome__lambdaaction_id_4__pstorage);
static constexpr size_t ESPHOME_LOOPING_COMPONENT_COUNT = \
  (1 * HasLoopOverride<logger::Logger>::value) + \
  (1 * HasLoopOverride<wifi::WiFiComponent>::value) + \
  (1 * HasLoopOverride<mdns::MDNSComponent>::value) + \
  (1 * HasLoopOverride<network::NetworkComponent>::value) + \
  (1 * HasLoopOverride<esphome::ESPHomeOTAComponent>::value) + \
  (1 * HasLoopOverride<preferences::IntervalSyncer>::value) + \
  (1 * HasLoopOverride<safe_mode::SafeModeComponent>::value) + \
  (1 * HasLoopOverride<api::APIServer>::value) + \
  (1 * HasLoopOverride<StartupTrigger>::value) + \
  (1 * HasLoopOverride<i2c::IDFI2CBus>::value) + \
  (1 * HasLoopOverride<homeassistant::HomeassistantTime>::value) + \
  (1 * HasLoopOverride<lcd_pcf8574::PCF8574LCDDisplay>::value) + \
  (1 * HasLoopOverride<template_::TemplateSelect<false, true, false, 2>>::value) + \
  (1 * HasLoopOverride<template_::TemplateSelect<false, true, false, 0>>::value) + \
  (12 * HasLoopOverride<template_::TemplateNumber>::value) + \
  (1 * HasLoopOverride<interval::IntervalTrigger>::value) + \
  (1 * HasLoopOverride<esp32_ble_server::BLEServer>::value) + \
  (1 * HasLoopOverride<esp32_ble::ESP32BLE>::value) + \
  (1 * HasLoopOverride<globals::GlobalsComponent<int>>::value) + \
  (1 * HasLoopOverride<globals::GlobalsComponent<bool>>::value);
namespace esphome {
static const char COMP_SRC_TABLE_STR_0[] PROGMEM = "logger";
static const char COMP_SRC_TABLE_STR_1[] PROGMEM = "wifi";
static const char COMP_SRC_TABLE_STR_2[] PROGMEM = "mdns";
static const char COMP_SRC_TABLE_STR_3[] PROGMEM = "network";
static const char COMP_SRC_TABLE_STR_4[] PROGMEM = "esphome.ota";
static const char COMP_SRC_TABLE_STR_5[] PROGMEM = "preferences";
static const char COMP_SRC_TABLE_STR_6[] PROGMEM = "safe_mode";
static const char COMP_SRC_TABLE_STR_7[] PROGMEM = "api";
static const char COMP_SRC_TABLE_STR_8[] PROGMEM = "esphome.coroutine";
static const char COMP_SRC_TABLE_STR_9[] PROGMEM = "i2c";
static const char COMP_SRC_TABLE_STR_10[] PROGMEM = "homeassistant.time";
static const char COMP_SRC_TABLE_STR_11[] PROGMEM = "display";
static const char COMP_SRC_TABLE_STR_12[] PROGMEM = "template.select";
static const char COMP_SRC_TABLE_STR_13[] PROGMEM = "template.number";
static const char COMP_SRC_TABLE_STR_14[] PROGMEM = "interval";
static const char COMP_SRC_TABLE_STR_15[] PROGMEM = "esp32_ble_server";
static const char COMP_SRC_TABLE_STR_16[] PROGMEM = "esp32_ble";
static const char COMP_SRC_TABLE_STR_17[] PROGMEM = "globals";
static const char *const COMP_SRC_TABLE[] PROGMEM = {COMP_SRC_TABLE_STR_0, COMP_SRC_TABLE_STR_1, COMP_SRC_TABLE_STR_2, COMP_SRC_TABLE_STR_3, COMP_SRC_TABLE_STR_4, COMP_SRC_TABLE_STR_5, COMP_SRC_TABLE_STR_6, COMP_SRC_TABLE_STR_7, COMP_SRC_TABLE_STR_8, COMP_SRC_TABLE_STR_9, COMP_SRC_TABLE_STR_10, COMP_SRC_TABLE_STR_11, COMP_SRC_TABLE_STR_12, COMP_SRC_TABLE_STR_13, COMP_SRC_TABLE_STR_14, COMP_SRC_TABLE_STR_15, COMP_SRC_TABLE_STR_16, COMP_SRC_TABLE_STR_17};
const LogString *component_source_lookup(uint8_t index) {
  if (index == 0 || index > 18) return LOG_STR("<unknown>");
  return reinterpret_cast<const LogString *>(
    progmem_read_ptr(&COMP_SRC_TABLE[index - 1]));
}
}  // namespace esphome
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // logger:
  //   baud_rate: 115200
  //   deassert_rts_dtr: false
  //   hardware_uart: USB_SERIAL_JTAG
  //   id: logger_logger_id
  //   level: DEBUG
  //   logs: {}
  //   runtime_tag_levels: false
  //   task_log_buffer_size: 768
  //   tx_buffer_size: 512
  new(logger_logger_id) logger::Logger(115200);
  logger_logger_id->create_pthread_key();
  logger_logger_id->set_uart_selection(logger::UART_SELECTION_USB_SERIAL_JTAG);
  logger_logger_id->pre_setup();
  logger_logger_id->set_log_level(ESPHOME_LOG_LEVEL_DEBUG);
  // network:
  //   enable_ipv6: false
  //   id: network_networkcomponent_id
  //   min_ipv6_addr_count: 0
  // esphome:
  //   areas: []
  //   build_flags: []
  //   build_path: build/spintouch-emulator
  //   debug_scheduler: false
  //   devices: []
  //   environment_variables: {}
  //   friendly_name: SpinTouch Emulator
  //   includes: []
  //   includes_c: []
  //   libraries: []
  //   merge_warnings: true
  //   min_version: 2026.8.2
  //   name: spintouch-emulator
  //   name_add_mac_suffix: false
  //   on_boot:
  //     - automation_id: automation_id
  //       priority: 600.0
  //       then:
  //         - script.execute:
  //             id: run_test_script
  //           type_id: script_scriptexecuteaction_id
  //       trigger_id: startuptrigger_id
  //   platformio_options: {}
  new (&App) Application();
  App.pre_setup("spintouch-emulator", 18, "SpinTouch Emulator", 18);
  App.looping_components_.init(ESPHOME_LOOPING_COMPONENT_COUNT);
  // time:
  // display:
  // select:
  // number:
  // button:
  App.register_component_(logger_logger_id, 1);
  // wifi:
  //   domain: .local
  //   enable_btm: false
  //   enable_on_boot: true
  //   enable_rrm: false
  //   fast_connect:
  //     enabled: false
  //     storage: flash
  //   id: wifi_wificomponent_id
  //   min_auth_mode: WPA2
  //   networks:
  //     - id: wifi_wifiap_id
  //       password: !secret 'wifi_password'
  //       priority: 0
  //       ssid: !secret 'wifi_ssid'
  //   passive_scan: false
  //   post_connect_roaming: true
  //   power_save_mode: LIGHT
  //   reboot_timeout: 15min
  //   use_address: spintouch-emulator.local
  new(wifi_wificomponent_id) wifi::WiFiComponent();
  wifi_wificomponent_id->init_sta(1);
  {
  wifi::WiFiAP wifi_wifiap_id = wifi::WiFiAP();
  wifi_wifiap_id.set_ssid("Picchu");
  wifi_wifiap_id.set_password("d15c0b00b5");
  wifi_wifiap_id.set_priority(0);
  wifi_wificomponent_id->add_sta(wifi_wifiap_id);
  }
  wifi_wificomponent_id->set_reboot_timeout(900000);
  wifi_wificomponent_id->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent_id->set_min_auth_mode(wifi::WIFI_MIN_AUTH_MODE_WPA2);
  App.register_component_(wifi_wificomponent_id, 2);
  // mdns:
  //   disabled: false
  //   id: mdns_mdnscomponent_id
  //   services: []
  new(mdns_mdnscomponent_id) mdns::MDNSComponent();
  App.register_component_(mdns_mdnscomponent_id, 3);
  new(network_networkcomponent_id) network::NetworkComponent();
  App.register_component_(network_networkcomponent_id, 4);
  // ota:
  // ota.esphome:
  //   allow_partition_access: false
  //   id: esphome_esphomeotacomponent_id
  //   platform: esphome
  //   port: 3232
  //   version: 2
  new(esphome_esphomeotacomponent_id) esphome::ESPHomeOTAComponent();
  esphome_esphomeotacomponent_id->set_port(3232);
  App.register_component_(esphome_esphomeotacomponent_id, 5);
  // preferences:
  //   flash_write_interval: 60s
  //   id: preferences_intervalsyncer_id
  new(preferences_intervalsyncer_id) preferences::IntervalSyncer();
  preferences_intervalsyncer_id->set_write_interval(60000);
  App.register_component_(preferences_intervalsyncer_id, 6);
  // safe_mode:
  //   boot_is_good_after: 1min
  //   boot_is_good_on_shutdown: true
  //   disabled: false
  //   id: safe_mode_safemodecomponent_id
  //   num_attempts: 10
  //   reboot_timeout: 5min
  //   storage: flash
  new(safe_mode_safemodecomponent_id) safe_mode::SafeModeComponent();
  App.register_component_(safe_mode_safemodecomponent_id, 7);
  if (safe_mode_safemodecomponent_id->should_enter_safe_mode(10, 300000, 60000, true)) return;
  // api:
  //   batch_delay: 100ms
  //   custom_services: false
  //   homeassistant_services: false
  //   homeassistant_states: false
  //   id: api_apiserver_id
  //   listen_backlog: 4
  //   max_connections: 5
  //   max_send_queue: 8
  //   port: 6053
  //   reboot_timeout: 15min
  new(api_apiserver_id) api::APIServer();
  App.register_component_(api_apiserver_id, 8);
  api_apiserver_id->set_port(6053);
  api_apiserver_id->set_reboot_timeout(900000);
  api_apiserver_id->set_batch_delay(100);
  api_apiserver_id->set_listen_backlog(4);
  new(startuptrigger_id) StartupTrigger(600.0f);
  App.register_component_(startuptrigger_id, 9);
  new(automation_id) Automation<>(startuptrigger_id);
  // i2c:
  //   frequency: 50000.0
  //   id: i2c_idfi2cbus_id
  //   scan: true
  //   scl: 5
  //   scl_pullup_enabled: true
  //   sda: 4
  //   sda_pullup_enabled: true
  new(i2c_idfi2cbus_id) i2c::IDFI2CBus();
  App.register_component_(i2c_idfi2cbus_id, 10);
  i2c_idfi2cbus_id->set_sda_pin(4);
  i2c_idfi2cbus_id->set_sda_pullup_enabled(true);
  i2c_idfi2cbus_id->set_scl_pin(5);
  i2c_idfi2cbus_id->set_scl_pullup_enabled(true);
  i2c_idfi2cbus_id->set_frequency(50000);
  i2c_idfi2cbus_id->set_scan(true);
  // esp32:
  //   board: esp32-s3-devkitc-1
  //   cpu_frequency: 240MHZ
  //   flash_size: 4MB
  //   framework:
  //     advanced:
  //       adc_oneshot_in_iram: false
  //       compiler_optimization: SIZE
  //       disable_debug_stubs: true
  //       disable_dev_null_vfs: true
  //       disable_fatfs: true
  //       disable_libc_locks_in_iram: true
  //       disable_mbedtls_peer_cert: true
  //       disable_mbedtls_pkcs7: true
  //       disable_ocd_aware: true
  //       disable_regi2c_in_iram: true
  //       disable_usb_serial_jtag_secondary: true
  //       disable_vfs_support_dir: true
  //       disable_vfs_support_select: true
  //       disable_vfs_support_termios: true
  //       enable_full_printf: false
  //       enable_idf_experimental_features: false
  //       enable_lwip_assert: true
  //       enable_lwip_bridge_interface: false
  //       enable_lwip_check_thread_safety: true
  //       enable_lwip_mdns_queries: true
  //       enable_lwip_tcpip_core_locking: true
  //       enable_ota_downgrade_protection: false
  //       enable_ota_rollback: true
  //       execute_from_psram: false
  //       freertos_in_iram: false
  //       heap_in_iram: false
  //       ignore_efuse_custom_mac: false
  //       ignore_efuse_mac_crc: false
  //       include_builtin_idf_components: []
  //       loop_task_stack_size: 8192
  //       ringbuf_in_iram: false
  //       sram1_as_iram: false
  //       use_full_certificate_bundle: false
  //     components: []
  //     log_level: ERROR
  //     sdkconfig_options: {}
  //     type: esp-idf
  //     version: 5.5.5
  //   variant: ESP32S3
  //   watchdog_timeout: 5s
  // time.homeassistant:
  //   id: ha_time
  //   platform: homeassistant
  //   update_interval: 15min
  new(ha_time) homeassistant::HomeassistantTime();
  {
  time::ParsedTimezone tz{};
  tz.std_offset_seconds = -36000;
  tz.dst_offset_seconds = -39600;
  tz.dst_start.time_seconds = 7200;
  tz.dst_start.day = 0;
  tz.dst_start.type = time::DSTRuleType::MONTH_WEEK_DAY;
  tz.dst_start.month = 10;
  tz.dst_start.week = 1;
  tz.dst_start.day_of_week = 0;
  tz.dst_end.time_seconds = 10800;
  tz.dst_end.day = 0;
  tz.dst_end.type = time::DSTRuleType::MONTH_WEEK_DAY;
  tz.dst_end.month = 4;
  tz.dst_end.week = 1;
  tz.dst_end.day_of_week = 0;
  time::set_global_tz(tz);
  }
  ha_time->set_update_interval(900000);
  App.register_component_(ha_time, 11);
  // display.lcd_pcf8574:
  //   address: 0x27
  //   dimensions:
  //     - 16
  //     - 2
  //   i2c_id: i2c_idfi2cbus_id
  //   id: spintouch_lcd
  //   lambda: !lambda |-
  //      Row 0: scrolling ticker of every value that's actually part of the
  //      current disk/sanitizer selection - same inclusion logic as
  //      run_test_script, so what you see here matches what the next
  //      "Run Test" would actually broadcast.
  //     std::string disk = id(disk_select).current_option();
  //     std::string sanitizer = id(sanitizer_select).current_option();
  //     bool has_iron = (disk == "203" || disk == "303");
  //     bool use_borate = (disk == "303" || disk == "304");
  //   
  //     char numbuf[8];
  //     auto fmt = [&](float v, int decimals) -> std::string {
  //       snprintf(numbuf, sizeof(numbuf), "%.*f", decimals, v);
  //       return std::string(numbuf);
  //     };
  //   
  //     std::string ticker;
  //     if (sanitizer == "Bromine") {
  //       ticker += "Br " + fmt(id(n_br).state, 2) + "  ";
  //     } else {
  //       ticker += "FC " + fmt(id(n_fc).state, 2) + "  ";
  //       ticker += "TC " + fmt(id(n_tc).state, 2) + "  ";
  //     }
  //     ticker += "pH " + fmt(id(n_ph).state, 2) + "  ";
  //     ticker += "Alk " + fmt(id(n_alk).state, 1) + "  ";
  //     ticker += "Ca " + fmt(id(n_ca).state, 1) + "  ";
  //     ticker += "CYA " + fmt(id(n_cya).state, 1) + "  ";
  //     ticker += "Cu " + fmt(id(n_cu).state, 2) + "  ";
  //     if (has_iron) {
  //       ticker += "Fe " + fmt(id(n_fe).state, 2) + "  ";
  //     }
  //     if (use_borate) {
  //       ticker += "Bor " + fmt(id(n_bor).state, 1) + "  ";
  //     } else {
  //       ticker += "Phos " + fmt(id(n_phos).state, 0) + "  ";
  //     }
  //     ticker += "Salt " + fmt(id(n_salt).state, 0) + "  ";
  //   
  //     size_t core_len = ticker.size();
  //     if (core_len == 0) {
  //       return;
  //     }
  //   
  //      Duplicate so the 16-char window can read seamlessly past the end
  //      back to the start, instead of jumping/blanking on wraparound.
  //     std::string doubled = ticker + ticker;
  //   
  //     if (id(scroll_pos) >= (int) core_len) {
  //       id(scroll_pos) = 0;
  //     }
  //     std::string window = doubled.substr(id(scroll_pos), 16);
  //     it.print(0, 0, window.c_str());
  //   
  //      Row 1: static status line - which disk/sanitizer this all came from
  //     std::string status = "D" + disk + " " + sanitizer;
  //     status.resize(16, ' ');
  //     it.print(0, 1, status.c_str());
  //   
  //     id(scroll_pos) = id(scroll_pos) + 1;
  //   platform: lcd_pcf8574
  //   update_interval: 250ms
  new(spintouch_lcd) lcd_pcf8574::PCF8574LCDDisplay();
  spintouch_lcd->set_update_interval(250);
  App.register_component_(spintouch_lcd, 12);
  spintouch_lcd->set_dimensions(16, 2);
  spintouch_lcd->set_i2c_bus(i2c_idfi2cbus_id);
  spintouch_lcd->set_i2c_address(0x27);
  // select.template:
  //   disabled_by_default: false
  //   id: disk_select
  //   initial_option: '303'
  //   name: Disk Series
  //   optimistic: true
  //   options:
  //     - '203'
  //     - '204'
  //     - '303'
  //     - '304'
  //   platform: template
  //   update_interval: 60s
  new(disk_select) template_::TemplateSelect<false, true, false, 2>();
  disk_select->set_update_interval(4294967295UL);
  App.register_component_(disk_select, 13);
  disk_select->traits.set_options({"203", "204", "303", "304"});
  App.register_select(disk_select, "Disk Series", 988774318, 0);
  // select.template:
  //   disabled_by_default: false
  //   id: sanitizer_select
  //   initial_option: Chlorine
  //   name: Sanitizer
  //   optimistic: true
  //   options:
  //     - Chlorine
  //     - Bromine
  //     - Salt
  //   platform: template
  //   update_interval: 60s
  new(sanitizer_select) template_::TemplateSelect<false, true, false, 0>();
  sanitizer_select->set_update_interval(4294967295UL);
  App.register_component_(sanitizer_select, 13);
  sanitizer_select->traits.set_options({"Chlorine", "Bromine", "Salt"});
  App.register_select(sanitizer_select, "Sanitizer", 270362490, 0);
  // number.template:
  //   disabled_by_default: false
  //   id: n_fc
  //   initial_value: 0.0
  //   max_value: 15.0
  //   min_value: 0.0
  //   mode: AUTO
  //   name: Free Chlorine
  //   optimistic: true
  //   platform: template
  //   step: 0.01
  //   update_interval: 60s
  new(n_fc) template_::TemplateNumber();
  n_fc->set_update_interval(60000);
  App.register_component_(n_fc, 14);
  n_fc->traits.set_min_value(0.0f);
  n_fc->traits.set_max_value(15.0f);
  n_fc->traits.set_step(0.01f);
  n_fc->traits.set_mode(number::NUMBER_MODE_AUTO);
  App.register_number(n_fc, "Free Chlorine", 380938448, 0);
  n_fc->set_optimistic(true);
  n_fc->set_initial_value(0.0f);
  // number.template:
  //   disabled_by_default: false
  //   id: n_tc
  //   initial_value: 0.0
  //   max_value: 15.0
  //   min_value: 0.0
  //   mode: AUTO
  //   name: Total Chlorine
  //   optimistic: true
  //   platform: template
  //   step: 0.01
  //   update_interval: 60s
  new(n_tc) template_::TemplateNumber();
  n_tc->set_update_interval(60000);
  App.register_component_(n_tc, 14);
  n_tc->traits.set_min_value(0.0f);
  n_tc->traits.set_max_value(15.0f);
  n_tc->traits.set_step(0.01f);
  n_tc->traits.set_mode(number::NUMBER_MODE_AUTO);
  App.register_number(n_tc, "Total Chlorine", 3333677358UL, 0);
  n_tc->set_optimistic(true);
  n_tc->set_initial_value(0.0f);
  // number.template:
  //   disabled_by_default: false
  //   id: n_br
  //   initial_value: 0.0
  //   max_value: 33.0
  //   min_value: 0.0
  //   mode: AUTO
  //   name: Bromine
  //   optimistic: true
  //   platform: template
  //   step: 0.01
  //   update_interval: 60s
  new(n_br) template_::TemplateNumber();
  n_br->set_update_interval(60000);
  App.register_component_(n_br, 14);
  n_br->traits.set_min_value(0.0f);
  n_br->traits.set_max_value(33.0f);
  n_br->traits.set_step(0.01f);
  n_br->traits.set_mode(number::NUMBER_MODE_AUTO);
  App.register_number(n_br, "Bromine", 537034937, 0);
  n_br->set_optimistic(true);
  n_br->set_initial_value(0.0f);
  // number.template:
  //   disabled_by_default: false
  //   id: n_ph
  //   initial_value: 6.0
  //   max_value: 9.0
  //   min_value: 6.0
  //   mode: AUTO
  //   name: pH
  //   optimistic: true
  //   platform: template
  //   step: 0.01
  //   update_interval: 60s
  new(n_ph) template_::TemplateNumber();
  n_ph->set_update_interval(60000);
  App.register_component_(n_ph, 14);
  n_ph->traits.set_min_value(6.0f);
  n_ph->traits.set_max_value(9.0f);
  n_ph->traits.set_step(0.01f);
  n_ph->traits.set_mode(number::NUMBER_MODE_AUTO);
  App.register_number(n_ph, "pH", 1635194325, 0);
  n_ph->set_optimistic(true);
  n_ph->set_initial_value(6.0f);
  // number.template:
  //   disabled_by_default: false
  //   id: n_alk
  //   initial_value: 0.0
  //   max_value: 250.0
  //   min_value: 0.0
  //   mode: AUTO
  //   name: Total Alkalinity
  //   optimistic: true
  //   platform: template
  //   step: 1.0
  //   update_interval: 60s
  new(n_alk) template_::TemplateNumber();
  n_alk->set_update_interval(60000);
  App.register_component_(n_alk, 14);
  n_alk->traits.set_min_value(0.0f);
  n_alk->traits.set_max_value(250.0f);
  n_alk->traits.set_step(1.0f);
  n_alk->traits.set_mode(number::NUMBER_MODE_AUTO);
  App.register_number(n_alk, "Total Alkalinity", 35891304, 0);
  n_alk->set_optimistic(true);
  n_alk->set_initial_value(0.0f);
  // number.template:
  //   disabled_by_default: false
  //   id: n_ca
  //   initial_value: 0.0
  //   max_value: 1200.0
  //   min_value: 0.0
  //   mode: AUTO
  //   name: Calcium Hardness
  //   optimistic: true
  //   platform: template
  //   step: 1.0
  //   update_interval: 60s
  new(n_ca) template_::TemplateNumber();
  n_ca->set_update_interval(60000);
  App.register_component_(n_ca, 14);
  n_ca->traits.set_min_value(0.0f);
  n_ca->traits.set_max_value(1200.0f);
  n_ca->traits.set_step(1.0f);
  n_ca->traits.set_mode(number::NUMBER_MODE_AUTO);
  App.register_number(n_ca, "Calcium Hardness", 4077486110UL, 0);
  n_ca->set_optimistic(true);
  n_ca->set_initial_value(0.0f);
  // number.template:
  //   disabled_by_default: false
  //   id: n_cya
  //   initial_value: 0.0
  //   max_value: 300.0
  //   min_value: 0.0
  //   mode: AUTO
  //   name: Cyanuric Acid
  //   optimistic: true
  //   platform: template
  //   step: 1.0
  //   update_interval: 60s
  new(n_cya) template_::TemplateNumber();
  n_cya->set_update_interval(60000);
  App.register_component_(n_cya, 14);
  n_cya->traits.set_min_value(0.0f);
  n_cya->traits.set_max_value(300.0f);
  n_cya->traits.set_step(1.0f);
  n_cya->traits.set_mode(number::NUMBER_MODE_AUTO);
  App.register_number(n_cya, "Cyanuric Acid", 2854895687UL, 0);
  n_cya->set_optimistic(true);
  n_cya->set_initial_value(0.0f);
  // number.template:
  //   disabled_by_default: false
  //   id: n_cu
  //   initial_value: 0.0
  //   max_value: 5.0
  //   min_value: 0.0
  //   mode: AUTO
  //   name: Copper
  //   optimistic: true
  //   platform: template
  //   step: 0.01
  //   update_interval: 60s
  new(n_cu) template_::TemplateNumber();
  n_cu->set_update_interval(60000);
  App.register_component_(n_cu, 14);
  n_cu->traits.set_min_value(0.0f);
  n_cu->traits.set_max_value(5.0f);
  n_cu->traits.set_step(0.01f);
  n_cu->traits.set_mode(number::NUMBER_MODE_AUTO);
  App.register_number(n_cu, "Copper", 3053857622UL, 0);
  n_cu->set_optimistic(true);
  n_cu->set_initial_value(0.0f);
  // number.template:
  //   disabled_by_default: false
  //   id: n_fe
  //   initial_value: 0.0
  //   max_value: 5.0
  //   min_value: 0.0
  //   mode: AUTO
  //   name: Iron
  //   optimistic: true
  //   platform: template
  //   step: 0.01
  //   update_interval: 60s
  new(n_fe) template_::TemplateNumber();
  n_fe->set_update_interval(60000);
  App.register_component_(n_fe, 14);
  n_fe->traits.set_min_value(0.0f);
  n_fe->traits.set_max_value(5.0f);
  n_fe->traits.set_step(0.01f);
  n_fe->traits.set_mode(number::NUMBER_MODE_AUTO);
  App.register_number(n_fe, "Iron", 1859188355, 0);
  n_fe->set_optimistic(true);
  n_fe->set_initial_value(0.0f);
  // number.template:
  //   disabled_by_default: false
  //   id: n_bor
  //   initial_value: 0.0
  //   max_value: 100.0
  //   min_value: 0.0
  //   mode: AUTO
  //   name: Borate
  //   optimistic: true
  //   platform: template
  //   step: 0.1
  //   update_interval: 60s
  new(n_bor) template_::TemplateNumber();
  n_bor->set_update_interval(60000);
  App.register_component_(n_bor, 14);
  n_bor->traits.set_min_value(0.0f);
  n_bor->traits.set_max_value(100.0f);
  n_bor->traits.set_step(0.1f);
  n_bor->traits.set_mode(number::NUMBER_MODE_AUTO);
  App.register_number(n_bor, "Borate", 112829726, 0);
  n_bor->set_optimistic(true);
  n_bor->set_initial_value(0.0f);
  // number.template:
  //   disabled_by_default: false
  //   id: n_phos
  //   initial_value: 0.0
  //   max_value: 2500.0
  //   min_value: 0.0
  //   mode: AUTO
  //   name: Phosphate
  //   optimistic: true
  //   platform: template
  //   step: 1.0
  //   update_interval: 60s
  new(n_phos) template_::TemplateNumber();
  n_phos->set_update_interval(60000);
  App.register_component_(n_phos, 14);
  n_phos->traits.set_min_value(0.0f);
  n_phos->traits.set_max_value(2500.0f);
  n_phos->traits.set_step(1.0f);
  n_phos->traits.set_mode(number::NUMBER_MODE_AUTO);
  App.register_number(n_phos, "Phosphate", 386444417, 0);
  n_phos->set_optimistic(true);
  n_phos->set_initial_value(0.0f);
  // number.template:
  //   disabled_by_default: false
  //   id: n_salt
  //   initial_value: 0.0
  //   max_value: 10000.0
  //   min_value: 0.0
  //   mode: AUTO
  //   name: Salt
  //   optimistic: true
  //   platform: template
  //   step: 1.0
  //   update_interval: 60s
  new(n_salt) template_::TemplateNumber();
  n_salt->set_update_interval(60000);
  App.register_component_(n_salt, 14);
  n_salt->traits.set_min_value(0.0f);
  n_salt->traits.set_max_value(10000.0f);
  n_salt->traits.set_step(1.0f);
  n_salt->traits.set_mode(number::NUMBER_MODE_AUTO);
  App.register_number(n_salt, "Salt", 837392925, 0);
  n_salt->set_optimistic(true);
  n_salt->set_initial_value(0.0f);
  // button.template:
  //   disabled_by_default: false
  //   id: template__templatebutton_id
  //   name: Run Test
  //   on_press:
  //     - automation_id: automation_id_2
  //       then:
  //         - script.execute:
  //             id: run_test_script
  //           type_id: script_scriptexecuteaction_id_2
  //       trigger_id: trigger_id
  //   platform: template
  new(template__templatebutton_id) template_::TemplateButton();
  new(automation_id_2) Automation<>();
  // script:
  //   - automation_id: automation_id_3
  //     id: run_test_script
  //     mode: single
  //     parameters: {}
  //     then:
  //       - lambda: !lambda |-
  //           auto rand_range = [](float lo, float hi) -> float {
  //             return lo + random_float() * (hi - lo);
  //           };
  //           id(n_fc).publish_state(rand_range(0, 15));
  //           id(n_tc).publish_state(rand_range(0, 15));
  //           id(n_br).publish_state(rand_range(0, 33));
  //           id(n_ph).publish_state(rand_range(6.0, 9.0));
  //           id(n_alk).publish_state(rand_range(0, 250));
  //           id(n_ca).publish_state(rand_range(0, 1200));
  //           id(n_cya).publish_state(rand_range(0, 300));
  //           id(n_cu).publish_state(rand_range(0, 5));
  //           id(n_fe).publish_state(rand_range(0, 5));
  //           id(n_bor).publish_state(rand_range(0, 100));
  //           id(n_phos).publish_state(rand_range(0, 2500));
  //           id(n_salt).publish_state(rand_range(0, 10000));
  //   
  //            Option B: also randomly rotate Disk Series and Sanitizer, so
  //            every parameter combination (Bromine, Phosphate, high-range
  //            Calcium, etc.) gets exercised over time with no manual input.
  //           const char *disks[] = {"203", "204", "303", "304"};
  //           const char *sanitizers[] = {"Chlorine", "Bromine", "Salt"};
  //           int disk_idx = (int) (random_float() * 4);
  //           if (disk_idx > 3) disk_idx = 3;   guard the rare float rounding to 4.0
  //           int san_idx = (int) (random_float() * 3);
  //           if (san_idx > 2) san_idx = 2;     same guard for 3.0
  //           id(disk_select).publish_state(disks[disk_idx]);
  //           id(sanitizer_select).publish_state(sanitizers[san_idx]);
  //         type_id: lambdaaction_id
  //       - lambda: !lambda |-
  //           ESP_LOGI("spintouch_emu", "Run Test pressed (disk=%s, sanitizer=%s)",
  //                    id(disk_select).current_option().c_str(), id(sanitizer_select).current_option().c_str());
  //         type_id: lambdaaction_id_2
  //       - ble_server.characteristic.set_value:
  //           id: testavail_char
  //           value:
  //             data:
  //               - 3
  //             endianness: LITTLE
  //             string_encoding: utf_8
  //         type_id: esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id
  //       - delay: 3s
  //         type_id: delayaction_id
  //       - ble_server.characteristic.set_value:
  //           id: ttest_char
  //           value:
  //             data: !lambda |-
  //                ---- helper: append one 6-byte [param_id][decimals][float32_le] entry ----
  //               auto append_entry = [](std::vector<uint8_t> &buf, uint8_t param_id,
  //                                       uint8_t decimals, float value) {
  //                 buf.push_back(param_id);
  //                 buf.push_back(decimals);
  //                 uint8_t raw[4];
  //                 memcpy(raw, &value, 4);   ESP32 is little-endian: matches float32_le directly
  //                 buf.insert(buf.end(), raw, raw + 4);
  //               };
  //   
  //               std::string disk = id(disk_select).current_option();
  //               std::string sanitizer = id(sanitizer_select).current_option();
  //   
  //                ---- decide which param_ids this disk/sanitizer combo includes ----
  //                Chemical set per disk series, from README.md "Supported Equipment"
  //                and RESEARCH.md "Disk Series Summary":
  //                  203: FC/TC or Br, pH, Alk, Ca(0x0F std), CYA, Cu, Fe, Salt, Phosphate(0x0E)
  //                  303: FC/TC or Br, pH, Alk, Ca(0x0F std), CYA, Cu, Fe, Salt, Borate(0x0D)
  //                  204: FC/TC or Br, pH, Alk, Ca(0x08 high), CYA, Cu,      Salt, Phosphate(0x0E)
  //                  304: FC/TC or Br, pH, Alk, Ca(0x08 high), CYA, Cu,      Salt, Borate(0x0D)
  //               bool has_iron = (disk == "203" || disk == "303");
  //               bool high_range_ca = (disk == "204" || disk == "304");
  //               bool use_borate = (disk == "303" || disk == "304");    else phosphate
  //   
  //               std::vector<uint8_t> entries;   will be zero-padded to 12 * 6 = 72 bytes
  //   
  //                Sanitizer: Chlorine and Salt both report FC/TC (0x01/0x02);
  //                Bromine reports BR (0x03) instead. Only the metadata
  //                sanitizer-type byte differs between Chlorine and Salt.
  //               if (sanitizer == "Bromine") {
  //                 append_entry(entries, 0x03, 2, id(n_br).state);           Bromine
  //               } else {
  //                 append_entry(entries, 0x01, 2, id(n_fc).state);           Free Chlorine
  //                 append_entry(entries, 0x02, 2, id(n_tc).state);           Total Chlorine
  //               }
  //   
  //               append_entry(entries, 0x06, 2, id(n_ph).state);             pH
  //               append_entry(entries, 0x07, 1, id(n_alk).state);            Total Alkalinity
  //               append_entry(entries, high_range_ca ? 0x08 : 0x0F, 1,
  //                            id(n_ca).state);                                Calcium Hardness
  //               append_entry(entries, 0x0A, 1, id(n_cya).state);            Cyanuric Acid
  //               append_entry(entries, 0x0C, 2, id(n_cu).state);             Copper
  //   
  //               if (has_iron) {
  //                 append_entry(entries, 0x0B, 2, id(n_fe).state);           Iron
  //               }
  //   
  //               if (use_borate) {
  //                 append_entry(entries, 0x0D, 1, id(n_bor).state);          Borate
  //               } else {
  //                 append_entry(entries, 0x0E, 0, id(n_phos).state);         Phosphate
  //               }
  //   
  //               append_entry(entries, 0x10, 0, id(n_salt).state);           Salt
  //   
  //               uint8_t num_valid_results = entries.size() / 6;
  //   
  //                Zero-pad remaining entry slots up to 12 total (72 bytes),
  //                matching the trailing zero padding seen in real captures.
  //               entries.resize(72, 0x00);
  //   
  //                ---- timestamp: bytes 76-83, YY-MM-DD-HH-MM-SS-AMPM-Military ----
  //               auto now = id(ha_time).now();
  //               uint8_t yy = static_cast<uint8_t>(now.year - 2000);
  //               uint8_t mm = now.month;
  //               uint8_t dd = now.day_of_month;
  //               uint8_t hh = now.hour;       24h value
  //               uint8_t mi = now.minute;
  //               uint8_t ss = now.second;
  //               uint8_t ampm = 0;            unused when military = 1
  //               uint8_t military = 1;        tell the parser hour is already 24h
  //   
  //                ---- metadata: bytes 84-86 ----
  //                disk_type index, from DISK_TYPE_MAP in const.py
  //               uint8_t disk_type_index = 0;
  //               if (disk == "203") disk_type_index = 17;
  //               else if (disk == "303") disk_type_index = 18;
  //               else if (disk == "204") disk_type_index = 23;
  //               else if (disk == "304") disk_type_index = 24;
  //   
  //                sanitizer_type index, from SANITIZER_TYPE_MAP in const.py
  //               uint8_t sanitizer_type_index = 0;        0 = Chlorine
  //               if (sanitizer == "Salt") sanitizer_type_index = 1;
  //               else if (sanitizer == "Bromine") sanitizer_type_index = 2;
  //   
  //                ---- assemble full 91-byte payload ----
  //               std::vector<uint8_t> payload;
  //               payload.reserve(91);
  //   
  //                [0-3] start signature
  //               payload.insert(payload.end(), {0x01, 0x02, 0x03, 0x05});
  //   
  //                [4-75] 12 entries x 6 bytes
  //               payload.insert(payload.end(), entries.begin(), entries.end());
  //   
  //                [76-83] timestamp
  //               payload.insert(payload.end(), {yy, mm, dd, hh, mi, ss, ampm, military});
  //   
  //                [84-86] metadata
  //               payload.insert(payload.end(), {num_valid_results, disk_type_index, sanitizer_type_index});
  //   
  //                [87-90] end signature
  //               payload.insert(payload.end(), {0x07, 0x0B, 0x0D, 0x11});
  //   
  //               return payload;
  //             endianness: LITTLE
  //             string_encoding: utf_8
  //         type_id: esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_2
  //       - ble_server.characteristic.set_value:
  //           id: testavail_char
  //           value:
  //             data:
  //               - 4
  //             endianness: LITTLE
  //             string_encoding: utf_8
  //         type_id: esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_3
  //       - ble_server.characteristic.notify:
  //           id: testavail_char
  //         type_id: esp32_ble_server_esp32_ble_server_automations_blecharacteristicnotifyaction_id
  //     trigger_id: trigger_id_2
  new(run_test_script) script::SingleScript<>();
  run_test_script->set_name(LOG_STR("run_test_script"));
  new(automation_id_3) Automation<>(run_test_script);
  new(lambdaaction_id) StatelessLambdaAction<>([]() -> void {
      #line 308 "/config/esphome/spintouch-emulator.yaml"
      auto rand_range = [](float lo, float hi) -> float {
        return lo + random_float() * (hi - lo);
      };
      n_fc->publish_state(rand_range(0, 15));
      n_tc->publish_state(rand_range(0, 15));
      n_br->publish_state(rand_range(0, 33));
      n_ph->publish_state(rand_range(6.0, 9.0));
      n_alk->publish_state(rand_range(0, 250));
      n_ca->publish_state(rand_range(0, 1200));
      n_cya->publish_state(rand_range(0, 300));
      n_cu->publish_state(rand_range(0, 5));
      n_fe->publish_state(rand_range(0, 5));
      n_bor->publish_state(rand_range(0, 100));
      n_phos->publish_state(rand_range(0, 2500));
      n_salt->publish_state(rand_range(0, 10000));
      
       
       
       
      const char *disks[] = {"203", "204", "303", "304"};
      const char *sanitizers[] = {"Chlorine", "Bromine", "Salt"};
      int disk_idx = (int) (random_float() * 4);
      if (disk_idx > 3) disk_idx = 3;   
      int san_idx = (int) (random_float() * 3);
      if (san_idx > 2) san_idx = 2;     
      disk_select->publish_state(disks[disk_idx]);
      sanitizer_select->publish_state(sanitizers[san_idx]);
  });
  new(lambdaaction_id_2) StatelessLambdaAction<>([]() -> void {
      #line 337 "/config/esphome/spintouch-emulator.yaml"
      ESP_LOGI("spintouch_emu", "Run Test pressed (disk=%s, sanitizer=%s)",
               disk_select->current_option().c_str(), sanitizer_select->current_option().c_str());
  });
  // interval:
  //   - automation_id: automation_id_4
  //     id: interval_intervaltrigger_id
  //     interval: 60s
  //     startup_delay: 0s
  //     then:
  //       - if:
  //           condition:
  //             lambda: !lambda |-
  //               return id(client_connected);
  //             type_id: lambdacondition_id
  //           then:
  //             - script.execute:
  //                 id: run_test_script
  //               type_id: script_scriptexecuteaction_id_3
  //         type_id: ifaction_id
  //     trigger_id: trigger_id_3
  new(interval_intervaltrigger_id) interval::IntervalTrigger();
  App.register_component_(interval_intervaltrigger_id, 15);
  new(automation_id_4) Automation<>(interval_intervaltrigger_id);
  // esp32_ble_server:
  //   appearance: 0
  //   ble_id: esp32_ble_esp32ble_id
  //   id: ble_server
  //   manufacturer:
  //     data: LaMotte
  //     endianness: LITTLE
  //     string_encoding: utf_8
  //     type: string
  //   max_clients: 1
  //   model:
  //     data: SpinTouch Emulator
  //     endianness: LITTLE
  //     string_encoding: utf_8
  //     type: string
  //   on_connect:
  //     automation_id: automation_id_5
  //     then:
  //       - lambda: !lambda |-
  //           id(client_connected) = true;
  //         type_id: lambdaaction_id_3
  //       - delay: 2s
  //         type_id: delayaction_id_2
  //       - script.execute:
  //           id: run_test_script
  //         type_id: script_scriptexecuteaction_id_4
  //     trigger_id: trigger_id_4
  //   on_disconnect:
  //     automation_id: automation_id_6
  //     then:
  //       - lambda: !lambda |-
  //           id(client_connected) = false;
  //         type_id: lambdaaction_id_4
  //     trigger_id: trigger_id_5
  //   services:
  //     - advertise: true
  //       characteristics:
  //         - broadcast: false
  //           char_value_action_id_: esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_4
  //           descriptors: []
  //           id: ttest_char
  //           indicate: false
  //           notify: false
  //           read: true
  //           uuid: 00000000-0000-1000-8000-BBBD00000010
  //           write: false
  //           write_no_response: false
  //         - broadcast: false
  //           char_value_action_id_: esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_5
  //           descriptors:
  //             - id: esp32_ble_server_bledescriptor_id
  //               max_length: 2
  //               read: true
  //               uuid: 0x2902
  //               value:
  //                 data:
  //                   - 0
  //                   - 0
  //                 endianness: LITTLE
  //                 string_encoding: utf_8
  //               write: true
  //           id: testavail_char
  //           indicate: false
  //           notify: true
  //           read: true
  //           uuid: 00000000-0000-1000-8000-BBBD00000011
  //           value:
  //             data:
  //               - 2
  //             endianness: LITTLE
  //             string_encoding: utf_8
  //           write: false
  //           write_no_response: false
  //         - broadcast: false
  //           char_value_action_id_: esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_6
  //           descriptors: []
  //           id: sendtest_char
  //           indicate: false
  //           notify: false
  //           on_write:
  //             automation_id: automation_id_7
  //             then:
  //               - lambda: !lambda |-
  //                   ESP_LOGD("spintouch_emu", "SENDTEST write from client %d: %s",
  //                            id, format_hex_pretty(x.data(), x.size()).c_str());
  //                 type_id: lambdaaction_id_5
  //             trigger_id: trigger_id_6
  //           read: true
  //           uuid: 00000000-0000-1000-8000-BBBD00000012
  //           write: true
  //           write_no_response: false
  //         - broadcast: false
  //           char_value_action_id_: esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_8
  //           descriptors: []
  //           id: testack_char
  //           indicate: false
  //           notify: false
  //           on_write:
  //             automation_id: automation_id_8
  //             then:
  //               - lambda: !lambda |-
  //                   ESP_LOGI("spintouch_emu", "ACK received from client %d: %s",
  //                            id, format_hex_pretty(x.data(), x.size()).c_str());
  //                 type_id: lambdaaction_id_6
  //               - ble_server.characteristic.set_value:
  //                   id: testavail_char
  //                   value:
  //                     data:
  //                       - 2
  //                     endianness: LITTLE
  //                     string_encoding: utf_8
  //                 type_id: esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_7
  //             trigger_id: trigger_id_7
  //           read: true
  //           uuid: 00000000-0000-1000-8000-BBBD00000013
  //           write: true
  //           write_no_response: false
  //         - broadcast: false
  //           char_value_action_id_: esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_9
  //           descriptors: []
  //           id: device_info_char
  //           indicate: false
  //           notify: false
  //           read: true
  //           uuid: 00000000-0000-1000-8000-BBBD00000031
  //           value:
  //             data:
  //               - 189
  //               - 11
  //               - 0
  //               - 0
  //               - 1
  //               - 255
  //               - 0
  //               - 1
  //               - 58
  //               - 1
  //               - 0
  //               - 0
  //               - 0
  //               - 0
  //               - 0
  //               - 0
  //             endianness: LITTLE
  //             string_encoding: utf_8
  //           write: false
  //           write_no_response: false
  //       id: esp32_ble_server_bleservice_id
  //       uuid: 00000000-0000-1000-8000-BBBD00000000
  //     - advertise: false
  //       characteristics:
  //         - broadcast: false
  //           char_value_action_id_: esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_10
  //           descriptors: []
  //           id: esp32_ble_server_blecharacteristic_id
  //           indicate: false
  //           notify: false
  //           read: true
  //           uuid: 0x2A29
  //           value:
  //             data: LaMotte
  //             endianness: LITTLE
  //             string_encoding: utf_8
  //             type: string
  //           write: false
  //           write_no_response: false
  //         - broadcast: false
  //           char_value_action_id_: esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_11
  //           descriptors: []
  //           id: esp32_ble_server_blecharacteristic_id_2
  //           indicate: false
  //           notify: false
  //           read: true
  //           uuid: 0x2A24
  //           value:
  //             data: SpinTouch Emulator
  //             endianness: LITTLE
  //             string_encoding: utf_8
  //             type: string
  //           write: false
  //           write_no_response: false
  //         - broadcast: false
  //           char_value_action_id_: esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_12
  //           descriptors: []
  //           id: esp32_ble_server_blecharacteristic_id_3
  //           indicate: false
  //           notify: false
  //           read: true
  //           uuid: 0x2A26
  //           value:
  //             data: ESPHome 2026.8.2
  //             endianness: LITTLE
  //             string_encoding: utf_8
  //           write: false
  //           write_no_response: false
  //       id: esp32_ble_server_bleservice_id_2
  //       uuid: 0x180A
  new(ble_server) esp32_ble_server::BLEServer();
  App.register_component_(ble_server, 16);
  // md5:
  // sha256:
  //   {}
  // socket:
  //   implementation: bsd_sockets
  // esp32_ble:
  //   advertising: false
  //   advertising_cycle_time: 10s
  //   connection_timeout: 20s
  //   disable_bt_logs: true
  //   enable_on_boot: true
  //   id: esp32_ble_esp32ble_id
  //   io_capability: none
  //   max_connections: 3
  //   max_notifications: 12
  new(esp32_ble_esp32ble_id) esp32_ble::ESP32BLE();
  esp32_ble_esp32ble_id->set_enable_on_boot(true);
  esp32_ble_esp32ble_id->set_io_capability(esp32_ble::IO_CAP_NONE);
  esp32_ble_esp32ble_id->set_advertising_cycle_time(10000);
  App.register_component_(esp32_ble_esp32ble_id, 17);
  new(script_scriptexecuteaction_id) script::ScriptExecuteAction<script::Script<>>(run_test_script);
  script_scriptexecuteaction_id->set_args();
  automation_id->add_actions({script_scriptexecuteaction_id});
  new(script_scriptexecuteaction_id_2) script::ScriptExecuteAction<script::Script<>>(run_test_script);
  script_scriptexecuteaction_id_2->set_args();
  automation_id_2->add_actions({script_scriptexecuteaction_id_2});
  template__templatebutton_id->add_on_press_callback(TriggerForwarder<>{automation_id_2});
  App.register_button(template__templatebutton_id, "Run Test", 2994605703UL, 0);
  { auto *h = ble_server; esp32_ble_esp32ble_id->add_gatts_event_callback([h](esp_gatts_cb_event_t event, esp_gatt_if_t gatts_if, esp_ble_gatts_cb_param_t *param) { h->gatts_event_handler(event, gatts_if, param); }); }
  { auto *h = ble_server; esp32_ble_esp32ble_id->add_ble_status_event_callback([h]() { h->ble_before_disabled_event_handler(); }); }
  ble_server->set_parent(esp32_ble_esp32ble_id);
  esp32_ble_esp32ble_id->advertising_set_appearance(0);
  ble_server->set_max_clients(1);
  esp32_ble_server_bleservice_id = ble_server->create_service(esp32_ble::ESPBTUUID::from_raw("00000000-0000-1000-8000-BBBD00000000"), true, 12);
  ttest_char = esp32_ble_server_bleservice_id->create_characteristic(esp32_ble::ESPBTUUID::from_raw("00000000-0000-1000-8000-BBBD00000010"), (0 + esp32_ble_server::BLECharacteristic::PROPERTY_READ));
  testavail_char = esp32_ble_server_bleservice_id->create_characteristic(esp32_ble::ESPBTUUID::from_raw("00000000-0000-1000-8000-BBBD00000011"), ((0 + esp32_ble_server::BLECharacteristic::PROPERTY_READ) + esp32_ble_server::BLECharacteristic::PROPERTY_NOTIFY));
  testavail_char->set_value({2});
  new(esp32_ble_server_bledescriptor_id) esp32_ble_server::BLEDescriptor(esp32_ble::ESPBTUUID::from_uint32(0x2902), 2, true, true);
  testavail_char->add_descriptor(esp32_ble_server_bledescriptor_id);
  esp32_ble_server_bledescriptor_id->set_value({0, 0});
  sendtest_char = esp32_ble_server_bleservice_id->create_characteristic(esp32_ble::ESPBTUUID::from_raw("00000000-0000-1000-8000-BBBD00000012"), ((0 + esp32_ble_server::BLECharacteristic::PROPERTY_READ) + esp32_ble_server::BLECharacteristic::PROPERTY_WRITE));
  new(automation_id_7) Automation<std::vector<uint8_t>, uint16_t>(esp32_ble_server::esp32_ble_server_automations::BLETriggers::create_characteristic_on_write_trigger(sendtest_char));
  new(lambdaaction_id_5) StatelessLambdaAction<std::vector<uint8_t>, uint16_t>([](std::vector<uint8_t> x, uint16_t id) -> void {
      #line 551 "/config/esphome/spintouch-emulator.yaml"
      ESP_LOGD("spintouch_emu", "SENDTEST write from client %d: %s",
               id, format_hex_pretty(x.data(), x.size()).c_str());
  });
  automation_id_7->add_actions({lambdaaction_id_5});
  testack_char = esp32_ble_server_bleservice_id->create_characteristic(esp32_ble::ESPBTUUID::from_raw("00000000-0000-1000-8000-BBBD00000013"), ((0 + esp32_ble_server::BLECharacteristic::PROPERTY_READ) + esp32_ble_server::BLECharacteristic::PROPERTY_WRITE));
  new(automation_id_8) Automation<std::vector<uint8_t>, uint16_t>(esp32_ble_server::esp32_ble_server_automations::BLETriggers::create_characteristic_on_write_trigger(testack_char));
  new(lambdaaction_id_6) StatelessLambdaAction<std::vector<uint8_t>, uint16_t>([](std::vector<uint8_t> x, uint16_t id) -> void {
      #line 562 "/config/esphome/spintouch-emulator.yaml"
      ESP_LOGI("spintouch_emu", "ACK received from client %d: %s",
               id, format_hex_pretty(x.data(), x.size()).c_str());
  });
  new(esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_7) esp32_ble_server::esp32_ble_server_automations::BLECharacteristicSetValueAction<std::vector<uint8_t>, uint16_t>(testavail_char);
  esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_7->set_buffer({2});
  automation_id_8->add_actions({lambdaaction_id_6, esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_7});
  device_info_char = esp32_ble_server_bleservice_id->create_characteristic(esp32_ble::ESPBTUUID::from_raw("00000000-0000-1000-8000-BBBD00000031"), (0 + esp32_ble_server::BLECharacteristic::PROPERTY_READ));
  device_info_char->set_value({189, 11, 0, 0, 1, 255, 0, 1, 58, 1, 0, 0, 0, 0, 0, 0});
  ble_server->enqueue_start_service(esp32_ble_server_bleservice_id);
  esp32_ble_server_bleservice_id_2 = ble_server->create_service(esp32_ble::ESPBTUUID::from_uint32(0x180A), false, 7);
  esp32_ble_server_blecharacteristic_id = esp32_ble_server_bleservice_id_2->create_characteristic(esp32_ble::ESPBTUUID::from_uint32(0x2A29), (0 + esp32_ble_server::BLECharacteristic::PROPERTY_READ));
  esp32_ble_server_blecharacteristic_id->set_value({76, 97, 77, 111, 116, 116, 101});
  esp32_ble_server_blecharacteristic_id_2 = esp32_ble_server_bleservice_id_2->create_characteristic(esp32_ble::ESPBTUUID::from_uint32(0x2A24), (0 + esp32_ble_server::BLECharacteristic::PROPERTY_READ));
  esp32_ble_server_blecharacteristic_id_2->set_value({83, 112, 105, 110, 84, 111, 117, 99, 104, 32, 69, 109, 117, 108, 97, 116, 111, 114});
  esp32_ble_server_blecharacteristic_id_3 = esp32_ble_server_bleservice_id_2->create_characteristic(esp32_ble::ESPBTUUID::from_uint32(0x2A26), (0 + esp32_ble_server::BLECharacteristic::PROPERTY_READ));
  esp32_ble_server_blecharacteristic_id_3->set_value({69, 83, 80, 72, 111, 109, 101, 32, 50, 48, 50, 54, 46, 56, 46, 50});
  ble_server->set_device_information_service(esp32_ble_server_bleservice_id_2);
  new(automation_id_5) Automation<uint16_t>(esp32_ble_server::esp32_ble_server_automations::BLETriggers::create_server_on_connect_trigger(ble_server));
  new(esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id) esp32_ble_server::esp32_ble_server_automations::BLECharacteristicSetValueAction<>(testavail_char);
  esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id->set_buffer({3});
  new(delayaction_id) DelayAction<>();
  delayaction_id->set_delay([]() -> uint32_t {
      return 3000;
  });
  new(esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_2) esp32_ble_server::esp32_ble_server_automations::BLECharacteristicSetValueAction<>(ttest_char);
  esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_2->set_buffer([]() -> std::vector<uint8_t> {
      #line 359 "/config/esphome/spintouch-emulator.yaml"
       
      auto append_entry = [](std::vector<uint8_t> &buf, uint8_t param_id,
                              uint8_t decimals, float value) {
        buf.push_back(param_id);
        buf.push_back(decimals);
        uint8_t raw[4];
        memcpy(raw, &value, 4);   
        buf.insert(buf.end(), raw, raw + 4);
      };
      
      std::string disk = disk_select->current_option();
      std::string sanitizer = sanitizer_select->current_option();
      
       
       
       
       
       
       
       
      bool has_iron = (disk == "203" || disk == "303");
      bool high_range_ca = (disk == "204" || disk == "304");
      bool use_borate = (disk == "303" || disk == "304");    
      
      std::vector<uint8_t> entries;   
      
       
       
       
      if (sanitizer == "Bromine") {
        append_entry(entries, 0x03, 2, n_br->state);           
      } else {
        append_entry(entries, 0x01, 2, n_fc->state);           
        append_entry(entries, 0x02, 2, n_tc->state);           
      }
      
      append_entry(entries, 0x06, 2, n_ph->state);             
      append_entry(entries, 0x07, 1, n_alk->state);            
      append_entry(entries, high_range_ca ? 0x08 : 0x0F, 1,
                   n_ca->state);                                
      append_entry(entries, 0x0A, 1, n_cya->state);            
      append_entry(entries, 0x0C, 2, n_cu->state);             
      
      if (has_iron) {
        append_entry(entries, 0x0B, 2, n_fe->state);           
      }
      
      if (use_borate) {
        append_entry(entries, 0x0D, 1, n_bor->state);          
      } else {
        append_entry(entries, 0x0E, 0, n_phos->state);         
      }
      
      append_entry(entries, 0x10, 0, n_salt->state);           
      
      uint8_t num_valid_results = entries.size() / 6;
      
       
       
      entries.resize(72, 0x00);
      
       
      auto now = ha_time->now();
      uint8_t yy = static_cast<uint8_t>(now.year - 2000);
      uint8_t mm = now.month;
      uint8_t dd = now.day_of_month;
      uint8_t hh = now.hour;       
      uint8_t mi = now.minute;
      uint8_t ss = now.second;
      uint8_t ampm = 0;            
      uint8_t military = 1;        
      
       
       
      uint8_t disk_type_index = 0;
      if (disk == "203") disk_type_index = 17;
      else if (disk == "303") disk_type_index = 18;
      else if (disk == "204") disk_type_index = 23;
      else if (disk == "304") disk_type_index = 24;
      
       
      uint8_t sanitizer_type_index = 0;        
      if (sanitizer == "Salt") sanitizer_type_index = 1;
      else if (sanitizer == "Bromine") sanitizer_type_index = 2;
      
       
      std::vector<uint8_t> payload;
      payload.reserve(91);
      
       
      payload.insert(payload.end(), {0x01, 0x02, 0x03, 0x05});
      
       
      payload.insert(payload.end(), entries.begin(), entries.end());
      
       
      payload.insert(payload.end(), {yy, mm, dd, hh, mi, ss, ampm, military});
      
       
      payload.insert(payload.end(), {num_valid_results, disk_type_index, sanitizer_type_index});
      
       
      payload.insert(payload.end(), {0x07, 0x0B, 0x0D, 0x11});
      
      return payload;
  });
  new(esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_3) esp32_ble_server::esp32_ble_server_automations::BLECharacteristicSetValueAction<>(testavail_char);
  esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_3->set_buffer({4});
  new(esp32_ble_server_esp32_ble_server_automations_blecharacteristicnotifyaction_id) esp32_ble_server::esp32_ble_server_automations::BLECharacteristicNotifyAction<>(testavail_char);
  automation_id_3->add_actions({lambdaaction_id, lambdaaction_id_2, esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id, delayaction_id, esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_2, esp32_ble_server_esp32_ble_server_automations_blecharacteristicsetvalueaction_id_3, esp32_ble_server_esp32_ble_server_automations_blecharacteristicnotifyaction_id});
  // globals:
  //   id: scroll_pos
  //   initial_value: '0'
  //   restore_value: false
  //   type: int
  new(scroll_pos) globals::GlobalsComponent<int>(0);
  App.register_component_(scroll_pos, 18);
  // globals:
  //   id: client_connected
  //   initial_value: 'false'
  //   restore_value: false
  //   type: bool
  new(client_connected) globals::GlobalsComponent<bool>(false);
  App.register_component_(client_connected, 18);
  spintouch_lcd->set_writer([](lcd_pcf8574::PCF8574LCDDisplay & it) -> void {
      #line 104 "/config/esphome/spintouch-emulator.yaml"
       
       
       
       
      std::string disk = disk_select->current_option();
      std::string sanitizer = sanitizer_select->current_option();
      bool has_iron = (disk == "203" || disk == "303");
      bool use_borate = (disk == "303" || disk == "304");
      
      char numbuf[8];
      auto fmt = [&](float v, int decimals) -> std::string {
        snprintf(numbuf, sizeof(numbuf), "%.*f", decimals, v);
        return std::string(numbuf);
      };
      
      std::string ticker;
      if (sanitizer == "Bromine") {
        ticker += "Br " + fmt(n_br->state, 2) + "  ";
      } else {
        ticker += "FC " + fmt(n_fc->state, 2) + "  ";
        ticker += "TC " + fmt(n_tc->state, 2) + "  ";
      }
      ticker += "pH " + fmt(n_ph->state, 2) + "  ";
      ticker += "Alk " + fmt(n_alk->state, 1) + "  ";
      ticker += "Ca " + fmt(n_ca->state, 1) + "  ";
      ticker += "CYA " + fmt(n_cya->state, 1) + "  ";
      ticker += "Cu " + fmt(n_cu->state, 2) + "  ";
      if (has_iron) {
        ticker += "Fe " + fmt(n_fe->state, 2) + "  ";
      }
      if (use_borate) {
        ticker += "Bor " + fmt(n_bor->state, 1) + "  ";
      } else {
        ticker += "Phos " + fmt(n_phos->state, 0) + "  ";
      }
      ticker += "Salt " + fmt(n_salt->state, 0) + "  ";
      
      size_t core_len = ticker.size();
      if (core_len == 0) {
        return;
      }
      
       
       
      std::string doubled = ticker + ticker;
      
      if (scroll_pos->value() >= (int) core_len) {
        scroll_pos->value() = 0;
      }
      std::string window = doubled.substr(scroll_pos->value(), 16);
      it.print(0, 0, window.c_str());
      
       
      std::string status = "D" + disk + " " + sanitizer;
      status.resize(16, ' ');
      it.print(0, 1, status.c_str());
      
      scroll_pos->value() = scroll_pos->value() + 1;
  });
  new(lambdacondition_id) StatelessLambdaCondition<>([]() -> bool {
      #line 487 "/config/esphome/spintouch-emulator.yaml"
      return client_connected->value();
  });
  new(ifaction_id) IfAction<false>(lambdacondition_id);
  new(script_scriptexecuteaction_id_3) script::ScriptExecuteAction<script::Script<>>(run_test_script);
  script_scriptexecuteaction_id_3->set_args();
  ifaction_id->add_then({script_scriptexecuteaction_id_3});
  automation_id_4->add_actions({ifaction_id});
  interval_intervaltrigger_id->set_update_interval(60000);
  interval_intervaltrigger_id->set_startup_delay(0);
  new(lambdaaction_id_3) StatelessLambdaAction<uint16_t>([](uint16_t id) -> void {
      #line 512 "/config/esphome/spintouch-emulator.yaml"
      client_connected->value() = true;
  });
  new(delayaction_id_2) DelayAction<uint16_t>();
  delayaction_id_2->set_delay([](uint16_t id) -> uint32_t {
      return 2000;
  });
  new(script_scriptexecuteaction_id_4) script::ScriptExecuteAction<script::Script<>, uint16_t>(run_test_script);
  script_scriptexecuteaction_id_4->set_args();
  automation_id_5->add_actions({lambdaaction_id_3, delayaction_id_2, script_scriptexecuteaction_id_4});
  new(automation_id_6) Automation<uint16_t>(esp32_ble_server::esp32_ble_server_automations::BLETriggers::create_server_on_disconnect_trigger(ble_server));
  new(lambdaaction_id_4) StatelessLambdaAction<uint16_t>([](uint16_t id) -> void {
      #line 517 "/config/esphome/spintouch-emulator.yaml"
      client_connected->value() = false;
  });
  automation_id_6->add_actions({lambdaaction_id_4});
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
