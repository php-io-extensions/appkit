---
type: CoreType
title: AppKit\\NS\\NSPageLayout\\NSPageLayout
description: NSPageLayout page setup panel
resource: /appkit/ns/nspagelayout/nspagelayout.zep
tags: [appkit, api, nspagelayout]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:23:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nspagelayout/nspagelayout.zep
    title: nspagelayout.zep
  - id: h
    resource: /src/ns-pagelayout.h
    title: ns-pagelayout.h
  - id: m
    resource: /src/ns-pagelayout.m
    title: ns-pagelayout.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `pageLayout / destroy / nsPageLayout` | +pageLayout factory + retain/release |
| `runModal / runModalWithPrintInfo` | application-modal page setup (NSOKButton / NSCancelButton) |
| `printInfo` | borrowed NSPrintInfo after modal |
| `addAccessoryController / removeAccessoryController / accessoryControllerCount` | accessory NSViewController list |

# Notes

- `runModalWithPrintInfo` accepts a borrowed `NSPrintInfo*` (0 → `[NSPrintInfo sharedPrintInfo]`). See [nsprintinfo.md](nsprintinfo.md).
- `beginSheetUsingPrintInfo:onWindow:completionHandler:` (macOS 14+) is not exposed yet; use `runModal*` for now.
- Deprecated `setAccessoryView:` / `readPrintInfo` / `writePrintInfo` (macOS 10.0–10.5) are not bound.
- `NSPageLayoutResult` (`CANCELLED=0`, `CHANGED=1`) applies to the completion-handler sheet API only; use `NSModalResponse` for `runModal*`.

`NSApplication.runPageLayout:` is bound as part of `NSApplication` when that selector is added.
