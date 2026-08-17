---
type: CoreType
title: AppKit\\NS\\NSWindow\\NSWindow
description: NSWindow create / show / contentView — no Metal
resource: /appkit/ns/nswindow/nswindow.zep
tags: [appkit, api, nswindow]
status: draft
generated: { by: cursor-agent/grok-4.6, at: "2026-08-17T04:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nswindow/nswindow.zep
    title: nswindow.zep
  - id: h
    resource: /src/ns-window.h
    title: ns-window.h
  - id: m
    resource: /src/ns-window.m
    title: ns-window.m
---

# Schema

`NSWindow::create` is `initWithContentRect:styleMask:backing:defer:` plus `setTitle`. It does **not** show, center, activate, or attach Metal.

| Method | Maps to |
|--------|---------|
| `create(title, width, height)` | `initWithContentRect` + `setTitle` |
| `destroy` | close + release |
| `setTitle` | `setTitle:` |
| `show` | `makeKeyAndOrderFront:` |
| `hide` | `orderOut:` |
| `center` | `center` |
| `contentView` | wrap `contentView` as `NSView` handle |
| `setContentView` | `setContentView:` |
| `makeFirstResponder` | `makeFirstResponder:` |
| `shouldClose` | close-button flag (does not quit NSApp) |
| `getWidth` / `getHeight` | contentView bounds |
| `screenToContent` | screen → content-view local coords |
| `nsWindow` | borrowed `NSWindow*` |
| `tab` | wrap `window.tab` as `NSWindowTab` handle |
| `tabGroup` | wrap `window.tabGroup` as `NSWindowTabGroup` handle |
| `addTitlebarAccessoryViewController` | `addTitlebarAccessoryViewController:` |
| `setDidResize` | PHP callable from `windowDidResize:` (live resize) |

Moved from `Metal\\MTL\\Window` / `mtl_window_*`.
