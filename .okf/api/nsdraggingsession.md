---
type: CoreType
title: AppKit\\NS\\NSDraggingSession\\NSDraggingSession
description: Active drag session state
resource: /appkit/ns/nsdraggingsession/nsdraggingsession.zep
tags: [appkit, api, nsdraggingsession]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:05:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `wrap / destroy / nsDraggingSession` | handle lifecycle (session owned by AppKit during drag) |
| `getDraggingFormation / setDraggingFormation` | `draggingFormation` |
| `animatesToStartingPositions / setAnimatesToStartingPositions` | cancel animation flag |
| `getDraggingLeaderIndex / setDraggingLeaderIndex` | leader index |
| `draggingPasteboard` | `draggingPasteboard` |
| `draggingSequenceNumber / draggingLocation` | session metadata |

# Not bound

`-enumerateDraggingItemsWithOptions:forView:classes:searchOptions:usingBlock:`.
