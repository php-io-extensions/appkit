---
type: CoreType
title: AppKit\\NS\\NSToolbarItem\\NSToolbarItem
description: NSToolbarItem base toolbar item bind
resource: /appkit/ns/nstoolbaritem/nstoolbaritem.zep
tags: [appkit, api, nstoolbaritem]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:08:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsToolbarItem` | retain ownership |
| `getItemIdentifier` | `itemIdentifier` |
| `setLabel / getLabel` | `label` |
| `setPaletteLabel / getPaletteLabel` | `paletteLabel` |
| `setToolTip / getToolTip` | `toolTip` |
| `setTag / getTag` | `tag` |
| `setEnabled / isEnabled` | `enabled` |
| `setTitle / getTitle` | `title` (macOS 10.15+) |
| `setBordered / isBordered` | `bordered` |
| `setNavigational / isNavigational` | `navigational` |
| `setHidden / isHidden` | `hidden` (macOS 15+) |
| `setVisibilityPriority / getVisibilityPriority` | `visibilityPriority` |
| `setAutovalidates / autovalidates` | `autovalidates` |
| `isVisible` | `visible` |
| `setImage` | `image` via `NSImage` handle |
| `setView / getView` | `view` via `NSView` handle |

`possibleLabels`, `menuFormRepresentation`, `target`, `action`, and `validate` are follow-on binds.
