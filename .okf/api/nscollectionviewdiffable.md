---
type: CoreType
title: AppKit\\NS\\NSCollectionViewDiffableDataSource\\NSCollectionViewDiffableDataSource
description: Simplified string-identifier NSCollectionViewDiffableDataSource
resource: /appkit/ns/nscollectionviewdiffabledatasource/nscollectionviewdiffabledatasource.zep
tags: [appkit, api, nscollectionviewdiffabledatasource]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:40:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscollectionviewdiffabledatasource/nscollectionviewdiffabledatasource.zep
    title: nscollectionviewdiffabledatasource.zep
  - id: h
    resource: /src/ns-collectionviewdiffable.h
    title: ns-collectionviewdiffable.h
  - id: m
    resource: /src/ns-collectionviewdiffable.m
    title: ns-collectionviewdiffable.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(collection) / destroy` | attaches built-in string item provider |
| `setItemTitle` | title shown by the item provider |
| `apply(sectionId, itemIds, animating)` | NSDiffableDataSourceSnapshot |
| `itemCount / itemIdAt` | snapshot query |

`NSDiffableDataSourceSnapshot` is bound as part of `NSCollectionViewDiffableDataSource` (`apply` / snapshot query).
