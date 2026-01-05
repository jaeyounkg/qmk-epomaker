/* Copyright 2025 tebu
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 */

#include QMK_KEYBOARD_H
#include "rdmctmzt_common.h"
#include "keymap_japanese.h"

/* ───────────── custom keycodes ───────────── */
enum custom_keycodes {
    JP_TOG = QK_USER,
    JP_CUSTOM_GRV,
};

/* ───────────── layers ───────────── */
enum layers {
    _BASE,
    _QWERTY,
    _FN,
    _LOWER,
    _RAISE,
    _ARROWS,
    _SYMBOLS,
    _MOUSE,
};

/* ───────────── layer access shortcuts ───────────── */
#define LOWER   MO(_LOWER)
#define RAISE   MO(_RAISE)
#define FN      MO(_FN)
#define THUMB0  GUI_T(KC_BSPC)
#define THUMB1  CTL_T(KC_SPC)
#define TO_MOUSE     TO(_MOUSE)
#define TO_BASE TO(_BASE)

/* ───────────── placeholder for empty middle keys ───────────── */
#define __X__   KC_NO

/* ───────────── keymaps ───────────── */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* ───── Colemak base ───── */
[_BASE] = LAYOUT_tkl_ansi(
    KC_Q,    KC_Z,    KC_F,    KC_P,    KC_V,    __X__,   KC_J,    KC_L,    KC_U,    KC_Y,    KC_X,    FN,
    KC_A,    KC_R,    LT(_ARROWS,KC_S), LT(_SYMBOLS,KC_T), KC_G, __X__, KC_K, GUI_T(KC_N), CTL_T(KC_E), ALT_T(KC_I), KC_O,
    KC_LSFT, KC_W,    KC_C,    ALT_T(KC_D),KC_B,   TO_MOUSE,   TO_BASE,   KC_M,    KC_H,    KC_COMM, KC_DOT,  KC_RSFT,
    KC_TAB,  KC_LGUI, THUMB0,           THUMB1,  LT(_LOWER,KC_ESC), LT(_RAISE,KC_ENT),       KC_ENT,  JP_TOG,  TG(_QWERTY)
),

/* ───── QWERTY ───── */
[_QWERTY] = LAYOUT_tkl_ansi(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    __X__,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    FN,
    KC_A,    KC_S,    LT(_ARROWS,KC_D), LT(_SYMBOLS,KC_F), KC_G, __X__, KC_H, GUI_T(KC_J), CTL_T(KC_K), ALT_T(KC_L), KC_SCLN,
    KC_LSFT, KC_Z,    KC_X,    ALT_T(KC_C),    KC_V,    __X__,   __X__,   KC_B,    KC_N,    KC_M,    KC_SLSH, KC_RSFT,
    KC_TAB,  KC_LGUI,  THUMB0,           THUMB1,  LT(_LOWER,KC_ESC),RAISE,          KC_ENT,  JP_TOG,  TG(_QWERTY)
),

/* ───── FN (TH40 wireless/RGB controls) ───── */
[_FN] = LAYOUT_tkl_ansi(
    QK_BAT,  EE_CLR,  KC_TRNS, KC_TRNS, KC_TRNS, __X__,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_CAPS, MD_BLE1, MD_BLE2, MD_BLE3, MD_24G,  MD_USB,  KC_TRNS, RM_VALU, RM_SATD, RM_TOGG, KC_TRNS,
    KC_LSFT, RM_NEXT, RM_SPDD, RM_SPDU, KC_TRNS, __X__,   __X__,   RM_HUED, RM_VALD, RM_HUEU, KC_TRNS, MW_CH,
    KC_TRNS, KC_TRNS, QK_WLO,           KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
),

/* ───── LOWER (F-keys, media) ───── */
[_LOWER] = LAYOUT_tkl_ansi(
    KC_SCRL, KC_INS,  KC_F11,  KC_F12,  KC_PSCR, __X__,   KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_PAUSE, KC_TRNS,
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   __X__,   KC_MPRV, KC_MPLY, KC_MNXT, KC_BRID, KC_BRIU,
    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  __X__,   __X__,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_DEL,           KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, TO(_BASE)
),

/* ───── RAISE (numbers, brackets) ───── */
[_RAISE] = LAYOUT_tkl_ansi(
    KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_DQUO, __X__,   KC_SCLN, KC_7,    KC_8,    KC_9,    KC_BSLS, KC_TRNS,
    KC_QUOT, KC_DOT,  KC_COMM, KC_0,    KC_LCBR, __X__,   KC_RCBR, KC_1,    KC_2,    KC_3,    KC_COLN,
    KC_LSFT, KC_UNDS, KC_MINS, KC_EQL,  KC_GRV,  __X__,   __X__,   KC_SLSH, KC_4,    KC_5,    KC_6,    KC_RSFT,
    KC_TRNS, KC_TRNS, KC_TAB,           KC_TRNS, KC_TRNS, KC_TRNS,          KC_0,    KC_TRNS, TO(_BASE)
),

/* ───── ARROWS (navigation) ───── */
[_ARROWS] = LAYOUT_tkl_ansi(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, __X__,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PAUSE, KC_TRNS,
    KC_LGUI, KC_LALT, KC_TRNS, KC_LSFT, KC_TRNS, __X__,   KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, __X__,   __X__,   KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    KC_TRNS, KC_TRNS, KC_LGUI,          KC_LCTL, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, TO(_BASE)
),

