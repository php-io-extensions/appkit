---
type: Playbook
title: Regenerate committed ext/
description: Maintainer steps before tagging
resource: /scripts/prepare-ext.sh
tags: [appkit, playbook, packaging]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T00:10:00Z" }
sources:
  - id: prepare
    resource: /scripts/prepare-ext.sh
    title: prepare-ext.sh
  - id: readme
    resource: /README.md
    title: README
---

# When

Before tagging a Packagist/PIE release, or after changing `.zep` / `src/*.m` / `src/*.h`.

# Steps

1. On macOS with Zephir + matching PHP (local `php-io-extensions-dev` is fine for generate):

```bash
bash scripts/prepare-ext.sh
```

2. Smoke build (**use `-j1`**) — Angel may do this from his install copy:

```bash
cd ext && phpize && ./configure --enable-appkit && make -j1
php -n -d extension="$(pwd)/modules/appkit.so" --ri appkit
```

3. Run AppKit-only demo when present:

```bash
php -n -d extension="$(pwd)/modules/appkit.so" ../examples/proof_appkit.php
```

4. Commit regenerable artifacts that belong in git (`ext/` sources, `config.m4`, `Makefile.frag`, `ide/<version>/` stubs matching `config.json`) — not phpize junk.
5. Update `.okf` + `log.md` if the public surface changed.

# Notes

- Set `ZEPHIR_BIN` if `zephir` is not on `PATH`.[^prepare]
- `fixup-zephir-register.py` fixes truncated `ZEPHIR_REGISTER_CLASS` names (Zephir 0.19).
- Expand `patch-config-m4.py` `appkit_sources` / `PHP_ADD_BUILD_DIR` as new `.zep` classes land.
- See traps: [ObjC Makefile.frag](/traps/objc-makefile-frag.md), [Framework link](/traps/framework-shared-libadd.md), [Parallel make](/traps/parallel-make.md), [codesign](/traps/codesign-invalid-page.md).

[^prepare]: prepare-ext.sh
[^readme]: README
