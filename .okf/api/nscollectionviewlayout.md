---
type: CoreType
title: AppKit\\NS\\NSCollectionViewLayout\\NSCollectionViewLayout
description: NSCollectionViewLayout base collection layout
resource: /appkit/ns/nscollectionviewlayout/nscollectionviewlayout.zep
tags: [appkit, api, nscollectionviewlayout]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:40:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscollectionviewlayout/nscollectionviewlayout.zep
    title: nscollectionviewlayout.zep
  - id: h
    resource: /src/ns-collectionviewlayout.h
    title: ns-collectionviewlayout.h
  - id: m
    resource: /src/ns-collectionviewlayout.m
    title: ns-collectionviewlayout.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsCollectionViewLayout` | NSObject retain/release |
| `invalidate` | invalidateLayout |
| `collectionView` | borrowed NSView wrap of collectionView |
| `contentWidth / contentHeight` | collectionViewContentSize |

`NSCollectionViewLayoutAttributes`, `NSCollectionViewUpdateItem`, and `NSCollectionViewLayoutInvalidationContext` are bound as part of `NSCollectionViewLayout` (layout invalidation + content size; attribute objects are not separately exposed).
