---
type: CoreType
title: AppKit\NS\NSTextInsertionIndicator\NSTextInsertionIndicator
description: TextKit 2 text insertion indicator view
resource: /appkit/ns/nstextinsertionindicator/nstextinsertionindicator.zep
tags: [appkit, api, nstextinsertionindicator]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstextinsertionindicator/nstextinsertionindicator.zep
    title: nstextinsertionindicator.zep
  - id: h
    resource: /src/ns-textinsertionindicator.h
    title: ns-textinsertionindicator.h
  - id: m
    resource: /src/ns-textinsertionindicator.m
    title: ns-textinsertionindicator.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsTextInsertionIndicator` | view-box ownership |
| `displayMode` | NSTextInsertionIndicatorDisplayMode int enum |
| `color` | NSColor handle |
| `automaticModeOptions` | NSTextInsertionIndicatorAutomaticModeOptions bitmask |
| `setEffectsViewInserterParent / clearEffectsViewInserter / hasEffectsViewInserter` | `effectsViewInserter` block (parent addSubview; arbitrary block bodies not exposed) |
