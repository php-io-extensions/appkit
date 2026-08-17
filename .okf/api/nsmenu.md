---
type: CoreType
title: AppKit\\NS\\NSMenu\\NSMenu + NSMenuItem
description: Menu bar installDefault / enableAbout / addItem / pollAction
resource: /appkit/ns/nsmenu/nsmenu.zep
tags: [appkit, api, nsmenu]
status: draft
generated: { by: cursor-agent/grok-4.6, at: "2026-08-17T12:45:00Z" }
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
| `NSMenu` | `installDefault(appName)` | App \| File \| Edit \| Window \| Help + Quit (no About) |
| `NSMenu` | `enableAbout(enabled, actionId = "about")` | opt-in About at app-submenu index 0; poll-only hook |
| `NSMenu` | `addItem(...)` | create `NSMenuItem` under top-level menu |
| `NSMenu` | `pollAction` | pending custom action id string |
| `NSMenuItem` | `add(...)` | alias of `NSMenu::addItem` (starting selector) |

`enableAbout(true)` inserts one About item into `NSApp.mainMenu.itemArray[0].submenu` (the untitled application menu). Click sets a pending `action_id` for `pollAction` — no `orderFrontStandardAboutPanel`, no `runModal`, no terminate. `enableAbout(false)` removes it. Re-`installDefault` drops the item until enable is called again. Empty/`NULL` action id means `"about"`.

Moved from `Metal\\MTL\\Menu` / `mtl_menu_*`. Further `NSMenuItem` selectors expand here without inventing non-AppKit APIs.

# Trap

The menu-bar label of the first (untitled) menu is the **process name** (`php` under CLI), not `appName`. `addItem('php', …)` matches `NSMenuItem.title` via `ns_find_top_menu` and creates a **second** top-level menu. Use `enableAbout` for About; do not `addItem('php', …)`.
