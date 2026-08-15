---
type: CoreType
title: AppKit\NS\NSTextLineFragment\NSTextLineFragment
description: NSTextLineFragment character range, typographic bounds, and glyph origin.
resource: /appkit/ns/nstextlinefragment/nstextlinefragment.zep
tags: [appkit, api, nstextlinefragment, textkit]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstextlinefragment/nstextlinefragment.zep
    title: nstextlinefragment.zep
  - id: h
    resource: /src/ns-textlinefragment.h
    title: ns-textlinefragment.h
  - id: m
    resource: /src/ns-textlinefragment.m
    title: ns-textlinefragment.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `createWithString / wrap / destroy` | ownership |
| `characterRange` | [location, length] |
| `typographicBounds` | [x, y, w, h] |
| `glyphOrigin` | [x, y] |
