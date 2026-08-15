---
type: CoreType
title: AppKit\\NS\\NSImageRep\\NSImageRep
description: Base image representation type
resource: /appkit/ns/nsimagerep/nsimagerep.zep
tags: [appkit, api, nsimagerep]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T07:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsimagerep/nsimagerep.zep
    title: nsimagerep.zep
  - id: h
    resource: /src/ns-imagerep.h
    title: ns-imagerep.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `repWithContentsOfFile` | `+imageRepWithContentsOfFile:` |
| `getSize` / `setSize` | `size` |
| `hasAlpha` | `alpha` |
| `isOpaque` | `opaque` |
| `pixelsWide` / `pixelsHigh` / `bitsPerSample` | pixel metadata |
| `layoutDirection` / `setLayoutDirection` | `layoutDirection` |
| `draw` / `drawAtPoint` / `drawInRect` | drawing primitives |
| `imageTypeCount` / `imageTypeAt` | `+imageTypes` |

# NSImageLayoutDirection (`layoutDirection` int)

| Value | Direction |
|-------|-----------|
| -1 | `NSImageLayoutDirectionUnspecified` |
| 2 | `NSImageLayoutDirectionLeftToRight` |
| 3 | `NSImageLayoutDirectionRightToLeft` |

Use backed PHP Enums outside the extension for these integers.
