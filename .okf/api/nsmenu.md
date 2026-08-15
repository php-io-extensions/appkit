---
type: CoreType
title: AppKit\\NS\\NSMenu\\NSMenu + NSMenuItem
description: Menu bar installDefault / addItem / pollAction
resource: /appkit/ns/nsmenu/nsmenu.zep
tags: [appkit, api, nsmenu]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T00:30:00Z" }
sources:
  - id: menu-zep
    resource: /appkit/ns/nsmenu/nsmenu.zep
    title: nsmenu.zep
  - id: item-zep
    resource: /appkit/ns/nsmenuitem/nsmenuitem.zep
    title: nsmenuitem.zep
  - id: h
    resource: /src/ns-menu.h
    title: ns-menu.h
  - id: m
    resource: /src/ns-menu.m
    title: ns-menu.m
---

# Schema

| Type | Method | Maps to |
|------|--------|---------|
| `NSMenu` | `installDefault(appName)` | App \| File \| Edit \| Window \| Help + Quit |
| `NSMenu` | `addItem(...)` | create `NSMenuItem` under top-level menu |
| `NSMenu` | `pollAction` | pending custom action id string |
| `NSMenuItem` | `add(...)` | alias of `NSMenu::addItem` (starting selector) |

Moved from `Metal\\MTL\\Menu` / `mtl_menu_*`. Further `NSMenuItem` selectors expand here without inventing non-AppKit APIs.
