---
type: CoreType
title: AppKit\\NS\\NSOpenPanel\\NSOpenPanel
description: NSOpenPanel file picker
resource: /appkit/ns/nsopenpanel/nsopenpanel.zep
tags: [appkit, api, nsopenpanel]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T04:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsopenpanel/nsopenpanel.zep
    title: nsopenpanel.zep
  - id: h
    resource: /src/ns-openpanel.h
    title: ns-openpanel.h
  - id: m
    resource: /src/ns-openpanel.m
    title: ns-openpanel.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `runModal(directory?)` | `[NSOpenPanel openPanel]` + `runModal` → selected path or `""` |

Moved from `Metal\\MTL\\OpenPanel` / `mtl_openpanel_run`.
