/* Copyright 2023 Jawick
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

enum layer_names {
  _COLEMAKDH,
  _NUM,
  _NAV,
  _SYM
};

#define NUM MO(_NUM)
#define NAV MO(_NAV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* _COLEMAKDH
 * ,-----------------------------------------------------------------------------------.
 * |   Q  |   W  |   F  |   P  |   B  |             |   J  |   L  |   U  |   Y  |   ;  |
 * |------+------+------+------+------+             +------+------+------+------+------|
 * |   A  |   R  |   S  |   T  |   G  |             |   M  |   N  |   E  |   I  |   O  |
 * |------+------+------+------+------+             +------+------+------+------+------|
 * |   Z  |   X  |   C  |   D  |   V  |             |   K  |   H  |   ,  |   .  |   /  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | WIN  | CTRL | ALT  |Lower |  SPC |             |Raise |  <-  | Down | BOOT | ENT  |
 * `-----------------------------------------------------------------------------------'
 */
[_COLEMAKDH] = LAYOUT(
    KC_Q,         KC_W,    KC_F,    KC_P,     KC_B,     KC_1,   KC_J,           KC_L,     KC_U,    KC_Y,    KC_SCLN,
    KC_A,         KC_R,    KC_S,    KC_T,     KC_G,     KC_2,   KC_M,           KC_N,     KC_E,    KC_I,    KC_O,
    KC_Z,         KC_X,    KC_C,    KC_D,     KC_V,     KC_3,   KC_K,           KC_H,     KC_COMM, KC_DOT,  KC_SLSH,
    KC_LEFT_GUI,  KC_LCTL, KC_TAB,  NUM,      KC_SPC,   KC_5,   KC_BACKSPACE,   NAV,      KC_DOWN, QK_BOOT, KC_ENT
),

/* _NUM
 * ,-----------------------------------------------------------------------------------.
 * |   Q  |   W  |   F  |   P  |   B  |             |   J  |   L  |   U  |   Y  |   ;  |
 * |------+------+------+------+------+             +------+------+------+------+------|
 * |   A  |   R  |   S  |   T  |   G  |             |   M  |   N  |   E  |   I  |   O  |
 * |------+------+------+------+------+             +------+------+------+------+------|
 * |   Z  |   X  |   C  |   D  |   V  |             |   K  |   H  |   ,  |   .  |   /  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | WIN  | CTRL | ALT  |Lower |  SPC |             |Raise |  <-  | Down | BOOT | ENT  |
 * `-----------------------------------------------------------------------------------'
 */
[_NUM] = LAYOUT(
    KC_ESC,       KC_F10,     KC_F11,  KC_F12,   KC_NO,     KC_1,   KC_SLSH,      KC_7,    KC_8,    KC_9,    KC_MINS,
    KC_LGUI,      KC_LALT,    KC_LCTL, KC_LSFT,  KC_TAB,    KC_2,   KC_EQL,       KC_4,    KC_5,    KC_6,    KC_PLUS,
    KC_ENT,       KC_F7,      KC_F8,   KC_F9,    KC_NO,     KC_3,   KC_0,         KC_1,    KC_2,    KC_3,    KC_ASTERISK,
    KC_LEFT_GUI,  KC_LCTL,    KC_TAB,  NUM,      KC_SPC,    KC_5,   KC_BACKSPACE, NAV,     KC_DOWN, QK_BOOT, KC_ENT
),

/* _NAV
 * ,-----------------------------------------------------------------------------------.
 * |   Q  |   W  |   F  |   P  |   B  |             |   J  |   L  |   U  |   Y  |   ;  |
 * |------+------+------+------+------+             +------+------+------+------+------|
 * |   A  |   R  |   S  |   T  |   G  |             |   M  |   N  |   E  |   I  |   O  |
 * |------+------+------+------+------+             +------+------+------+------+------|
 * |   Z  |   X  |   C  |   D  |   V  |             |   K  |   H  |   ,  |   .  |   /  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | WIN  | CTRL | ALT  |Lower |  SPC |             |Raise |  <-  | Down | BOOT | ENT  |
 * `-----------------------------------------------------------------------------------'
 */
[_NAV] = LAYOUT(
    KC_ESC,       KC_PGUP,    KC_UP,    KC_PGDN,  KC_NO,    KC_1,   KC_NO,          KC_F4,    KC_F5,   KC_F6,    KC_NO,
    KC_HOME,      KC_LEFT,    KC_DOWN,  KC_RGHT,  KC_END,   KC_2,   KC_NO,          KC_LSFT,  KC_LCTL, KC_LALT,  KC_LGUI,
    KC_NO,        KC_NO,      KC_NO,    KC_NO,    KC_NO,    KC_3,   KC_NO,          KC_F1,    KC_F2,   KC_F3,    KC_ENT,
    KC_LEFT_GUI,  KC_LCTL,    KC_TAB,   NUM,      KC_SPC,   KC_5,   KC_BACKSPACE,   NAV,      KC_DOWN, QK_BOOT,  KC_ENT
),

/* _SYM
 * ,-----------------------------------------------------------------------------------.
 * |   Q  |   W  |   F  |   P  |   B  |             |   J  |   L  |   U  |   Y  |   ;  |
 * |------+------+------+------+------+             +------+------+------+------+------|
 * |   A  |   R  |   S  |   T  |   G  |             |   M  |   N  |   E  |   I  |   O  |
 * |------+------+------+------+------+             +------+------+------+------+------|
 * |   Z  |   X  |   C  |   D  |   V  |             |   K  |   H  |   ,  |   .  |   /  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | WIN  | CTRL | ALT  |Lower |  SPC |             |Raise |  <-  | Down | BOOT | ENT  |
 * `-----------------------------------------------------------------------------------'
 */
[_SYM] = LAYOUT(
    KC_PERC,        S(KC_QUOT),   KC_LBRC, KC_RBRC,   KC_NUBS,     KC_1,   KC_NO,         KC_NO,    KC_CIRC,  KC_NO,        KC_NO,
    KC_NONUS_HASH,  KC_EXLM,      KC_LPRN, KC_RPRN,   S(KC_NUBS),  KC_2,   KC_UNDS,       KC_QUOT,  S(KC_2),  S(KC_NUHS),   KC_GRV,
    KC_DLR,         S(KC_3),      KC_LCBR, KC_RCBR,   KC_AMPR,     KC_3,   KC_NO,         KC_NO,    KC_NO,    KC_NO,        KC_NO,
    KC_LEFT_GUI,    KC_LCTL,      KC_TAB,  NUM,       KC_SPC,      KC_5,   KC_BACKSPACE,  NAV,      KC_DOWN,  QK_BOOT,      KC_ENT
)};


layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _NUM, _NAV, _SYM);
}
