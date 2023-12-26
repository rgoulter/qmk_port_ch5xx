/*
Copyright 2022 Huckies <https://github.com/Huckies>
Copyright 2023 OctopusZ <https://github.com/OctopusZ>

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

/* USB Device descriptor parameter */
#define VENDOR_ID    0xCAFE
#define PRODUCT_ID   0x0B92
#define DEVICE_VER   0x0001
#define MANUFACTURER rgoulter
#define PRODUCT      Wabble-60

#define MATRIX_ROWS 8
#define MATRIX_COLS 8
#define MATRIX_ROW_PINS { A8, A9, B15, B14, B13, B12, B7, B4 }
#define MATRIX_COL_PINS { A4, A5, A15, A14, A13, A12, A11, A10 }

#define DIODE_DIRECTION       COL2ROW
#define BOOTMAGIC_LITE_ROW    0
#define BOOTMAGIC_LITE_COLUMN 0

#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP FALSE

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 20
