---
type: CoreType
title: AppKit\\NS\\NSDockTile\\NSDockTile
description: Application or mini-window dock tile
resource: /appkit/ns/nsdocktile/nsdocktile.zep
tags: [appkit, api, nsdocktile]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:55:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsdocktile/nsdocktile.zep
    title: nsdocktile.zep
  - id: h
    resource: /src/ns-docktile.h
    title: ns-docktile.h
  - id: m
    resource: /src/ns-docktile.m
    title: ns-docktile.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `applicationDockTile / wrap / destroy / nsDockTile` | retain of NSDockTile |
| `getSize / contentView / setContentView` | size + custom content view |
| `display` | -display |
| `showsApplicationBadge / badgeLabel` | badge properties |
| `owner` | borrowed owner (NSApp or NSWindow) |
