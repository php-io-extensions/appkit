---
type: Orientation
title: Standalone Darwin scope
description: macOS-only PIE constraints; AppKit split from metal
resource: /composer.json
tags: [appkit, darwin, isolation]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T00:10:00Z" }
sources:
  - id: composer
    resource: /composer.json
    title: PIE package manifest
  - id: config
    resource: /config.json
    title: Zephir config (frameworks)
---

# Darwin-only product

`composer.json` sets `php-ext.os-families` to `["darwin"]`.[^composer] Patched `ext/config.m4` errors on non-Darwin hosts.

Sibling packages `sdl3` and `glfw` support Linux + macOS. **AppKit is stricter**: Darwin only (same as metal).

# Split from metal

Historically AppKit windowing lived inside `php-io-extensions/metal`. The product boundary is now:

| Package | Frameworks | Owns |
|---------|------------|------|
| `appkit` | Foundation, AppKit, CoreGraphics | `NSApplication`, `NSWindow`, `NSView`, widgets, menu, NSEvent input |
| `metal` | Foundation, Metal, QuartzCore | `MTLDevice`, textures, layer present/drawable |

Cross-ext: borrowed pointers only (`NSView*`, `CAMetalLayer*`), never a shared C box across `.so` files.

# Zero coupling (wrong peers)

This package must remain:

- Free of Metal / QuartzCore present APIs.
- Free of GameController headers or link flags.
- Free of SDL3 / GLFW headers or link flags.

Style inspiration comes from metal / gtk / posi — **patterns only**. See [Not Metal](/traps/not-metal.md).

# Frameworks (Apple only)

Linked frameworks (`config.json` + `APPKIT_SHARED_LIBADD`):[^config]

- Foundation
- AppKit
- CoreGraphics

No Metal, no QuartzCore, no GameController, no MetalKit.

[^composer]: PIE package manifest
[^config]: Zephir config (frameworks)
