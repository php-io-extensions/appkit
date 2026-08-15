---
type: CoreType
title: AppKit\\NS\\NSCollectionView\\NSCollectionView
description: NSCollectionView grid list
resource: /appkit/ns/nscollectionview/nscollectionview.zep
tags: [appkit, api, nscollectionview]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T04:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscollectionview/nscollectionview.zep
    title: nscollectionview.zep
  - id: h
    resource: /src/ns-collectionview.h
    title: ns-collectionview.h
  - id: m
    resource: /src/ns-collectionview.m
    title: ns-collectionview.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(...)` | `[[NSCollectionView alloc] initWithFrame:]` + flow layout |
| `destroy` | view-box teardown |
| `clear` / `addItem` / `itemCount` | in-memory item list |
| `getSelected` / `setSelected` | index selection |
| `pollChange` | one-shot selection change flag |
| `setLayout / getLayout` | `collectionViewLayout` (NSCollectionViewLayout handle) |

Moved from `Metal\\MTL\\CollectionView` / `mtl_collection_*`.
