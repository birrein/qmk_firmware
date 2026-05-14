# AGENTS Notes (QMK Corne + Miryoku)

## Current target

- Keyboard: `crkbd/rev4_1/standard`
- Preferred keymap: `birrein_miryoku`
- Legacy keymap (kept for compatibility): `manna-harbour_miryoku`

## Miryoku base

- Treat `birrein_miryoku` as a local customization layer on top of Miryoku.
- Assume Miryoku behavior first when answering questions about layers, tap dances, layer switching, and inherited key positions.
- Check local overrides in:
  `keyboards/crkbd/keymaps/birrein_miryoku/config.h`
  `keyboards/crkbd/keymaps/birrein_miryoku/keymap.c`
- Check inherited Miryoku behavior in:
  `users/manna-harbour_miryoku/manna-harbour_miryoku.c`
  `users/manna-harbour_miryoku/miryoku_babel/miryoku_layer_alternatives.h`
  `users/manna-harbour_miryoku/miryoku_babel/miryoku_layer_selection.h`
- If a behavior is not visible in the local keymap, assume it may come from Miryoku before concluding it is missing.
- Important example: layer-default changes can come from Miryoku tap dances, not only from explicit local keycodes.
- Before recommending new key assignments, inspect the effective local + inherited keymap and avoid suggesting keys that are already mapped in natural Miryoku positions, especially the thumb keys:
  `Esc`, `Space`, `Tab`, `Enter`, `Backspace`, and `Delete`.
- `CW_TOGG` is already available through inherited Miryoku as left thumb `LT(U_NAV, KC_SPC)` + `H`; treat base-layer `CW_TOGG` on the left outer home key as redundant unless the user explicitly wants a dedicated key.
- Local `process_record_user()` explicitly maps `Shift + CW_TOGG` to `KC_CAPS` because the inherited Miryoku `key_override` did not reliably produce Caps Lock on this keymap.

## Core commands

- Compile:
  `qmk compile -kb crkbd/rev4_1/standard -km birrein_miryoku`
- Compile (legacy keymap):
  `qmk compile -kb crkbd/rev4_1/standard -km manna-harbour_miryoku`
- Compile with a clean build first:
  `qmk compile -c -kb crkbd/rev4_1/standard -km birrein_miryoku`
- Manual clean:
  `qmk clean`

## When to use clean

- You switched branches.
- You changed keyboard/revision/keymap.
- You are seeing strange build errors.

## Recommended workflow

1. Edit keymap/config.
2. Compile without clean.
3. If you hit unusual build issues, retry with `-c`.
4. Flash with:
   `qmk flash -kb crkbd/rev4_1/standard -km birrein_miryoku`

## Note

- Build artifacts are generated in `.build/`.
- Use Conventional Commits for commit messages, for example:
  `feat(keymap): add monitor brightness keys to media layer`
