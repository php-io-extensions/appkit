---
type: CoreType
title: AppKit\\NS\\NSGridView\\NSGridView
description: NSGridView grid layout container
resource: /appkit/ns/nsgridview/nsgridview.zep
tags: [appkit, api, nsgridview]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T03:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsgridview/nsgridview.zep
    title: nsgridview.zep
  - id: h
    resource: /src/ns-gridview.h
    title: ns-gridview.h
  - id: m
    resource: /src/ns-gridview.m
    title: ns-gridview.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(...)` | `[NSGridView gridViewWithViews:]` |
| `destroy` | view-box teardown |
| `addView` | cell content at row/column |
| `setRowSpacing` / `setColumnSpacing` | grid spacing |
| `numberOfRows` / `numberOfColumns` | grid dimensions |
| `rowAt` / `columnAt` / `cellAt` | NSGridRow / NSGridColumn / NSGridCell wraps |
| `sizeForContent` | `NSGridViewSizeForContent` sentinel |

Moved from `Metal\\MTL\\GridView` / `mtl_grid_*`.
