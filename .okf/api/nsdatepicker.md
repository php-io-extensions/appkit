---
type: CoreType
title: AppKit\\NS\\NSDatePicker\\NSDatePicker
description: NSDatePicker date/time control
resource: /appkit/ns/nsdatepicker/nsdatepicker.zep
tags: [appkit, api, nsdatepicker]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T03:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsdatepicker/nsdatepicker.zep
    title: nsdatepicker.zep
  - id: h
    resource: /src/ns-datepicker.h
    title: ns-datepicker.h
  - id: m
    resource: /src/ns-datepicker.m
    title: ns-datepicker.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(...)` | `[[NSDatePicker alloc] initWithFrame:]` + text field style |
| `destroy` | view-box teardown |
| `setTimestamp` / `getTimestamp` | Unix epoch via `dateValue` |
| `pollChange` | one-shot change flag |

Moved from `Metal\\MTL\\DatePicker` / `mtl_datepicker_*`.
