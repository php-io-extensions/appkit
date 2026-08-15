---
type: Trap
title: ObjC Makefile.frag required
description: phpize mishandles .m sources — use Makefile.frag compile rules
resource: /scripts/Makefile.frag
tags: [appkit, trap, build, objc]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T00:10:00Z" }
sources:
  - id: frag
    resource: /scripts/Makefile.frag
    title: Makefile.frag
  - id: prepare
    resource: /scripts/prepare-ext.sh
    title: prepare-ext.sh
  - id: patch
    resource: /scripts/patch-config-m4.py
    title: patch-config-m4.py
---

# Symptom

Configure/make succeeds for `.c` / `.zep.c` but Objective-C bridges never compile correctly — wrong `-c` inputs, mashed `-MMD` flags, invalid `.lo` files, or missing ObjC objects.

# Cause

phpize does not emit correct Makefile rules for `.m` sources. Listing `src/*.m` in `PHP_NEW_EXTENSION(...)` makes that worse.

# Fix

1. Keep `.m` files **out** of the `appkit_sources` list in `PHP_NEW_EXTENSION`.
2. `prepare-ext.sh` installs `scripts/Makefile.frag` as `ext/Makefile.frag` and `config.m4` calls `PHP_ADD_MAKEFILE_FRAGMENT`.[^prepare][^frag]
3. The fragment compiles each `src/ns-*.m` with `-fobjc-arc -x objective-c` and appends `.lo` objects to `shared_objects_appkit`.

[^frag]: Makefile.frag
[^prepare]: prepare-ext.sh
[^patch]: patch-config-m4.py
