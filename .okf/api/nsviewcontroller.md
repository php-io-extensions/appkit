---
type: CoreType
title: AppKit\\NS\\NSViewController\\NSViewController
description: NSViewController view lifecycle host
resource: /appkit/ns/nsviewcontroller/nsviewcontroller.zep
tags: [appkit, api, nsviewcontroller]
status: draft
generated: { by: cursor-agent/grok-4.6, at: "2026-08-15T02:15:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsviewcontroller/nsviewcontroller.zep
    title: nsviewcontroller.zep
  - id: h
    resource: /src/ns-viewcontroller.h
    title: ns-viewcontroller.h
  - id: m
    resource: /src/ns-viewcontroller.m
    title: ns-viewcontroller.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create()` | `[[NSViewController alloc] init]` |
| `createWithView(view)` | init + assign view-box as `view` |
| `wrap(nsViewControllerPtr)` | retain-wrap borrowed controller |
| `destroy` | release box, clear `view` |
| `nsViewController` | borrowed pointer |
| `setView` / `view` | `view` property (view-box handles) |
| `setTitle` / `getTitle` | `title` |
| `isViewLoaded` | `viewLoaded` |
| `loadViewIfNeeded` | `loadViewIfNeeded` |

Used by `NSPopover`, `NSWindowController.contentViewController`, and storyboard/nib flows. Nib loading is a follow-on bind.
