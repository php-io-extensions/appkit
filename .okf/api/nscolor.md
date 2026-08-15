---
type: CoreType
title: AppKit\\NS\\NSColor\\NSColor
description: Component, catalog, and semantic system colors
resource: /appkit/ns/nscolor/nscolor.zep
tags: [appkit, api, nscolor]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T06:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscolor/nscolor.zep
    title: nscolor.zep
  - id: h
    resource: /src/ns-color.h
    title: ns-color.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `withRgba` / `withSrgbBytes` | `+colorWithRed:green:blue:alpha:` |
| `withWhite` | `+colorWithWhite:alpha:` |
| `withHsb` | `+colorWithHue:saturation:brightness:alpha:` |
| `named` | `+colorNamed:` |
| `withCatalog` | `+colorWithCatalogName:colorName:` |
| `standard` | class colors (`blackColor`, `labelColor`, …) |
| `withAlpha` | `-colorWithAlphaComponent:` |
| `usingColorSpace` | `-colorUsingColorSpace:` |
| `type` | `type` (`NSColorType`) |
| `getSrgba` / `getRgbaDouble` | sRGB conversion via `colorUsingColorSpace:` |
| `set` / `setFill` / `setStroke` | drawing context setters |

# NSColorKind (`standard` int)

| Value | Color |
|-------|-------|
| 0 | `blackColor` |
| 1 | `darkGrayColor` |
| 2 | `lightGrayColor` |
| 3 | `whiteColor` |
| 4 | `grayColor` |
| 5–14 | `redColor` … `clearColor` |
| 15 | `labelColor` |
| 16 | `secondaryLabelColor` |
| 17 | `controlAccentColor` |
| 18 | `textColor` |
| 19 | `controlColor` |
| 20 | `windowBackgroundColor` |
| 21 | `separatorColor` |

Use backed PHP Enums outside the extension for these kind integers.
