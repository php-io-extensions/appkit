---
type: CoreType
title: AppKit\\NS\\NSView\\NSView
description: Plain NSView tree — no Metal present
resource: /appkit/ns/nsview/nsview.zep
tags: [appkit, api, nsview]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T00:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsview/nsview.zep
    title: nsview.zep
  - id: h
    resource: /src/ns-view.h
    title: ns-view.h
  - id: m
    resource: /src/ns-view.m
    title: ns-view.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(x, y, w, h)` | `[[NSView alloc] initWithFrame:]` |
| `wrap(nsViewPtr)` | wrap borrowed `NSView*` |
| `destroy` | `removeFromSuperview` + release box |
| `addSubview` | `addSubview:` |
| `setFrame` | `setFrame:` |
| `getWidth` / `getHeight` | bounds |
| `nsView` | borrowed `NSView*` |

**Not here:** `createMetal`, `attachDevice`, `clear`, `presentTexture` — those are Metal/`CAMetalLayer` and live in `php-io-extensions/metal` (`Metal\\MTL\\Layer`).

Moved from the AppKit half of `Metal\\MTL\\View`.
