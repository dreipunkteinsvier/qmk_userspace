/* Copyright (C) 2021 @dreipunkteinsvier
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

// Key and layout wrapper macros
#include "wrappers.h"

#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT
// #define TAPPING_FORCE_HOLD // surpress hold function of tap key
// #define PERMISSIVE_HOLD // trigger mod when second key is pressed even before tapping term is over

#ifdef RGBLIGHT_ENABLE
    #undef RGBLIGHT_ANIMATIONS
    #undef RGBLIGHT_LIMIT_VAL
    #undef RGBLIGHT_SLEEP
    #undef RGBLIGHT_HUE_STEP
    #undef RGBLIGHT_SAT_STEP
    #undef RGBLIGHT_VAL_STEP
    #undef RGBLIGHT_SPLIT

    #define RGBLIGHT_ANIMATIONS
    #define RGBLIGHT_LIMIT_VAL 255
    #define RGBLIGHT_SLEEP
    #define RGBLIGHT_HUE_STEP 8
    #define RGBLIGHT_SAT_STEP 8
    #define RGBLIGHT_VAL_STEP 8
    #define RGBLIGHT_SPLIT
#endif

#ifdef COMBO_ENABLE
    #define COMBO_TERM 20
    #define COMBO_ONLY_FROM_LAYER 0
#endif

#ifdef OLED_ENABLE
    #define OLED_TIMEOUT 10000
    #define OLED_DISABLE_TIMEOUT // Prevent matrix_changed triggering oled_on()
    #define OLED_UPDATE_INTERVAL 50
    #define OLED_BRIGHTNESS 180
#endif