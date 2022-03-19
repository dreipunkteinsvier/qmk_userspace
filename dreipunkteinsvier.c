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

#include "dreipunkteinsvier.h"

// Toggle caps lock following a word
static void process_caps_word(uint16_t keycode, keyrecord_t *record) {
	// Get base key code from mod tap
	if (record->tap.count &&
		((QK_MOD_TAP < keycode && keycode < QK_MOD_TAP_MAX) ||
		(QK_LAYER_TAP < keycode && keycode < QK_LAYER_TAP_MAX))
	) { keycode &= 0x00FF; }

	// Deactivate caps lock with listed keycodes
	switch (keycode) {
		case KC_TAB:
		case KC_ESC:
		case KC_SPC:
		case KC_ENT:
		case KC_DOT:
		case KC_EQL:
		case KC_GESC:
			tap_code(KC_CAPS);
	}
}

bool process_record_user(uint16_t const keycode, keyrecord_t *record) {
    
	if (record->event.pressed) {
		if (host_keyboard_led_state().caps_lock) { process_caps_word(keycode, record); }
	}

	return true; // Continue with unmatched keycodes
}

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}
#endif