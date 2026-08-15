---
type: CoreType
title: AppKit\\NS\\NSCustomImageRep\\NSCustomImageRep
description: Delegate or block-driven custom drawing image rep
resource: /appkit/ns/nscustomimagerep/nscustomimagerep.zep
tags: [appkit, api, nscustomimagerep]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T07:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscustomimagerep/nscustomimagerep.zep
    title: nscustomimagerep.zep
  - id: h
    resource: /src/ns-customimagerep.h
    title: ns-customimagerep.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `create` | `-initWithSize:flipped:drawingHandler:` (no-op handler) |
| `drawSelector` | `drawSelector` |
| `delegate` | `delegate` (borrowed pointer) |

Block- and delegate-driven creation with custom drawing logic is not yet exposed from PHP; use `wrap()` on an existing rep or `create()` as a placeholder host.
