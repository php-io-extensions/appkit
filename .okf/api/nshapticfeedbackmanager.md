---
type: CoreType
title: AppKit\NS\NSHapticFeedbackManager\NSHapticFeedbackManager
description: Force Touch trackpad haptic feedback
resource: /appkit/ns/nshapticfeedbackmanager/nshapticfeedbackmanager.zep
tags: [appkit, api, nshapticfeedbackmanager]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:55:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nshapticfeedbackmanager/nshapticfeedbackmanager.zep
    title: nshapticfeedbackmanager.zep
  - id: h
    resource: /src/ns-hapticfeedbackmanager.h
    title: ns-hapticfeedbackmanager.h
  - id: m
    resource: /src/ns-hapticfeedbackmanager.m
    title: ns-hapticfeedbackmanager.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `defaultPerformer / destroyPerformer` | `+defaultPerformer` retain/release |
| `performFeedback` | `-performFeedbackPattern:performanceTime:` on retained performer |
| `performDefaultFeedback` | fetches `defaultPerformer` each call (preferred) |

# Enum ints (use backed PHP Enums in user code)

**NSHapticFeedbackPattern**

| int | case |
|-----|------|
| 0 | GENERIC |
| 1 | ALIGNMENT |
| 2 | LEVEL_CHANGE |

**NSHapticFeedbackPerformanceTime**

| int | case |
|-----|------|
| 0 | DEFAULT |
| 1 | NOW |
| 2 | DRAW_COMPLETED |

# Bound as part of NSHapticFeedbackManager

`NSHapticFeedbackPerformer` protocol — surfaced only via `defaultPerformer` handle + `performFeedback`; no separate bind.

Header: `NSHapticFeedback.h` (not `NSHapticFeedbackManager.h`).
