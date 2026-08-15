---
type: CoreType
title: AppKit\\NS\\NSEPSImageRep\\NSEPSImageRep
description: EPS image representation
resource: /appkit/ns/nsepsimagerep/nsepsimagerep.zep
tags: [appkit, api, nsepsimagerep, deprecated]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T07:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsepsimagerep/nsepsimagerep.zep
    title: nsepsimagerep.zep
  - id: h
    resource: /src/ns-epsimagerep.h
    title: ns-epsimagerep.h
---

# Deprecated

`NSEPSImageRep` creation returns `nil` on macOS 14.0 and later. Bound for SDK completeness.

# Schema

| Method | Maps to |
|--------|---------|
| `withData` | `-initWithData:` |
| `getBoundingBox` | `boundingBox` |
| `epsRepresentation` | `EPSRepresentation` |
