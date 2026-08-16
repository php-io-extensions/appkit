---
type: CoreType
title: AppKit\NS\NSWindowTab\NSWindowTab
description: Per-window tab chrome (title, tooltip, accessory)
resource: /appkit/ns/nswindowtab/nswindowtab.zep
tags: [appkit, api, nswindowtab]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T15:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nswindowtab/nswindowtab.zep
    title: nswindowtab.zep
  - id: h
    resource: /src/ns-windowtab.h
    title: ns-windowtab.h
---

# Schema

`NSWindowTab` is owned by `NSWindow`. Obtain via `NSWindow::tab`.

| Method | Maps to |
|--------|---------|
| `wrap / destroy / nsWindowTab` | retain/release |
| `title / setTitle` | tab title |
| `toolTip / setToolTip` | tab tooltip |
| `accessoryView / setAccessoryView` | tab accessory `NSView` |

`attributedTitle` is not bound (attributed-string bridge deferred).
