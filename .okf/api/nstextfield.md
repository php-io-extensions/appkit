---
type: CoreType
title: AppKit\\NS\\NSTextField\\NSTextField
description: Editable NSTextField and static label (non-editable NSTextField)
resource: /appkit/ns/nstextfield/nstextfield.zep
tags: [appkit, api, nstextfield]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T01:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstextfield/nstextfield.zep
    title: nstextfield.zep
  - id: h
    resource: /src/ns-textfield.h
    title: ns-textfield.h
  - id: m
    resource: /src/ns-textfield.m
    title: ns-textfield.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(...)` | editable `NSTextField` |
| `createLabel(...)` | static label (`bezeled:NO`, `editable:NO`) |
| `destroy` / `destroyLabel` | view-box teardown |
| `setStringValue` / `getStringValue` | `stringValue` |
| `setEditable` | `editable` + `selectable` |
| `pollChange` | one-shot delegate change flag |

Moved from `Metal\\MTL\\TextField` + `Metal\\MTL\\Label` / `mtl_textfield_*` + `mtl_label_*`.
