---
type: CoreType
title: AppKit\\NS\\NSButton\\NSButton
description: NSButton push, checkbox, and radio controls with one-shot pollClick
resource: /appkit/ns/nsbutton/nsbutton.zep
tags: [appkit, api, nsbutton]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T02:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsbutton/nsbutton.zep
    title: nsbutton.zep
  - id: h
    resource: /src/ns-button.h
    title: ns-button.h
  - id: m
    resource: /src/ns-button.m
    title: ns-button.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(...)` | push `NSButtonTypeMomentaryPushIn` |
| `createCheckbox(...)` | `NSButtonTypeSwitch` |
| `createRadio(...)` | `NSButtonTypeRadio` |
| `destroy` | view-box teardown via `ns_view_destroy` |
| `setTitle` | `[button setTitle:]` |
| `setChecked` / `isChecked` | checkbox state via `[button setState:]` |
| `setSelected` / `isSelected` | radio state (alias of checked) |
| `pollClick` | one-shot pending click flag |

Handle is a view box — use `NSView::addSubview` to place the control. Checkbox and radio live on `NSButton` (no separate Checkbox/Radio classes). Moved from `Metal\\MTL\\Button` + `Checkbox` + `Radio` / `mtl_button_*` + `mtl_checkbox_*` + `mtl_radio_*`.
