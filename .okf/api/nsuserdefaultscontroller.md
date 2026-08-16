---
type: CoreType
title: AppKit\\NS\\NSUserDefaultsController\\NSUserDefaultsController
description: User defaults Cocoa bindings controller
resource: /appkit/ns/nsuserdefaultscontroller/nsuserdefaultscontroller.zep
tags: [appkit, api, nsuserdefaultscontroller]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsuserdefaultscontroller/nsuserdefaultscontroller.zep
    title: nsuserdefaultscontroller.zep
  - id: h
    resource: /src/ns-userdefaultscontroller.h
    title: ns-userdefaultscontroller.h
  - id: m
    resource: /src/ns-userdefaultscontroller.m
    title: ns-userdefaultscontroller.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `shared / create / createWithInitialValues / wrap / destroy / nsUserDefaultsController` | lifecycle |
| `discardEditing / commitEditing / isEditing` | NSController editing |
| `defaults` | borrowed `NSUserDefaults*` |
| `initialValues` | `NSDictionary` handle via `AppKit\\NS\\NSDictionary\\NSDictionary` |
| `appliesImmediately / hasUnappliedChanges / values` | binding state |
| `revert / save / revertToInitialValues` | IBAction persistence |

# Not bound

Dedicated `NSUserDefaults` type — `defaults` returns a borrowed native pointer until that bind lands.
