---
type: CoreType
title: AppKit\\NS\\NSScrubberSelectionView\\NSScrubberSelectionView
description: NSScrubberSelectionView base for scrubber selection decorations
resource: /appkit/ns/nsscrubberselectionview/nsscrubberselectionview.zep
tags: [appkit, api, nsscrubberselectionview]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T15:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsscrubberselectionview/nsscrubberselectionview.zep
    title: nsscrubberselectionview.zep
  - id: h
    resource: /src/ns-scrubberselectionview.h
    title: ns-scrubberselectionview.h
  - id: m
    resource: /src/ns-scrubberselectionview.m
    title: ns-scrubberselectionview.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsScrubberSelectionView` | view-box ownership |
| `setSelected / isSelected` | inherited `selected` |
| `setHighlighted / isHighlighted` | inherited `highlighted` |
| `applyLayoutAttributes` | inherited `-applyLayoutAttributes:` |

Used by `NSScrubberSelectionStyle -makeSelectionView`. Subclass for custom selection chrome.
