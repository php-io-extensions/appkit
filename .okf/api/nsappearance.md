---
type: CoreType
title: AppKit\\NS\\NSAppearance\\NSAppearance
description: Aqua / Dark Aqua drawing appearances
resource: /appkit/ns/nsappearance/nsappearance.zep
tags: [appkit, api, nsappearance]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T06:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsappearance/nsappearance.zep
    title: nsappearance.zep
  - id: h
    resource: /src/ns-appearance.h
    title: ns-appearance.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `named` | `+appearanceNamed:` |
| `create` | `-initWithAppearanceNamed:bundle:` (main bundle) |
| `currentDrawing` | `+currentDrawingAppearance` |
| `name` | `name` |
| `allowsVibrancy` | `allowsVibrancy` |
| `bestMatch` | `-bestMatchFromAppearancesWithNames:` |

Standard appearance name strings (e.g. `NSAppearanceNameAqua`, `NSAppearanceNameDarkAqua`) are passed as PHP strings; use backed Enums outside the extension.
