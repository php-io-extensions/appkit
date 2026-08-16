---
type: CoreType
title: AppKit\\NS\\NSPersistentDocument\\NSPersistentDocument
description: Core Data document subclass
resource: /appkit/ns/nspersistentdocument/nspersistentdocument.zep
tags: [appkit, api, nspersistentdocument]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:45:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nspersistentdocument/nspersistentdocument.zep
    title: nspersistentdocument.zep
  - id: h
    resource: /src/ns-persistentdocument.h
    title: ns-persistentdocument.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsPersistentDocument` | handle lifecycle |
| `managedObjectContext / managedObjectModel` | borrowed Core Data pointers |
| `persistentStoreTypeForFileType` | store type string |
| `readFromURL / writeToURL / revertToContentsOfURL` | sync I/O |

Links `-framework CoreData`. `NSManagedObjectContext` / `NSManagedObjectModel` are not separate AppKit binds — use borrowed pointers.

# NSSaveOperationType (int)

Same values as `NSDocument` save operations (0 Save, 1 SaveAs, 2 SaveTo, …).

# Deprecated (not bound)

`-configurePersistentStoreCoordinatorForURL:ofType:error:` — use the 10.5+ variant in a future bind if needed.
