// Copyright 2022 @waffle87
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_RBRC, KC_PGUP, KC_HOME, KC_EQL,
    KC_LBRC, KC_PGDN, KC_END, KC_MINS,
    KC_LSFT,  DF(1), KC_LOPT, KC_LGUI
  ),
  [1] = LAYOUT(
    _______, _______, _______, _______,
    _______, _______, _______, _______,
    _______, DF(0), _______, QK_BOOT
  )
};
