---
type: Build
title: Committed ext/ notes
description: Makefile.frag, APPKIT_SHARED_LIBADD, strip phpize junk
resource: /scripts/Makefile.frag
tags: [appkit, build, packaging]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T00:10:00Z" }
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

# ObjC

- Rules live in `scripts/Makefile.frag` → copied to `ext/Makefile.frag`.[^frag]
- One `.lo` rule per `src/ns-*.m`; objects appended to `shared_objects_appkit`.

# Link

`APPKIT_SHARED_LIBADD` carries `-framework Foundation -framework AppKit -framework CoreGraphics`.[^patch]

# Fixup

`fixup-zephir-register.py` repairs Zephir 0.19 truncation (`AppKit\\N\\` → `AppKit\\NS\\`) and `appkit_` shortname prefixes.

[^frag]: Makefile.frag
[^patch]: patch-config-m4.py
[^prepare]: prepare-ext.sh
