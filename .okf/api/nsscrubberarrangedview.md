---
type: CoreType
title: AppKit\\NS\\NSScrubberArrangedView\\NSScrubberArrangedView
description: NSScrubberArrangedView base for scrubber arranged views
resource: /appkit/ns/nsscrubberarrangedview/nsscrubberarrangedview.zep
tags: [appkit, api, nsscrubberarrangedview]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T15:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsscrubberarrangedview/nsscrubberarrangedview.zep
    title: nsscrubberarrangedview.zep
  - id: h
    resource: /src/ns-scrubberarrangedview.h
    title: ns-scrubberarrangedview.h
  - id: m
    resource: /src/ns-scrubberarrangedview.m
    title: ns-scrubberarrangedview.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsScrubberArrangedView` | view-box ownership |
| `setSelected / isSelected` | `selected` |
| `setHighlighted / isHighlighted` | `highlighted` |
| `applyLayoutAttributes` | `-applyLayoutAttributes:` (borrowed `NSScrubberLayoutAttributes*`) |

Subclasses: `NSScrubberSelectionView`, `NSScrubberItemView`, `NSScrubberTextItemView`, `NSScrubberImageItemView`.
