---
type: CoreType
title: AppKit\\NS\\NSGridCell\\NSGridCell
description: NSGridCell of an NSGridView
resource: /appkit/ns/nsgridcell/nsgridcell.zep
tags: [appkit, api, nsgridcell]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:40:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsgridcell/nsgridcell.zep
    title: nsgridcell.zep
  - id: h
    resource: /src/ns-gridcell.h
    title: ns-gridcell.h
  - id: m
    resource: /src/ns-gridcell.m
    title: ns-gridcell.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `wrap / destroy / nsGridCell` | retain of grid-owned cell |
| `setContentView / contentView` | hosted NSView |
| `row / column` | parent NSGridRow / NSGridColumn wraps |
| `xPlacement / yPlacement / rowAlignment` | cell placement enums |
