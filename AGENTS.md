# AGENTS Notes (QMK Corne + Miryoku)

## Current target

- Keyboard: `crkbd/rev4_1/standard`
- Preferred keymap: `birrein_miryoku`
- Legacy keymap (kept for compatibility): `manna-harbour_miryoku`

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
