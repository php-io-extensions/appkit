---
type: CoreType
title: AppKit\\NS\\NSTableView\\NSTableView
description: NSTableView single-column list table
resource: /appkit/ns/nstableview/nstableview.zep
tags: [appkit, api, nstableview]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T03:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstableview/nstableview.zep
    title: nstableview.zep
  - id: h
    resource: /src/ns-tableview.h
    title: ns-tableview.h
  - id: m
    resource: /src/ns-tableview.m
    title: ns-tableview.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(...)` | `[[NSTableView alloc] initWithFrame:]` + data source |
| `destroy` | view-box teardown |
| `clearRows` / `addRow` / `rowCount` | in-memory row model |
| `getSelected` / `setSelected` | row selection |
| `pollChange` | one-shot selection change flag |

Moved from `Metal\\MTL\\TableView` / `mtl_table_*`.
