---
type: CoreType
title: AppKit\\NS\\NSStatusItem\\NSStatusItem
description: NSStatusItem menu-bar status button
resource: /appkit/ns/nsstatusitem/nsstatusitem.zep
tags: [appkit, api, nsstatusitem]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T04:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsstatusitem/nsstatusitem.zep
    title: nsstatusitem.zep
  - id: h
    resource: /src/ns-statusitem.h
    title: ns-statusitem.h
  - id: m
    resource: /src/ns-statusitem.m
    title: ns-statusitem.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create` | `[[NSStatusBar systemStatusBar] statusItemWithLength:]` |
| `wrap / nsStatusItem` | wrap existing NSStatusItem* |
| `destroy` | `removeStatusItem:` + release |
| `setTitle` | button title |
| `pollClick` | one-shot click flag |

Moved from `Metal\\MTL\\StatusItem` / `mtl_statusitem_*`.
