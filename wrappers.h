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

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 *  You can use _______ in place for KC_TRNS (transparent)   *
 *  Or you can use XXXXXXX for KC_NO (NOOP)                  *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#pragma once

#include "layers.h"

/*
 * === split land ===
 */

#define _QWERTY \
	KC_TAB,	 __QWERTY_L1________________________________,	__QWERTY_R1________________________________, KC_BSPC,	\
	HM_ESC,	 __QWERTY_L2_GACS___________________________,   __QWERTY_R2_SCAG___________________________, KC_QUOT,	\
	KC_LSFT, __QWERTY_L3________________________________,	__QWERTY_R3________________________________, KC_RSHIFT,	\
	    	 __3_KEY_L4_________________________________,	__3_KEY_R4_________________________________

/* ,-----------------------------------------.                ,-----------------------------------------.
 * | TAB  |  Q   |  W   |  E   |  R   |  T   |                |  Y   |  U   |  I   |  O   |  P   | BSPC |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * | CTRL |  A   |  S   |  D   |  F   |  G   |                |  H   |  J   |  K   |  L   | ; :  | ' "  |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * | L_SFT|  Z   |  X   |  C   |  V   |  B   |                |  N   |  M   | , <  | . >  | / ?  | R_SFT|
 * `------+------+------+------+------+------+------.  ,------+------+------+------+------+------+------'
 *                             |      |_LIGHT| _NAV |  |_NUMB | _FUN |      |
 *                             | ESC  | TAB  | ENT  |  | SPC  | BSPC | DEL  |
 *                             `--------------------'  `--------------------'
 */

 #define _COLEMAK \
	KC_TAB,	 __COLEMAK_L1_______________________________,	__COLEMAK_R1_______________________________, KC_BSPC,	\
	HM_ESC,	 __COLEMAK_L2_GACS__________________________,   __COLEMAK_R2_SCAG__________________________, KC_QUOT,	\
	KC_LSFT, __COLEMAK_L3_______________________________,	__COLEMAK_R3_______________________________, KC_RSHIFT,	\
	    	 __3_KEY_L4_________________________________,	__3_KEY_R4_________________________________

#define _NAV \
	_______, __BLANK_4_________________________, KC_LCBR,     KC_RCBR, __NAV_R1__________________________, _______, \
	_______, __GACS_L2_________________________, KC_LPRN,     KC_RPRN, __NAV_R2__________________________, _______, \
	_______, __BLANK_4_________________________, KC_LBRC,     KC_RBRC, __NAV_R3__________________________, _______, \
	                           __BLANK_3________________,     _______, MO(FUNC), _______

#define _LIGHT \
	_______, __BLANK_4_________________________, _______,     __LIGHT_R1_________________________________, _______, \
	_______, __GACS_L2_________________________, _______,     __LIGHT_R2_________________________________, _______, \
	_______, __BLANK_4_________________________, _______,     __LIGHT_R3_________________________________, _______, \
	                           __BLANK_3________________,     __BLANK_3________________

#define _NUM \
	_______, __NUM_L1___________________________________,     _______, __MEDIA_R1________________________, _______, \
	_______, __NUM_L2___________________________________,     _______, __SCAG_R2_________________________, _______, \
	_______, __NUM_L3___________________________________,     _______, __BLANK_4_________________________, _______, \
	                          _______, MO(FUNC), _______,     __BLANK_3________________

#define _FUN \
	_______, __FUN_L1___________________________________,     _______, __BLANK_4_________________________, _______, \
	_______, __FUN_L2___________________________________,     _______, __SCAG_R2_________________________, _______, \
	_______, __FUN_L3___________________________________,     _______, __BLANK_4_________________________, _______, \
	                           __BLANK_3________________,     __BLANK_3________________

// 42-key 3x6_3
#define LAYOUT_42key_wrapper(...) LAYOUT_split_3x6_3(__VA_ARGS__)

// 36-key split 3x5_3
#define LAYOUT_36key_wrapper(...) LAYOUT_split_3x5_3(__VA_ARGS__)
// 42-key to 36-key layout conversion
#define S42_36(k) SPLIT_3x6_3_TO_3x5_3(k)
#define SPLIT_3x6_3_TO_3x5_3( \
	k01, k02, k03, k04, k05, k06, k07, k08, k09, k10, k11, k12, \
	k13, k14, k15, k16, k17, k18, k19, k20, k21, k22, k23, k24, \
	k25, k26, k27, k28, k29, k30, k31, k32, k33, k34, k35, k36, \
	               k37, k38, k39, k40, k41, k42 \
) \
	     k02, k03, k04, k05, k06, k07, k08, k09, k10, k11, \
	     k14, k15, k16, k17, k18, k19, k20, k21, k22, k23, \
	     k26, k27, k28, k29, k30, k31, k32, k33, k34, k35, \
	               k37, k38, k39, k40, k41, k42

