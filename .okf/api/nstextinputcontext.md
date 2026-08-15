---
type: CoreType
title: AppKit\NS\NSTextInputContext\NSTextInputContext
description: NSTextInputContext input method context
resource: /appkit/ns/nstextinputcontext/nstextinputcontext.zep
tags: [appkit, api, nstextinputcontext]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstextinputcontext/nstextinputcontext.zep
    title: nstextinputcontext.zep
  - id: h
    resource: /src/ns-textinputcontext.h
    title: ns-textinputcontext.h
  - id: m
    resource: /src/ns-textinputcontext.m
    title: ns-textinputcontext.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `current / create / wrap / destroy` | ownership |
| `client / acceptsGlyphInfo` | client |
| `activate / deactivate / handleEvent` | IME session |
| `discardMarkedText / invalidateCharacterCoordinates` | marked text |
