---
type: CoreType
title: AppKit\NS\NSTextContentManager\NSTextContentManager
description: NSTextContentManager owns TextKit 2 layout managers and the document range.
resource: /appkit/ns/nstextcontentmanager/nstextcontentmanager.zep
tags: [appkit, api, nstextcontentmanager, textkit]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstextcontentmanager/nstextcontentmanager.zep
    title: nstextcontentmanager.zep
  - id: h
    resource: /src/ns-textcontentmanager.h
    title: ns-textcontentmanager.h
  - id: m
    resource: /src/ns-textcontentmanager.m
    title: ns-textcontentmanager.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy` | ownership |
| `addTextLayoutManager / removeTextLayoutManager` | NSTextLayoutManager handle |
| `textLayoutManagersCount / hasEditingTransaction` | graph / editing |
| `automaticallySynchronizesTextLayoutManagers get/set` | sync to layout managers |
| `automaticallySynchronizesToBackingStore get/set` | sync to backing store |
| `documentRangePtr` | borrowed native NSTextRange* (do not destroy) |
