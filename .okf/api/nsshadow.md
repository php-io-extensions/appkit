---
type: CoreType
title: AppKit\NS\NSShadow\NSShadow
description: NSShadow drop-shadow drawing attributes
resource: /appkit/ns/nsshadow/nsshadow.zep
tags: [appkit, api, nsshadow]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T03:15:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsshadow/nsshadow.zep
    title: nsshadow.zep
  - id: h
    resource: /src/ns-shadow.h
    title: ns-shadow.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `create` / `wrap` / `destroy` / `nsShadow` | ownership |
| `setOffset` / `getOffset` | offset (`getOffset` → `[w, h]`) |
| `setBlurRadius` / `getBlurRadius` | blur |
| `setColor` / `getColor` | shadow color handle |
| `set` | install as current shadow |
