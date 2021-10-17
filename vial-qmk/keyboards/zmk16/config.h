/* Copyright 2021 Ziddymakes
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
#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0x7546   // "UD" = Ungodly Design
#define PRODUCT_ID 0x4877  // "LP" = Launch Pad
#define DEVICE_VER 0x0002
#define MANUFACTURER ZiddyMakes
#define PRODUCT ZMK_16_KEY

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

#define DIRECT_PINS { \
    { D1, D0, D4, C6}, \
    { D7, E6, B4, B5 }, \
    { B6, B2, B3, B1 }, \
    { F7, F6, F5, F4 } \
}
#define UNUSED_PINS