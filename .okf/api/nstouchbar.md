---
type: CoreType
title: AppKit\\NS\\NSTouchBar\\NSTouchBar
description: NSTouchBar customization bar
resource: /appkit/ns/nstouchbar/nstouchbar.zep
tags: [appkit, api, nstouchbar]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:30:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsTouchBar` | `retain ownership` |
| `setDefaultItemIdentifiers / getDefaultItemIdentifiers` | `defaultItemIdentifiers` |
| `setTemplateItems` | `templateItems NSSet` |
| `itemForIdentifier` | `itemForIdentifier:` |
| `assignToResponder / touchBarFromResponder` | `NSResponder.touchBar` |
| `setAutomaticCustomizeTouchBarMenuItemEnabled` | `NSTouchBar.automaticCustomizeTouchBarMenuItemEnabled` |

Follow-on: delegate protocols, `target`/`action`, and compression/layout option objects where not yet bound.
