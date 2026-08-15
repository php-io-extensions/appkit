---
type: CoreType
title: AppKit\\NS\\NSPanel\\NSPanel
description: NSPanel floating utility window
resource: /appkit/ns/nspanel/nspanel.zep
tags: [appkit, api, nspanel]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T06:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nspanel/nspanel.zep
    title: nspanel.zep
  - id: h
    resource: /src/ns-panel.h
    title: ns-panel.h
---

# Schema

`NSPanel::create` uses `NSWindowStyleMaskUtilityWindow` with `floatingPanel=YES` and `becomesKeyOnlyIfNeeded=YES` by default. Mirrors `NSWindow` lifecycle helpers plus NSPanel-specific properties.

| Method | Maps to |
|--------|---------|
| `create` | `[[NSPanel alloc] initWithContentRect:…]` |
| `setFloatingPanel` / `isFloatingPanel` | `floatingPanel` |
| `setBecomesKeyOnlyIfNeeded` / `becomesKeyOnlyIfNeeded` | `becomesKeyOnlyIfNeeded` |
| `setWorksWhenModal` / `worksWhenModal` | `worksWhenModal` |
| `nsPanel` | borrowed `NSPanel*` |

Subclasses `NSWindow` in AppKit; shares show/hide/contentView/screenToContent with [nswindow.md](nswindow.md).
