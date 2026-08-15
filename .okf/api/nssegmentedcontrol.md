---
type: CoreType
title: AppKit\\NS\\NSSegmentedControl\\NSSegmentedControl
description: NSSegmentedControl multi-segment picker
resource: /appkit/ns/nssegmentedcontrol/nssegmentedcontrol.zep
tags: [appkit, api, nssegmentedcontrol]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T02:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nssegmentedcontrol/nssegmentedcontrol.zep
    title: nssegmentedcontrol.zep
  - id: h
    resource: /src/ns-segmentedcontrol.h
    title: ns-segmentedcontrol.h
  - id: m
    resource: /src/ns-segmentedcontrol.m
    title: ns-segmentedcontrol.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(..., count)` | `[[NSSegmentedControl alloc] initWithFrame:]` + segment count |
| `destroy` | view-box teardown |
| `setLabel` | `setLabel:forSegment:` |
| `setSelected` / `getSelected` | selected segment index |
| `pollChange` | one-shot change flag |

Moved from `Metal\\MTL\\Segmented` / `mtl_segmented_*`.
