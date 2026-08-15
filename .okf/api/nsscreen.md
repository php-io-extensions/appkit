---
type: CoreType
title: AppKit\\NS\\NSScreen\\NSScreen
description: Display geometry and backing scale
resource: /appkit/ns/nsscreen/nsscreen.zep
tags: [appkit, api, nsscreen]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T06:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsscreen/nsscreen.zep
    title: nsscreen.zep
  - id: h
    resource: /src/ns-screen.h
    title: ns-screen.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `mainScreen` | `[NSScreen mainScreen]` |
| `deepestScreen` | `[NSScreen deepestScreen]` |
| `screensCount` / `screenAt` | `[NSScreen screens]` |
| `screensHaveSeparateSpaces` | `[NSScreen screensHaveSeparateSpaces]` |
| `frame` / `visibleFrame` | `frame` / `visibleFrame` (global coords) |
| `backingScaleFactor` | `backingScaleFactor` |
| `localizedName` | `localizedName` |
| `depth` | `depth` |

Coordinates use AppKit global screen space (origin bottom-left).
