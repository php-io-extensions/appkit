---
type: CoreType
title: AppKit\\NS\\NSScrubberFlowLayout\\NSScrubberFlowLayout
description: NSScrubberFlowLayout linear scrubber item layout
resource: /appkit/ns/nsscrubberflowlayout/nsscrubberflowlayout.zep
tags: [appkit, api, nsscrubberflowlayout]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:23:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsscrubberflowlayout/nsscrubberflowlayout.zep
    title: nsscrubberflowlayout.zep
  - id: h
    resource: /src/ns-scrubberflowlayout.h
    title: ns-scrubberflowlayout.h
  - id: m
    resource: /src/ns-scrubberflowlayout.m
    title: ns-scrubberflowlayout.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsScrubberFlowLayout` | ownership |
| `setItemSpacing / getItemSpacing` | itemSpacing |
| `setItemSize / getItemSize` | itemSize (default 50×30) |
| `invalidateItemsAtIndexes` | invalidateLayoutForItemsAtIndexes |

`NSScrubberFlowLayoutDelegate` (`scrubber:layout:sizeForItemAtIndex:`) is bound as part of `NSScrubberFlowLayout` (fixed itemSize; delegate sizing not exposed).
