---
type: CoreType
title: AppKit\\NS\\NSTextView\\NSTextView
description: Multi-line NSTextView with change polling
resource: /appkit/ns/nstextview/nstextview.zep
tags: [appkit, api, nstextview]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T01:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstextview/nstextview.zep
    title: nstextview.zep
  - id: h
    resource: /src/ns-textview.h
    title: ns-textview.h
  - id: m
    resource: /src/ns-textview.m
    title: ns-textview.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(...)` | `[[NSTextView alloc] initWithFrame:]` (`richText:NO`) |
| `destroy` | view-box teardown |
| `setString` / `getString` | `string` |
| `pollChange` | one-shot delegate change flag |

Moved from `Metal\\MTL\\TextView` / `mtl_textview_*`.