// 34-key split 3x5_2
#define LAYOUT_34key_wrapper(...) LAYOUT(__VA_ARGS__)
// 42-key to 34-key layout conversion
#define S42_34(k) SPLIT_3x6_3_TO_3x5_2(k)
#define SPLIT_3x6_3_TO_3x5_2( \
	k01, k02, k03, k04, k05, k06, k07, k08, k09, k10, k11, k12, \
	k13, k14, k15, k16, k17, k18, k19, k20, k21, k22, k23, k24, \
	k25, k26, k27, k28, k29, k30, k31, k32, k33, k34, k35, k36, \
	               k37, k38, k39, k40, k41, k42 \
) \
	     k02, k03, k04, k05, k06, k07, k08, k09, k10, k11, \
	     k14, k15, k16, k17, k18, k19, k20, k21, k22, k23, \
	     k26, k27, k28, k29, k30, k31, k32, k33, k34, k35, \
	                    k38, k39, k40, k41

/*
 * === chiffre land ===
 */

#define _uniQWERTY \
	__QWERTY_L1________________________________,	KC_MUTE,	__QWERTY_R1________________________________,	\
	__QWERTY_L2_GACS___________________________,				__QWERTY_R2_SCAG___________________________,	\
	__QWERTY_L3________________________________,				__QWERTY_R3________________________________,	\
							   __2_KEY_L4______,				__2_KEY_R4______

#define _uniCOLEMAK \
	__COLEMAK_L1_______________________________,	KC_MUTE,	__COLEMAK_R1_______________________________,	\
	__COLEMAK_L2_GACS__________________________,				__COLEMAK_R2_SCAG__________________________,	\
	__COLEMAK_L3_______________________________,				__COLEMAK_R3_______________________________,	\
							   __2_KEY_L4______,				__2_KEY_R4______

#define _uniNAV \
	__BLANK_4_________________________, KC_LCBR,	KC_TRNS,	KC_RCBR, __NAV_R1__________________________, \
	__GACS_L2_________________________, KC_LPRN,				KC_RPRN, __NAV_R2__________________________, \
	__BLANK_4_________________________, KC_LBRC,				KC_RBRC, __NAV_R3__________________________, \
	                           __BLANK_2_______,				__BLANK_DEL_____

#define _uniLIGHT \
	__BLANK_4_________________________, _______,	KC_TRNS,	__LIGHT_R1_________________________________, \
	__GACS_L2_________________________, _______,				__LIGHT_R2_________________________________, \
	__BLANK_4_________________________, _______,				__LIGHT_R3_________________________________, \
	                           __BLANK_2_______,				__BLANK_2_______

#define _uniNUM \
	__NUM_L1___________________________________,	KC_TRNS,	_______, __MEDIA_R1________________________, \
	__NUM_L2___________________________________,				_______, __SCAG_R2_________________________, \
	__NUM_L3___________________________________,				_______, __BLANK_4_________________________, \
	                           __BLANK_2_______,				__BLANK_2_______

#define _uniFUN \
	__FUN_L1___________________________________,	KC_TRNS,	_______, __BLANK_4_________________________, \
	__FUN_L2___________________________________,				_______, __SCAG_R2_________________________, \
	__FUN_L3___________________________________,				_______, __BLANK_4_________________________, \
	                           __BLANK_2_______,				__BLANK_2_______

#define LAYOUT_chiffre_wrapper(...) LAYOUT(__VA_ARGS__)

/*
 * === hhkb land ===
 */
#define RAISE 1
#define LOWER 2

#define _hhkbBASE \
	__HHKB_BASE_ROW1___________________________, \
	__HHKB_BASE_ROW2___________________________, \
	__HHKB_BASE_ROW3___________________________, \
	__HHKB_BASE_ROW4___________________________, \
	__HHKB_BASE_ROW5___________________________

#define _hhkbRAISE \
	__HHKB_RAISE_ROW1__________________________, \
	__HHKB_RAISE_ROW2__________________________, \
	__HHKB_RAISE_ROW3__________________________, \
	__HHKB_RAISE_ROW4__________________________, \
	__HHKB_RAISE_ROW5__________________________

#define _hhkbLOWER \
	__HHKB_LOWER_ROW1__________________________, \
	__HHKB_LOWER_ROW2__________________________, \
	__HHKB_LOWER_ROW3__________________________, \
	__HHKB_LOWER_ROW4__________________________, \
	__HHKB_LOWER_ROW5__________________________
	
#define LAYOUT_hhkb_wrapper(...) LAYOUT(__VA_ARGS__)
