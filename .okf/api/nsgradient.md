---
type: CoreType
title: AppKit\NS\NSGradient\NSGradient
description: NSGradient multi-stop color gradients
resource: /appkit/ns/nsgradient/nsgradient.zep
tags: [appkit, api, nsgradient]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T03:15:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsgradient/nsgradient.zep
    title: nsgradient.zep
  - id: h
    resource: /src/ns-gradient.h
    title: ns-gradient.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `withStartingColor` / `withColors` | factories (`withColors` builds `uintptr_t[]` from PHP array) |
| `wrap` / `destroy` / `nsGradient` | ownership + borrowed pointer |
| `drawFromPoint` / `drawInRectAngle` / `drawInBezierPathAngle` | linear draws |
| `drawFromCenter` / relative-center variants | radial draws |
| `numberOfColorStops` / `interpolatedColorAtLocation` | stop queries |
