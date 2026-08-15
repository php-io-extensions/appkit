---
type: CoreType
title: AppKit\NS\NSTextStorage\NSTextStorage
description: NSTextStorage mutable attributed string
resource: /appkit/ns/nstextstorage/nstextstorage.zep
tags: [appkit, api, nstextstorage]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstextstorage/nstextstorage.zep
    title: nstextstorage.zep
  - id: h
    resource: /src/ns-textstorage.h
    title: ns-textstorage.h
  - id: m
    resource: /src/ns-textstorage.m
    title: ns-textstorage.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsTextStorage` | ownership |
| `setString / getString` | plain string |
| `addLayoutManager / removeLayoutManager / layoutManagersCount` | managers |
| `editedMask / getEditedRange / changeInLength` | edit state |
| `beginEditing / endEditing / processEditing` | batched edits |
| `fixesAttributesLazily` | lazy attributes |
