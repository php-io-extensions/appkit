---
type: CoreType
title: AppKit\\NS\\NSTableCellView\\NSTableCellView
description: NSTableCellView content cell for NSTableView
resource: /appkit/ns/nstablecellview/nstablecellview.zep
tags: [appkit, api, nstablecellview]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:54:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstablecellview/nstablecellview.zep
    title: nstablecellview.zep
  - id: h
    resource: /src/ns-tablecellview.h
    title: ns-tablecellview.h
  - id: m
    resource: /src/ns-tablecellview.m
    title: ns-tablecellview.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy` | view-box ownership |
| `setText / getText` | textField.stringValue |
| `setImage` | imageView.image |
| `textField / imageView` | subview wraps |
