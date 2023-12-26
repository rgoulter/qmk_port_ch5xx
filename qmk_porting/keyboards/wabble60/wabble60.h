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

#include "quantum.h"
#include "extra_keycode.h"

// clang-format off

#define LAYOUT( \
	K00, K50, K21, K71, K42, K13,    K63, K34, K05, K55, K26, K76, \
	K10, K60, K31, K02, K52, K23,    K73, K44, K15, K65, K36, K07, \
	K20, K70, K41, K12, K62, K33,    K04, K54, K25, K75, K46, K17, \
	K30, K01, K51, K22, K72, K43,    K14, K64, K35, K06, K56, K27, \
	K40, K11, K61, K32, K03, K53,    K24, K74, K45, K16, K66, K37 \
) \
{ \
    { K00, K01, K02, K03, K04, K05, K06, K07 }, \
    { K10, K11, K12, K13, K14, K15, K16, K17 }, \
    { K20, K21, K22, K23, K24, K25, K26, K27 }, \
    { K30, K31, K32, K33, K34, K35, K36, K37 }, \
    { K40, K41, K42, K43, K44, K45, K46, KC_NO }, \
    { K50, K51, K52, K53, K54, K55, K56, KC_NO }, \
    { K60, K61, K62, K63, K64, K65, K66, KC_NO }, \
    { K70, K71, K72, K73, K74, K75, K76, KC_NO }, \
}

#define LAYOUT_ortho_5x12 LAYOUT
