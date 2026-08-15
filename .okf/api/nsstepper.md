---
type: CoreType
title: AppKit\\NS\\NSStepper\\NSStepper
description: NSStepper value control
resource: /appkit/ns/nsstepper/nsstepper.zep
tags: [appkit, api, nsstepper]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T02:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsstepper/nsstepper.zep
    title: nsstepper.zep
  - id: h
    resource: /src/ns-stepper.h
    title: ns-stepper.h
  - id: m
    resource: /src/ns-stepper.m
    title: ns-stepper.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(..., min, max)` | `[[NSStepper alloc] initWithFrame:]` |
| `destroy` | view-box teardown |
| `setValue` / `getValue` | `doubleValue` |
| `pollChange` | one-shot change flag |

Moved from `Metal\\MTL\\Stepper` / `mtl_stepper_*`.
