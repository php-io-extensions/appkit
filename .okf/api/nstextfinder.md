---
type: CoreType
title: AppKit\NS\NSTextFinder\NSTextFinder
description: NSTextFinder find/replace controller
resource: /appkit/ns/nstextfinder/nstextfinder.zep
tags: [appkit, api, nstextfinder]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstextfinder/nstextfinder.zep
    title: nstextfinder.zep
  - id: h
    resource: /src/ns-textfinder.h
    title: ns-textfinder.h
  - id: m
    resource: /src/ns-textfinder.m
    title: ns-textfinder.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy` | ownership |
| `performAction / validateAction` | NSTextFinderAction int enum |
| `incrementalSearchingEnabled` | incremental search |
| `findIndicatorNeedsUpdate / cancelFindIndicator` | find indicator |
| `noteClientStringWillChange` | client string mutation |
