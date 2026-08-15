---
type: CoreType
title: AppKit\\NS\\NSScrollView\\NSScrollView
description: NSScrollView scrollable document container
resource: /appkit/ns/nsscrollview/nsscrollview.zep
tags: [appkit, api, nsscrollview]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T03:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsscrollview/nsscrollview.zep
    title: nsscrollview.zep
  - id: h
    resource: /src/ns-scrollview.h
    title: ns-scrollview.h
  - id: m
    resource: /src/ns-scrollview.m
    title: ns-scrollview.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(...)` | `[[NSScrollView alloc] initWithFrame:]` |
| `destroy` | view-box teardown |
| `setDocumentView` | `setDocumentView:` |

Moved from `Metal\\MTL\\ScrollView` / `mtl_scroll_*`.
