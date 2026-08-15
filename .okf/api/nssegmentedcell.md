---
type: CoreType
title: AppKit\NS\NSSegmentedCell\NSSegmentedCell
description: NSSegmentedCell used by NSSegmentedControl
resource: /appkit/ns/nssegmentedcell/nssegmentedcell.zep
tags: [appkit, api, nssegmentedcell]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T03:45:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nssegmentedcell/nssegmentedcell.zep
    title: nssegmentedcell.zep
  - id: h
    resource: /src/ns-segmentedcell.h
    title: ns-segmentedcell.h
  - id: m
    resource: /src/ns-segmentedcell.m
    title: ns-segmentedcell.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `createText / wrap / destroy / nsSegmentedCell` | ownership |
| `title / state / enabled / tag` | NSActionCell base |
| `segmentCount / selectedSegment / selectSegmentWithTag` | selection |
| `trackingMode / segmentStyle` | appearance |
| `widthForSegment / labelForSegment` | per-segment |
| `selectedForSegment / enabledForSegment / tagForSegment` | per-segment state |
