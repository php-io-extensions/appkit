---
type: CoreType
title: AppKit\NS\NSTitlebarAccessoryViewController\NSTitlebarAccessoryViewController
description: Titlebar accessory view controller
resource: /appkit/ns/nstitlebaraccessoryviewcontroller/nstitlebaraccessoryviewcontroller.zep
tags: [appkit, api, nstitlebaraccessoryviewcontroller]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T15:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstitlebaraccessoryviewcontroller/nstitlebaraccessoryviewcontroller.zep
    title: nstitlebaraccessoryviewcontroller.zep
  - id: h
    resource: /src/ns-titlebaraccessoryviewcontroller.h
    title: ns-titlebaraccessoryviewcontroller.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / createWithView` | alloc/init (+ view) |
| `layoutAttribute` | `NSLayoutAttribute` int (`Microscrap\Bindings\AppKit\Enums\LayoutAttribute`) |
| `fullScreenMinHeight` | fullscreen min height |
| `hidden / automaticallyAdjustsSize` | visibility / auto size |

Attach with `NSWindow::addTitlebarAccessoryViewController`.

# Bound as part of NSTitlebarAccessoryViewController

`NSAnimationDelegate` / `NSAnimatablePropertyContainer` — poll via `NSProtocol`.
