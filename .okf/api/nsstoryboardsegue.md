---
type: CoreType
title: AppKit\\NS\\NSStoryboardSegue\\NSStoryboardSegue
description: Storyboard segue between view/window controllers
resource: /appkit/ns/nsstoryboardsegue/nsstoryboardsegue.zep
tags: [appkit, api, nsstoryboardsegue]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsstoryboardsegue/nsstoryboardsegue.zep
    title: nsstoryboardsegue.zep
  - id: h
    resource: /src/ns-storyboardsegue.h
    title: ns-storyboardsegue.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `create` | `-initWithIdentifier:source:destination:` |
| `wrap / destroy / nsStoryboardSegue` | handle lifecycle |
| `getIdentifier` | `identifier` |
| `getSourceController / getDestinationController` | borrowed controller pointers |
| `perform` | `-perform` |

# Not bound

`+segueWithIdentifier:source:destination:performHandler:` (block handler).
