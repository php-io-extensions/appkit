---
type: CoreType
title: AppKit\NS\NSTextTable\NSTextTable
description: NSTextTable table block for attributed text
resource: /appkit/ns/nstexttable/nstexttable.zep
tags: [appkit, api, nstexttable]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstexttable/nstexttable.zep
    title: nstexttable.zep
  - id: h
    resource: /src/ns-texttable.h
    title: ns-texttable.h
  - id: m
    resource: /src/ns-texttable.m
    title: ns-texttable.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy` | ownership |
| `numberOfColumns` | columns |
| `layoutAlgorithm` | 0 automatic, 1 fixed |
| `collapsesBorders / hidesEmptyCells` | chrome |
| `setContentWidth / getContentWidth` | width + NSTextBlockValueType |
| `verticalAlignment` | NSTextBlockVerticalAlignment |
