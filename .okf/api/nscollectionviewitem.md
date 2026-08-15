---
type: CoreType
title: AppKit\\NS\\NSCollectionViewItem\\NSCollectionViewItem
description: NSCollectionViewItem view controller for collection items
resource: /appkit/ns/nscollectionviewitem/nscollectionviewitem.zep
tags: [appkit, api, nscollectionviewitem]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:54:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscollectionviewitem/nscollectionviewitem.zep
    title: nscollectionviewitem.zep
  - id: h
    resource: /src/ns-collectionviewitem.h
    title: ns-collectionviewitem.h
  - id: m
    resource: /src/ns-collectionviewitem.m
    title: ns-collectionviewitem.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsCollectionViewItem` | view-controller retain |
| `setView / view` | hosted view-box |
| `setTitle / getTitle / setText / getText` | title + textField |
| `selected / highlightState` | selection chrome |
| `textField / imageView` | subview wraps |
