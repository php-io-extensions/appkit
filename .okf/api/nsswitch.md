---
type: CoreType
title: AppKit\\NS\\NSSwitch\\NSSwitch
description: NSSwitch toggle control
resource: /appkit/ns/nsswitch/nsswitch.zep
tags: [appkit, api, nsswitch]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T02:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsswitch/nsswitch.zep
    title: nsswitch.zep
  - id: h
    resource: /src/ns-switch.h
    title: ns-switch.h
  - id: m
    resource: /src/ns-switch.m
    title: ns-switch.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(x, y, w, h)` | `[[NSSwitch alloc] initWithFrame:]` |
| `destroy` | view-box teardown |
| `setOn` / `isOn` | `[switch setState:]` |
| `pollChange` | one-shot change flag |

Moved from `Metal\\MTL\\SwitchControl` / `mtl_switch_*`.
