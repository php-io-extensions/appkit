---
type: CoreType
title: AppKit\NS\NSAccessibilityCustomRotor\NSAccessibilityCustomRotor
description: VoiceOver custom rotor plus item results
resource: /appkit/ns/nsaccessibilitycustomrotor/nsaccessibilitycustomrotor.zep
tags: [appkit, api, nsaccessibilitycustomrotor]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T15:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsaccessibilitycustomrotor/nsaccessibilitycustomrotor.zep
    title: nsaccessibilitycustomrotor.zep
  - id: h
    resource: /src/ns-accessibilitycustomrotor.h
    title: ns-accessibilitycustomrotor.h
  - id: m
    resource: /src/ns-accessibilitycustomrotor.m
    title: ns-accessibilitycustomrotor.m
---

# Schema

Apple type `NSAccessibilityCustomRotorItemResult` is bound as `NSAccessibilityCustomRotorItem` (todo name) and `NSAccessibilityCustomRotorItemResult`.

| Method | Maps to |
|--------|---------|
| `create(label)` | `initWithLabel:itemSearchDelegate:` |
| `createWithType` | `initWithRotorType:itemSearchDelegate:` |
| `type / label` | rotor properties |
| `setNextItem` | next result returned to VoiceOver |
| `pollSearch` | `NSAccessibilityCustomRotorItemSearchDelegate` poll |
| item `createWithTargetElement / createWithToken` | `NSAccessibilityCustomRotorItemResult` inits |

# Bound as part of NSAccessibilityCustomRotor

`NSAccessibilityCustomRotorSearchParameters` — fields exposed via `pollSearch` (direction + filter).

`NSAccessibilityCustomRotorItemSearchDelegate` / `NSAccessibilityElementLoading` — PHP poll + `setNextItem`.

Enums (microscrap): `Microscrap\Bindings\AppKit\Enums\AccessibilityCustomRotorType`, `AccessibilityCustomRotorSearchDirection`.
