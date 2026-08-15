---
type: CoreType
title: AppKit\NS\NSSearchFieldCell\NSSearchFieldCell
description: NSSearchFieldCell used by NSSearchField
resource: /appkit/ns/nssearchfieldcell/nssearchfieldcell.zep
tags: [appkit, api, nssearchfieldcell]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nssearchfieldcell/nssearchfieldcell.zep
    title: nssearchfieldcell.zep
  - id: h
    resource: /src/ns-searchfieldcell.h
    title: ns-searchfieldcell.h
  - id: m
    resource: /src/ns-searchfieldcell.m
    title: ns-searchfieldcell.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `createText / wrap / destroy / nsSearchFieldCell` | ownership (initTextCell:) |
| `title / stringValue / placeholderString` | text |
| `recentSearches / recentsAutosaveName` | recents |
| `sendsWholeSearchString / maximumRecents / sendsSearchStringImmediately` | search behavior |
| `searchButtonCell / cancelButtonCell / reset*` | button cells |
| `searchMenuTemplate` | recents menu |
