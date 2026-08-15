---
type: CoreType
title: AppKit\\NS\\NSScrubber\\NSScrubber
description: NSScrubber horizontal scrubber control
resource: /appkit/ns/nsscrubber/nsscrubber.zep
tags: [appkit, api, nsscrubber]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:30:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsScrubber` | view-box ownership |
| `clear / addItem / numberOfItems / reloadData` | PHP-driven data source |
| `setMode / getMode` | `mode` (FIXED=0, FREE=1) |
| `setItemAlignment / getItemAlignment` | `itemAlignment` |
| `setContinuous / isContinuous` | `continuous` |
| `setSelectedIndex / getSelectedIndex / highlightedIndex` | selection |
| `setShowsArrowButtons / showsArrowButtons` | arrow buttons |
| `setShowsAdditionalContentIndicators / shows*` | fade indicators |
| `pollSelection` | delegate selection since last poll |

Full `NSScrubberDataSource` delegate surface is simplified to string item list (collection-view pattern).
