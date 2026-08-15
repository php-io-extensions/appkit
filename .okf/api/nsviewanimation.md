---
type: CoreType
title: AppKit\NS\NSViewAnimation\NSViewAnimation
description: NSViewAnimation fade and frame animations for views/windows
resource: /appkit/ns/nsviewanimation/nsviewanimation.zep
tags: [appkit, api, nsviewanimation]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T03:15:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsviewanimation/nsviewanimation.zep
    title: nsviewanimation.zep
  - id: h
    resource: /src/ns-viewanimation.h
    title: ns-viewanimation.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `createFadeIn` / `createFadeOut` | `ns_viewanimation_create_fade` (effect 0/1) |
| `createWithFrames` | `ns_viewanimation_create_frame` |
| `wrap` / `destroy` / `nsViewAnimation` | ownership |
| `start` / `stop` / `isAnimating` | delegates to `ns_animation_*` on same handle |
