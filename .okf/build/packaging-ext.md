---
type: Build
title: Committed ext/ notes
description: Makefile.frag, APPKIT_SHARED_LIBADD, strip phpize junk
resource: /scripts/Makefile.frag
tags: [appkit, build, packaging]
status: draft
generated: { by: cursor-agent/grok-4.6, at: "2026-08-16T14:10:00Z" }
sources:
  - id: frag
    resource: /scripts/Makefile.frag
    title: Makefile.frag
  - id: patch
    resource: /scripts/patch-config-m4.py
    title: patch-config-m4.py
  - id: prepare
    resource: /scripts/prepare-ext.sh
    title: prepare-ext.sh
---

# PIE-ready ext/

Committed `ext/` must not contain host-absolute Homebrew paths from a local `phpize`. `prepare-ext.sh` deletes Makefile/configure/modules junk after patching.[^prepare]

Gold-standard keep list matches sibling `php-io-extensions/metal` ship `ext/`:

| Keep | Role |
|------|------|
| `config.m4` | portable `PHP_NEW_EXTENSION` + Darwin gate + `APPKIT_SHARED_LIBADD` |
| `Makefile.frag` | ObjC `.m` rules |
| `config.w32` | Zephir-generated (unused on Darwin; keep for generate parity) |
| `appkit.c` / `appkit.h` / `php_appkit.h` / `php_ext.h` / `ext.h` / `ext_config.h` | Zephir module glue |
| `clean` / `install` | Zephir helper scripts |
| `kernel/` | Zephir C kernel (`.c`/`.h` only) |
| `appkit/**/*.zep.c` / `*.zep.h` | generated class sources (all classes in `PHP_NEW_EXTENSION`) |
| `src/*.{h,m}` | copied ObjC ABI |

Do **not** keep phpize output: `Makefile`, `Makefile.fragments`, `Makefile.objects`, `configure`, `configure.ac`, `config.h`, `config.h.in`, `config.log`, `config.status`, `config.nice`, `libtool`, `run-tests.php`, `autom4te.cache/`, `build/`, `modules/`, `.libs/`, `*.lo`, `*.o`, `*.dep`, `*.la`, `*.so`.

Local `php-io-extensions-dev/appkit` is the generate tree (`zephir generate` / `prepare-ext.sh`). Official `php-io-extensions/appkit` must stay logically identical after generate: same `.zep` / `src/` / scripts / committed `ext/`. Never run `phpize` in the ship tree and leave the leftovers. `config.json` `extra-sources` must list every `src/*.m` (currently 231) or a later generate can drop ObjC modules from packaging even when `Makefile.frag` is complete.

# ObjC

- Rules live in `scripts/Makefile.frag` → copied to `ext/Makefile.frag`.[^frag]
- One `.lo` rule per `src/ns-*.m`; objects appended to `shared_objects_appkit`.

# Link

`APPKIT_SHARED_LIBADD` carries `-framework Foundation -framework AppKit -framework CoreGraphics -framework CoreImage -framework UniformTypeIdentifiers -framework CoreData`.[^patch]

# Fixup

`fixup-zephir-register.py` repairs Zephir 0.19 truncation (`AppKit\\N\\` → `AppKit\\NS\\`) and `appkit_` shortname prefixes.

[^frag]: Makefile.frag
[^patch]: patch-config-m4.py
[^prepare]: prepare-ext.sh
