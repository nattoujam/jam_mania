// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// 0,0 0,1 0,2 ...
// 1,0 1,1 1,2 ...
// 2,0 2,1 2,2 ...
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
      KC_NO,KC_1, KC_2, KC_3,  KC_A, KC_B, KC_C, KC_D,
            KC_4, KC_5, KC_6,  KC_E, KC_F, KC_G,
      KC_7, KC_8, KC_9, KC_0,  KC_H, KC_I, KC_J, KC_K
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
  // 2個目がある場合はこう
  // [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif
