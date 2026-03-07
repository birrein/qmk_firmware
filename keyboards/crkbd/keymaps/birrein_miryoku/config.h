#pragma once

// Use the Corne ex2 physical layout (4 inner-column keys) while keeping
// Miryoku's logical 3x6_3+thumb signature.
#define LAYOUT_miryoku( \
      K00,  K01,  K02,  K03,  K04,  K05,  K06,  K07,  K08,  K09,  K0A,  K0B, \
      K10,  K11,  K12,  K13,  K14,  K15,  K16,  K17,  K18,  K19,  K1A,  K1B, \
      K20,  K21,  K22,  K23,  K24,  K25,  K26,  K27,  K28,  K29,  K2A,  K2B, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3_ex2( \
K00,  K01,  K02,  K03,  K04,  K05,  N30, \
N38,  K06,  K07,  K08,  K09,  K0A,  K0B, \
K10,  K11,  K12,  K13,  K14,  K15,  N31, \
N39,  K16,  K17,  K18,  K19,  K1A,  K1B, \
K20,  K21,  K22,  K23,  K24,  K25, \
K26,  K27,  K28,  K29,  K2A,  K2B, \
K32,  K33,  K34, \
K35,  K36,  K37 \
)

// Default bindings for the 4 inner-column extra keys.
#define U_EXL1 KC_MINS
#define U_EXL2 KC_EQL
#define U_EXR1 KC_LBRC
#define U_EXR2 KC_RBRC

/*
Visual guide for the layer macros below (Corne 3x6_3_ex2):

Top row:       [L_OUT] [L00] [L01] [L02] [L03] [L04]   [R04] [R03] [R02] [R01] [R00] [R_OUT]
Home row:      [L_OUT] [L10] [L11] [L12] [L13] [L14]   [R14] [R13] [R12] [R11] [R10] [R_OUT]
Bottom row:    [L_OUT] [L20] [L21] [L22] [L23] [L24]   [R24] [R23] [R22] [R21] [R20] [R_OUT]
Thumb + ex2:   [EXL1]  [EXL2] [LTH0] [LTH1] [LTH2]     [RTH0] [RTH1] [RTH2] [EXR1] [EXR2]

Each macro row keeps the physical order:
left hand -> right hand, with the split shown by extra spacing in the source.
*/

// Keymap-specific tweak kept local: quote on right-hand home-row outer key.
#define MIRYOKU_LAYER_BASE \
/* top    */ KC_GRV,            KC_Q,            KC_W,            KC_E,            KC_R,            KC_T,                 KC_Y,               KC_U,                KC_I,               KC_O,               KC_P,                  KC_MINS, \
/* home   */ CW_TOGG,           LGUI_T(KC_A),    LALT_T(KC_S),    LCTL_T(KC_D),    LSFT_T(KC_F),    KC_G,                 KC_H,               LSFT_T(KC_J),        LCTL_T(KC_K),       LALT_T(KC_L),       LGUI_T(KC_SCLN),      KC_QUOT, \
/* bottom */ QK_REP,            LT(U_BUTTON,KC_Z), ALGR_T(KC_X),  KC_C,            KC_V,            KC_B,                 KC_N,               KC_M,                KC_COMM,            ALGR_T(KC_DOT),     LT(U_BUTTON,KC_SLSH), KC_BSLS, \
/* thumbs */ U_EXL1,            U_EXL2,          LT(U_MEDIA,KC_ESC), LT(U_NAV,KC_SPC), LT(U_MOUSE,KC_TAB), LT(U_SYM,KC_ENT), LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),    U_EXR1,             U_EXR2

#define MIRYOKU_LAYER_TAP \
/* top    */ KC_GRV,            KC_Q,            KC_W,            KC_E,            KC_R,            KC_T,                 KC_Y,               KC_U,                KC_I,               KC_O,               KC_P,                  KC_MINS, \
/* home   */ CW_TOGG,           KC_A,            KC_S,            KC_D,            KC_F,            KC_G,                 KC_H,               KC_J,                KC_K,               KC_L,               KC_SCLN,               KC_QUOT, \
/* bottom */ QK_REP,            KC_Z,            KC_X,            KC_C,            KC_V,            KC_B,                 KC_N,               KC_M,                KC_COMM,            KC_DOT,             KC_SLSH,               KC_BSLS, \
/* thumbs */ U_EXL1,            U_EXL2,          KC_ESC,          KC_SPC,          KC_TAB,          KC_ENT,               KC_BSPC,            KC_DEL,              U_EXR1,             U_EXR2

// Keep Miryoku media defaults, but add monitor brightness on comma and dot.
#define MIRYOKU_LAYER_MEDIA \
/* top    */ U_NP,              TD(U_TD_BOOT),   TD(U_TD_U_TAP),  TD(U_TD_U_EXTRA), TD(U_TD_U_BASE), U_NA,                 RGB_TOG,            RGB_MOD,             RGB_HUI,            RGB_SAI,            RGB_VAI,               U_NP, \
/* home   */ U_NP,              KC_LGUI,         KC_LALT,         KC_LCTL,         KC_LSFT,          U_NA,                 U_NU,               KC_MPRV,             KC_VOLD,            KC_VOLU,            KC_MNXT,               U_NP, \
/* bottom */ U_NP,              U_NA,            KC_ALGR,         TD(U_TD_U_FUN),  TD(U_TD_U_MEDIA), U_NA,                 OU_AUTO,            U_NU,                KC_BRID,            KC_BRIU,            U_NU,                  U_NP, \
/* thumbs */ U_NP,              U_NP,            U_NA,            U_NA,            U_NA,             KC_MSTP,              KC_MPLY,            KC_MUTE,             U_NP,               U_NP
