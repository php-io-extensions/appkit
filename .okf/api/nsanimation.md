---
type: CoreType
title: AppKit\NS\NSAnimation\NSAnimation
description: NSAnimation timed progress animation
resource: /appkit/ns/nsanimation/nsanimation.zep
tags: [appkit, api, nsanimation]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T03:15:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsanimation/nsanimation.zep
    title: nsanimation.zep
  - id: h
    resource: /src/ns-animation.h
    title: ns-animation.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(duration, curve)` / `wrap` / `destroy` / `nsAnimation` | ownership |
| `start` / `stop` / `isAnimating` | run control |
| progress / duration / blockingMode / frameRate / curve | attributes |
| `getCurrentValue` / progress marks | value + marks |
