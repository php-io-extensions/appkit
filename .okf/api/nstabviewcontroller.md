---
type: CoreType
title: AppKit\\NS\\NSTabViewController\\NSTabViewController
description: NSTabViewController tabbed container
resource: /appkit/ns/nstabviewcontroller/nstabviewcontroller.zep
tags: [appkit, api, nstabviewcontroller]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:30:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsTabViewController` | retain ownership |
| `setTabStyle / getTabStyle` | `tabStyle` |
| `setSelectedTabViewItemIndex / get*` | `selectedTabViewItemIndex` |
| `addTabViewItem / removeTabViewItem` | item management |
| `tabViewItemCount` | `tabViewItems.count` |
| `tabView` | managed `NSTabView` view-box |
| `setCanPropagateSelectedChildViewControllerTitle / can*` | title propagation |
