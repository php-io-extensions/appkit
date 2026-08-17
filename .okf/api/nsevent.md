---
type: CoreType
title: AppKit\\NS\\NSEvent\\NSEvent
description: NSEvent / CoreGraphics keyboard + mouse input
resource: /appkit/ns/nsevent/nsevent.zep
tags: [appkit, api, nsevent, input]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T04:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsevent/nsevent.zep
    title: nsevent.zep
  - id: h
    resource: /src/ns-event.h
    title: ns-event.h
  - id: m
    resource: /src/ns-event.m
    title: ns-event.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `keyDown` | `CGEventSourceKeyState` |
| `mouseButtonDown` | `[NSEvent pressedMouseButtons]` |
| `mousePosition` / `mouseX` / `mouseY` | `[NSEvent mouseLocation]` or window content coords |
| `mouseScrollDelta` / `mouseScrollY` | scroll wheel accumulation during `NSApplication::poll` |

Poll integration: `ns_app_poll` calls `ns_event_begin_frame`, drains pending events, blocks for the next event, and runs `ns_event_handle_event` per dequeued event.

Moved from `Metal\\MTL\\Input` keyboard/mouse only. GameController gamepad API stays removed (not AppKit).
