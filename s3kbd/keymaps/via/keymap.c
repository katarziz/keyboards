#include QMK_KEYBOARD_H

#define ____ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_default(
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
            KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,             \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
   KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
   KC_ESC,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,  \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
                              KC_LCTL, KC_BSPC, ____,             KC_LSFT, KC_SPC,  KC_LALT                             \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
),
[1] = LAYOUT_default(
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
            KC_1,    KC_2,    KC_3,    KC_4,    KC_5,             KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,            \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
   ____,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,               KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_COPY, KC_GRV,  \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
   KC_BSPC, KC_LBRC, KC_RBRC, KC_BSLS, KC_MINS, KC_EQL,           KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_PSTE, RESET  , \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
                              KC_LCTL, KC_DEL,  KC_TRNS,          KC_LSFT, KC_ENT,  KC_LALT                             \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
),
[2] = LAYOUT_default(
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
            KC_1,    KC_2,    KC_3,    KC_4,    KC_5,             KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,            \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
   ____,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,               KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_COPY, KC_GRV,  \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
   KC_BSPC, KC_LBRC, KC_RBRC, KC_BSLS, KC_MINS, KC_EQL,           KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_PSTE, RESET  , \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
                              KC_LCTL, KC_DEL,  KC_TRNS,          KC_LSFT, KC_ENT,  KC_LALT                             \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
),
[3] = LAYOUT_default(
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
            KC_1,    KC_2,    KC_3,    KC_4,    KC_5,             KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,            \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
   ____,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,               KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_COPY, KC_GRV,  \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
   KC_BSPC, KC_LBRC, KC_RBRC, KC_BSLS, KC_MINS, KC_EQL,           KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_PSTE, RESET  , \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
                              KC_LCTL, KC_DEL,  KC_TRNS,          KC_LSFT, KC_ENT,  KC_LALT                             \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
),
[4] = LAYOUT_default(
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
            KC_1,    KC_2,    KC_3,    KC_4,    KC_5,             KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,            \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
   ____,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,               KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_COPY, KC_GRV,  \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
   KC_BSPC, KC_LBRC, KC_RBRC, KC_BSLS, KC_MINS, KC_EQL,           KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_PSTE, RESET  , \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
                              KC_LCTL, KC_DEL,  KC_TRNS,          KC_LSFT, KC_ENT,  KC_LALT                             \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
),
[5] = LAYOUT_default(
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
            KC_1,    KC_2,    KC_3,    KC_4,    KC_5,             KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,            \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
   ____,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,               KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_COPY, KC_GRV,  \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
   KC_BSPC, KC_LBRC, KC_RBRC, KC_BSLS, KC_MINS, KC_EQL,           KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_PSTE, RESET  , \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
                              KC_LCTL, KC_DEL,  KC_TRNS,          KC_LSFT, KC_ENT,  KC_LALT                             \
//+--------+--------+--------+--------+--------+--------+        +--------+--------+--------+--------+--------+--------+
),
};