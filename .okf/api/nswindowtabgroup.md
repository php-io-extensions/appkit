---
type: CoreType
title: AppKit\NS\NSWindowTabGroup\NSWindowTabGroup
description: Tabbed-window group
resource: /appkit/ns/nswindowtabgroup/nswindowtabgroup.zep
tags: [appkit, api, nswindowtabgroup]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T15:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nswindowtabgroup/nswindowtabgroup.zep
    title: nswindowtabgroup.zep
  - id: h
    resource: /src/ns-windowtabgroup.h
    title: ns-windowtabgroup.h
---

# Schema

Obtain via `NSWindow::tabGroup`.

| Method | Maps to |
|--------|---------|
| `identifier` | group id |
| `windowsCount / windowAt` | `windows` array (borrowed `NSWindow*`) |
| `isOverviewVisible / setOverviewVisible` | tab overview |
| `isTabBarVisible` | tab bar |
| `selectedWindow / setSelectedWindow` | selected window |
| `addWindow / insertWindow / removeWindow` | group membership |
