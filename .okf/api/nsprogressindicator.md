---
type: CoreType
title: AppKit\\NS\\NSProgressIndicator\\NSProgressIndicator
description: NSProgressIndicator bar control
resource: /appkit/ns/nsprogressindicator/nsprogressindicator.zep
tags: [appkit, api, nsprogressindicator]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T02:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsprogressindicator/nsprogressindicator.zep
    title: nsprogressindicator.zep
  - id: h
    resource: /src/ns-progressindicator.h
    title: ns-progressindicator.h
  - id: m
    resource: /src/ns-progressindicator.m
    title: ns-progressindicator.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(...)` | bar-style `NSProgressIndicator` |
| `destroy` | view-box teardown |
| `setIndeterminate` | `indeterminate` |
| `setMin` / `setMax` / `setValue` / `getValue` | min/max/doubleValue |
| `start` / `stop` | `startAnimation:` / `stopAnimation:` |

Moved from `Metal\\MTL\\Progress` / `mtl_progress_*`.
