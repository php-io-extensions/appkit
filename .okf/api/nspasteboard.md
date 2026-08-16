---
type: CoreType
title: AppKit\\NS\\NSPasteboard\\NSPasteboard
description: System pasteboard read/write
resource: /appkit/ns/nspasteboard/nspasteboard.zep
tags: [appkit, api, nspasteboard]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:05:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `general / withName / withUniqueName` | pasteboard factories |
| `wrap / destroy / nsPasteboard` | handle lifecycle |
| `clearContents / writeStrings / stringForType / setString` | first-item string I/O |
| `types / canReadTypes / itemsCount / itemAt` | introspection |
| `accessBehavior` | `accessBehavior` (macOS 15.4+) |

Use UTI strings for types (e.g. `public.plain-text`). Pasteboard name strings: `NSPasteboardNameGeneral`, `NSPasteboardNameFind`, etc.

# Not bound

Async detection/metadata APIs, `readObjectsForClasses:`, legacy `declareTypes:` / file-wrapper helpers.
