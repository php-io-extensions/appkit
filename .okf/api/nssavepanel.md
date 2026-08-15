---
type: CoreType
title: AppKit\\NS\\NSSavePanel\\NSSavePanel
description: NSSavePanel file save dialog
resource: /appkit/ns/nssavepanel/nssavepanel.zep
tags: [appkit, api, nssavepanel]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T04:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nssavepanel/nssavepanel.zep
    title: nssavepanel.zep
  - id: h
    resource: /src/ns-savepanel.h
    title: ns-savepanel.h
  - id: m
    resource: /src/ns-savepanel.m
    title: ns-savepanel.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `runModal(directory?, name?)` | `[NSSavePanel savePanel]` + `runModal` → selected path or `""` |

Moved from `Metal\\MTL\\SavePanel` / `mtl_savepanel_run`.
