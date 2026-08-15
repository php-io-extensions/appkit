---
type: CoreType
title: AppKit\NS\NSTextLayoutManager\NSTextLayoutManager
description: NSTextLayoutManager TextKit 2 layout: containers, fragments, viewport controller.
resource: /appkit/ns/nstextlayoutmanager/nstextlayoutmanager.zep
tags: [appkit, api, nstextlayoutmanager, textkit]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstextlayoutmanager/nstextlayoutmanager.zep
    title: nstextlayoutmanager.zep
  - id: h
    resource: /src/ns-textlayoutmanager.h
    title: ns-textlayoutmanager.h
  - id: m
    resource: /src/ns-textlayoutmanager.m
    title: ns-textlayoutmanager.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy` | ownership |
| `usesFontLeading / limitsLayoutForSuspiciousContents / usesHyphenation` | layout flags |
| `replaceTextContentManager` | NSTextContentManager handle |
| `setTextContainer / getTextContainer` | NSTextContainer handle |
| `usageBoundsForTextContainer` | CGRect via out params / [x,y,w,h] |
| `textViewportLayoutController` | retained NSTextViewportLayoutController handle |
| `ensureLayoutForBounds` | ensureLayoutForBounds: |
| `invalidateLayoutForRange` | borrowed NSTextRange* |
| `textLayoutFragmentForPosition` | retained NSTextLayoutFragment handle |
| `textSelectionsCount` | textSelections.count |
