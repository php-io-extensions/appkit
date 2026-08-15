---
type: CoreType
title: AppKit\\NS\\NSAlert\\NSAlert
description: NSAlert modal dialog
resource: /appkit/ns/nsalert/nsalert.zep
tags: [appkit, api, nsalert]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T04:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsalert/nsalert.zep
    title: nsalert.zep
  - id: h
    resource: /src/ns-alert.h
    title: ns-alert.h
  - id: m
    resource: /src/ns-alert.m
    title: ns-alert.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create` | `[[NSAlert alloc] init]` |
| `destroy` | release alert handle |
| `setMessage` / `setInfo` | message + informative text |
| `addButton` | `addButtonWithTitle:` |
| `runModal` | `[alert runModal]` → NSModalResponse |

Moved from `Metal\\MTL\\Alert` / `mtl_alert_*`.
