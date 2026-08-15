---
type: Trap
title: ZEPHIR_REGISTER_CLASS shortname must not get appkit_ prefix
description: Unlike gtk_gtk_*, AppKit CE symbols are appkit_ns_*; double prefix fails compile
resource: /scripts/fixup-zephir-register.py
tags: [appkit, trap, zephir]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T00:40:00Z" }
sources:
  - id: fixup
    resource: /scripts/fixup-zephir-register.py
    title: fixup-zephir-register.py
  - id: metal-device
    resource: /../metal/ext/metal/mtl/device.zep.c
    title: metal device.zep.c (correct pattern)
---

# Symptom

```
error: use of undeclared identifier 'appkit_appkit_ns_nsapplication_nsapplication_ce';
did you mean 'appkit_ns_nsapplication_nsapplication_ce'?
```

# Cause

`ZEPHIR_REGISTER_CLASS(ns, class, lower_ns, name, methods, flags)` builds
`lower_ns##_##name##_ce`. Zephir already emits:

- `name` = `ns_nsapplication_nsapplication`
- `methods` / extern CE = `appkit_ns_nsapplication_nsapplication_*`

Copying gtk’s fixup (which prefixes `gtk_` because Gtk CE symbols are intentionally `gtk_gtk_*`) onto appkit produces `appkit` + `appkit_ns_*` → `appkit_appkit_ns_*_ce`.

Metal’s pattern is the match: `ZEPHIR_REGISTER_CLASS(Metal\\MTL, Device, metal, mtl_device, metal_mtl_device_method_entry, 0)`.

# Fix

`scripts/fixup-zephir-register.py` only repairs `AppKit\\N` → `AppKit\\NS` truncation and **strips** a mistaken `appkit_` on the 4th arg. Re-run `bash scripts/prepare-ext.sh`.

# Note on `\\N`

Clang may warn `incomplete universal character name` on `AppKit\\NS\\…` in the register call (`\N` looks like a named UCN). That is a warning; the double-prefix is the hard error.
