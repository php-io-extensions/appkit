---
type: CoreType
title: AppKit\\NS\\NSPageController\\NSPageController
description: NSPageController page history navigation
resource: /appkit/ns/nspagecontroller/nspagecontroller.zep
tags: [appkit, api, nspagecontroller]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:30:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsPageController` | retain ownership |
| `setTransitionStyle / getTransitionStyle` | `transitionStyle` |
| `setSelectedIndex / getSelectedIndex` | `selectedIndex` |
| `arrangedObjectCount` | `arrangedObjects.count` |
| `navigateForwardToObject` | `navigateForwardToObject:` |
| `navigateBack / navigateForward` | IBAction navigation |
| `completeTransition` | `completeTransition` |
| `selectedViewController` | `selectedViewController` wrap |
