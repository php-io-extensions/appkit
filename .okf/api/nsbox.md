---
type: CoreType
title: AppKit\\NS\\NSBox\\NSBox
description: NSBox titled container view
resource: /appkit/ns/nsbox/nsbox.zep
tags: [appkit, api, nsbox]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T03:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsbox/nsbox.zep
    title: nsbox.zep
  - id: h
    resource: /src/ns-box.h
    title: ns-box.h
  - id: m
    resource: /src/ns-box.m
    title: ns-box.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(...)` | `[[NSBox alloc] initWithFrame:]` |
| `destroy` | view-box teardown |
| `setTitle` | box title string |
| `addSubview` | `[contentView addSubview:]` |

Moved from `Metal\\MTL\\Box` / `mtl_box_*`.
