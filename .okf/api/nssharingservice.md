---
type: CoreType
title: AppKit\\NS\\NSSharingService\\NSSharingService
description: Built-in and system share services
resource: /appkit/ns/nssharingservice/nssharingservice.zep
tags: [appkit, api, nssharingservice]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:05:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `named` | `+sharingServiceNamed:` |
| `wrap / destroy / nsSharingService` | handle lifecycle |
| `getTitle / getMenuItemTitle / setMenuItemTitle` | labels |
| `getSubject / setSubject / setRecipients / getRecipients` | mail/message config |
| `canPerformWithStrings / performWithStrings` | validation + `-performWithItems:` (NSString items) |

Built-in service name strings include `NSSharingServiceNameComposeEmail`, `NSSharingServiceNameSendViaAirDrop`, etc.

# Not bound

Deprecated `+sharingServicesForItems:`, custom `-initWithTitle:image:alternateImage:handler:`, CloudKit delegate surface, delegate transition hooks.
