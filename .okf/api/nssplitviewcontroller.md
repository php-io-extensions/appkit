---
type: CoreType
title: AppKit\\NS\\NSSplitViewController\\NSSplitViewController
description: NSSplitViewController split view container
resource: /appkit/ns/nssplitviewcontroller/nssplitviewcontroller.zep
tags: [appkit, api, nssplitviewcontroller]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:30:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsSplitViewController` | retain ownership |
| `addSplitViewItem / removeSplitViewItem` | item management |
| `splitViewItemCount / splitViewItemAt` | `splitViewItems` |
| `setMinimumThicknessForInlineSidebars / get*` | sidebar auto-collapse threshold |
| `splitView` | managed `NSSplitView` view-box |
| `toggleSidebar` | `toggleSidebar:` |
