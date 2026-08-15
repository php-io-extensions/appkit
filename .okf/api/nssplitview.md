---
type: CoreType
title: AppKit\\NS\\NSSplitView\\NSSplitView
description: NSSplitView resizable split pane container
resource: /appkit/ns/nssplitview/nssplitview.zep
tags: [appkit, api, nssplitview]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T03:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nssplitview/nssplitview.zep
    title: nssplitview.zep
  - id: h
    resource: /src/ns-splitview.h
    title: ns-splitview.h
  - id: m
    resource: /src/ns-splitview.m
    title: ns-splitview.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(...)` | `[[NSSplitView alloc] initWithFrame:]` |
| `destroy` | view-box teardown |
| `addSubview` | pane subview |

Moved from `Metal\\MTL\\SplitView` / `mtl_split_*`.
