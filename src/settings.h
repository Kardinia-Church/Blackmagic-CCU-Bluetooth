/**
 * Blackmagic CCU to Bluetooth Adaptor For ESP32
 * By Kardinia Church 2020
 * 
 * Tested on a XC3800 ESP32 development board from Jaycar
 * 
 * 
 * Settings.h
 * Used to define the settings of the module
**/

#ifndef SETTINGS_H
#define SETTINGS_H

#define VERSION 0.0

//General settings
#define SERIAL_BAUD 115200
#define DEBUG_LED 13
#define CONFIG_SSID "Blackmagic CCU"

//  Tally light settings    //
#define TALLY_PIN 2     //What pin is the tally feature on
#define TALLY_STAGE 0   //What position should the stage led(s) start at
#define TALLY_NUM_LEDS_STAGE 1  //How many stage led(s) are there?
#define TALLY_USER TALLY_NUM_LEDS_STAGE //What position should the user led(s) start at
#define TALLY_NUM_LEDS_USER 1   //How many user led(s) are there?

#define TALLY_COLOR_STANDBY strip.Color(0, 0, 255)
#define TALLY_COLOR_LIVE strip.Color(0, 255, 0)
#define TALLY_COLOR_LIVE_KEYER strip.Color(120, 255, 0)
#define TALLY_COLOR_PREVIEW strip.Color(255, 0, 0)
#define TALLY_COLOR_BLACK strip.Color(0, 0, 0)

//The colors to be displayed for functionality {no function, standby, preview, live, liveOnKeyer}
#define TALLY_FUNCTION_STAGE {TALLY_COLOR_BLACK, TALLY_COLOR_STANDBY, TALLY_COLOR_PREVIEW, TALLY_COLOR_LIVE, TALLY_COLOR_LIVE_KEYER}
#define TALLY_FUNCTION_USER {TALLY_COLOR_BLACK, TALLY_COLOR_STANDBY, TALLY_COLOR_PREVIEW, TALLY_COLOR_LIVE, TALLY_COLOR_LIVE_KEYER}

//Bluetooth settings
#define BLUETOOTH_DEVICE_NAME "ESP32"


#endif