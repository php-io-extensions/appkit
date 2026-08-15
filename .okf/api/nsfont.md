---
type: CoreType
title: AppKit\NS\NSFont\NSFont
description: Typeface instances and UI meta fonts
resource: /appkit/ns/nsfont/nsfont.zep
tags: [appkit, api, nsfont]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T07:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsfont/nsfont.zep
    title: nsfont.zep
  - id: h
    resource: /src/ns-font.h
    title: ns-font.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `withName` | `+fontWithName:size:` |
| `withDescriptor` | `+fontWithDescriptor:size:` |
| `meta` | UI meta fonts (`systemFontOfSize:`, `labelFontOfSize:`, …) |
| `systemWeight` / `systemWeightWidth` | weighted / width system fonts |
| `monospacedDigitSystem` / `monospacedSystem` | monospaced system fonts |
| `preferredForTextStyle` | `+preferredFontForTextStyle:options:` |
| `withSize` | `-fontWithSize:` |
| `setUserFont` / `setUserFixedPitchFont` | user font preferences |
| `systemFontSize` / `smallSystemFontSize` / `labelFontSize` | class size properties |
| `fontName` / `familyName` / `displayName` / `pointSize` | core attributes |
| `fontDescriptor` | `-fontDescriptor` (retained handle) |
| metrics | `ascender`, `descender`, `leading`, underline, italic, cap/x height |
| `boundingRect` / `maximumAdvancement` | scaled font metrics |
| `verticalFont` / `isVertical` | vertical mode |
| `set` | `-set` (current graphics context) |

# NSFontMetaKind (`meta` int)

| Value | Factory |
|-------|---------|
| 0 | `systemFontOfSize:` |
| 1 | `boldSystemFontOfSize:` |
| 2 | `labelFontOfSize:` |
| 3 | `titleBarFontOfSize:` |
| 4 | `menuFontOfSize:` |
| 5 | `menuBarFontOfSize:` |
| 6 | `messageFontOfSize:` |
| 7 | `paletteFontOfSize:` |
| 8 | `toolTipsFontOfSize:` |
| 9 | `controlContentFontOfSize:` |
| 10 | `userFontOfSize:` |
| 11 | `userFixedPitchFontOfSize:` |

# NSFontWeightKind (`systemWeight` int)

0 UltraLight … 3 Regular … 8 Black (maps to `NSFontWeight*`).

# NSFontWidthKind

0 Compressed, 1 Condensed, 2 Standard, 3 Expanded.

# NSFontTextStyleKind

0 LargeTitle … 6 Body … 10 Caption2.

Use backed PHP Enums outside the extension for these kind integers.

# Not yet bound

Deprecated `NSGlyph` / screen-font rendering mode APIs; matrix/`textTransform` factories; bulk CGGlyph metric arrays.
