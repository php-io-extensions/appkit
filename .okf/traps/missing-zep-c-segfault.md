---
type: Trap
title: Missing zep.c in PHP_NEW_EXTENSION segfaults PHP at startup
description: MINIT calls zephir_*_init; if that .zep.c is not linked, macOS dynamic_lookup jumps to NULL
resource: /scripts/patch-config-m4.py
tags: [appkit, trap, build, segfault]
status: draft
generated: { by: cursor-agent/grok-4.6, at: "2026-08-15T16:25:00Z" }
---

# Symptom

Herd `php -v` dies with SIGSEGV (`pc=0` inside `zend_startup_module_ex`). Crash reports show `appkit_module_entry` / a `zephir_*_ce` in registers. `php -n` is fine. Only `appkit.so` faults; `metal.so` and the other Herd extras load.

# Cause

`PHP_MINIT` runs `ZEPHIR_INIT(Class)` for every generated class. macOS PHP modules link with `-undefined dynamic_lookup`, so a missing `zephir_*_init` still **links**. The stub is NULL; MINIT calls it; jump to `0x0`.

The 2026-08-15 Herd `appkit.so` had exactly one undefined Zephir init: `zephir_AppKit_NS_NSHapticFeedbackManager_NSHapticFeedbackManager_init`. The ObjC `ns-hapticfeedbackmanager.m` was in `Makefile.frag`; `nshapticfeedbackmanager.zep.c` was **not** in `appkit_sources` in `patch-config-m4.py`.

# Fix

Every `appkit/ns/**/*.zep.c` must appear in `PHP_NEW_EXTENSION` (`scripts/patch-config-m4.py`). After build, `nm -u modules/appkit.so | grep zephir` must be empty before copying to Herd. Ad-hoc codesign after `cp`.
