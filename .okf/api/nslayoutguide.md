---
type: CoreType
title: AppKit\\NS\\NSLayoutGuide\\NSLayoutGuide
description: Layout rectangle not backed by a view
resource: /appkit/ns/nslayoutguide/nslayoutguide.zep
tags: [appkit, api, nslayoutguide]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:55:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nslayoutguide/nslayoutguide.zep
    title: nslayoutguide.zep
  - id: h
    resource: /src/ns-layoutguide.h
    title: ns-layoutguide.h
  - id: m
    resource: /src/ns-layoutguide.m
    title: ns-layoutguide.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsLayoutGuide` | NSLayoutGuide lifecycle |
| `getFrame / identifier / owningView` | guide geometry + identity |
| `addToView / removeFromView` | NSView addLayoutGuide: / removeLayoutGuide: |
| `*Anchor` | layout anchor properties |
| `hasAmbiguousLayout` | debug |
