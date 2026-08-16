---
type: CoreType
title: AppKit\\NS\\NSSearchToolbarItem\\NSSearchToolbarItem
description: NSSearchToolbarItem toolbar search field (macOS 11.0+)
resource: /appkit/ns/nssearchtoolbaritem/nssearchtoolbaritem.zep
tags: [appkit, api, nssearchtoolbaritem]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:08:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsSearchToolbarItem` | retain ownership |
| `setSearchField / getSearchField` | `searchField` via `NSSearchField` handle |
| `setResignsFirstResponderWithCancel / resignsFirstResponderWithCancel` | `resignsFirstResponderWithCancel` |
| `setPreferredWidthForSearchField / preferredWidthForSearchField` | `preferredWidthForSearchField` |
| `beginSearchInteraction / endSearchInteraction` | search focus helpers |

`view` is unavailable on this subclass (owned by the item).
