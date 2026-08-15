---
type: CoreType
title: AppKit\\NS\\NSColorList\\NSColorList
description: Named color swatch lists for the color panel
resource: /appkit/ns/nscolorlist/nscolorlist.zep
tags: [appkit, api, nscolorlist]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T06:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscolorlist/nscolorlist.zep
    title: nscolorlist.zep
  - id: h
    resource: /src/ns-colorlist.h
    title: ns-colorlist.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `availableCount` / `availableAt` | `+availableColorLists` |
| `named` | `+colorListNamed:` |
| `create` / `createFromFile` | `-initWithName:` / `-initWithName:fromFile:` |
| `setColor` / `insertColor` / `removeColorWithKey` | list mutation |
| `colorWithKey` | `-colorWithKey:` |
| `allKeysCount` / `allKeyAt` | `allKeys` |
| `writeToUrl` | `-writeToURL:error:` (nil URL → user color lists dir) |
| `removeFile` | `-removeFile` |

Posts `NSColorListDidChangeNotification` when mutated.
