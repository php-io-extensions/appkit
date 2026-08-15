---
type: CoreType
title: AppKit\\NS\\NSMenuItem\\NSMenuItem
description: NSMenuItem full menu item bind
resource: /appkit/ns/nsmenuitem/nsmenuitem.zep
tags: [appkit, api, nsmenuitem]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:30:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / separator / sectionHeader / wrap / destroy / nsMenuItem` | item lifecycle |
| `setTitle / getTitle / setSubtitle / getSubtitle` | labels |
| `setKeyEquivalent / getKeyEquivalent` | `keyEquivalent` |
| `setEnabled / isEnabled / setHidden / isHidden` | visibility + enabled |
| `setState / getState / setTag / getTag` | control state |
| `setToolTip / getToolTip` | `toolTip` |
| `setIndentationLevel / getIndentationLevel` | `indentationLevel` |
| `setRepresentedObject / getRepresentedObject` | string token storage |
| `setView / view` | custom menu item view-box |
| `isSeparator / isSectionHeader / hasSubmenu` | readonly flags |
| `add(...)` | alias of `NSMenu::addItem` (menu bar convenience) |

Target/action/submenu attach are follow-on binds; `representedObject` stores UTF-8 tokens for now.
