---
type: Orientation
title: Package overview
description: What appkit is, version targets, and what it deliberately is not
resource: /composer.json
tags: [appkit, orientation, php-ext, macos]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T00:10:00Z" }
sources:
  - id: composer
    resource: /composer.json
    title: PIE package manifest
  - id: config
    resource: /config.json
    title: Zephir config
  - id: readme
    resource: /README.md
    title: README
---

# Summary

`php-io-extensions/appkit` is a **standalone macOS-only** PHP extension (`type: php-ext`) that binds **AppKit.framework** (plus Foundation and CoreGraphics for input). PHP opens native windows, builds view trees, installs menus, and polls events — without Metal, QuartzCore present helpers, or GameController.[^composer][^readme]

| Fact | Value |
|------|--------|
| Package | `php-io-extensions/appkit` |
| Extension name | `appkit` |
| Version | `0.1.0` |
| PHP | `>= 8.2` |
| OS | **macOS** only (PIE `os-families: ["darwin"]`) |
| Architectures | macOS arm64 and x86_64 |
| Author | Project Saturn Studios, LLC |
| License | MIT |

# End capability

1. Initialize `NSApplication` and drive events from PHP (`NSApplication::poll`).
2. Create `NSWindow` / `NSView` trees and AppKit widgets.
3. Install a standard menu bar (including Quit).
4. Poll keyboard/mouse via CoreGraphics / `NSEvent` (not GameController).
5. Export borrowed native pointers so sibling `metal` can attach a `CAMetalLayer` present path without sharing C box structs.

Demo (target): `examples/proof_appkit.php`.

# What it is not

- Not Metal.framework or QuartzCore drawable present (sibling `php-io-extensions/metal`).
- Not GameController.framework.
- Not a cross-platform widget kit / SDL / GLFW binding.
- Not available on Linux or Windows.

# Public namespace

Zephir classes live under `AppKit\NS\` (`appkit/ns/**/*.zep`). Example: `appkit/ns/nswindow/nswindow.zep` → `AppKit\NS\NSWindow\NSWindow`. IDE stubs: `ide/0.1.0/AppKit/NS/`.

See [Standalone macOS scope](/orientation/standalone-darwin.md) and [Layered stack](/architecture/stack.md).

[^composer]: PIE package manifest
[^readme]: README
