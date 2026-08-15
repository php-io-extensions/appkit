---
type: CoreType
title: AppKit\\NS\\NSMenuToolbarItem\\NSMenuToolbarItem
description: NSMenuToolbarItem toolbar item with menu (macOS 10.15+)
resource: /appkit/ns/nsmenutoolbaritem/nsmenutoolbaritem.zep
tags: [appkit, api, nsmenutoolbaritem]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:30:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsMenuToolbarItem` | retain ownership |
| `setShowsIndicator / showsIndicator` | `showsIndicator` |
| `setLabel / getLabel` | `label` |
| `setToolTip / getToolTip` | `toolTip` |

`menu` property bind is follow-on (requires standalone `NSMenu` handle type).
