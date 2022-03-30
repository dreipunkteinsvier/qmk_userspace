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

#include "wrappers.h"

#define __BLANK_4_________________________ _______, _______, _______, _______
#define __BLANK_3________________ _______, _______, _______
#define __BLANK_2_______ _______, _______

#define __QWERTY_L1________________________________ KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define __QWERTY_L2________________________________ KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define __QWERTY_L2_GACS___________________________ HM_A,    HM_S,    HM_D,    HM_F,    KC_G
#define __QWERTY_L3________________________________ KC_Z,    KC_X,    KC_C,    KC_V,    KC_B
#define __QWERTY_L3_A______________________________ KC_Z,    HM_X,    KC_C,    KC_V,    KC_B

#define __QWERTY_R1________________________________ KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define __QWERTY_R2________________________________ KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define __QWERTY_R2_SCAG___________________________ KC_H,    HM_J,    HM_K,    HM_L,    HM_SCLN
#define __QWERTY_R3________________________________ KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH
#define __QWERTY_R3_A______________________________ KC_N,    KC_M,    KC_COMM, HM_DOT,  KC_SLASH

#define __3_KEY_L4_________________________________ KC_ESC, LT(MEDIA, KC_TAB), LT(NAV, KC_ENT)
#define __3_KEY_R4_________________________________ LT(NUM, KC_SPC), LT(FUNC, KC_BSPC), KC_DEL

#define __2_KEY_L4______ LT(MEDIA, KC_TAB), LT(NAV, KC_ENT)
#define __2_KEY_R4______ LT(NUM, KC_SPC), LT(FUNC, KC_BSPC)

#define __GACS_L2_________________________ KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT
#define __SCAG_R2_________________________ KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI

#define __NAV_R1__________________________ LCTL(KC_LEFT), LCTL(KC_DOWN), LCTL(KC_UP), LCTL(KC_RGHT)
#define __NAV_R2__________________________ KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
#define __NAV_R3__________________________ KC_HOME, KC_PGDN, KC_PGUP, KC_END

#define __MEDIA_R1_________________________________ RGB_TOG, RGB_MOD,  RGB_HUI, RGB_SAI, RGB_VAI
#define __MEDIA_R2_________________________________ RGB_M_P, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD
#define __MEDIA_R3_________________________________ _______, KC_MUTE,  KC_VOLD, KC_VOLU, QK_BOOTLOADER

#define __NUM_L1___________________________________ KC_MINS, KC_7,    KC_8,    KC_9,     KC_0
#define __NUM_L2___________________________________ KC_EQL,  KC_4,    KC_5,    KC_6,     KC_QUOT
#define __NUM_L3___________________________________ KC_GRV,  KC_1,    KC_2,    KC_3,     KC_BSLS

#define __SYM_L1___________________________________ KC_UNDS, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN
#define __SYM_L2___________________________________ KC_PLUS, KC_DLR,  KC_PERC, KC_CIRC, KC_DQUO
#define __SYM_L3___________________________________ KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE

#define __FUN_L1___________________________________ KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR
#define __FUN_L2___________________________________ KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_CAPS
#define __FUN_L3___________________________________ KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_INS


#define __HHKB_BASE_ROW1___________________________ KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV
#define __HHKB_BASE_ROW2___________________________ KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC
#define __HHKB_BASE_ROW3___________________________ KC_LCTL, HM_A, HM_S, HM_D, HM_F, KC_G, KC_H, HM_J, HM_K, HM_L, HM_SCLN, KC_QUOT, KC_ENT
#define __HHKB_BASE_ROW4___________________________ KC_LSFT, KC_Z, HM_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, HM_DOT, KC_SLSH, KC_RSFT, MO(RAISE)
#define __HHKB_BASE_ROW5___________________________ KC_LGUI, KC_LALT,  LT(LOWER, KC_SPC), KC_RALT, KC_APP

#define __HHKB_RAISE_ROW1__________________________ _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL
#define __HHKB_RAISE_ROW2__________________________ _______, _______, _______, _______,   RESET, _______, _______, _______, _______, _______, KC_PSCR,   KC_UP, _______,  KC_DEL
#define __HHKB_RAISE_ROW3__________________________ _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, KC_LEFT, KC_RGHT, _______
#define __HHKB_RAISE_ROW4__________________________ _______, _______, _______, _______, _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_DOWN, _______, _______
#define __HHKB_RAISE_ROW5__________________________ _______, _______, _______, _______, _______

#define __HHKB_LOWER_ROW1__________________________ _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL
#define __HHKB_LOWER_ROW2__________________________ _______, _______, _______, _______, _______, KC_LCBR, KC_RCBR, __NAV_R1__________________________,   KC_UP, _______,  KC_DEL
#define __HHKB_LOWER_ROW3__________________________ _______, _______, _______, _______, _______, KC_LPRN, KC_RPRN, __NAV_R2__________________________, _______, _______
#define __HHKB_LOWER_ROW4__________________________ _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC, __NAV_R3__________________________, _______, _______
#define __HHKB_LOWER_ROW5__________________________ _______, _______, _______, _______, _______
