---
type: CoreType
title: AppKit\\NS\\NSTrackingSeparatorToolbarItem\\NSTrackingSeparatorToolbarItem
description: NSTrackingSeparatorToolbarItem split-view tracking separator (macOS 11.0+)
resource: /appkit/ns/nstrackingseparatortoolbaritem/nstrackingseparatortoolbaritem.zep
tags: [appkit, api, nstrackingseparatortoolbaritem]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:08:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsTrackingSeparatorToolbarItem` | retain ownership |
| `trackingSeparator` | `+trackingSeparatorToolbarItemWithIdentifier:splitView:dividerIndex:` |
| `setSplitView / getSplitView` | `splitView` via `NSSplitView` handle |
| `setDividerIndex / getDividerIndex` | `dividerIndex` |

Split view must live in the same window as the toolbar before display. Only vertical split views are supported by AppKit.
