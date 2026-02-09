#pragma once

// Keep this keymap-specific tweak local:
// put quote on the right-hand home row outer key.
#define MIRYOKU_LAYER_BASE \
U_NP, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, U_NP,              \
U_NP, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, LSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L), LGUI_T(KC_SCLN), KC_QUOT,   \
U_NP, LT(U_BUTTON, KC_Z), ALGR_T(KC_X), KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, ALGR_T(KC_DOT), LT(U_BUTTON, KC_SLSH), U_NP, \
U_NP, U_NP, LT(U_MEDIA,KC_ESC), LT(U_NAV,KC_SPC), LT(U_MOUSE,KC_TAB), LT(U_SYM,KC_ENT), LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL), U_NP, U_NP

#define MIRYOKU_LAYER_TAP \
U_NP, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, U_NP,              \
U_NP, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,        \
U_NP, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, U_NP,      \
U_NP, U_NP, KC_ESC, KC_SPC, KC_TAB, KC_ENT, KC_BSPC, KC_DEL, U_NP, U_NP
