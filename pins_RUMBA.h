/**
   Marlin 3D Printer Firmware
   Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]

   Based on Sprinter and grbl.
   Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm

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

/**
   RUMBA pin assignments
*/

#ifndef __AVR_ATmega2560__
#error "Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu."
#endif

#if E_STEPPERS > 3 || HOTENDS > 3
#error "RUMBA supports up to 3 hotends / E-steppers. Comment this line to keep going."
#endif

#define DEFAULT_MACHINE_NAME "Rumba"
#define BOARD_NAME           "Rumba"

#define X_STEP_PIN        18
#define X_DIR_PIN         42 
#define X_ENABLE_PIN      12
#define X_MIN_PIN         29
#define X_MAX_PIN         25

#define Y_STEP_PIN        38
#define Y_DIR_PIN         33
#define Y_ENABLE_PIN      48
#define Y_MIN_PIN         28
#define Y_MAX_PIN         14

#define Z_STEP_PIN        34 
#define Z_DIR_PIN         40
#define Z_ENABLE_PIN      47
#define Z_MIN_PIN         64
#define Z_MAX_PIN         67

#ifndef Z_MIN_PROBE_PIN
#define Z_MIN_PROBE_PIN  -1 
#endif

#define E0_STEP_PIN        30
#define E0_DIR_PIN         32
#define E0_ENABLE_PIN      43

#define E1_STEP_PIN        -1 
#define E1_DIR_PIN         -1 
#define E1_ENABLE_PIN      -1 

#define E2_STEP_PIN        -1 
#define E2_DIR_PIN         -1 
#define E2_ENABLE_PIN      -1 

#define LED_PIN           -1 

#define FAN_PIN            -1 
#define FAN1_PIN           -1 

#define PS_ON_PIN          -1 
#define KILL_PIN           -1 

#define HEATER_0_PIN        69   // EXTRUDER 1
#define HEATER_1_PIN        -1   // EXTRUDER 2
#define HEATER_2_PIN        -1   // EXTRUDER 3

#define HG_TRG_PIN          53

#if TEMP_SENSOR_0 == -1
#define TEMP_0_PIN        -1   // ANALOG NUMBERING - connector *K1* on RUMBA thermocouple ADD ON is used
#else
#define TEMP_0_PIN       0   // ANALOG NUMBERING - default connector for thermistor *T0* on rumba board is used
#endif

#if TEMP_SENSOR_1 == -1
#define TEMP_1_PIN        -1   // ANALOG NUMBERING - connector *K2* on RUMBA thermocouple ADD ON is used
#else
#define TEMP_1_PIN       -1   // ANALOG NUMBERING - default connector for thermistor *T1* on rumba board is used
#endif

#if TEMP_SENSOR_2 == -1
#define TEMP_2_PIN        -1   // ANALOG NUMBERING - connector *K3* on RUMBA thermocouple ADD ON is used <-- this can not be used when TEMP_SENSOR_BED is defined as thermocouple
#else
#define TEMP_2_PIN      -1  // ANALOG NUMBERING - default connector for thermistor *T2* on rumba board is used
#endif

//optional for extruder 4 or chamber: #define TEMP_X_PIN         12   // ANALOG NUMBERING - default connector for thermistor *T3* on rumba board is used
//optional FAN1 can be used as 4th heater output: #define HEATER_3_PIN       8    // EXTRUDER 4

#define HEATER_BED_PIN      -1    // BED
#if TEMP_SENSOR_BED == -1
#define TEMP_BED_PIN      -1    // ANALOG NUMBERING - connector *K3* on RUMBA thermocouple ADD ON is used <-- this can not be used when TEMP_SENSOR_2 is defined as thermocouple
#else
#define TEMP_BED_PIN     -1    // ANALOG NUMBERING - default connector for thermistor *THB* on rumba board is used
#endif

#define SDSS              -1 
#define SD_DETECT_PIN     -1 
#define BEEPER_PIN        -1 
#define LCD_PINS_RS       -1 
#define LCD_PINS_ENABLE   -1 
#define LCD_PINS_D4       -1 
#define LCD_PINS_D5       -1 
#define LCD_PINS_D6       -1 
#define LCD_PINS_D7       -1 
#define BTN_EN1           -1 
#define BTN_EN2           -1 
#define BTN_ENC           -1 

#define SERVO0_PIN        -1 

