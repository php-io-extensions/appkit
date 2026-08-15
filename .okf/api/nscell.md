---
type: CoreType
title: AppKit\\NS\\NSCell\\NSCell
description: NSCell standalone cell objects
resource: /appkit/ns/nscell/nscell.zep
tags: [appkit, api, nscell]
status: draft
generated: { by: cursor-agent/grok-4.6, at: "2026-08-15T02:15:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscell/nscell.zep
    title: nscell.zep
  - id: h
    resource: /src/ns-cell.h
    title: ns-cell.h
  - id: m
    resource: /src/ns-cell.m
    title: ns-cell.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `createText(title)` | `initTextCell:` |
| `wrap(nsCellPtr)` | retain-wrap borrowed `NSCell*` |
| `destroy` | release box |
| `nsCell` | borrowed pointer |
| `setTitle` / `getTitle` | `title` |
| `setState` / `getState` | `state` |
| `setEnabled` / `isEnabled` | `enabled` |
| `setTag` / `getTag` | `tag` |
| `setStringValue` / `getStringValue` | `stringValue` |

Used by legacy cell-based controls and `NSMatrix`. Subclassed by `NSActionCell`, `NSButtonCell`, etc.
