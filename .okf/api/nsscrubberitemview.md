---
type: CoreType
title: AppKit\\NS\\NSScrubberItemView\\NSScrubberItemView
description: NSScrubberItemView base for scrubber item views
resource: /appkit/ns/nsscrubberitemview/nsscrubberitemview.zep
tags: [appkit, api, nsscrubberitemview]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T15:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsscrubberitemview/nsscrubberitemview.zep
    title: nsscrubberitemview.zep
  - id: h
    resource: /src/ns-scrubberitemview.h
    title: ns-scrubberitemview.h
  - id: m
    resource: /src/ns-scrubberitemview.m
    title: ns-scrubberitemview.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsScrubberItemView` | view-box ownership |
| `setSelected / isSelected` | inherited `selected` |
| `setHighlighted / isHighlighted` | inherited `highlighted` |
| `applyLayoutAttributes` | inherited `-applyLayoutAttributes:` |

Subclasses: `NSScrubberTextItemView`, `NSScrubberImageItemView`. `NSScrubber` uses internal `NSPhpScrubberItemView` subclass in `ns-scrubber.m`.
