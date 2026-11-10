#include QMK_KEYBOARD_H

// Cover the full EX2 layout instead of the generated 3x5 handedness map.
// Exempt thumbs so Miryoku's same-hand layer functions remain accessible.
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT_miryoku(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', '*', '*', '*', '*', '*', '*', 'R', 'R'
);

static void tap_mac_dead_key(uint16_t keycode) {
  uint8_t mods = get_mods();
  uint8_t weak_mods = get_weak_mods();
  uint8_t oneshot_mods = get_oneshot_mods();

  clear_mods();
  clear_weak_mods();
  clear_oneshot_mods();
  tap_code16(LALT(keycode));
  set_mods(mods);
  set_weak_mods(weak_mods);
  set_oneshot_mods(oneshot_mods);
}

static bool shifted_active(void) {
  return (get_mods() | get_weak_mods() | get_oneshot_mods()) & MOD_MASK_SHIFT;
}

static void tap_without_mods(uint16_t keycode) {
  uint8_t mods = get_mods();
  uint8_t weak_mods = get_weak_mods();
  uint8_t oneshot_mods = get_oneshot_mods();

  clear_mods();
  clear_weak_mods();
  clear_oneshot_mods();
  tap_code16(keycode);
  set_mods(mods);
  set_weak_mods(weak_mods);
  set_oneshot_mods(oneshot_mods);
}

enum combo_events {
  NM_ENYE,
};

const uint16_t PROGMEM nm_enye_combo[] = {KC_N, KC_M, COMBO_END};

combo_t key_combos[] = {
  [NM_ENYE] = COMBO_ACTION(nm_enye_combo),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LGUI_T(KC_A):
    case RGUI_T(KC_SCLN):
      return 200;
    case LSFT_T(KC_F):
    case RSFT_T(KC_J):
      return 200;
    case LALT_T(KC_S):
    case LCTL_T(KC_D):
    case RCTL_T(KC_K):
    case RALT_T(KC_L):
      return 200;
    default:
      return TAPPING_TERM;
  }
}

uint16_t get_flow_tap_term(uint16_t keycode, keyrecord_t *record, uint16_t prev_keycode) {
  // Keep right Shift available immediately after typing; preserve other Flow Tap keys.
  if (keycode == RSFT_T(KC_J)) {
    return 0;
  }
  return is_flow_tap_key(keycode) && is_flow_tap_key(prev_keycode) ? FLOW_TAP_TERM : 0;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  static bool caps_lock_from_cw_togg = false;

  if (keycode == CW_TOGG) {
    if (record->event.pressed && shifted_active()) {
      tap_without_mods(KC_CAPS);
      caps_lock_from_cw_togg = true;
      return false;
    }

    if (!record->event.pressed && caps_lock_from_cw_togg) {
      caps_lock_from_cw_togg = false;
      return false;
    }
  }

  if (keycode != ACNT) {
    return true;
  }

  if (record->event.pressed) {
    // macOS ABC: Option+E is acute, Option+U is diaeresis.
    tap_mac_dead_key(shifted_active() ? KC_U : KC_E);
  }

  return false;
}

void process_combo_event(uint16_t combo_index, bool pressed) {
  if (!pressed) {
    return;
  }

  switch (combo_index) {
    case NM_ENYE: {
      uint8_t mods = get_mods();
      uint8_t oneshot_mods = get_oneshot_mods();
      bool shifted = (mods | oneshot_mods) & MOD_MASK_SHIFT;

      clear_mods();
      clear_oneshot_mods();
      tap_code16(A(KC_N));
      tap_code16(shifted ? S(KC_N) : KC_N);
      set_mods(mods);
      set_oneshot_mods(oneshot_mods);
      break;
    }
  }
}
