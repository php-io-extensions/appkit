---
type: CoreType
title: AppKit\NS\NSAccessibilityElement\NSAccessibilityElement
description: Custom accessibility element tree
resource: /appkit/ns/nsaccessibilityelement/nsaccessibilityelement.zep
tags: [appkit, api, nsaccessibilityelement]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T15:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsaccessibilityelement/nsaccessibilityelement.zep
    title: nsaccessibilityelement.zep
  - id: h
    resource: /src/ns-accessibilityelement.h
    title: ns-accessibilityelement.h
  - id: m
    resource: /src/ns-accessibilityelement.m
    title: ns-accessibilityelement.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(role, x, y, w, h, label, parent)` | `+accessibilityElementWithRole:frame:label:parent:` |
| `wrap / destroy / nsAccessibilityElement` | retain/release borrowed pointer |
| `addChild` | `-accessibilityAddChildElement:` |
| `setFrameInParent / frameInParent` | `accessibilityFrameInParentSpace` |

# Bound as part of NSAccessibilityElement

`NSAccessibility` protocol — poll surface is `NSAccessibility` / `NSProtocol`. Role strings are `NSAccessibilityRole` (not NS_ENUM).
