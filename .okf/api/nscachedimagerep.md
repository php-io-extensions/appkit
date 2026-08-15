---
type: CoreType
title: AppKit\\NS\\NSCachedImageRep\\NSCachedImageRep
description: Deprecated window-backed cached image rep
resource: /appkit/ns/nscachedimagerep/nscachedimagerep.zep
tags: [appkit, api, nscachedimagerep, deprecated]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T07:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscachedimagerep/nscachedimagerep.zep
    title: nscachedimagerep.zep
  - id: h
    resource: /src/ns-cachedimagerep.h
    title: ns-cachedimagerep.h
---

# Deprecated

Entire class deprecated in AppKit macOS 10.0–10.6. Bound for SDK completeness only.

# Schema

| Method | Maps to |
|--------|---------|
| `withWindowRect` | `-initWithWindow:rect:` |
| `withSize` | `-initWithSize:depth:separate:alpha:` |
| `window` | `window` (borrowed pointer) |
| `getRect` | `rect` |
