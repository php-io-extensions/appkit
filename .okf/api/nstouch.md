---
type: CoreType
title: AppKit\\NS\\NSTouch\\NSTouch
description: Touch sample from NSEvent (short-lived)
resource: /appkit/ns/nstouch/nstouch.zep
tags: [appkit, api, nstouch]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T06:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstouch/nstouch.zep
    title: nstouch.zep
  - id: h
    resource: /src/ns-touch.h
    title: ns-touch.h
---

# Schema

Wrap borrowed `NSTouch*` during event handling — unlike iOS, macOS touch objects do not persist for the life of the touch.

| Method | Maps to |
|--------|---------|
| `wrap` | retain `NSTouch*` |
| `phase` | `phase` (NSTouchPhase bitfield) |
| `type` | `type` (0 direct, 1 indirect) |
| `isResting` | `resting` |
| `normalizedPosition` | `normalizedPosition` |
| `deviceSize` | `deviceSize` |
| `locationInView` / `previousLocationInView` | same selectors |

# NSTouchPhase (int bitfield)

| Value | Name |
|-------|------|
| `1` | BEGAN |
| `2` | MOVED |
| `4` | STATIONARY |
| `8` | ENDED |
| `16` | CANCELLED |

# NSTouchType

| Value | Name |
|-------|------|
| `0` | DIRECT |
| `1` | INDIRECT |
