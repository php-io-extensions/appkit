---
type: CoreType
title: AppKit\\NS\\NSTableViewDiffableDataSource\\NSTableViewDiffableDataSource
description: Simplified string-identifier NSTableViewDiffableDataSource
resource: /appkit/ns/nstableviewdiffabledatasource/nstableviewdiffabledatasource.zep
tags: [appkit, api, nstableviewdiffable]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:54:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstableviewdiffabledatasource/nstableviewdiffabledatasource.zep
    title: nstableviewdiffabledatasource.zep
  - id: h
    resource: /src/ns-tableviewdiffable.h
    title: ns-tableviewdiffable.h
  - id: m
    resource: /src/ns-tableviewdiffable.m
    title: ns-tableviewdiffable.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(table) / destroy` | attaches built-in string cell provider |
| `setItemTitle` | title shown by the cell provider |
| `apply(sectionId, itemIds, animating)` | NSDiffableDataSourceSnapshot |
| `itemCount / itemIdAt` | snapshot query |
