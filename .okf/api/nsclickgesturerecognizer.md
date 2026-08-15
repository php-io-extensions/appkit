---
type: CoreType
title: AppKit\\NS\\NSClickGestureRecognizer\\NSClickGestureRecognizer
description: Click and multi-click gesture
resource: /appkit/ns/nsclickgesturerecognizer/nsclickgesturerecognizer.zep
tags: [appkit, api, nsclickgesturerecognizer]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T06:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsclickgesturerecognizer/nsclickgesturerecognizer.zep
    title: nsclickgesturerecognizer.zep
  - id: h
    resource: /src/ns-clickgesturerecognizer.h
    title: ns-clickgesturerecognizer.h
---

# Schema

Subclasses `NSGestureRecognizer`. Includes base attach/state helpers plus:

| Method | Maps to |
|--------|---------|
| `setButtonMask` / `buttonMask` | `buttonMask` (bit 0 = primary) |
| `setNumberOfClicksRequired` / `numberOfClicksRequired` | `numberOfClicksRequired` |
| `setNumberOfTouchesRequired` / `numberOfTouchesRequired` | `numberOfTouchesRequired` |

See [nsgesturerecognizer.md](nsgesturerecognizer.md) for shared lifecycle.
