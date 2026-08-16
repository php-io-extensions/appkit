---
type: CoreType
title: AppKit\\NS\\NSDraggingItem\\NSDraggingItem
description: Drag item with pasteboard writer and image frame
resource: /appkit/ns/nsdraggingitem/nsdraggingitem.zep
tags: [appkit, api, nsdraggingitem]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:05:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `createWithString` | `-initWithPasteboardWriter:` (NSString) |
| `wrap / destroy / nsDraggingItem` | handle lifecycle |
| `getItem` | borrowed `item` |
| `getDraggingFrame / setDraggingFrame` | `draggingFrame` |
| `setDraggingFrameContents` | `-setDraggingFrame:contents:` |
| `imageComponentsCount` | `imageComponents` count |

# Not bound

`imageComponentsProvider` block.
