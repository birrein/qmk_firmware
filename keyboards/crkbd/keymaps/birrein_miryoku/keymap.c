#include QMK_KEYBOARD_H

enum combo_events {
  NM_ENYE,
};

const uint16_t PROGMEM nm_enye_combo[] = {KC_N, KC_M, COMBO_END};

combo_t key_combos[] = {
  [NM_ENYE] = COMBO_ACTION(nm_enye_combo),
};

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
