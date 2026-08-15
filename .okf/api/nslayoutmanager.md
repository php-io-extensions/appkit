---
type: CoreType
title: AppKit\NS\NSLayoutManager\NSLayoutManager
description: NSLayoutManager maps storage into containers
resource: /appkit/ns/nslayoutmanager/nslayoutmanager.zep
tags: [appkit, api, nslayoutmanager]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nslayoutmanager/nslayoutmanager.zep
    title: nslayoutmanager.zep
  - id: h
    resource: /src/ns-layoutmanager.h
    title: ns-layoutmanager.h
  - id: m
    resource: /src/ns-layoutmanager.m
    title: ns-layoutmanager.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsLayoutManager` | ownership |
| `replaceTextStorage / addTextContainer / removeTextContainerAtIndex` | graph |
| `textContainersCount / textContainerChangedGeometry` | containers |
| `showsInvisibleCharacters / showsControlCharacters / usesDefaultHyphenation` | display |
| `defaultFont` | fallback font handle |
