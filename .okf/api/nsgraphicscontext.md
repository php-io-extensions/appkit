---
type: CoreType
title: AppKit\NS\NSGraphicsContext\NSGraphicsContext
description: NSGraphicsContext current drawing context and graphics state
resource: /appkit/ns/nsgraphicscontext/nsgraphicscontext.zep
tags: [appkit, api, nsgraphicscontext]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T03:15:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsgraphicscontext/nsgraphicscontext.zep
    title: nsgraphicscontext.zep
  - id: h
    resource: /src/ns-graphicscontext.h
    title: ns-graphicscontext.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `current` / `setCurrent` | thread current context |
| `drawingToScreen` / `instanceDrawingToScreen` | screen vs bitmap |
| `saveState` / `restoreState` | class-level state stack |
| `withBitmapRep` / `wrap` / `destroy` / `nsGraphicsContext` | ownership |
| `saveGraphicsState` / `restoreGraphicsState` / `flush` | instance state |
| antialias / imageInterpolation / patternPhase / compositing / `isFlipped` | drawing attributes |
