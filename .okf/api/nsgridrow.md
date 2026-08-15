---
type: CoreType
title: AppKit\\NS\\NSGridRow\\NSGridRow
description: NSGridRow of an NSGridView
resource: /appkit/ns/nsgridrow/nsgridrow.zep
tags: [appkit, api, nsgridrow]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:40:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsgridrow/nsgridrow.zep
    title: nsgridrow.zep
  - id: h
    resource: /src/ns-gridrow.h
    title: ns-gridrow.h
  - id: m
    resource: /src/ns-gridrow.m
    title: ns-gridrow.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `wrap / destroy / nsGridRow` | retain of grid-owned row |
| `numberOfCells / cellAt` | cells in this row |
| `yPlacement` | NSGridCellPlacement (INHERITED=0 NONE=1 LEADING/TOP=2 TRAILING/BOTTOM=3 CENTER=4 FILL=5) |
| `rowAlignment` | NSGridRowAlignment (INHERITED=0 NONE=1 FIRST_BASELINE=2 LAST_BASELINE=3) |
| `height / topPadding / bottomPadding / hidden` | row metrics |
| `mergeCells` | mergeCellsInRange: |
