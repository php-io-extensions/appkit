---
type: CoreType
title: AppKit\\NS\\NSTabView\\NSTabView
description: NSTabView tabbed container
resource: /appkit/ns/nstabview/nstabview.zep
tags: [appkit, api, nstabview]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T03:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstabview/nstabview.zep
    title: nstabview.zep
  - id: h
    resource: /src/ns-tabview.h
    title: ns-tabview.h
  - id: m
    resource: /src/ns-tabview.m
    title: ns-tabview.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(...)` | `[[NSTabView alloc] initWithFrame:]` |
| `destroy` | view-box teardown |
| `addTab` | `NSTabViewItem` + `addTabViewItem:` |
| `getSelected` / `setSelected` | tab index |

Moved from `Metal\\MTL\\TabView` / `mtl_tabview_*`.
