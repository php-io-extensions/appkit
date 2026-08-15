---
type: CoreType
title: AppKit\\NS\\NSImageView\\NSImageView
description: NSImageView image display control
resource: /appkit/ns/nsimageview/nsimageview.zep
tags: [appkit, api, nsimageview]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T03:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsimageview/nsimageview.zep
    title: nsimageview.zep
  - id: h
    resource: /src/ns-imageview.h
    title: ns-imageview.h
  - id: m
    resource: /src/ns-imageview.m
    title: ns-imageview.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(...)` | `[[NSImageView alloc] initWithFrame:]` |
| `destroy` | view-box teardown |
| `setPath` | `initWithContentsOfFile:` → `setImage:` |

Moved from `Metal\\MTL\\ImageView` / `mtl_imageview_*`.
