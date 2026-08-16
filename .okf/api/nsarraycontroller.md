---
type: CoreType
title: AppKit\\NS\\NSArrayController\\NSArrayController
description: Array Cocoa bindings controller with selection and arrangement
resource: /appkit/ns/nsarraycontroller/nsarraycontroller.zep
tags: [appkit, api, nsarraycontroller]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsarraycontroller/nsarraycontroller.zep
    title: nsarraycontroller.zep
  - id: h
    resource: /src/ns-arraycontroller.h
    title: ns-arraycontroller.h
  - id: m
    resource: /src/ns-arraycontroller.m
    title: ns-arraycontroller.m
---

# Schema

| Method | Maps to |
|--------|---------|
| lifecycle + editing + content/editable/canAdd/canRemove | NSObjectController subset |
| `rearrangeObjects / automaticallyRearrangesObjects / automaticRearrangementKeyPaths*` | arrangement |
| `clearsFilterPredicateOnInsertion / arrangedObjectsCount / arrangedObjectAt` | display array |
| selection flags + `setSelectionIndex / setSelectionIndexes` | selection |
| `canInsert / canSelectNext / canSelectPrevious` | validation |
| `insertObjectAtArrangedObjectIndex / removeObjectAtArrangedObjectIndex / addObject / removeObject` | mutation |

# Not bound

`NSSortDescriptor` / `NSPredicate` filter and sort descriptor properties — extend when those Foundation types are bound.
