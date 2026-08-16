---
type: CoreType
title: AppKit\\NS\\NSPrintPanel\\NSPrintPanel
description: Print job options panel
resource: /appkit/ns/nsprintpanel/nsprintpanel.zep
tags: [appkit, api, nsprintpanel]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsprintpanel/nsprintpanel.zep
    title: nsprintpanel.zep
  - id: h
    resource: /src/ns-printpanel.h
    title: ns-printpanel.h
  - id: m
    resource: /src/ns-printpanel.m
    title: ns-printpanel.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `printPanel / destroy / nsPrintPanel` | `+printPanel` factory + retain/release |
| `options / setOptions` | `NSPrintPanelOptions` bitfield |
| `defaultButtonTitle`, `helpAnchor`, `jobStyleHint` | panel chrome |
| `runModal / runModalWithPrintInfo` | application-modal panel (`NSModalResponse`) |
| `printInfo` | borrowed panel `printInfo` after modal |
| Accessory controllers | `addAccessoryController` / `removeAccessoryController` / `accessoryControllerCount` |

# NSPrintPanelOptions (bitfield)

`NSPrintPanelShowsCopies`, `ShowsPageRange`, `ShowsPaperSize`, `ShowsOrientation`, `ShowsScaling`, `ShowsPrintSelection`, `ShowsPageSetupAccessory`, `ShowsPreview` — combine with bitwise OR.

# Job style hints

`NSPrintPhotoJobStyleHint`, `NSPrintAllPresetsJobStyleHint`, `NSPrintNoPresetsJobStyleHint` (NSString constants).

# Not bound yet

`beginSheetUsingPrintInfo:onWindow:completionHandler:` (macOS 14+ async). Deprecated `setAccessoryView:` / `updateFromPrintInfo` / `finalWritePrintInfo` (macOS 10.0–10.5). `NSPrintPanelAccessorizing` protocol not bound.
