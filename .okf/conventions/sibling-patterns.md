---
type: Convention
title: Sibling patterns
description: Patterns borrowed from metal / gtk / posi (not dependencies)
resource: /AGENTS.md
tags: [appkit, convention, siblings]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T00:10:00Z" }
sources:
  - id: agents
    resource: /AGENTS.md
    title: AGENTS.md
  - id: prepare
    resource: /scripts/prepare-ext.sh
    title: prepare-ext.sh
---

# Borrowed patterns (not runtime deps)

| Pattern | From | How appkit uses it |
|---------|------|--------------------|
| Thin Zephir + C ABI + native bridge | metal, gtk, posi | `ns_*` + `src/ns-*.m` |
| Committed PIE `ext/` + `prepare-ext.sh` | metal | Darwin ObjC packaging |
| `Makefile.frag` for non-C sources | metal | `.m` compile rules |
| `*_SHARED_LIBADD` frameworks | metal | `APPKIT_SHARED_LIBADD` |
| Namespace shaped like Apple types | gtk (`Gtk\GTK\…`) | `AppKit\NS\NSWindow\NSWindow` |
| Opaque int handles | all siblings | PHP `int` |
| No FFI | family policy | bind in extension only |
| No PHP class constants | family / Angel rule | backed Enums outside ext |

# Explicit non-dependencies

Do not link or `#include` SDL3, GLFW, Metal, QuartzCore present helpers, or GameController from this package.
