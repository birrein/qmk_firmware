// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: qmk

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once


#define MIRYOKU_ALTERNATIVES_BASE_AZERTY_FLIP \
U_NP, KC_A, KC_Z, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, U_NP,              \
U_NP, LGUI_T(KC_Q), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, LSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L), LGUI_T(KC_M), U_NP,      \
U_NP, LT(U_BUTTON, KC_W), ALGR_T(KC_X), KC_C, KC_V, KC_B, KC_N, KC_COMM, KC_DOT, ALGR_T(KC_SLSH), LT(U_BUTTON, KC_QUOT), U_NP,\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_BEAKL15_FLIP \
U_NP, KC_Q, KC_H, KC_O, KC_U, KC_X, KC_G, KC_C, KC_R, KC_F, KC_Z, U_NP,              \
U_NP, LGUI_T(KC_Y), LALT_T(KC_I), LCTL_T(KC_E), LSFT_T(KC_A), KC_DOT, KC_D, LSFT_T(KC_S), LCTL_T(KC_T), LALT_T(KC_N), LGUI_T(KC_B), U_NP,      \
U_NP, LT(U_BUTTON, KC_J), ALGR_T(KC_SLSH), KC_COMM, KC_K, KC_QUOT, KC_W, KC_M, KC_L, ALGR_T(KC_P), LT(U_BUTTON, KC_V), U_NP, \
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAK_FLIP \
U_NP, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, U_NP,           \
U_NP, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_D, KC_H, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O), U_NP,      \
U_NP, LT(U_BUTTON, KC_Z), ALGR_T(KC_X), KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, ALGR_T(KC_DOT), LT(U_BUTTON, KC_SLSH), U_NP,\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP \
U_NP, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, U_NP,           \
U_NP, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_M, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O), U_NP,      \
U_NP, LT(U_BUTTON, KC_Z), ALGR_T(KC_X), KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, ALGR_T(KC_DOT), LT(U_BUTTON, KC_SLSH), U_NP,\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK_FLIP \
U_NP, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, U_NP,           \
U_NP, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_K, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O), U_NP,      \
U_NP, LT(U_BUTTON, KC_Z), ALGR_T(KC_X), KC_C, KC_D, KC_V, KC_M, KC_H, KC_COMM, ALGR_T(KC_DOT), LT(U_BUTTON, KC_SLSH), U_NP,\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_DVORAK_FLIP \
U_NP, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, U_NP,              \
U_NP, LGUI_T(KC_A), LALT_T(KC_O), LCTL_T(KC_E), LSFT_T(KC_U), KC_I, KC_D, LSFT_T(KC_H), LCTL_T(KC_T), LALT_T(KC_N), LGUI_T(KC_S), U_NP,      \
U_NP, LT(U_BUTTON, KC_SLSH), ALGR_T(KC_Q), KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, ALGR_T(KC_V), LT(U_BUTTON, KC_Z), U_NP, \
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_HALMAK_FLIP \
U_NP, KC_W, KC_L, KC_R, KC_B, KC_Z, KC_QUOT, KC_Q, KC_U, KC_D, KC_J, U_NP,              \
U_NP, LGUI_T(KC_S), LALT_T(KC_H), LCTL_T(KC_N), LSFT_T(KC_T), KC_COMM, KC_DOT, LSFT_T(KC_A), LCTL_T(KC_E), LALT_T(KC_O), LGUI_T(KC_I), U_NP,      \
U_NP, LT(U_BUTTON, KC_F), ALGR_T(KC_M), KC_V, KC_C, KC_SLSH, KC_G, KC_P, KC_X, ALGR_T(KC_K), LT(U_BUTTON, KC_Y), U_NP, \
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_WORKMAN_FLIP \
U_NP, KC_Q, KC_D, KC_R, KC_W, KC_B, KC_J, KC_F, KC_U, KC_P, KC_QUOT, U_NP,           \
U_NP, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_H), LSFT_T(KC_T), KC_G, KC_Y, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_O), LGUI_T(KC_I), U_NP,      \
U_NP, LT(U_BUTTON, KC_Z), ALGR_T(KC_X), KC_M, KC_C, KC_V, KC_K, KC_L, KC_COMM, ALGR_T(KC_DOT), LT(U_BUTTON, KC_SLSH), U_NP,\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP \
U_NP, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, U_NP,              \
U_NP, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, LSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L), LGUI_T(KC_QUOT), U_NP,   \
U_NP, LT(U_BUTTON, KC_Z), ALGR_T(KC_X), KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, ALGR_T(KC_DOT), LT(U_BUTTON, KC_SLSH), U_NP,\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTZ_FLIP \
U_NP, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Z, KC_U, KC_I, KC_O, KC_P, U_NP,              \
U_NP, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, LSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L), LGUI_T(KC_QUOT), U_NP,   \
U_NP, LT(U_BUTTON, KC_Y), ALGR_T(KC_X), KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, ALGR_T(KC_DOT), LT(U_BUTTON, KC_SLSH), U_NP,\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_AZERTY \
U_NP, KC_A, KC_Z, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, U_NP,              \
U_NP, LGUI_T(KC_Q), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, LSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L), LGUI_T(KC_M), U_NP,      \
U_NP, LT(U_BUTTON, KC_W), ALGR_T(KC_X), KC_C, KC_V, KC_B, KC_N, KC_COMM, KC_DOT, ALGR_T(KC_SLSH), LT(U_BUTTON, KC_QUOT), U_NP,\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_BEAKL15 \
U_NP, KC_Q, KC_H, KC_O, KC_U, KC_X, KC_G, KC_C, KC_R, KC_F, KC_Z, U_NP,              \
U_NP, LGUI_T(KC_Y), LALT_T(KC_I), LCTL_T(KC_E), LSFT_T(KC_A), KC_DOT, KC_D, LSFT_T(KC_S), LCTL_T(KC_T), LALT_T(KC_N), LGUI_T(KC_B), U_NP,      \
U_NP, LT(U_BUTTON, KC_J), ALGR_T(KC_SLSH), KC_COMM, KC_K, KC_QUOT, KC_W, KC_M, KC_L, ALGR_T(KC_P), LT(U_BUTTON, KC_V), U_NP, \
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAK \
U_NP, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, U_NP,           \
U_NP, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_D, KC_H, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O), U_NP,      \
U_NP, LT(U_BUTTON, KC_Z), ALGR_T(KC_X), KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, ALGR_T(KC_DOT), LT(U_BUTTON, KC_SLSH), U_NP,\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH \
U_NP, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, U_NP,           \
U_NP, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_M, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O), U_NP,      \
U_NP, LT(U_BUTTON, KC_Z), ALGR_T(KC_X), KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, ALGR_T(KC_DOT), LT(U_BUTTON, KC_SLSH), U_NP,\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK \
U_NP, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, U_NP,           \
U_NP, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_K, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O), U_NP,      \
U_NP, LT(U_BUTTON, KC_Z), ALGR_T(KC_X), KC_C, KC_D, KC_V, KC_M, KC_H, KC_COMM, ALGR_T(KC_DOT), LT(U_BUTTON, KC_SLSH), U_NP,\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_DVORAK \
U_NP, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, U_NP,              \
U_NP, LGUI_T(KC_A), LALT_T(KC_O), LCTL_T(KC_E), LSFT_T(KC_U), KC_I, KC_D, LSFT_T(KC_H), LCTL_T(KC_T), LALT_T(KC_N), LGUI_T(KC_S), U_NP,      \
U_NP, LT(U_BUTTON, KC_SLSH), ALGR_T(KC_Q), KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, ALGR_T(KC_V), LT(U_BUTTON, KC_Z), U_NP, \
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_HALMAK \
U_NP, KC_W, KC_L, KC_R, KC_B, KC_Z, KC_QUOT, KC_Q, KC_U, KC_D, KC_J, U_NP,              \
U_NP, LGUI_T(KC_S), LALT_T(KC_H), LCTL_T(KC_N), LSFT_T(KC_T), KC_COMM, KC_DOT, LSFT_T(KC_A), LCTL_T(KC_E), LALT_T(KC_O), LGUI_T(KC_I), U_NP,      \
U_NP, LT(U_BUTTON, KC_F), ALGR_T(KC_M), KC_V, KC_C, KC_SLSH, KC_G, KC_P, KC_X, ALGR_T(KC_K), LT(U_BUTTON, KC_Y), U_NP, \
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_WORKMAN \
U_NP, KC_Q, KC_D, KC_R, KC_W, KC_B, KC_J, KC_F, KC_U, KC_P, KC_QUOT, U_NP,           \
U_NP, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_H), LSFT_T(KC_T), KC_G, KC_Y, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_O), LGUI_T(KC_I), U_NP,      \
U_NP, LT(U_BUTTON, KC_Z), ALGR_T(KC_X), KC_M, KC_C, KC_V, KC_K, KC_L, KC_COMM, ALGR_T(KC_DOT), LT(U_BUTTON, KC_SLSH), U_NP,\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
U_NP, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, U_NP,              \
U_NP, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, LSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L), LGUI_T(KC_QUOT), U_NP,   \
U_NP, LT(U_BUTTON, KC_Z), ALGR_T(KC_X), KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, ALGR_T(KC_DOT), LT(U_BUTTON, KC_SLSH), U_NP,\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTZ \
U_NP, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Z, KC_U, KC_I, KC_O, KC_P, U_NP,              \
U_NP, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, LSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L), LGUI_T(KC_QUOT), U_NP,   \
U_NP, LT(U_BUTTON, KC_Y), ALGR_T(KC_X), KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, ALGR_T(KC_DOT), LT(U_BUTTON, KC_SLSH), U_NP,\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_TAP_AZERTY_FLIP \
U_NP, KC_A, KC_Z, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, U_NP,              \
U_NP, KC_Q, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_M, U_NP,              \
U_NP, KC_W, KC_X, KC_C, KC_V, KC_B, KC_N, KC_COMM, KC_DOT, KC_SLSH, KC_QUOT, U_NP,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_BEAKL15_FLIP \
U_NP, KC_Q, KC_H, KC_O, KC_U, KC_X, KC_G, KC_C, KC_R, KC_F, KC_Z, U_NP,              \
U_NP, KC_Y, KC_I, KC_E, KC_A, KC_DOT, KC_D, KC_S, KC_T, KC_N, KC_B, U_NP,              \
U_NP, KC_J, KC_SLSH, KC_COMM, KC_K, KC_QUOT, KC_W, KC_M, KC_L, KC_P, KC_V, U_NP,              \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAK_FLIP \
U_NP, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, U_NP,           \
U_NP, KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, U_NP,              \
U_NP, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, U_NP,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH_FLIP \
U_NP, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, U_NP,           \
U_NP, KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, U_NP,              \
U_NP, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, U_NP,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK_FLIP \
U_NP, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, U_NP,           \
U_NP, KC_A, KC_R, KC_S, KC_T, KC_G, KC_K, KC_N, KC_E, KC_I, KC_O, U_NP,              \
U_NP, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_M, KC_H, KC_COMM, KC_DOT, KC_SLSH, U_NP,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_DVORAK_FLIP \
U_NP, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, U_NP,              \
U_NP, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, U_NP,              \
U_NP, KC_SLSH, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, U_NP,              \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_HALMAK_FLIP \
U_NP, KC_W, KC_L, KC_R, KC_B, KC_Z, KC_QUOT, KC_Q, KC_U, KC_D, KC_J, U_NP,              \
U_NP, KC_S, KC_H, KC_N, KC_T, KC_COMM, KC_DOT, KC_A, KC_E, KC_O, KC_I, U_NP,              \
U_NP, KC_F, KC_M, KC_V, KC_C, KC_SLSH, KC_G, KC_P, KC_X, KC_K, KC_Y, U_NP,              \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_WORKMAN_FLIP \
U_NP, KC_Q, KC_D, KC_R, KC_W, KC_B, KC_J, KC_F, KC_U, KC_P, KC_QUOT, U_NP,           \
U_NP, KC_A, KC_S, KC_H, KC_T, KC_G, KC_Y, KC_N, KC_E, KC_O, KC_I, U_NP,              \
U_NP, KC_Z, KC_X, KC_M, KC_C, KC_V, KC_K, KC_L, KC_COMM, KC_DOT, KC_SLSH, U_NP,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY_FLIP \
U_NP, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, U_NP,              \
U_NP, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOT, U_NP,           \
U_NP, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, U_NP,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTZ_FLIP \
U_NP, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Z, KC_U, KC_I, KC_O, KC_P, U_NP,              \
U_NP, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOT, U_NP,           \
U_NP, KC_Y, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, U_NP,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_AZERTY \
U_NP, KC_A, KC_Z, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, U_NP,              \
U_NP, KC_Q, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_M, U_NP,              \
U_NP, KC_W, KC_X, KC_C, KC_V, KC_B, KC_N, KC_COMM, KC_DOT, KC_SLSH, KC_QUOT, U_NP,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_BEAKL15 \
U_NP, KC_Q, KC_H, KC_O, KC_U, KC_X, KC_G, KC_C, KC_R, KC_F, KC_Z, U_NP,              \
U_NP, KC_Y, KC_I, KC_E, KC_A, KC_DOT, KC_D, KC_S, KC_T, KC_N, KC_B, U_NP,              \
U_NP, KC_J, KC_SLSH, KC_COMM, KC_K, KC_QUOT, KC_W, KC_M, KC_L, KC_P, KC_V, U_NP,              \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAK \
U_NP, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, U_NP,           \
U_NP, KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, U_NP,              \
U_NP, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, U_NP,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH \
U_NP, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, U_NP,           \
U_NP, KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, U_NP,              \
U_NP, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, U_NP,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK \
U_NP, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, U_NP,           \
U_NP, KC_A, KC_R, KC_S, KC_T, KC_G, KC_K, KC_N, KC_E, KC_I, KC_O, U_NP,              \
U_NP, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_M, KC_H, KC_COMM, KC_DOT, KC_SLSH, U_NP,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_DVORAK \
U_NP, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, U_NP,              \
U_NP, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, U_NP,              \
U_NP, KC_SLSH, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, U_NP,              \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_HALMAK \
U_NP, KC_W, KC_L, KC_R, KC_B, KC_Z, KC_QUOT, KC_Q, KC_U, KC_D, KC_J, U_NP,              \
U_NP, KC_S, KC_H, KC_N, KC_T, KC_COMM, KC_DOT, KC_A, KC_E, KC_O, KC_I, U_NP,              \
U_NP, KC_F, KC_M, KC_V, KC_C, KC_SLSH, KC_G, KC_P, KC_X, KC_K, KC_Y, U_NP,              \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_WORKMAN \
U_NP, KC_Q, KC_D, KC_R, KC_W, KC_B, KC_J, KC_F, KC_U, KC_P, KC_QUOT, U_NP,           \
U_NP, KC_A, KC_S, KC_H, KC_T, KC_G, KC_Y, KC_N, KC_E, KC_O, KC_I, U_NP,              \
U_NP, KC_Z, KC_X, KC_M, KC_C, KC_V, KC_K, KC_L, KC_COMM, KC_DOT, KC_SLSH, U_NP,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY \
U_NP, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, U_NP,              \
U_NP, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOT, U_NP,           \
U_NP, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, U_NP,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTZ \
U_NP, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Z, KC_U, KC_I, KC_O, KC_P, U_NP,              \
U_NP, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOT, U_NP,           \
U_NP, KC_Y, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, U_NP,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT_FLIP \
U_NP, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_INS, U_NA, TD(U_TD_U_BASE), TD(U_TD_U_EXTRA), TD(U_TD_U_TAP), TD(U_TD_BOOT), U_NP,     \
U_NP, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, CW_TOGG, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, U_NP,           \
U_NP, U_UND, U_CUT, U_CPY, U_PST, U_RDO, U_NA, TD(U_TD_U_NAV), TD(U_TD_U_NUM), KC_ALGR, U_NA, U_NP,              \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_FLIP \
U_NP, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_INS, U_NA, TD(U_TD_U_BASE), TD(U_TD_U_EXTRA), TD(U_TD_U_TAP), TD(U_TD_BOOT), U_NP,     \
U_NP, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, CW_TOGG, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, U_NP,           \
U_NP, U_UND, U_CUT, U_CPY, U_PST, U_RDO, U_NA, TD(U_TD_U_NAV), TD(U_TD_U_NUM), KC_ALGR, U_NA, U_NP,              \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT \
U_NP, TD(U_TD_BOOT), TD(U_TD_U_TAP), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE), U_NA, KC_INS, KC_HOME, KC_UP, KC_END, KC_PGUP, U_NP,           \
U_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, CW_TOGG, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, U_NP,           \
U_NP, U_NA, KC_ALGR, TD(U_TD_U_NUM), TD(U_TD_U_NAV), U_NA, U_RDO, U_PST, U_CPY, U_CUT, U_UND, U_NP,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_VI \
U_NP, TD(U_TD_BOOT), TD(U_TD_U_TAP), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE), U_NA, U_RDO, U_PST, U_CPY, U_CUT, U_UND, U_NP,             \
U_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, CW_TOGG, U_NP,           \
U_NP, U_NA, KC_ALGR, TD(U_TD_U_NUM), TD(U_TD_U_NAV), U_NA, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_INS, U_NP,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV \
U_NP, TD(U_TD_BOOT), TD(U_TD_U_TAP), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE), U_NA, U_RDO, U_PST, U_CPY, U_CUT, U_UND, U_NP,             \
U_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, CW_TOGG, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, U_NP,           \
U_NP, U_NA, KC_ALGR, TD(U_TD_U_NUM), TD(U_TD_U_NAV), U_NA, KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, U_NP,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT_FLIP \
U_NP, KC_WH_U, KC_WH_L, KC_MS_U, KC_WH_R, U_NU, U_NA, TD(U_TD_U_BASE), TD(U_TD_U_EXTRA), TD(U_TD_U_TAP), TD(U_TD_BOOT), U_NP,     \
U_NP, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, U_NU, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, U_NP,           \
U_NP, U_UND, U_CUT, U_CPY, U_PST, U_RDO, U_NA, TD(U_TD_U_MOUSE), TD(U_TD_U_SYM), KC_ALGR, U_NA, U_NP,              \
U_NP,              U_NP,              KC_BTN3,           KC_BTN1,           KC_BTN2,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_FLIP \
U_NP, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U_NU, U_NA, TD(U_TD_U_BASE), TD(U_TD_U_EXTRA), TD(U_TD_U_TAP), TD(U_TD_BOOT), U_NP,     \
U_NP, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NU, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, U_NP,           \
U_NP, U_UND, U_CUT, U_CPY, U_PST, U_RDO, U_NA, TD(U_TD_U_MOUSE), TD(U_TD_U_SYM), KC_ALGR, U_NA, U_NP,              \
U_NP,              U_NP,              KC_BTN3,           KC_BTN1,           KC_BTN2,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT \
U_NP, TD(U_TD_BOOT), TD(U_TD_U_TAP), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE), U_NA, U_NU, KC_WH_L, KC_MS_U, KC_WH_R, KC_WH_U, U_NP,           \
U_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, U_NU, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, U_NP,           \
U_NP, U_NA, KC_ALGR, TD(U_TD_U_SYM), TD(U_TD_U_MOUSE), U_NA, U_RDO, U_PST, U_CPY, U_CUT, U_UND, U_NP,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_VI \
U_NP, TD(U_TD_BOOT), TD(U_TD_U_TAP), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE), U_NA, U_RDO, U_PST, U_CPY, U_CUT, U_UND, U_NP,             \
U_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NU, U_NP,              \
U_NP, U_NA, KC_ALGR, TD(U_TD_U_SYM), TD(U_TD_U_MOUSE), U_NA, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U_NU, U_NP,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE \
U_NP, TD(U_TD_BOOT), TD(U_TD_U_TAP), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE), U_NA, U_RDO, U_PST, U_CPY, U_CUT, U_UND, U_NP,             \
U_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, U_NU, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NP,           \
U_NP, U_NA, KC_ALGR, TD(U_TD_U_SYM), TD(U_TD_U_MOUSE), U_NA, U_NU, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U_NP,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT_FLIP \
U_NP, RGB_HUI, RGB_SAI, KC_VOLU, RGB_VAI, RGB_TOG, U_NA, TD(U_TD_U_BASE), TD(U_TD_U_EXTRA), TD(U_TD_U_TAP), TD(U_TD_BOOT), U_NP,     \
U_NP, RGB_MOD, KC_MPRV, KC_VOLD, KC_MNXT, U_NU, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, U_NP,           \
U_NP, U_NU, U_NU, U_NU, U_NU, OU_AUTO, U_NA, TD(U_TD_U_MEDIA), TD(U_TD_U_FUN), KC_ALGR, U_NA, U_NP,              \
U_NP,              U_NP,              KC_MUTE,           KC_MPLY,           KC_MSTP,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_FLIP \
U_NP, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_TOG, U_NA, TD(U_TD_U_BASE), TD(U_TD_U_EXTRA), TD(U_TD_U_TAP), TD(U_TD_BOOT), U_NP,     \
U_NP, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, U_NU, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, U_NP,           \
U_NP, U_NU, U_NU, U_NU, U_NU, OU_AUTO, U_NA, TD(U_TD_U_MEDIA), TD(U_TD_U_FUN), KC_ALGR, U_NA, U_NP,              \
U_NP,              U_NP,              KC_MUTE,           KC_MPLY,           KC_MSTP,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT \
U_NP, TD(U_TD_BOOT), TD(U_TD_U_TAP), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE), U_NA, RGB_TOG, RGB_MOD, KC_VOLU, RGB_HUI, RGB_SAI, U_NP,           \
U_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, U_NU, KC_MPRV, KC_VOLD, KC_MNXT, RGB_VAI, U_NP,           \
U_NP, U_NA, KC_ALGR, TD(U_TD_U_FUN), TD(U_TD_U_MEDIA), U_NA, OU_AUTO, U_NU, U_NU, U_NU, U_NU, U_NP,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MSTP,           KC_MPLY,           KC_MUTE,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_VI \
U_NP, TD(U_TD_BOOT), TD(U_TD_U_TAP), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE), U_NA, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_TOG, U_NP,           \
U_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, U_NU, U_NP,              \
U_NP, U_NA, KC_ALGR, TD(U_TD_U_FUN), TD(U_TD_U_MEDIA), U_NA, U_NU, U_NU, U_NU, U_NU, OU_AUTO, U_NP,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MSTP,           KC_MPLY,           KC_MUTE,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA \
U_NP, TD(U_TD_BOOT), TD(U_TD_U_TAP), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE), U_NA, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, U_NP,           \
U_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, U_NU, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, U_NP,           \
U_NP, U_NA, KC_ALGR, TD(U_TD_U_FUN), TD(U_TD_U_MEDIA), U_NA, OU_AUTO, U_NU, U_NU, U_NU, U_NU, U_NP,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MSTP,           KC_MPLY,           KC_MUTE,           U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_NUM_FLIP \
U_NP, TD(U_TD_BOOT), TD(U_TD_U_TAP), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE), U_NA, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, U_NP,           \
U_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, KC_EQL, KC_4, KC_5, KC_6, KC_SCLN, U_NP,           \
U_NP, U_NA, KC_ALGR, TD(U_TD_U_NAV), TD(U_TD_U_NUM), U_NA, KC_BSLS, KC_1, KC_2, KC_3, KC_GRV, U_NP,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MINS,           KC_0,              KC_DOT,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NUM \
U_NP, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, U_NA, TD(U_TD_U_BASE), TD(U_TD_U_EXTRA), TD(U_TD_U_TAP), TD(U_TD_BOOT), U_NP,     \
U_NP, KC_SCLN, KC_4, KC_5, KC_6, KC_EQL, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, U_NP,           \
U_NP, KC_GRV, KC_1, KC_2, KC_3, KC_BSLS, U_NA, TD(U_TD_U_NUM), TD(U_TD_U_NAV), KC_ALGR, U_NA, U_NP,              \
U_NP,              U_NP,              KC_DOT,            KC_0,              KC_MINS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_SYM_FLIP \
U_NP, TD(U_TD_BOOT), TD(U_TD_U_TAP), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE), U_NA, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, U_NP,           \
U_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, KC_PLUS, KC_DLR, KC_PERC, KC_CIRC, KC_COLN, U_NP,           \
U_NP, U_NA, KC_ALGR, TD(U_TD_U_MOUSE), TD(U_TD_U_SYM), U_NA, KC_PIPE, KC_EXLM, KC_AT, KC_HASH, KC_TILD, U_NP,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_UNDS,           KC_LPRN,           KC_RPRN,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_SYM \
U_NP, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, U_NA, TD(U_TD_U_BASE), TD(U_TD_U_EXTRA), TD(U_TD_U_TAP), TD(U_TD_BOOT), U_NP,     \
U_NP, KC_COLN, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, U_NP,           \
U_NP, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, U_NA, TD(U_TD_U_SYM), TD(U_TD_U_MOUSE), KC_ALGR, U_NA, U_NP,              \
U_NP,              U_NP,              KC_LPRN,           KC_RPRN,           KC_UNDS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_FUN_FLIP \
U_NP, TD(U_TD_BOOT), TD(U_TD_U_TAP), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE), U_NA, KC_PSCR, KC_F7, KC_F8, KC_F9, KC_F12, U_NP,            \
U_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA, KC_SCRL, KC_F4, KC_F5, KC_F6, KC_F11, U_NP,            \
U_NP, U_NA, KC_ALGR, TD(U_TD_U_MEDIA), TD(U_TD_U_FUN), U_NA, KC_PAUS, KC_F1, KC_F2, KC_F3, KC_F10, U_NP,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_TAB,            KC_SPC,            KC_APP,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_FUN \
U_NP, KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR, U_NA, TD(U_TD_U_BASE), TD(U_TD_U_EXTRA), TD(U_TD_U_TAP), TD(U_TD_BOOT), U_NP,     \
U_NP, KC_F11, KC_F4, KC_F5, KC_F6, KC_SCRL, U_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, U_NP,           \
U_NP, KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUS, U_NA, TD(U_TD_U_FUN), TD(U_TD_U_MEDIA), KC_ALGR, U_NA, U_NP,              \
U_NP,              U_NP,              KC_APP,            KC_SPC,            KC_TAB,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_BUTTON \
U_NP, U_UND, U_CUT, U_CPY, U_PST, U_RDO, U_RDO, U_PST, U_CPY, U_CUT, U_UND, U_NP,             \
U_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NU, U_NU, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, U_NP,           \
U_NP, U_UND, U_CUT, U_CPY, U_PST, U_RDO, U_RDO, U_PST, U_CPY, U_CUT, U_UND, U_NP,             \
U_NP,              U_NP,              KC_BTN3,           KC_BTN1,           KC_BTN2,           KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP
