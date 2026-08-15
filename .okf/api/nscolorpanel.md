---
type: CoreType
title: AppKit\\NS\\NSColorPanel\\NSColorPanel
description: Shared system color picker panel
resource: /appkit/ns/nscolorpanel/nscolorpanel.zep
tags: [appkit, api, nscolorpanel]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T06:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscolorpanel/nscolorpanel.zep
    title: nscolorpanel.zep
  - id: h
    resource: /src/ns-colorpanel.h
    title: ns-colorpanel.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `shared` | `+sharedColorPanel` (retained handle — release with `destroy`) |
| `sharedExists` | `+sharedColorPanelExists` |
| `setPickerMask` / `setPickerMode` | class configuration |
| `orderFront` | `-orderFront:` on shared panel |
| `mode` / `setMode` | `mode` |
| `showsAlpha` / `setShowsAlpha` | `showsAlpha` |
| `isContinuous` / `setContinuous` | `continuous` |
| `setColorRgba` / `getColorRgba` | `color` (sRGB bytes) |
| `alpha` | `alpha` |
| `attachColorList` / `detachColorList` | color list attachment |

# NSColorPanelMode (int)

`-1` None, `0` Gray, `1` RGB, `2` CMYK, `3` HSB, `4` CustomPalette, `5` ColorList, `6` Wheel, `7` Crayon.

# NSColorPanelOptions (int bitfield)

See `NSColorPanel.h` masks (`GrayModeMask`, `RGBModeMask`, …).
