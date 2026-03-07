# birrein/qmk_firmware

Personal QMK fork for my Corne setup on `crkbd/rev4_1/standard`. The preferred keymap is `birrein_miryoku`, which uses Miryoku as its base and keeps only a small set of local overrides for layout, combos, readability, and a few behavior tweaks.

## Current Setup

- Keyboard: `crkbd/rev4_1/standard`
- Preferred keymap: `birrein_miryoku`
- Legacy keymap: `manna-harbour_miryoku`
- Base behavior: inherited from Miryoku
- Local behavior: kept in the `birrein_miryoku` keymap files

Rule of thumb: if a behavior is not obvious in the local keymap, check the inherited Miryoku files before assuming it is missing.

## Quick Start

Compile:

```bash
qmk compile -kb crkbd/rev4_1/standard -km birrein_miryoku
```

Clean compile:

```bash
qmk compile -c -kb crkbd/rev4_1/standard -km birrein_miryoku
```

Flash:

```bash
qmk flash -kb crkbd/rev4_1/standard -km birrein_miryoku
```

Manual clean:

```bash
qmk clean
```

## Files That Matter

### Local overrides

- [`keyboards/crkbd/keymaps/birrein_miryoku/config.h`](keyboards/crkbd/keymaps/birrein_miryoku/config.h)
  Main local layout definition. This is the first place to check for layer layout, thumb cluster assignments, EX keys, and local layer overrides such as `MIRYOKU_LAYER_MEDIA`.
- [`keyboards/crkbd/keymaps/birrein_miryoku/keymap.c`](keyboards/crkbd/keymaps/birrein_miryoku/keymap.c)
  Local custom logic. Currently this is where custom combos and combo actions live.
- [`keyboards/crkbd/keymaps/birrein_miryoku/rules.mk`](keyboards/crkbd/keymaps/birrein_miryoku/rules.mk)
  Keymap-specific build features and flags.

### Inherited Miryoku behavior

- [`users/manna-harbour_miryoku/manna-harbour_miryoku.c`](users/manna-harbour_miryoku/manna-harbour_miryoku.c)
  Core Miryoku behavior used by this keymap, including tap dances and layer/default-layer behavior.
- [`users/manna-harbour_miryoku/miryoku_babel/miryoku_layer_alternatives.h`](users/manna-harbour_miryoku/miryoku_babel/miryoku_layer_alternatives.h)
  Source of most inherited layer definitions and positions.
- [`users/manna-harbour_miryoku/miryoku_babel/miryoku_layer_selection.h`](users/manna-harbour_miryoku/miryoku_babel/miryoku_layer_selection.h)
  Selects which Miryoku layer variants are active.

## How To Review the Current Keyboard Config

If I want to understand a behavior quickly, these are the best starting points:

- Layer layout, thumb keys, EX keys, and local layer overrides:
  [`keyboards/crkbd/keymaps/birrein_miryoku/config.h`](keyboards/crkbd/keymaps/birrein_miryoku/config.h)
- Custom combos or small custom actions:
  [`keyboards/crkbd/keymaps/birrein_miryoku/keymap.c`](keyboards/crkbd/keymaps/birrein_miryoku/keymap.c)
- Enabled build features:
  [`keyboards/crkbd/keymaps/birrein_miryoku/rules.mk`](keyboards/crkbd/keymaps/birrein_miryoku/rules.mk)
- A layer behaves differently than expected:
  check the inherited Miryoku layer files in [`users/manna-harbour_miryoku/miryoku_babel/`](users/manna-harbour_miryoku/miryoku_babel/)
- A layer becomes default or toggles in a way that is not obvious locally:
  check [`users/manna-harbour_miryoku/manna-harbour_miryoku.c`](users/manna-harbour_miryoku/manna-harbour_miryoku.c)

Practical reminder: Miryoku can define important behavior through inherited layers and tap dances, so not everything is visible in the local keymap files.

## Workflow Notes

- Normal workflow:
  1. Edit keymap or config.
  2. Compile without clean.
  3. Retry with `-c` only if the build looks suspicious.
- Use a clean build when:
  - switching branches
  - changing keyboard, revision, or keymap
  - seeing strange build errors
- Build artifacts are generated in `.build/`.
- Preferred commit style is Conventional Commits, for example:
  `feat(keymap): add monitor brightness keys to media layer`

## Useful References

- Official QMK docs: <https://docs.qmk.fm>
- Miryoku upstream repo: <https://github.com/manna-harbour/miryoku_qmk>
- Local Miryoku reference notes:
  [`users/manna-harbour_miryoku/readme.org`](users/manna-harbour_miryoku/readme.org)
- Local repo notes for this fork:
  [`AGENTS.md`](AGENTS.md)
