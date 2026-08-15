---
type: CoreType
title: AppKit\\NS\\NSCollectionViewCompositionalLayout\\NSCollectionViewCompositionalLayout
description: NSCollectionViewCompositionalLayout section-based layout
resource: /appkit/ns/nscollectionviewcompositionallayout/nscollectionviewcompositionallayout.zep
tags: [appkit, api, nscollectionviewcompositionallayout]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:40:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscollectionviewcompositionallayout/nscollectionviewcompositionallayout.zep
    title: nscollectionviewcompositionallayout.zep
  - id: h
    resource: /src/ns-collectionviewcompositionallayout.h
    title: ns-collectionviewcompositionallayout.h
  - id: m
    resource: /src/ns-collectionviewcompositionallayout.m
    title: ns-collectionviewcompositionallayout.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `createList / createGrid` | initWithSection: using a list or N-column group |
| `wrap / destroy / nsCollectionViewCompositionalLayout` | ownership |
| `scrollDirection` | configuration.scrollDirection (VERTICAL=0, HORIZONTAL=1) |
| `interSectionSpacing` | configuration.interSectionSpacing |

`NSCollectionViewCompositionalLayoutConfiguration`, `NSCollectionLayoutSection`, `NSCollectionLayoutGroup`, `NSCollectionLayoutItem`, and related layout-size types are bound as part of `NSCollectionViewCompositionalLayout` (`createList` / `createGrid`).
