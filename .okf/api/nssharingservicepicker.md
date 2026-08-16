---
type: CoreType
title: AppKit\\NS\\NSSharingServicePicker\\NSSharingServicePicker
description: Share picker UI anchored to a view
resource: /appkit/ns/nssharingservicepicker/nssharingservicepicker.zep
tags: [appkit, api, nssharingservicepicker]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:05:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `create` | `-initWithItems:` (NSString pasteboard writers) |
| `wrap / destroy / nsSharingServicePicker` | handle lifecycle |
| `showRelativeToRect` | `-showRelativeToRect:ofView:preferredEdge:` |
| `close` | `-close` (macOS 13+) |
| `pollChosenService` | delegate `didChooseSharingService:` via associated object |
| `standardShareMenuItem` | `standardShareMenuItem` (macOS 13+) |

# Not bound

Full `NSSharingServicePickerDelegate` customization (`sharingServicesForItems:proposedSharingServices:`, collaboration mode restrictions).
