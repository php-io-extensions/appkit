---
type: CoreType
title: AppKit\\NS\\NSApplication\\NSApplication
description: NSApplication init / shared / poll / run / terminate / quit
resource: /appkit/ns/nsapplication/nsapplication.zep
tags: [appkit, api, nsapplication]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T00:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsapplication/nsapplication.zep
    title: nsapplication.zep
  - id: h
    resource: /src/ns-app.h
    title: ns-app.h
  - id: m
    resource: /src/ns-app.m
    title: ns-app.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `init` | `[NSApplication sharedApplication]` + activation policy + finishLaunching |
| `shared` | borrowed `NSApp` pointer as int |
| `poll` | `nextEventMatchingMask` drain + `sendEvent` / `updateWindows` |
| `run` | `[NSApp run]` |
| `terminate` | quit flag + `[NSApp stop:]` |
| `shouldQuit` / `resetQuit` | extension quit flag |

Moved from `Metal\\MTL\\App` / `mtl_app_*`. Does not call Metal or GameController. Keyboard/mouse hooks land with the NSEvent/input move.
