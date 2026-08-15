---
type: CoreType
title: AppKit\NS\NSFontDescriptor\NSFontDescriptor
description: Font attribute queries and matching
resource: /appkit/ns/nsfontdescriptor/nsfontdescriptor.zep
tags: [appkit, api, nsfontdescriptor]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T07:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsfontdescriptor/nsfontdescriptor.zep
    title: nsfontdescriptor.zep
  - id: h
    resource: /src/ns-fontdescriptor.h
    title: ns-fontdescriptor.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `withName` | `+fontDescriptorWithName:size:` |
| `preferredForTextStyle` | `+preferredFontDescriptorForTextStyle:options:` |
| `postscriptName` / `pointSize` / `symbolicTraits` | core attributes |
| `requiresFontAssetRequest` | download-needed flag |
| `withSymbolicTraits` / `withSize` / `withFamily` / `withFace` / `withDesign` | instance conversion |
| `matchingCount` / `matchingAt` / `matchingFirst` | matching descriptors |

# NSFontDescriptorSymbolicTraits (bitfield int)

See `NSFontDescriptor.h` (`TraitItalic`, `TraitBold`, class mask, …).

# NSFontDesignKind (`withDesign` int)

| Value | Design |
|-------|--------|
| 0 | Default |
| 1 | Serif |
| 2 | Monospaced |
| 3 | Rounded |

# Not yet bound

`fontAttributes` dictionary round-trip, matrix/`fontDescriptorWithFontAttributes:`, variation/feature attribute keys as structured PHP maps.
