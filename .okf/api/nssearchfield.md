---
type: CoreType
title: AppKit\NS\NSSearchField\NSSearchField
description: NSSearchField with recents and change polling
resource: /appkit/ns/nssearchfield/nssearchfield.zep
tags: [appkit, api, nssearchfield]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nssearchfield/nssearchfield.zep
    title: nssearchfield.zep
  - id: h
    resource: /src/ns-searchfield.h
    title: ns-searchfield.h
  - id: m
    resource: /src/ns-searchfield.m
    title: ns-searchfield.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / destroy` | view-box NSSearchField |
| `setStringValue / getStringValue` | stringValue |
| `recentSearches / recentsAutosaveName` | recents |
| `sendsWholeSearchString / maximumRecents / sendsSearchStringImmediately` | search behavior |
| `pollChange` | one-shot delegate change flag |
