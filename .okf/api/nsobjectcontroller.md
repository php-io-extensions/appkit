---
type: CoreType
title: AppKit\\NS\\NSObjectController\\NSObjectController
description: Single-object Cocoa bindings controller
resource: /appkit/ns/nsobjectcontroller/nsobjectcontroller.zep
tags: [appkit, api, nsobjectcontroller]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsobjectcontroller/nsobjectcontroller.zep
    title: nsobjectcontroller.zep
  - id: h
    resource: /src/ns-objectcontroller.h
    title: ns-objectcontroller.h
  - id: m
    resource: /src/ns-objectcontroller.m
    title: ns-objectcontroller.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / createWithContent / wrap / destroy / nsObjectController` | lifecycle |
| `discardEditing / commitEditing / isEditing` | NSController editing |
| `content / selection / selectedObjectsCount / selectedObjectAt` | content + selection |
| `automaticallyPreparesContent / prepareContent / objectClassName / newObject` | object prep |
| `addObject / removeObject / editable / canAdd / canRemove` | mutation |

# Not bound

NSManagedController category (Core Data context, entityName, fetchWithRequest:) — extend when Core Data types are bound.
