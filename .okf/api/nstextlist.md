---
type: CoreType
title: AppKit\NS\NSTextList\NSTextList
description: NSTextList marker format for attributed text
resource: /appkit/ns/nstextlist/nstextlist.zep
tags: [appkit, api, nstextlist]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstextlist/nstextlist.zep
    title: nstextlist.zep
  - id: h
    resource: /src/ns-textlist.h
    title: ns-textlist.h
  - id: m
    resource: /src/ns-textlist.m
    title: ns-textlist.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy` | ownership |
| `markerForItemNumber` | resolved marker string |
| `isOrdered` | ordered vs unordered |
| `startingItemNumber / markerFormat` | list identity |
