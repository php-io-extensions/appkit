---
type: CoreType
title: AppKit\\NS\\NSOutlineView\\NSOutlineView
description: NSOutlineView hierarchical list
resource: /appkit/ns/nsoutlineview/nsoutlineview.zep
tags: [appkit, api, nsoutlineview]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T04:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsoutlineview/nsoutlineview.zep
    title: nsoutlineview.zep
  - id: h
    resource: /src/ns-outlineview.h
    title: ns-outlineview.h
  - id: m
    resource: /src/ns-outlineview.m
    title: ns-outlineview.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(...)` | `[[NSOutlineView alloc] initWithFrame:]` + data source |
| `destroy` | view-box teardown |
| `clear` / `addRoot` / `addChild` / `itemCount` | in-memory tree model |
| `getSelected` / `setSelected` | item-id selection |
| `pollChange` | one-shot selection change flag |

Moved from `Metal\\MTL\\OutlineView` / `mtl_outline_*`.
