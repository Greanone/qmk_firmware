// Copyright 2022 @waffle87
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_EQL, KC_PGUP, KC_HOME, KC_END,
    KC_MINS, KC_PGDN, KC_LBRC, KC_RBRC,
    KC_LSFT,  DF(1), KC_LOPT, KC_LGUI
  ),
  [1] = LAYOUT(
    KC_EQL, KC_CUT, KC_COPY, KC_PSTE,
    DM_REC1, DM_REC2, DM_PLY1, DM_PLY2,
    DM_RSTP, DF(2), KC_AGIN, KC_UNDO
  ),
  [2] = LAYOUT(
    KC_PENT, KC_7, KC_8, KC_9,
    DF(3), KC_4, KC_5, KC_6,
    KC_0, KC_1, KC_2, KC_3
  ),
  [3] = LAYOUT(
    KC_VOLD, KC_VOLU, KC_MUTE, _,
    _, _, _, _,
    _, DF(0), _, QK_BOOT
  )
};
