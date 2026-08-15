---
type: CoreType
title: AppKit\\NS\\NSPopUpButton\\NSPopUpButton
description: NSPopUpButton selection control
resource: /appkit/ns/nspopupbutton/nspopupbutton.zep
tags: [appkit, api, nspopupbutton]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T02:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nspopupbutton/nspopupbutton.zep
    title: nspopupbutton.zep
  - id: h
    resource: /src/ns-popupbutton.h
    title: ns-popupbutton.h
  - id: m
    resource: /src/ns-popupbutton.m
    title: ns-popupbutton.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(...)` | `[[NSPopUpButton alloc] initWithFrame:pullsDown:NO]` |
| `destroy` | view-box teardown |
| `addItem` / `removeAll` / `count` | item list |
| `setSelected` / `getSelected` / `getSelectedTitle` | selection |
| `pollChange` | one-shot change flag |

Moved from `Metal\\MTL\\PopUp` / `mtl_popup_*`.
