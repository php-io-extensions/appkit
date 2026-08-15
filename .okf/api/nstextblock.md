---
type: CoreType
title: AppKit\NS\NSTextBlock\NSTextBlock
description: NSTextBlock base class for text block layout (NSTextTableBlock/NSTextTable subclass this).
resource: /appkit/ns/nstextblock/nstextblock.zep
tags: [appkit, api, nstextblock, textkit]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstextblock/nstextblock.zep
    title: nstextblock.zep
  - id: h
    resource: /src/ns-textblock.h
    title: ns-textblock.h
  - id: m
    resource: /src/ns-textblock.m
    title: ns-textblock.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy` | ownership |
| `setContentWidth / getContentWidth` | content width + NSTextBlockValueType |
| `setValue / getValue` | dimension sizing |
| `setLayerWidth` | padding/border/margin per edge |
| `setVerticalAlignment / getVerticalAlignment` | NSTextBlockVerticalAlignment |
| `setBackgroundColor` | NSColor handle |
