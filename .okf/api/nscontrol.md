---
type: CoreType
title: AppKit\\NS\\NSControl\\NSControl
description: NSControl shared API for control view-box handles
resource: /appkit/ns/nscontrol/nscontrol.zep
tags: [appkit, api, nscontrol]
status: draft
generated: { by: cursor-agent/grok-4.6, at: "2026-08-17T01:10:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscontrol/nscontrol.zep
    title: nscontrol.zep
  - id: h
    resource: /src/ns-control.h
    title: ns-control.h
  - id: m
    resource: /src/ns-control.m
    title: ns-control.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `setEnabled` / `isEnabled` | `enabled` |
| `setStringValue` / `getStringValue` | `stringValue` |
| `setIntValue` / `getIntValue` | `intValue` |
| `setTag` / `getTag` | `tag` |
| `performClick` | `performClick:` |
| `setContinuous` / `isContinuous` | `continuous` |
| `setState` / `getState` | `state` on `NSButton` subclasses (checkbox/radio/switch) |
| `setControlSize` / `getControlSize` | `controlSize` |
| `setAlignment` | `alignment` (`NSTextAlignment` ABI ints; current macOS `TARGET_ABI_USES_IOS_VALUES`: 0 left, 1 center, 2 right) |
| `setFont` | `font` (`NSFont` handle from `NSFont::*`) |

`control` argument is a view-box handle from any `NSControl` subclass (`NSButton`, `NSTextField`, `NSSlider`, …).

State values: `-1` mixed, `0` off, `1` on. Control size: `0` regular, `1` small, `2` mini, `3` large.
