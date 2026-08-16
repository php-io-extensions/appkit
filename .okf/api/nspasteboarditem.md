---
type: CoreType
title: AppKit\\NS\\NSPasteboardItem\\NSPasteboardItem
description: Single pasteboard item with UTI payloads
resource: /appkit/ns/nspasteboarditem/nspasteboarditem.zep
tags: [appkit, api, nspasteboarditem]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:05:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsPasteboardItem` | handle lifecycle |
| `types / availableTypeFromArray` | type introspection |
| `setString / stringForType` | string payload I/O |

# Not bound

`setDataProvider:forTypes:`, binary `setData:`, async detection/metadata APIs.
