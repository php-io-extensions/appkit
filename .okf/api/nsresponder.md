---
type: CoreType
title: AppKit\\NS\\NSResponder\\NSResponder
description: NSResponder first-responder chain base
resource: /appkit/ns/nsresponder/nsresponder.zep
tags: [appkit, api, nsresponder]
status: draft
generated: { by: cursor-agent/grok-4.6, at: "2026-08-15T02:15:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsresponder/nsresponder.zep
    title: nsresponder.zep
  - id: h
    resource: /src/ns-responder.h
    title: ns-responder.h
  - id: m
    resource: /src/ns-responder.m
    title: ns-responder.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `wrap(nsResponderPtr)` | retain-wrap borrowed `NSResponder*` |
| `destroy` | release box |
| `nsResponder` | borrowed pointer |
| `acceptsFirstResponder` | `acceptsFirstResponder` |
| `becomeFirstResponder` | `becomeFirstResponder` |
| `resignFirstResponder` | `resignFirstResponder` |
| `nextResponder` | borrowed `nextResponder` |

Base type for `NSView`, `NSWindow`, `NSApplication`, `NSViewController`, `NSWindowController`. Wrap pointers from `NSView::nsView()`, `NSWindow::nsWindow()`, etc.
