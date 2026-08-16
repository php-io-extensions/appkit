---
type: CoreType
title: AppKit\\NS\\NSTreeController\\NSTreeController
description: Hierarchical tree Cocoa bindings controller
resource: /appkit/ns/nstreecontroller/nstreecontroller.zep
tags: [appkit, api, nstreecontroller]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstreecontroller/nstreecontroller.zep
    title: nstreecontroller.zep
  - id: h
    resource: /src/ns-treecontroller.h
    title: ns-treecontroller.h
  - id: m
    resource: /src/ns-treecontroller.m
    title: ns-treecontroller.m
---

# Schema

| Method | Maps to |
|--------|---------|
| lifecycle + editing | handle ownership |
| `rearrangeObjects / arrangedObjectsRootNode` | tree root |
| `childrenKeyPath / countKeyPath / leafKeyPath / content` | KVC paths |
| `canInsert / canInsertChild / canAddChild` | validation |
| selection flags + `selectedObjects*` + `selectedNodes*` | selection |
| `setSelectionIndexPath / selectionIndexPath*` | NSIndexPath selection |
| `insertObjectAtArrangedObjectIndexPath / removeObjectAtArrangedObjectIndexPath` | mutation |

# Not bound

`NSSortDescriptor`, `moveNode:toIndexPath:`, per-node key-path overrides — extend when NSTreeNode is bound.
