---
type: CoreType
title: AppKit\\NS\\NSPrintInfo\\NSPrintInfo
description: Page setup and print job attributes
resource: /appkit/ns/nsprintinfo/nsprintinfo.zep
tags: [appkit, api, nsprintinfo]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsprintinfo/nsprintinfo.zep
    title: nsprintinfo.zep
  - id: h
    resource: /src/ns-printinfo.h
    title: ns-printinfo.h
  - id: m
    resource: /src/ns-printinfo.m
    title: ns-printinfo.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / shared / setShared` | `-init` / `sharedPrintInfo` class property |
| `defaultPrinter` | borrowed `+[NSPrintInfo defaultPrinter]` |
| Paper | `paperName`, `paperSize`, `orientation`, `scalingFactor`, `localizedPaperName`, `imageablePageBounds` |
| Pagination | margins, centering, `horizontalPagination` / `verticalPagination` |
| Job | `jobDisposition`, `printer`, `selectionOnly`, `setUpPrintOperationDefaultValues` |

# Int kinds (use backed PHP Enums in microscrap)

| Kind | Values |
|------|--------|
| `NSPaperOrientation` | `0` portrait, `1` landscape |
| `NSPrintingPaginationMode` | `0` automatic, `1` fit, `2` clip |
| `NSPrintJobDispositionValue` | strings: `NSPrintSpoolJob`, `NSPrintPreviewJob`, `NSPrintSaveJob`, `NSPrintCancelJob` |

# Not bound yet

`-dictionary`, `printSettings`, PMPrintSession/PageFormat/PrintSettings void* bridges, `-takeSettingsFromPDFInfo:`. Deprecated `+setDefaultPrinter:` / `+sizeForPaperName:` noted only.
