---
type: CoreType
title: AppKit\\NS\\NSColorWell\\NSColorWell
description: NSColorWell color picker control
resource: /appkit/ns/nscolorwell/nscolorwell.zep
tags: [appkit, api, nscolorwell]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T03:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscolorwell/nscolorwell.zep
    title: nscolorwell.zep
  - id: h
    resource: /src/ns-colorwell.h
    title: ns-colorwell.h
  - id: m
    resource: /src/ns-colorwell.m
    title: ns-colorwell.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(...)` | `[[NSColorWell alloc] initWithFrame:]` |
| `destroy` | view-box teardown |
| `setRgba` / `getRgba` | sRGB color components |
| `pollChange` | one-shot change flag |

Moved from `Metal\\MTL\\ColorWell` / `mtl_colorwell_*`.
