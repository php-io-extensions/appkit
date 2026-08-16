---
type: CoreType
title: AppKit\\NS\\NSHelpManager\\NSHelpManager
description: Help Viewer and context help mode
resource: /appkit/ns/nshelpmanager/nshelpmanager.zep
tags: [appkit, api, nshelpmanager]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:45:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nshelpmanager/nshelpmanager.zep
    title: nshelpmanager.zep
  - id: h
    resource: /src/ns-helpmanager.h
    title: ns-helpmanager.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `shared / destroy / nsHelpManager` | shared singleton retain |
| `isContextHelpModeActive / setContextHelpModeActive` | class property |
| `setContextHelpForObject / removeContextHelpForObject / contextHelpForObject` | per-object help (plain string) |
| `showContextHelpForObject` | `-showContextHelpForObject:locationHint:` |
| `openHelpAnchor / findString` | Help Viewer navigation |
| `registerBooksInBundlePath` | `-registerBooksInBundle:` (empty path = main bundle) |

# Object parameters

`objectPtr` is a borrowed native `id` pointer (view, window, etc.).

# Bound as part of NSHelpManager

`NSBundle (NSBundleHelpExtension)` context help keys — use `registerBooksInBundlePath` + Help.plist.

`NSApplication (NSApplicationHelpExtension)` `activateContextHelpMode:` / `showHelp:` — call via `NSApplication` bind when present.
