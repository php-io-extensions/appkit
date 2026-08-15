---
type: CoreType
title: AppKit\\NS\\NSPredicateEditor\\NSPredicateEditor
description: NSPredicateEditor rule-based predicate UI
resource: /appkit/ns/nspredicateeditor/nspredicateeditor.zep
tags: [appkit, api, nspredicateeditor]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:54:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nspredicateeditor/nspredicateeditor.zep
    title: nspredicateeditor.zep
  - id: h
    resource: /src/ns-predicateeditor.h
    title: ns-predicateeditor.h
  - id: m
    resource: /src/ns-predicateeditor.m
    title: ns-predicateeditor.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / destroy` | view-box ownership |
| `setEditable / isEditable` | editable |
| `addRow / removeRowAt / numberOfRows` | rows |
| `setNestingMode / getNestingMode` | NSRuleEditorNestingMode |
| `setCanRemoveAllRows / canRemoveAllRows` | empty editor policy |
