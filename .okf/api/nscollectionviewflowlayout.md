---
type: CoreType
title: AppKit\\NS\\NSCollectionViewFlowLayout\\NSCollectionViewFlowLayout
description: NSCollectionViewFlowLayout flowing item layout
resource: /appkit/ns/nscollectionviewflowlayout/nscollectionviewflowlayout.zep
tags: [appkit, api, nscollectionviewflowlayout]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:40:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscollectionviewflowlayout/nscollectionviewflowlayout.zep
    title: nscollectionviewflowlayout.zep
  - id: h
    resource: /src/ns-collectionviewflowlayout.h
    title: ns-collectionviewflowlayout.h
  - id: m
    resource: /src/ns-collectionviewflowlayout.m
    title: ns-collectionviewflowlayout.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsCollectionViewFlowLayout` | ownership |
| `itemSize / estimatedItemSize` | item metrics |
| `minimumLineSpacing / minimumInteritemSpacing` | spacing |
| `scrollDirection` | NSCollectionViewScrollDirection (VERTICAL=0, HORIZONTAL=1) |
| `headerReferenceSize / footerReferenceSize / sectionInset` | section chrome |
| `sectionHeadersPin / sectionFootersPin` | pin to visible bounds |
| `collapseSection / expandSection / sectionIsCollapsed` | section collapse |

`NSCollectionViewFlowLayoutInvalidationContext` and `NSCollectionViewDelegateFlowLayout` are bound as part of `NSCollectionViewFlowLayout`.
