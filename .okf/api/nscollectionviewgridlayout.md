---
type: CoreType
title: AppKit\\NS\\NSCollectionViewGridLayout\\NSCollectionViewGridLayout
description: NSCollectionViewGridLayout legacy grid layout
resource: /appkit/ns/nscollectionviewgridlayout/nscollectionviewgridlayout.zep
tags: [appkit, api, nscollectionviewgridlayout]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:40:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscollectionviewgridlayout/nscollectionviewgridlayout.zep
    title: nscollectionviewgridlayout.zep
  - id: h
    resource: /src/ns-collectionviewgridlayout.h
    title: ns-collectionviewgridlayout.h
  - id: m
    resource: /src/ns-collectionviewgridlayout.m
    title: ns-collectionviewgridlayout.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsCollectionViewGridLayout` | ownership |
| `setMargins` | NSEdgeInsets margins |
| `minimumInteritemSpacing / minimumLineSpacing` | spacing |
| `maximumNumberOfRows / maximumNumberOfColumns` | grid caps (0 = unlimited) |
| `minimumItemSize / maximumItemSize` | item size limits |