/* ───── SYMBOLS ───── */
[_SYMBOLS] = LAYOUT_tkl_ansi(
    KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_QUOT, __X__,   KC_SCLN, KC_AMPR, KC_ASTR, JP_CUSTOM_GRV, KC_PIPE, KC_TRNS,
    KC_DQUO, KC_DOT,  KC_COMM, KC_TRNS, KC_LCBR, __X__,   KC_RCBR, KC_EXLM, KC_AT,   KC_HASH, KC_COLN,
    KC_LSFT, KC_UNDS, KC_MINS, KC_EQL,  KC_TILD, __X__,   __X__,   KC_QUES, KC_DLR,  KC_PERC, KC_CIRC, JP_TILD,
    KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
),

/* ───── MOUSE ───── */
[_MOUSE] = LAYOUT_tkl_ansi(
    KC_NO,   KC_NO,   MS_UP,   KC_NO,   KC_NO,   __X__,   KC_NO,   KC_NO,   MS_WHLU, KC_NO,   KC_NO,   KC_TRNS,
    KC_NO,   MS_LEFT, MS_DOWN, MS_RGHT, KC_NO,   __X__,   KC_NO,   MS_BTN1, MS_WHLD, MS_BTN2, KC_NO,
    KC_LSFT, KC_LALT, KC_NO,   KC_NO,   KC_NO,   TO_MOUSE, TO_BASE, KC_NO, MS_WHLL, KC_NO, MS_WHLR, KC_NO,
    KC_TRNS, KC_TRNS, KC_TRNS,          KC_LCTL, KC_TRNS, MS_ACL2,         KC_TRNS, KC_TRNS, TO(_BASE)
),

};

/* ─────────── JP toggle state ─────────── */
static bool jp_mode = false;  // OFF by default

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    /* JP mode toggle */
    if (keycode == JP_TOG && record->event.pressed) {
        jp_mode = !jp_mode;
        return false;
    }

    /* JP remap on RAISE / SYMBOLS layers */
    if (jp_mode && (layer_state_is(_RAISE) || layer_state_is(_SYMBOLS))) {
        uint8_t mods = get_mods();
        uint16_t jp = 0;
        bool consume_shift = false;

        switch (keycode) {
            case KC_UNDS: jp = JP_UNDS; break;
            case KC_LBRC: jp = JP_LBRC; break;
            case KC_RBRC: jp = JP_RBRC; break;
            case KC_BSLS: jp = JP_YEN;  break;
            case KC_LCBR: jp = JP_LCBR; break;
            case KC_RCBR: jp = JP_RCBR; break;
            case KC_LPRN: jp = JP_LPRN; break;
            case KC_RPRN: jp = JP_RPRN; break;
            case KC_COLN: jp = JP_COLN; break;
            case KC_DQUO: jp = JP_DQUO; break;
            case KC_AT:   jp = JP_AT;   break;
            case KC_CIRC: jp = JP_CIRC; break;
            case KC_AMPR: jp = JP_AMPR; break;
            case KC_ASTR: jp = JP_ASTR; break;
            case KC_PIPE: jp = JP_PIPE; break;
            case JP_CUSTOM_GRV: jp = JP_GRV; break;

            /* shift-aware */
            case KC_GRV:  jp = (mods & MOD_MASK_SHIFT) ? S(JP_CIRC) : JP_GRV; break;
            case KC_EQL:  jp = (mods & MOD_MASK_SHIFT) ? JP_PLUS : JP_EQL; break;
            case KC_QUOT: jp = (mods & MOD_MASK_SHIFT) ? JP_DQUO : JP_QUOT; break;
            case KC_7:    jp = (mods & MOD_MASK_SHIFT) ? JP_AMPR : JP_7; break;
            case KC_8:    jp = (mods & MOD_MASK_SHIFT) ? JP_ASTR : JP_8; break;
            case KC_9:    jp = (mods & MOD_MASK_SHIFT) ? JP_LPRN : JP_9; break;
            case KC_0:    jp = (mods & MOD_MASK_SHIFT) ? JP_RPRN : JP_0; break;
            case KC_MINS: jp = (mods & MOD_MASK_SHIFT) ? JP_UNDS : JP_MINS; break;

            case KC_SCLN:
                if (mods & MOD_MASK_SHIFT) { jp = JP_COLN; consume_shift = true; }
                else jp = JP_SCLN;
                break;
            case KC_2:
                if (mods & MOD_MASK_SHIFT) { jp = JP_AT; consume_shift = true; }
                else jp = JP_2;
                break;
            case KC_6:
                if (mods & MOD_MASK_SHIFT) { jp = JP_CIRC; consume_shift = true; }
                else jp = JP_6;
                break;

            default:
                return true;  // not a remapped key
        }

        if (record->event.pressed) {
            if (consume_shift) { del_mods(MOD_MASK_SHIFT); }
            tap_code16(jp);
            if (consume_shift) { set_mods(mods); }
        }
        return false;  // swallow original
    }

    return true;
}

/* ─────────── Layer-based LED control ─────────── */
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    // Only show LEDs when FN layer is active
    if (!layer_state_is(_FN)) {
        // Turn off all LEDs on non-FN layers
        for (uint8_t i = led_min; i < led_max; i++) {
            rgb_matrix_set_color(i, 0, 0, 0);
        }
    }
    return true;  // Continue to kb handler for battery/BT indicators on FN layer
}

/* ─────────── Per-key tapping term ─────────── */
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(_RAISE, KC_ENT):
            return 100;
        default:
            return TAPPING_TERM;  // 150ms from config.h
    }
}

/* ─────────── Per-key permissive hold ─────────── */
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(_RAISE, KC_ENT):
            return true;
        default:
            return false;
    }
}
