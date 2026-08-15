---
type: CoreType
title: AppKit\\NS\\NSCursor\\NSCursor
description: Mouse cursor display and system cursors
resource: /appkit/ns/nscursor/nscursor.zep
tags: [appkit, api, nscursor]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T06:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscursor/nscursor.zep
    title: nscursor.zep
  - id: h
    resource: /src/ns-cursor.h
    title: ns-cursor.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `hide` / `unhide` | `[NSCursor hide]` / `unhide` |
| `setHiddenUntilMouseMoves` | `[NSCursor setHiddenUntilMouseMoves:]` |
| `push` / `set` / `pop` | instance cursor stack |
| `popStack` | `[NSCursor pop]` (class) |
| `arrowCursor`, `pointingHandCursor`, … | system cursor class properties |
| `hotSpot` | `hotSpot` |

Custom `initWithImage:hotSpot:` requires a future `NSImage` bind.

Deprecated resize cursors (`resizeLeftCursor`, etc.) are not bound — use macOS 15+ `columnResizeCursor` / `frameResizeCursorFromPosition:` in a follow-up.
