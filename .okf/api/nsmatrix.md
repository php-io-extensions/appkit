---
type: CoreType
title: AppKit\\NS\\NSMatrix\\NSMatrix
description: Deprecated NSMatrix cell grid
resource: /appkit/ns/nsmatrix/nsmatrix.zep
tags: [appkit, api, nsmatrix, deprecated]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:54:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsmatrix/nsmatrix.zep
    title: nsmatrix.zep
  - id: h
    resource: /src/ns-matrix.h
    title: ns-matrix.h
  - id: m
    resource: /src/ns-matrix.m
    title: ns-matrix.m
---

# Deprecated

Entire class is deprecated in AppKit. Bound for SDK completeness only.

# Schema

| Method | Maps to |
|--------|---------|
| `create / destroy` | view-box ownership |
| `setMode / getMode` | NSMatrixMode (C enum ns_matrix_mode) |
| `addRow / addColumn / numberOfRows / numberOfColumns` | grid size |
| `selectCellAt / selectedRow / selectedColumn / cellAt` | selection + NSCell wrap |
