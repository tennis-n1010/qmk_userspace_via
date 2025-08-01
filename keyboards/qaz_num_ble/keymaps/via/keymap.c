// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_NUM,   KC_PSLS,   KC_PAST,   KC_PMNS,
        KC_P7,    KC_P8,     KC_P9,     KC_PPLS,
        KC_P4,    KC_P5,     KC_P6,     _______,
        KC_P1,    KC_P2,     KC_P3,     KC_PENT,
        KC_P0,    _______,     KC_PDOT,   _______
    ),
    [1] = LAYOUT(
        _______,    _______,   _______,   _______,
        _______,    _______,   _______,   _______,
        _______,    _______,   _______,   _______,
        _______,    _______,   _______,   _______,
        _______,    _______,   _______,   _______
    ),
    [2] = LAYOUT(
        _______,    _______,   _______,   _______,
        _______,    _______,   _______,   _______,
        _______,    _______,   _______,   _______,
        _______,    _______,   _______,   _______,
        _______,    _______,   _______,   _______
    ),
    [3] = LAYOUT(
        _______,    _______,   _______,   _______,
        _______,    _______,   _______,   _______,
        _______,    _______,   _______,   _______,
        _______,    _______,   _______,   _______,
        _______,    _______,   _______,   _______
    ),
    [4] = LAYOUT(
        _______,    _______,   _______,   _______,
        _______,    _______,   _______,   _______,
        _______,    _______,   _______,   _______,
        _______,    _______,   _______,   _______,
        _______,    _______,   _______,   _______
    )
};
