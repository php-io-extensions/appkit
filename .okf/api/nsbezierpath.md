---
type: CoreType
title: AppKit\NS\NSBezierPath\NSBezierPath
description: NSBezierPath vector path construction and drawing
resource: /appkit/ns/nsbezierpath/nsbezierpath.zep
tags: [appkit, api, nsbezierpath]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T03:15:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsbezierpath/nsbezierpath.zep
    title: nsbezierpath.zep
  - id: h
    resource: /src/ns-bezierpath.h
    title: ns-bezierpath.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `create` / `withRect` / `withOvalInRect` / `withRoundedRect` | path factories |
| `wrap` / `destroy` / `nsBezierPath` | ownership + borrowed pointer |
| `moveToPoint` / `lineToPoint` / `curveToPoint` / `closePath` | path construction |
| `appendPath` / `appendRect` / `appendOvalInRect` | append |
| `setLineWidth` / `getLineWidth` / cap / join / winding / miter / flatness | stroke attributes |
| `stroke` / `fill` / `addClip` / `setClip` / `containsPoint` / `getBounds` | drawing |
| `fillRect` / `strokeRect` / `clipRect` / `strokeLineFromPoint` | static convenience |
