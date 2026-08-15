---
type: CoreType
title: AppKit\\NS\\NSStatusBar\\NSStatusBar
description: NSStatusBar system menu-bar status bar
resource: /appkit/ns/nsstatusbar/nsstatusbar.zep
tags: [appkit, api, nsstatusbar]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:40:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsstatusbar/nsstatusbar.zep
    title: nsstatusbar.zep
  - id: h
    resource: /src/ns-statusbar.h
    title: ns-statusbar.h
  - id: m
    resource: /src/ns-statusbar.m
    title: ns-statusbar.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `system / wrap / destroy / nsStatusBar` | shared systemStatusBar retain |
| `statusItemWithLength / statusItemWithKind` | statusItemWithLength: (VARIABLE=0, SQUARE=1) |
| `removeStatusItem` | removeStatusItem: |
| `isVertical / thickness` | bar geometry |
