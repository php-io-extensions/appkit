---
type: CoreType
title: AppKit\\NS\\NSPrinter\\NSPrinter
description: Available printers and device metadata
resource: /appkit/ns/nsprinter/nsprinter.zep
tags: [appkit, api, nsprinter]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsprinter/nsprinter.zep
    title: nsprinter.zep
  - id: h
    resource: /src/ns-printer.h
    title: ns-printer.h
  - id: m
    resource: /src/ns-printer.m
    title: ns-printer.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `wrap / destroy / nsPrinter` | retain/release + borrowed native pointer |
| `namesCount / nameAt` | `+printerNames` |
| `typesCount / typeAt` | `+printerTypes` |
| `withName / withType` | `+printerWithName:` / `+printerWithType:` |
| `name / type / languageLevel` | instance metadata |
| `pageSizeForPaper` | `-pageSizeForPaper:` → `[width, height]` |
| `deviceIsPrinter` | `deviceDescription[NSDeviceIsPrinter]` |

# Deprecated (not bound)

PPD table accessors (`statusForTable:`, `floatForKey:inTable:`, etc.), `imageRectForPaper:`, `acceptsBinary`, `isColor`, domain/host helpers — use PMPrinter / `NSPrintInfo.imageablePageBounds` instead.
