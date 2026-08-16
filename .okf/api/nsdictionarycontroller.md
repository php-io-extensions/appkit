---
type: CoreType
title: AppKit\\NS\\NSDictionaryController\\NSDictionaryController
description: Dictionary-to-array key-value Cocoa bindings controller
resource: /appkit/ns/nsdictionarycontroller/nsdictionarycontroller.zep
tags: [appkit, api, nsdictionarycontroller]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsdictionarycontroller/nsdictionarycontroller.zep
    title: nsdictionarycontroller.zep
  - id: h
    resource: /src/ns-dictionarycontroller.h
    title: ns-dictionarycontroller.h
  - id: m
    resource: /src/ns-dictionarycontroller.m
    title: ns-dictionarycontroller.m
---

# Schema

| Method | Maps to |
|--------|---------|
| NSArrayController-style arrangement + selection + mutation | inherited behavior |
| `newObject` | `NSDictionaryControllerKeyValuePair` (borrowed pointer) |
| `initialKey / initialValue` | insertion defaults |
| `includedKeys / excludedKeys` | key filtering |
| `localizedKeyDictionary / localizedKeyTable` | localized display keys |

# Bound as part of NSDictionaryController

`NSDictionaryControllerKeyValuePair` — created via `newObject`; key/value/localizedKey accessed through arranged objects in PHP until a dedicated pair bind lands.

# Not bound

`NSSortDescriptor` / `NSPredicate` — same as NSArrayController.
