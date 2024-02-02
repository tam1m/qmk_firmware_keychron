/* Copyright 2024 @ Keychron (https://www.keychron.com)
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
#include "keychron_common.h"

enum layers {
    ONE,
    TWO,
    THREE,
    FOUR,
};

// clang-format off
enum my_keycodes {
    // via only support QK_KB_ with custom labels. So use QK_KB_ instead of QK_USER_
    // keychron uses QK_KB_0 to QK_KB_15 for its predefined keys. See keychron_common.h
    // so we start using the next free one QK_KB_16
    MY_SYSRQ = QK_KB_16,
    MY_PW
};
// clang-format on

#define XXXXXXX KC_NO

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [ONE] = LAYOUT_tkl_ansi(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,        KC_MUTE,    KC_PSCR,  KC_CTANA, RGB_MOD,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,        KC_BSPC,    KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,       KC_BSLS,    KC_DEL,   KC_END,   KC_PGDN,
        MO(1),    KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,                 KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,                 KC_RSFT,              KC_UP,
        KC_LCTL,  KC_LCMD,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RWIN,  LT(1,KC_APP),  KC_RCTL,    KC_LEFT,  KC_DOWN,  KC_RGHT),


    [TWO] = LAYOUT_tkl_ansi(
        _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,    _______,    KC_P7,    KC_P8,    KC_P9,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_PMNS,  KC_PPLS,    _______,    KC_P4,    KC_P5,    KC_P6,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_P7,    KC_P8,    KC_P9,    XXXXXXX,  XXXXXXX,    KC_PSLS,    KC_P1,    KC_P2,    KC_P3,
        KC_CAPS,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,  KC_P4,    KC_P5,    KC_P6,    XXXXXXX,              KC_PAST,
        _______,            _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  BAT_LVL,  XXXXXXX,  XXXXXXX,  KC_P1,    KC_P2,    KC_P3,                MO(2),                _______,
        _______,  XXXXXXX,  _______,                                _______,                                KC_P0,    KC_PDOT,  XXXXXXX,    KC_RCTL,    KC_P0,    KC_PDOT,  KC_PENT),


    [THREE] = LAYOUT_tkl_ansi(
        MY_SYSRQ,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,   RGB_TOG,    _______,  _______,  QK_BOOT,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,              QK_LOCK,
        _______,            _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  MY_PW,                _______,              _______,
        _______,  _______,  _______,                                _______,                                _______,  GU_TOGG,  XXXXXXX,    _______,    _______,  _______,  _______),


    [FOUR] = LAYOUT_tkl_ansi(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,              _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,    _______,  _______,  _______),

};

// clang-format on
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [ONE]   = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [TWO]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [THREE] = {ENCODER_CCW_CW(RGB_HUD, RGB_HUI)},
    [FOUR]  = {ENCODER_CCW_CW(_______, _______)},
};
#endif // ENCODER_MAP_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }

    switch (keycode) {
        case MY_SYSRQ:
            if (record->event.pressed) {
                // Hold SysReq
                SEND_STRING(SS_DOWN(X_LALT) SS_DOWN(X_PSCR));

                // Type reisub
                SEND_STRING("r" SS_DELAY(500));
                SEND_STRING("e" SS_DELAY(2000));
                SEND_STRING("i" SS_DELAY(500));
                SEND_STRING("s" SS_DELAY(5000));
                SEND_STRING("u" SS_DELAY(2000));
                SEND_STRING("b");

                // Release SysReq
                SEND_STRING(SS_UP(X_PSCR) SS_UP(X_LALT));
            }
            return false;
            break;
        case MY_PW:
            if (record->event.pressed) {
                SEND_STRING("S" SS_DELAY(50) "E" SS_DELAY(50) "C" SS_DELAY(50) "R" SS_DELAY(50) "E" SS_DELAY(50) "T" SS_DELAY(50) "P" SS_DELAY(50) "W");
            }
            return false;
            break;
    }
    return true;
}

void matrix_scan_user(void) {}

void matrix_init_user(void) {}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (get_highest_layer(layer_state) > 0) {
        uint8_t   layer         = get_highest_layer(layer_state);
        __uint8_t current_hsv_v = rgb_matrix_get_val();

        HSV hsvcolor = {HSV_OFF};
        RGB rgbcolor = {RGB_OFF};

        uint8_t index   = 0;
        int     keycode = 0;

        for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
            for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                index   = g_led_config.matrix_co[row][col];
                keycode = keymap_key_to_keycode(layer, (keypos_t){col, row});

                if (index >= led_min && index < led_max && index != NO_LED) {
                    if (keycode > KC_TRNS) {
                        // layers specific
                        switch (get_highest_layer(layer_state | default_layer_state)) {
                            case 2:
                            case 1:
                            default:
                        }

                        // all layers
                        switch (keycode) {
                            case NK_TOGG:
                                hsvcolor = (HSV){HSV_YELLOW};
                                break;
                            case BAT_LVL:
                                hsvcolor = (HSV){HSV_GREEN};
                                break;
                            case MY_SYSRQ:
                                hsvcolor = (HSV){HSV_RED};
                                break;
                            default:
                                hsvcolor = rgb_matrix_config.hsv;
                        }

                        // set color
                        hsvcolor.v = current_hsv_v;
                        rgbcolor   = hsv_to_rgb(hsvcolor);
                        rgb_matrix_set_color(index, rgbcolor.r, rgbcolor.g, rgbcolor.b);
                    } else { // if (keycode > KC_TRNS) {
                        switch (get_highest_layer(layer_state | default_layer_state)) {
                            case 2:
                                break; // don't change matrix for layer 2
                            case 1:    // fall through - default backlight off
                            default:
                                rgb_matrix_set_color(index, RGB_OFF);
                        }
                    }
                }
            }
        }
    }
    return false;
}
