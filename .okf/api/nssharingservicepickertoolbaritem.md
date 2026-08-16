---
type: CoreType
title: AppKit\\NS\\NSSharingServicePickerToolbarItem\\NSSharingServicePickerToolbarItem
description: NSSharingServicePickerToolbarItem share picker (macOS 10.15+)
resource: /appkit/ns/nssharingservicepickertoolbaritem/nssharingservicepickertoolbaritem.zep
tags: [appkit, api, nssharingservicepickertoolbaritem]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:08:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsSharingServicePickerToolbarItem` | retain ownership |
| `setShareStrings / getShareStrings` | PHP-side payload returned by delegate |
| `pollShareRequest` | one-shot when user opens share picker |

ObjC delegate `itemsForSharingServicePickerToolbarItem:` is bridged via associated-object box; strings must conform to `NSPasteboardWriting` when passed to AppKit (NSString is fine).

Full `NSSharingServicePickerToolbarItemDelegate` with dynamic item lists is follow-on.
