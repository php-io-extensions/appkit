---
type: CoreType
title: AppKit\\NS\\NSDraggingImageComponent\\NSDraggingImageComponent
description: Composited drag image layer
resource: /appkit/ns/nsdraggingimagecomponent/nsdraggingimagecomponent.zep
tags: [appkit, api, nsdraggingimagecomponent]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:05:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `withKey` | `+draggingImageComponentWithKey:` |
| `wrap / destroy / nsDraggingImageComponent` | handle lifecycle |
| `getKey / setKey` | `key` |
| `setContents / getContents` | `contents` (typically NSImage*) |
| `frameRect / setFrameRect` | `frame` |

Built-in keys: `NSDraggingImageComponentIconKey`, `NSDraggingImageComponentLabelKey`.
