---
type: CoreType
title: AppKit\\NS\\NSTrackingArea\\NSTrackingArea
description: Mouse tracking regions on NSView
resource: /appkit/ns/nstrackingarea/nstrackingarea.zep
tags: [appkit, api, nstrackingarea]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T06:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstrackingarea/nstrackingarea.zep
    title: nstrackingarea.zep
  - id: h
    resource: /src/ns-trackingarea.h
    title: ns-trackingarea.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(x,y,w,h,options)` | `initWithRect:options:owner:nil userInfo:nil` |
| `addToView` / `removeFromView` | `[NSView addTrackingArea:]` / `removeTrackingArea:` |
| `rect` / `options` | `rect` / `options` |

# NSTrackingAreaOptions (int bitfield — use backed Enum outside ext)

| Value | Name |
|-------|------|
| `0x01` | MOUSE_ENTERED_AND_EXITED |
| `0x02` | MOUSE_MOVED |
| `0x04` | CURSOR_UPDATE |
| `0x10` | ACTIVE_WHEN_FIRST_RESPONDER |
| `0x20` | ACTIVE_IN_KEY_WINDOW |
| `0x40` | ACTIVE_IN_ACTIVE_APP |
| `0x80` | ACTIVE_ALWAYS |
| `0x100` | ASSUME_INSIDE |
| `0x200` | IN_VISIBLE_RECT |
| `0x400` | ENABLED_DURING_MOUSE_DRAG |

Owner callbacks (`mouseEntered:`, etc.) require a native NSView subclass — not wired from PHP yet.
