#include QMK_KEYBOARD_H

#define ____ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_default(
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_COMM, \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
   KC_Z,    KC_X,    KC_C,    KC_V,    KC_UP,   KC_UP,   KC_B,    KC_N,    KC_M,    KC_DOT,  \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
                     KC_LEFT, KC_1,    KC_RGHT, KC_LEFT, KC_2,    KC_RGHT,                   \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
                                       KC_DOWN, KC_DOWN                                      \
),
[1] = LAYOUT_default(
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_COMM, \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
   KC_Z,    KC_X,    KC_C,    KC_V,    KC_UP,   KC_UP,   KC_B,    KC_N,    KC_M,    KC_DOT,  \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
                     KC_LEFT, KC_1,    KC_RGHT, KC_LEFT, KC_2,    KC_RGHT,                   \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
                                       KC_DOWN, KC_DOWN                                      \
),
[2] = LAYOUT_default(
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_COMM, \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
   KC_Z,    KC_X,    KC_C,    KC_V,    KC_UP,   KC_UP,   KC_B,    KC_N,    KC_M,    KC_DOT,  \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
                     KC_LEFT, KC_1,    KC_RGHT, KC_LEFT, KC_2,    KC_RGHT,                   \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
                                       KC_DOWN, KC_DOWN                                      \
),
[3] = LAYOUT_default(
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_COMM, \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
   KC_Z,    KC_X,    KC_C,    KC_V,    KC_UP,   KC_UP,   KC_B,    KC_N,    KC_M,    KC_DOT,  \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
                     KC_LEFT, KC_1,    KC_RGHT, KC_LEFT, KC_2,    KC_RGHT,                   \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
                                       KC_DOWN, KC_DOWN                                      \
),
[4] = LAYOUT_default(
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_COMM, \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
   KC_Z,    KC_X,    KC_C,    KC_V,    KC_UP,   KC_UP,   KC_B,    KC_N,    KC_M,    KC_DOT,  \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
                     KC_LEFT, KC_1,    KC_RGHT, KC_LEFT, KC_2,    KC_RGHT,                   \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
                                       KC_DOWN, KC_DOWN                                      \
),
[5] = LAYOUT_default(
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_COMM, \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
   KC_Z,    KC_X,    KC_C,    KC_V,    KC_UP,   KC_UP,   KC_B,    KC_N,    KC_M,    KC_DOT,  \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
                     KC_LEFT, KC_1,    KC_RGHT, KC_LEFT, KC_2,    KC_RGHT,                   \
//+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
                                       KC_DOWN, KC_DOWN                                      \
),
};