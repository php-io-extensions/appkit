---
type: CoreType
title: AppKit\\NS\\NSRuleEditor\\NSRuleEditor
description: NSRuleEditor row-based criteria editor
resource: /appkit/ns/nsruleeditor/nsruleeditor.zep
tags: [appkit, api, nsruleeditor]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:54:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsruleeditor/nsruleeditor.zep
    title: nsruleeditor.zep
  - id: h
    resource: /src/ns-ruleeditor.h
    title: ns-ruleeditor.h
  - id: m
    resource: /src/ns-ruleeditor.m
    title: ns-ruleeditor.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / destroy` | view-box ownership |
| `setEditable / isEditable` | editable |
| `addRow / removeRowAt / numberOfRows` | rows |
| `setNestingMode / getNestingMode` | NSRuleEditorNestingMode |
| `setCanRemoveAllRows / canRemoveAllRows` | empty editor policy |
