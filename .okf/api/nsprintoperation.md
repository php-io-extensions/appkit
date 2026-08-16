---
type: CoreType
title: AppKit\\NS\\NSPrintOperation\\NSPrintOperation
description: Print, PDF, and EPS output operations
resource: /appkit/ns/nsprintoperation/nsprintoperation.zep
tags: [appkit, api, nsprintoperation]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsprintoperation/nsprintoperation.zep
    title: nsprintoperation.zep
  - id: h
    resource: /src/ns-printoperation.h
    title: ns-printoperation.h
  - id: m
    resource: /src/ns-printoperation.m
    title: ns-printoperation.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `printOperationWithView` | `+printOperationWithView:` (shared print info) |
| `printOperationWithViewPrintInfo` | `+printOperationWithView:printInfo:` |
| `pdfOperationWithViewRectPath` / `epsOperationWithViewRectPath` | PDF/EPS to path factories |
| `currentOperation / setCurrentOperation` | thread-local current operation |
| Panels | `showsPrintPanel`, `showsProgressPanel`, `printPanel` |
| `runOperation` | application-modal run → `bool` success |
| `runOperationModalForWindow` | document-modal run (no delegate callback yet) |
| State | `view`, `printInfo`, `pageRange`, `currentPage`, `isCopyingOperation`, `preferredRenderingQuality`, `pageOrder`, `jobTitle` |

# Int kinds

| Kind | Values |
|------|--------|
| `NSPrintingPageOrder` | `-1` descending, `0` special, `1` ascending, `2` unknown |
| `NSPrintRenderingQuality` | `0` best, `1` responsive |

# Not bound yet

PDF/EPS `toData:` variants, `PDFPanel`, `canSpawnSeparateThread`, internal `createContext` / `deliverResult` hooks. Deprecated `setShowPanels:` / `accessoryView` / `jobStyleHint` on operation.
