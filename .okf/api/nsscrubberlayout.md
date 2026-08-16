---
type: CoreType
title: AppKit\\NS\\NSScrubberLayout\\NSScrubberLayout
description: NSScrubberLayout abstract scrubber item layout base
resource: /appkit/ns/nsscrubberlayout/nsscrubberlayout.zep
tags: [appkit, api, nsscrubberlayout]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:23:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsscrubberlayout/nsscrubberlayout.zep
    title: nsscrubberlayout.zep
  - id: h
    resource: /src/ns-scrubberlayout.h
    title: ns-scrubberlayout.h
  - id: m
    resource: /src/ns-scrubberlayout.m
    title: ns-scrubberlayout.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsScrubberLayout` | NSObject retain/release |
| `invalidate` | invalidateLayout |
| `scrubber` | borrowed NSScrubber wrap |
| `visibleRect` | visibleRect |
| `contentWidth / contentHeight` | scrubberContentSize |
| `shouldInvalidateForSelectionChange` | shouldInvalidateLayoutForSelectionChange |
| `shouldInvalidateForHighlightChange` | shouldInvalidateLayoutForHighlightChange |
| `automaticallyMirrorsInRightToLeftLayout` | automaticallyMirrorsInRightToLeftLayout |

`NSScrubberLayoutAttributes` and subclass layout hooks (`prepareLayout`, `layoutAttributesForItemAtIndex:`) are bound as part of `NSScrubberLayout` (base invalidation + content metrics; attribute objects are not separately exposed).

Attach to `NSScrubber` via `NSScrubber::setLayout`.
