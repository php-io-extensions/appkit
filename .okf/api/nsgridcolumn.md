---
type: CoreType
title: AppKit\\NS\\NSGridColumn\\NSGridColumn
description: NSGridColumn of an NSGridView
resource: /appkit/ns/nsgridcolumn/nsgridcolumn.zep
tags: [appkit, api, nsgridcolumn]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:40:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsgridcolumn/nsgridcolumn.zep
    title: nsgridcolumn.zep
  - id: h
    resource: /src/ns-gridcolumn.h
    title: ns-gridcolumn.h
  - id: m
    resource: /src/ns-gridcolumn.m
    title: ns-gridcolumn.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `wrap / destroy / nsGridColumn` | retain of grid-owned column |
| `numberOfCells / cellAt` | cells in this column |
| `xPlacement` | NSGridCellPlacement |
| `width / leadingPadding / trailingPadding / hidden` | column metrics |
| `mergeCells` | mergeCellsInRange: |
