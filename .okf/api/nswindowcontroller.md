---
type: CoreType
title: AppKit\\NS\\NSWindowController\\NSWindowController
description: NSWindowController window lifecycle host
resource: /appkit/ns/nswindowcontroller/nswindowcontroller.zep
tags: [appkit, api, nswindowcontroller]
status: draft
generated: { by: cursor-agent/grok-4.6, at: "2026-08-15T02:15:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nswindowcontroller/nswindowcontroller.zep
    title: nswindowcontroller.zep
  - id: h
    resource: /src/ns-windowcontroller.h
    title: ns-windowcontroller.h
  - id: m
    resource: /src/ns-windowcontroller.m
    title: ns-windowcontroller.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(window)` | `initWithWindow:` using window-box |
| `createEmpty()` | `initWithWindow:nil` |
| `wrap(nsWindowControllerPtr)` | retain-wrap borrowed controller |
| `destroy` | release box |
| `nsWindowController` | borrowed pointer |
| `nsWindow` | borrowed `window` pointer |
| `showWindow` | `showWindow:` |
| `close` | `close` |
| `setContentViewController` | `contentViewController` |
| `isWindowLoaded` | `windowLoaded` |
| `setShouldCloseDocument` / `shouldCloseDocument` | `shouldCloseDocument` |

Nib-based `initWithWindowNibName:` is a follow-on bind. Document association is a follow-on bind.
