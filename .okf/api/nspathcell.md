---
type: CoreType
title: AppKit\NS\NSPathCell\NSPathCell
description: NSPathCell used by NSPathControl
resource: /appkit/ns/nspathcell/nspathcell.zep
tags: [appkit, api, nspathcell]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T03:45:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nspathcell/nspathcell.zep
    title: nspathcell.zep
  - id: h
    resource: /src/ns-pathcell.h
    title: ns-pathcell.h
  - id: m
    resource: /src/ns-pathcell.m
    title: ns-pathcell.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `createText / wrap / destroy / nsPathCell` | ownership |
| `title / state / enabled / tag` | NSActionCell base |
| `pathStyle / urlPath` | path + NSPathStyle |
| `placeholderString / backgroundColor / allowedTypes` | appearance + UTI filter |
| `pathComponentCount` | component query |
