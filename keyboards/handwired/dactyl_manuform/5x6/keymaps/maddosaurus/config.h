/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* The halves are wired with I2C */
#define USE_I2C

/* I have an Elite C on the right side for the trackball, hence right is master */
#define MASTER_RIGHT

// wiring of each half
#define MATRIX_COL_PINS_RIGHT { D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS_RIGHT { B7, D5, C7, F1, F0, F6 }
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS { F6, F7, B1, B3, B2, B6 }

/* pmw3360 config  */
/*Set up trackball sensor integration on Elite C Pin ~F6~ F7*/
#undef PMW33XX_CS_PIN
#define PMW33XX_CS_PIN F7
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define PMW33XX_LIFTOFF_DISTANCE 0x06

/* Tilt the sensor input to the left and invert the left/right axis */
#define ROTATIONAL_TRANSFORM_ANGLE -60
#define POINTING_DEVICE_INVERT_X

/* Config general trackball and scroll CPI/DPI */
#define TB_MOUSE_CPI 800
#define TB_SCROLL_CPI 100
