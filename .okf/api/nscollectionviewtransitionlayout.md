---
type: CoreType
title: AppKit\\NS\\NSCollectionViewTransitionLayout\\NSCollectionViewTransitionLayout
description: NSCollectionViewTransitionLayout between two layouts
resource: /appkit/ns/nscollectionviewtransitionlayout/nscollectionviewtransitionlayout.zep
tags: [appkit, api, nscollectionviewtransitionlayout]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:40:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscollectionviewtransitionlayout/nscollectionviewtransitionlayout.zep
    title: nscollectionviewtransitionlayout.zep
  - id: h
    resource: /src/ns-collectionviewtransitionlayout.h
    title: ns-collectionviewtransitionlayout.h
  - id: m
    resource: /src/ns-collectionviewtransitionlayout.m
    title: ns-collectionviewtransitionlayout.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(current, next)` | initWithCurrentLayout:nextLayout: |
| `wrap / destroy / nsCollectionViewTransitionLayout` | ownership |
| `setProgress / getProgress` | transitionProgress |
| `currentLayout / nextLayout` | wrapped NSCollectionViewLayout handles |
| `updateValue / valueForKey` | animated key interpolation |
