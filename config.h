 /* Copyright 2021 nut1414
  * 
  * This program is free software: you can redistribute it and/or modify 
  * it under the terms of the GNU General Public License as published by 
  * the Free Software Foundation, either version 2 of the License, or 
  * (at your option) any later version. 
  * 
  * This program is distributed in the hope that it will be useful, 
  * but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
  * GNU General Public License for more details. 
  * 
  * You should have received a copy of the GNU General Public License 
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */ 



#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xA4A4
#define PRODUCT_ID      0x4401
#define DEVICE_VER      0x0001
#define MANUFACTURER    nut1414
#define PRODUCT         np12



/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 5

#define MATRIX_ROW_PINS { D7, E6, B4, F7 }
#define MATRIX_COL_PINS { D1, D0, D4, C6, F6 }
#define UNUSED_PINS


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A { F4 }
#define ENCODERS_PAD_B { F5 }

#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 4

#define VIAL_KEYBOARD_UID {0xE6, 0x9D, 0x50, 0x03, 0x4D, 0x5C, 0xA1, 0x94}
#define VIAL_ENCODER_DEFAULT { KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }

