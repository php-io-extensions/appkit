---
type: CoreType
title: AppKit\NS\NSFontPanel\NSFontPanel
description: Shared system font picker panel
resource: /appkit/ns/nsfontpanel/nsfontpanel.zep
tags: [appkit, api, nsfontpanel]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T07:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsfontpanel/nsfontpanel.zep
    title: nsfontpanel.zep
  - id: h
    resource: /src/ns-fontpanel.h
    title: ns-fontpanel.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `shared` | `+sharedFontPanel` (retained — release with `destroy`) |
| `sharedExists` | `+sharedFontPanelExists` |
| `setPanelFont` | `-setPanelFont:isMultiple:` |
| `panelConvertFont` | `-panelConvertFont:` |
| `worksWhenModal` / `setWorksWhenModal` | modal behavior |
| `isEnabled` / `setEnabled` | enabled |
| `reloadDefaultFontFamilies` | reload |
| `orderFront` | `-orderFront:` |

# NSFontPanelModeMask

Bitfield documented in `NSFontPanel.h` (`Face`, `Size`, `Collection`, effect masks). `NSFontChanging` protocol / accessory view not yet bound.

# Related

`NSFontManager::fontPanel` / `orderFrontFontPanel` also reach the shared panel.
