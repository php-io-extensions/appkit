---
type: CoreType
title: AppKit\\NS\\NSBrowser\\NSBrowser
description: NSBrowser column-path browser
resource: /appkit/ns/nsbrowser/nsbrowser.zep
tags: [appkit, api, nsbrowser]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:54:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsbrowser/nsbrowser.zep
    title: nsbrowser.zep
  - id: h
    resource: /src/ns-browser.h
    title: ns-browser.h
  - id: m
    resource: /src/ns-browser.m
    title: ns-browser.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / destroy` | view-box ownership |
| `setPath / getPath` | path string |
| `maxVisibleColumns / lastColumn / reloadColumn` | columns |
| `selectRowInColumn / selectedRowInColumn` | selection |
