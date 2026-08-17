---
type: CoreType
title: AppKit\\NS\\NSAlert\\NSAlert
description: NSAlert modal dialog
resource: /appkit/ns/nsalert/nsalert.zep
tags: [appkit, api, nsalert]
status: draft
generated: { by: cursor-agent, at: "2026-08-16T23:40:00Z" }
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
| `create` | `[[NSPhpAlert alloc] init]` |
| `destroy` | release alert handle |
| `setMessage` / `setInfo` | message + informative text |
| `addButton` | `addButtonWithTitle:` |
| `runModal` | `[alert runModal]` → NSModalResponse (outside poll loops only) |
| `beginSheet` | `beginSheetModalForWindow:completionHandler:` via `ns_window_nswindow` |
| `pollResponse` | one-shot pending NSModalResponse; `0` = none this frame |

Moved from `Metal\\MTL\\Alert` / `mtl_alert_*`.

Poll loops: [Never runModal inside poll](../traps/no-runmodal-in-poll.md).
