#include QMK_KEYBOARD_H

#define _QWERTY 0

enum custom_keycodes {
   QWERTY = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_default(
        KC_7,   KC_8,   KC_9,   \
        KC_4,   KC_5,   KC_6,   \
        KC_1,   KC_2,   KC_3,   \
        KC_0,   KC_COMM,KC_ENT  \
    ),
};