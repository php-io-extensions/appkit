---
type: CoreType
title: AppKit\\NS\\NSCIImageRep\\NSCIImageRep
description: Core Image backed image representation
resource: /appkit/ns/nsciimagerep/nsciimagerep.zep
tags: [appkit, api, nsciimagerep]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T07:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsciimagerep/nsciimagerep.zep
    title: nsciimagerep.zep
  - id: h
    resource: /src/ns-ciimagerep.h
    title: ns-ciimagerep.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `withCIImage` | `+imageRepWithCIImage:` |
| `ciImage` | `CIImage` (borrowed pointer) |

Requires `-framework CoreImage` at link time.
