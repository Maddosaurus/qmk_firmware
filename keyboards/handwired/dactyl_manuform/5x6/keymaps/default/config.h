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

/* pmw3360 config  */
/*Set up trackball sensor integration on Elite C Pin F6*/
#undef PMW3360_CS_PIN
#define PMW3360_CS_PIN                       F6
#define PMW3360_SPI_MODE                     3
#define PMW3360_SPI_DIVISOR                  64
