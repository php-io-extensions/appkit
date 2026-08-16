---
type: CoreType
title: AppKit\\NS\\NSNib\\NSNib
description: Interface Builder nib loader
resource: /appkit/ns/nsnib/nsnib.zep
tags: [appkit, api, nsnib]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:45:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsnib/nsnib.zep
    title: nsnib.zep
  - id: h
    resource: /src/ns-nib.h
    title: ns-nib.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `createNamed` | `-initWithNibNamed:bundle:` (empty bundle path = main bundle) |
| `wrap / destroy / nsNib` | handle lifecycle |
| `instantiateWithOwner` | `-instantiateWithOwner:topLevelObjects:` |
| `instantiateWithOwnerTopLevelCount` | same call, returns top-level object count |

# Not bound

`-initWithNibData:bundle:`, deprecated external name table APIs, `NSCoding` archive path.

Top-level objects remain autoreleased in AppKit; retain via owner outlets or PHP-side handles as needed.
