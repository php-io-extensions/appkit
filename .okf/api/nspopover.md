---
type: CoreType
title: AppKit\\NS\\NSPopover\\NSPopover
description: NSPopover anchored popup
resource: /appkit/ns/nspopover/nspopover.zep
tags: [appkit, api, nspopover]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T04:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nspopover/nspopover.zep
    title: nspopover.zep
  - id: h
    resource: /src/ns-popover.h
    title: ns-popover.h
  - id: m
    resource: /src/ns-popover.m
    title: ns-popover.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create` | `[[NSPopover alloc] init]` |
| `destroy` | close + release |
| `setContentView` | assign content view controller view |
| `show` | `showRelativeToRect:ofView:preferredEdge:` |
| `close` / `isShown` | popover visibility |

Moved from `Metal\\MTL\\Popover` / `mtl_popover_*`.
