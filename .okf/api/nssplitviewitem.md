---
type: CoreType
title: AppKit\\NS\\NSSplitViewItem\\NSSplitViewItem
description: NSSplitViewItem split pane descriptor
resource: /appkit/ns/nssplitviewitem/nssplitviewitem.zep
tags: [appkit, api, nssplitviewitem]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:30:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / createSidebar / createContentList / createInspector` | factory methods |
| `wrap / destroy / nsSplitViewItem` | retain ownership |
| `setViewController / viewController` | `viewController` |
| `setCollapsed / isCollapsed` | `collapsed` |
| `setCanCollapse / canCollapse` | `canCollapse` |
| `minimum/maximum/preferredThickness*` | thickness properties |
| `setHoldingPriority / getHoldingPriority` | `holdingPriority` |
| `setSpringLoaded / isSpringLoaded` | `springLoaded` |
| `getBehavior` | `behavior` (readonly) |
