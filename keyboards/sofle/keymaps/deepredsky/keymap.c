 /* Copyright 2020 Josef Adamcik
  * Modification for VIA support and RGB underglow by Jens Bonk-Wiltfang
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

#include QMK_KEYBOARD_H
#include "oled.c"
#include "encoder.c"

#define TAPPING_TERM 200

// Left-hand home row mods
#define SFT_A LSFT_T(KC_A)
#define CTL_O LCTL_T(KC_O)
#define GUI_E LGUI_T(KC_E)
#define ALT_U LALT_T(KC_U)

// Right-hand home row mods
#define ALT_H LALT_T(KC_H)
#define GUI_T RGUI_T(KC_T)
#define CTL_N RCTL_T(KC_N)
#define SFT_S RSFT_T(KC_S)

//Default keymap. This can be changed in Via. Use oled.c and encoder.c to change beavior that Via cannot change.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
                       KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                               KC_6,     KC_7,   KC_8,     KC_9,    KC_0,  KC_BSPC,
                       KC_ESC,   KC_QUOT,  KC_COMM,  KC_DOT,   KC_P,     KC_Y,                                               KC_F,     KC_G,   KC_C,     KC_R,    KC_L,  KC_SLSH,
                      KC_TAB,   SFT_A,    CTL_O,    GUI_E,    ALT_U,    KC_I,                                               KC_D,     ALT_H,  GUI_T,    CTL_N,   SFT_S,  KC_BSLS,
                       KC_LSFT,  KC_SCLN,  KC_Q,     KC_J,     KC_K,     KC_X,    KC_MUTE,                           KC_NO,  KC_B,     KC_M,    KC_W,  KC_V,     KC_Z,  KC_RSFT,
                                        MO(1),    KC_RALT,  KC_LALT,  KC_LCTL,  KC_LGUI,                           KC_ENT,  KC_SPC,   MO(2),  KC_LBRC,  KC_RBRC
),

	[1] = LAYOUT(
                    KC_TRNS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                                              KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_DEL,
                    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                               KC_6,     KC_7,     KC_UP,    KC_9,     KC_0,     KC_EQL,
                    KC_TRNS,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,                                            KC_CIRC,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_RPRN,  KC_MINS,
                  KC_TRNS,  KC_EQL,   KC_MINS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  KC_TRNS,                           KC_TRNS,  KC_LBRC,  KC_RBRC,  KC_SCLN,  KC_COLN,  KC_BSLS,  KC_TRNS,
                                     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                             KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS
),

	[2] = LAYOUT(
           KC_EQL,   KC_TRNS,     KC_TRNS,       KC_TRNS,     KC_TRNS,     KC_TRNS,                              KC_TRNS,  KC_TRNS,        KC_TRNS,  KC_TRNS,        KC_TRNS,        KC_TRNS,
           KC_TRNS,  KC_INS,      KC_PSCR,       KC_APP,      KC_NO,       KC_NO,                                KC_PGUP,  LCTL(KC_LEFT),  KC_UP,    LCTL(KC_RGHT),  LCTL(KC_BSPC),  KC_BSPC,
           KC_TRNS,  KC_LALT,     LGUI(KC_TAB),  KC_LSFT,     KC_NO,       KC_CAPS,                              KC_PGDN,  KC_LEFT,        KC_DOWN,  KC_RGHT,        KC_DEL,         KC_BSPC,
             KC_TRNS,  LCTL(KC_Z),  LCTL(KC_X),    LCTL(KC_C),  LCTL(KC_V),  KC_NO,    KC_TRNS,        KC_TRNS,        KC_NO,    KC_HOME,        KC_NO,          KC_END,   KC_NO,  KC_TRNS,
                                        KC_TRNS,  KC_TRNS,     KC_TRNS,       KC_TRNS,    KC_TRNS,        KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,  KC_TRNS
),
};
