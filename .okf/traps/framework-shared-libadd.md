---
type: Trap
title: Framework link via APPKIT_SHARED_LIBADD
description: PHP_ADD_FRAMEWORK does not link frameworks into the shared module
resource: /scripts/patch-config-m4.py
tags: [appkit, trap, build, link]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T00:10:00Z" }
sources:
  - id: patch
    resource: /scripts/patch-config-m4.py
    title: patch-config-m4.py
---

# Symptom

Undefined symbols for AppKit / Foundation / CoreGraphics when loading `appkit.so`, even though configure “found” frameworks.

# Cause

`PHP_ADD_FRAMEWORK` is aimed at the PHP binary link line, **not** the extension shared module.[^patch]

# Fix

Patched `config.m4` sets:

```m4
APPKIT_SHARED_LIBADD="$APPKIT_SHARED_LIBADD -framework Foundation -framework AppKit -framework CoreGraphics"
PHP_SUBST(APPKIT_SHARED_LIBADD)
```

Keep this pattern in `scripts/patch-config-m4.py` — do not “simplify” back to `PHP_ADD_FRAMEWORK` alone. Do not add Metal / QuartzCore / GameController here.

[^patch]: patch-config-m4.py
