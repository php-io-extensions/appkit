---
type: CoreType
title: AppKit\\NS\\NSToolbar\\NSToolbar
description: NSToolbar window chrome
resource: /appkit/ns/nstoolbar/nstoolbar.zep
tags: [appkit, api, nstoolbar]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T04:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstoolbar/nstoolbar.zep
    title: nstoolbar.zep
  - id: h
    resource: /src/ns-toolbar.h
    title: ns-toolbar.h
  - id: m
    resource: /src/ns-toolbar.m
    title: ns-toolbar.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create` | `[[NSToolbar alloc] initWithIdentifier:]` + delegate box |
| `destroy` | release toolbar box |
| `addItem` | insert `NSToolbarItem` with action id |
| `install` | `[window setToolbar:]` |
| `pollAction` | one-shot action id string |

Moved from `Metal\\MTL\\Toolbar` / `mtl_toolbar_*`.
