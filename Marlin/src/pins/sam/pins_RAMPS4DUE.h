/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Arduino Mega or Due with RAMPS4DUE pin assignments
 *
 * Applies to the following boards:
 *
 *  RAMPS4DUE_EFB (Hotend, Fan, Bed)
 *  RAMPS4DUE_EEB (Hotend0, Hotend1, Bed)
 *  RAMPS4DUE_EFF (Hotend, Fan0, Fan1)
 *  RAMPS4DUE_EEF (Hotend0, Hotend1, Fan)
 *  RAMPS4DUE_SF  (Spindle, Controller Fan)
 *
 *  Differences between
 *  RAMPS_14 | RAMPS4DUE
 *       A13 | A9/D63 (shares the same pin with AUX2_4PIN)
 *       A14 | A10/D64 (shares the same pin with AUX2_5PIN)
 *       A15 | NC
 */

#if !defined(__SAM3X8E__) && !defined(__AVR_ATmega2560__)
  #error "Oops! Select 'Arduino Due' or 'Arduino/Genuino Mega or Mega 2560' in 'Tools > Board.'"
#endif

#define BOARD_INFO_NAME "RAMPS4DUE"
#define IS_RAMPS4DUE

#include "../ramps/pins_RAMPS.h"

//
// Temperature Sensors
//
#undef TEMP_BED_PIN
#define TEMP_BED_PIN       9   // Analog Input

#undef TEMP_0_PIN
#define TEMP_0_PIN         10  // Analog Input

#undef TEMP_1_PIN
#define TEMP_1_PIN         11   // Analog Input

//
// Heaters / Fans
//

#undef  HEATER_0_PIN
#define HEATER_0_PIN       	RAMPS_D10_PIN

#undef  HEATER_1_PIN
#define HEATER_1_PIN       	RAMPS_D9_PIN

#undef  HEATER_BED_PIN 
#define HEATER_BED_PIN   	SERVO0_PIN

#undef FAN_PIN
#define FAN_PIN		        RAMPS_D8_PIN

#undef FAN0_PIN
#define FAN0_PIN		   	RAMPS_D8_PIN

#undef FAN1_PIN
#define FAN1_PIN		   	SERVO1_PIN

#undef FAN2_PIN
#define FAN2_PIN		   	SERVO2_PIN

#undef KILL_PIN
#define KILL_PIN		   25
