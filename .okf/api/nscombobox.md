---
type: CoreType
title: AppKit\\NS\\NSComboBox\\NSComboBox
description: NSComboBox text + list selection control
resource: /appkit/ns/nscombobox/nscombobox.zep
tags: [appkit, api, nscombobox]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T02:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscombobox/nscombobox.zep
    title: nscombobox.zep
  - id: h
    resource: /src/ns-combobox.h
    title: ns-combobox.h
  - id: m
    resource: /src/ns-combobox.m
    title: ns-combobox.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(...)` | `[[NSComboBox alloc] initWithFrame:]` |
| `destroy` | view-box teardown |
| `addItem` / `removeAll` | item list |
| `setStringValue` / `getStringValue` | `stringValue` |
| `pollChange` | one-shot change flag |

Moved from `Metal\\MTL\\ComboBox` / `mtl_combo_*`.
