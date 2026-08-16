---
type: CoreType
title: AppKit\\NS\\NSStoryboard\\NSStoryboard
description: Storyboard scene loader
resource: /appkit/ns/nsstoryboard/nsstoryboard.zep
tags: [appkit, api, nsstoryboard]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:45:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsstoryboard/nsstoryboard.zep
    title: nsstoryboard.zep
  - id: h
    resource: /src/ns-storyboard.h
    title: ns-storyboard.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `main` | `+mainStoryboard` |
| `withName` | `+storyboardWithName:bundle:` |
| `wrap / destroy / nsStoryboard` | handle lifecycle |
| `instantiateInitialController` | `-instantiateInitialController` |
| `instantiateControllerWithIdentifier` | `-instantiateControllerWithIdentifier:` |

Instantiated controllers are returned as retained handles (`destroy` to release).

# Not bound

Creator-block variants (`instantiateInitialControllerWithCreator:`, `instantiateControllerWithIdentifier:creator:`).
