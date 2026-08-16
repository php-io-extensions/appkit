---
type: CoreType
title: AppKit\\NS\\NSDocument\\NSDocument
description: Document-based application model object
resource: /appkit/ns/nsdocument/nsdocument.zep
tags: [appkit, api, nsdocument]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:45:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsdocument/nsdocument.zep
    title: nsdocument.zep
  - id: h
    resource: /src/ns-document.h
    title: ns-document.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsDocument` | handle lifecycle |
| `initWithType / initWithContentsOfURL` | creation |
| `getFileType / setFileType / getFileURL / setFileURL` | file metadata |
| `getDisplayName / setDisplayName` | display name |
| `isDocumentEdited / hasUnautosavedChanges / isDraft / setDraft` | edit state |
| `isEntireFileLoaded` | load state |
| `updateChangeCount` | `-updateChangeCount:` |
| `close / makeWindowControllers / showWindows` | lifecycle UI |
| `windowControllersCount / windowControllerAt / addWindowController / removeWindowController` | window controllers |
| `readFromURL / writeToURL / revertToContentsOfURL` | sync I/O |
| `getWindowNibName / getAutosavingFileType` | nib + autosave type |

# NSDocumentChangeType (int)

0 Done, 1 Undone, 5 Redone, 2 Cleared, 3 ReadOtherContents, 4 Autosaved, 256 Discardable mask.

# Not bound (delegate/completion APIs)

Async save/close, print, duplicate, versioning, and delegate selectors — use synchronous subset above or extend later.
