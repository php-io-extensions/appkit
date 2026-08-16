---
type: CoreType
title: AppKit\\NS\\NSToolbarItemGroup\\NSToolbarItemGroup
description: NSToolbarItemGroup grouped toolbar items
resource: /appkit/ns/nstoolbaritemgroup/nstoolbaritemgroup.zep
tags: [appkit, api, nstoolbaritemgroup]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:08:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsToolbarItemGroup` | retain ownership |
| `groupWithTitles` | `+groupWithItemIdentifier:titles:selectionMode:labels:target:action:` (target/action nil) |
| `setSubitems / subitemsCount / subitemAt` | `subitems` |
| `setControlRepresentation / getControlRepresentation` | `controlRepresentation` |
| `setSelectionMode / getSelectionMode` | `selectionMode` |
| `setSelectedIndex / getSelectedIndex` | `selectedIndex` |
| `setSelectedAtIndex / isSelectedAtIndex` | `-setSelected:atIndex:` / `-isSelectedAtIndex:` |

Selection/control representation ints map to `NSToolbarItemGroupSelectionMode` / `NSToolbarItemGroupControlRepresentation`. Prefer backed PHP Enums in microscrap.

`groupWithImages` factory is follow-on (requires `NSImage` array wiring).
