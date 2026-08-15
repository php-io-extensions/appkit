---
type: CoreType
title: AppKit\\NS\\NSColorPicker\\NSColorPicker
description: Base class for custom color panel pickers
resource: /appkit/ns/nscolorpicker/nscolorpicker.zep
tags: [appkit, api, nscolorpicker]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T06:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscolorpicker/nscolorpicker.zep
    title: nscolorpicker.zep
  - id: h
    resource: /src/ns-colorpicker.h
    title: ns-colorpicker.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `create` | `-initWithPickerMask:colorPanel:` |
| `colorPanel` | `colorPanel` |
| `buttonToolTip` | `buttonToolTip` |
| `minContentSize` | `minContentSize` |
| `setMode` | `-setMode:` |
| `attachColorList` / `detachColorList` | list attachment |

Custom pickers require an ObjC subclass implementing `NSColorPickingCustom`; this bind exposes the base `NSColorPicker` surface for wrapping native instances.
