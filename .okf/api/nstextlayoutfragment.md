---
type: CoreType
title: AppKit\NS\NSTextLayoutFragment\NSTextLayoutFragment
description: NSTextLayoutFragment frame, state, line fragments, and padding.
resource: /appkit/ns/nstextlayoutfragment/nstextlayoutfragment.zep
tags: [appkit, api, nstextlayoutfragment, textkit]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstextlayoutfragment/nstextlayoutfragment.zep
    title: nstextlayoutfragment.zep
  - id: h
    resource: /src/ns-textlayoutfragment.h
    title: ns-textlayoutfragment.h
  - id: m
    resource: /src/ns-textlayoutfragment.m
    title: ns-textlayoutfragment.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `wrap / destroy` | ownership (from layout manager) |
| `state` | NSTextLayoutFragmentState |
| `layoutFragmentFrame / renderingSurfaceBounds` | CGRect arrays [x,y,w,h] |
| `textLineFragmentsCount / invalidateLayout` | lines / relayout |
| `leadingPadding / trailingPadding / topMargin / bottomMargin` | insets |
