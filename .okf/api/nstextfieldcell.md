---
type: CoreType
title: AppKit\NS\NSTextFieldCell\NSTextFieldCell
description: NSTextFieldCell used by NSTextField
resource: /appkit/ns/nstextfieldcell/nstextfieldcell.zep
tags: [appkit, api, nstextfieldcell]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T03:15:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstextfieldcell/nstextfieldcell.zep
    title: nstextfieldcell.zep
  - id: h
    resource: /src/ns-textfieldcell.h
    title: ns-textfieldcell.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `createText` / `wrap` / `destroy` / `nsTextFieldCell` | ownership (`initTextCell:`) |
| title / stringValue | text |
| backgroundColor / drawsBackground / textColor | colors |
| bezelStyle / placeholderString | chrome |
| `setWantsNotificationForMarkedText` | IME notification flag |
