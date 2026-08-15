---
type: CoreType
title: AppKit\\NS\\NSActionCell\\NSActionCell
description: NSActionCell action-bearing cell subclass of NSCell
resource: /appkit/ns/nsactioncell/nsactioncell.zep
tags: [appkit, api, nsactioncell]
status: draft
generated: { by: cursor-agent/grok-4.6, at: "2026-08-15T02:15:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsactioncell/nsactioncell.zep
    title: nsactioncell.zep
  - id: h
    resource: /src/ns-actioncell.h
    title: ns-actioncell.h
  - id: m
    resource: /src/ns-actioncell.m
    title: ns-actioncell.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `createText(title)` | `[[NSActionCell alloc] initTextCell:]` |
| `wrap(nsActionCellPtr)` | retain-wrap borrowed `NSActionCell*` |
| `destroy` | release box |
| `nsActionCell` | borrowed pointer |
| `setTitle` / `getTitle` | `title` |
| `setState` / `getState` | `state` |
| `setEnabled` / `isEnabled` | `enabled` |
| `setTag` / `getTag` | `tag` |

Adds `target` / `action` / `tag` on top of `NSCell`. Subclassed by `NSButtonCell`, `NSMenuItemCell`, etc. Target/action binding is a follow-on bind.
