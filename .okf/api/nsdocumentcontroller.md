---
type: CoreType
title: AppKit\\NS\\NSDocumentController\\NSDocumentController
description: Shared document registry and open/recent orchestration
resource: /appkit/ns/nsdocumentcontroller/nsdocumentcontroller.zep
tags: [appkit, api, nsdocumentcontroller]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:45:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsdocumentcontroller/nsdocumentcontroller.zep
    title: nsdocumentcontroller.zep
  - id: h
    resource: /src/ns-documentcontroller.h
    title: ns-documentcontroller.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `shared / create / wrap / destroy / nsDocumentController` | handle lifecycle |
| `documentsCount / documentAt / currentDocument` | open documents |
| `currentDirectory` | active document directory |
| `documentForURL / documentForWindow` | lookup |
| `addDocument / removeDocument` | registry |
| `defaultType` | `-defaultType` |
| `openUntitledDocumentAndDisplay` | untitled open |
| `hasEditedDocuments` | quit-time check |
| `documentClassNamesCount / documentClassNameAt / displayNameForType` | type info |
| `recentDocumentURLsCount / recentDocumentURLAt` | Open Recent |
| `noteNewRecentDocument / noteNewRecentDocumentURL / clearRecentDocuments` | recent menu |

# Not bound

Modal open/save panel completion handlers, `newDocument:`, scripted duplicate — extend when PHP callbacks exist.
