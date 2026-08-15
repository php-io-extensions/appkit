---
type: CoreType
title: AppKit\\NS\\NSPDFImageRep\\NSPDFImageRep
description: PDF page image representation
resource: /appkit/ns/nspdfimagerep/nspdfimagerep.zep
tags: [appkit, api, nspdfimagerep]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T07:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nspdfimagerep/nspdfimagerep.zep
    title: nspdfimagerep.zep
  - id: h
    resource: /src/ns-pdfimagerep.h
    title: ns-pdfimagerep.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `withData` | `-initWithData:` |
| `getBounds` | `bounds` (current page) |
| `pdfRepresentation` | `PDFRepresentation` |
| `currentPage` / `setCurrentPage` | `currentPage` (0-based) |
| `pageCount` | `pageCount` |
