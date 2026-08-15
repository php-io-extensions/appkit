---
type: CoreType
title: AppKit\NS\NSFontManager\NSFontManager
description: Shared font conversion and discovery
resource: /appkit/ns/nsfontmanager/nsfontmanager.zep
tags: [appkit, api, nsfontmanager]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T07:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsfontmanager/nsfontmanager.zep
    title: nsfontmanager.zep
  - id: h
    resource: /src/ns-fontmanager.h
    title: ns-fontmanager.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `shared` | `+sharedFontManager` (retained — release with `destroy`) |
| `selectedFont` / `setSelectedFont` / `isMultiple` | selection |
| `fontWithFamily` | `-fontWithFamily:traits:weight:size:` |
| `traitsOfFont` / `weightOfFont` | inspect |
| `availableFonts*` / `availableFontFamilies*` | discovery |
| `convertFont*` / `convertWeight` | conversion |
| `fontPanel` / `orderFrontFontPanel` | panel access |
| `availableFontNamesWithTraits*` / `fontNamedHasTraits` | trait filtering |
| `localizedNameForFamily` | display names |
| `currentFontAction` / `isEnabled` | action state |

# NSFontTraitMask (bitfield int)

`Italic=1`, `Bold=2`, `Unbold=4`, `Narrow=0x10`, `Expanded=0x20`, `Condensed=0x40`, `FixedPitch=0x400`, `Unitalic=0x01000000`, …

# NSFontAction (`currentFontAction` int)

0 None, 1 ViaPanel, 2 AddTrait, 3 SizeUp, 4 SizeDown, 5 Heavier, 6 Lighter, 7 RemoveTrait.

# Deprecated (not bound)

Collection management on `NSFontManager` — use `NSFontCollection` instead.
