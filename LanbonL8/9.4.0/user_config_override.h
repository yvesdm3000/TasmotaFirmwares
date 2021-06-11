/*
  user_config_override.h - user configuration overrides my_user_config.h for Tasmota

  Copyright (C) 2021  Theo Arends

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// force the compiler to show a warning to confirm that this file is included
#warning **** user_config_override.h: Using Settings from this File ****

/*****************************************************************************************************\
 * USAGE:
 *   To modify the stock configuration without changing the my_user_config.h file:
 *   (1) copy this file to "user_config_override.h" (It will be ignored by Git)
 *   (2) define your own settings below
 *
 ******************************************************************************************************
 * ATTENTION:
 *   - Changes to SECTION1 PARAMETER defines will only override flash settings if you change define CFG_HOLDER.
 *   - Expect compiler warnings when no ifdef/undef/endif sequence is used.
 *   - You still need to update my_user_config.h for major define USE_MQTT_TLS.
 *   - All parameters can be persistent changed online using commands via MQTT, WebConsole or Serial.
\*****************************************************************************************************/

/*
Examples :

// -- Master parameter control --------------------
#undef  CFG_HOLDER
#define CFG_HOLDER        4617                   // [Reset 1] Change this value to load SECTION1 configuration parameters to flash

// -- Setup your own Wifi settings  ---------------
#undef  STA_SSID1
#define STA_SSID1         "YourSSID"             // [Ssid1] Wifi SSID

#undef  STA_PASS1
#define STA_PASS1         "YourWifiPassword"     // [Password1] Wifi password

// -- Setup your own MQTT settings  ---------------
#undef  MQTT_HOST
#define MQTT_HOST         "your-mqtt-server.com" // [MqttHost]

#undef  MQTT_PORT
#define MQTT_PORT         1883                   // [MqttPort] MQTT port (10123 on CloudMQTT)

#undef  MQTT_USER
#define MQTT_USER         "YourMqttUser"         // [MqttUser] Optional user

#undef  MQTT_PASS
#define MQTT_PASS         "YourMqttPass"         // [MqttPassword] Optional password

// You might even pass some parameters from the command line ----------------------------
// Ie:  export PLATFORMIO_BUILD_FLAGS='-DUSE_CONFIG_OVERRIDE -DMY_IP="192.168.1.99" -DMY_GW="192.168.1.1" -DMY_DNS="192.168.1.1"'

#ifdef MY_IP
#undef  WIFI_IP_ADDRESS
#define WIFI_IP_ADDRESS   MY_IP                  // Set to 0.0.0.0 for using DHCP or enter a static IP address
#endif

#ifdef MY_GW
#undef  WIFI_GATEWAY
#define WIFI_GATEWAY      MY_GW                  // if not using DHCP set Gateway IP address
#endif

#ifdef MY_DNS
#undef  WIFI_DNS
#define WIFI_DNS          MY_DNS                 // If not using DHCP set DNS IP address (might be equal to WIFI_GATEWAY)
#endif

*/

#ifdef ESP32_LANBON

#define USE_I2C
#define USE_DISPLAY
#define USE_LVGL
#define USE_SPI
#define USE_DISPLAY_ST7789
#define USE_TOUCH_BUTTONS
#define USE_FT5206
#undef USE_RULES
#define USE_SCRIPT
#define MAXBUTTONS 16
#define USE_LANBON_L8

#endif

#define USE_I2C
#undef USE_SHT
#undef USE_HTU
#undef USE_BMP
#undef USE_BH1750
#undef USE_VEML6070
#undef USE_ADS1115
#undef USE_INA219
#undef USE_INA226
#undef USE_SHT3X
#undef USE_TSL2561
#undef USE_TSL2591
#undef USE_MGS
#undef USE_APDS9960
#undef USE_MCP230xx


#if 0
#define USE_DISPLAY
#define USE_LVGL
#define USE_XPT2046
#undef USE_VEML6070
#define USE_UNIVERSAL_DISPLAY
#define USE_UFILESYS
#undef USE_DISPLAY_MODES1TO5
#undef USE_DISPLAY_SEVENSEG
#define USE_SPI
  #undef USE_DISPLAY_ST7789
  #undef USE_TOUCH_BUTTONS
  #define USE_DISPLAY_LVGL_ONLY
  #define USE_TOUCH_SCREEN
  #define USE_FT5206
  #undef USE_DISPLAY_ILI9341
//#define USE_LANBON_L8
  #undef USE_LANBON_L8
#endif


#define USE_SPI
#define USE_LVGL
#define USE_DISPLAY
#define USE_XPT2046
#define USE_UNIVERSAL_DISPLAY
//#define USE_DISPLAY_LVGL_ONLY
#undef USE_DISPLAY_MODES1TO5
#define USE_ENHANCED_GUI_WIFI_SCAN
#define USE_UFILESYS
#define USE_SPLASH
#define USE_FT5206


#undef USE_RULES
#undef MAXBUTTONS 16
#undef MAX_TOUCH_BUTTONS 16
#undef USE_TELEGRAM
#undef USE_KNX
#undef USE_TIMERS
#undef USE_TUYA_MCU
#undef USE_ARMTRONIX_DIMMERS
#undef USE_PS_16_DZ
#undef USE_SONOFF_IFAN
#undef USE_BUZZER
#undef USE_ARILUX_RF
#undef USE_SHUTTER
#undef USE_DEEPSLEEP
#undef USE_EXS_DIMMER
#undef USE_DEVICE_GROUPS
#undef USE_PWM_DIMMER
#undef USE_SONOFF_D1
#undef USE_SHELLY_DIMMER
#undef USE_WS2812
#undef USE_MY92X1
#undef USE_SM16716
#undef USE_SM2135
#undef USE_SONOFF_L1
#undef USE_ADE7953
#undef USE_DS18x20
#undef USE_ELECTRIQ_MOODL
#undef USE_LIGHT_PALETTE
#undef USE_DGR_LIGHT_SEQUENCE
#undef USE_COUNTER
#undef USE_ADC_VCC
#undef USE_DS18x20
#undef USE_LIGHT_VIRTUAL_CT
#undef USE_EMULATION_HUE
#undef USE_EMULATION_WEMO
#undef USE_DOMOTICZ
#undef USE_ELECTRIQ_MOODL
#undef USE_DS18x20
#undef USE_DISPLAY_MATRIX
#undef USE_ENERGY_MARGIN_DETECTION
#undef USE_ENERGY_DUMMY
#undef USE_PZEM004T
#undef USE_PZEM_AC
#undef USE_PZEM_DC
#undef USE_MCP39F501
#undef USE_BL0940
#undef USE_DHT
#undef USE_IR_REMOTE
#undef USE_ZIGBEE
#undef USE_THERMOSTAT

#undef USE_ADC
#undef USE_CSE7761

#undef USE_IR_REMOTE

#define USE_BERRY

#define BE_LV_WIDGET_CALENDAR 0
#define BE_LV_WIDGET_CHART 0
#define BE_LV_WIDGET_GAUGE 0
#define BE_LV_WIDGET_IMG 0
#define BE_LV_WIDGET_KEYBOARD 0

#define SUPPORT_MQTT_EVENT

#endif  // _USER_CONFIG_OVERRIDE_H_
