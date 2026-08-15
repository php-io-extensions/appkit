---
type: CoreType
title: AppKit\\NS\\NSGestureRecognizer\\NSGestureRecognizer
description: Base gesture recognizer attach + state polling
resource: /appkit/ns/nsgesturerecognizer/nsgesturerecognizer.zep
tags: [appkit, api, nsgesturerecognizer]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T06:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsgesturerecognizer/nsgesturerecognizer.zep
    title: nsgesturerecognizer.zep
  - id: h
    resource: /src/ns-gesturerecognizer.h
    title: ns-gesturerecognizer.h
---

# Schema

Created with `initWithTarget:nil action:NULL`. Poll `state` after `NSApplication::poll`. Action targets are not wired from PHP yet.

| Method | Maps to |
|--------|---------|
| `create` / `wrap` | alloc / retain |
| `addToView` / `removeFromView` | `[NSView addGestureRecognizer:]` |
| `state` | `state` |
| `setEnabled` / `isEnabled` | `enabled` |
| `locationInView` | `locationInView:` |

# NSGestureRecognizerState (int)

| Value | Name |
|-------|------|
| `0` | POSSIBLE |
| `1` | BEGAN |
| `2` | CHANGED |
| `3` | ENDED |
| `4` | CANCELLED |
| `5` | FAILED |
| `3` | RECOGNIZED (alias of ENDED) |
