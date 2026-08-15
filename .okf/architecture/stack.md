---
type: Architecture
title: Layered stack
description: Zephir → C ABI headers → Objective-C bridges → AppKit
resource: /config.json
tags: [appkit, architecture, zephir, objc]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T00:10:00Z" }
sources:
  - id: config
    resource: /config.json
    title: Zephir config
  - id: prepare
    resource: /scripts/prepare-ext.sh
    title: prepare-ext.sh
---

# Layers

```text
PHP (AppKit\NS\{NSApplication,NSWindow,NSView,…})
        │  Zephir static methods + %{ %} inline C
        ▼
C ABI (src/ns-*.h)             ns_* functions, uintptr_t handles
        │
        ▼
Objective-C (src/ns-*.m)       Foundation / AppKit / CoreGraphics
        │
        ▼
macOS frameworks               NSApplication, NSWindow, NSView,
                               NSMenu, NSButton, NSEvent, …
```

# Source map

| Layer | Path | Role |
|-------|------|------|
| Zephir | `appkit/ns/**/*.zep` | Public PHP API (Apple type names) |
| Headers | `src/ns-*.h` | Stable C ABI for Zephir |
| ObjC | `src/ns-*.m` | Bridge implementations |
| Zephir config | `config.json` | `extra-sources`, ARC, frameworks |
| Packaging | `scripts/prepare-ext.sh` | Generate + sync into `ext/`[^prepare] |
| PIE | `composer.json` | `build-path: ext`, Darwin-only |

# Design intent

- Keep Zephir thin: map 1:1 to C ABI (metal/gtk-style).
- Keep ObjC behind C headers so Zephir never imports Objective-C directly.
- Prefer polling (`NSApplication::poll`) over blocking run for PHP-driven loops.
- Metal present stays in sibling `metal`; this stack stops at AppKit view/layer ownership for widgets.

[^config]: Zephir config
[^prepare]: prepare-ext.sh
