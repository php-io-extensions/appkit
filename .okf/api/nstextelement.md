---
type: CoreType
title: AppKit\NS\NSTextElement\NSTextElement
description: NSTextElement represented flag, children, borrowed range, content manager handle.
resource: /appkit/ns/nstextelement/nstextelement.zep
tags: [appkit, api, nstextelement, textkit]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstextelement/nstextelement.zep
    title: nstextelement.zep
  - id: h
    resource: /src/ns-textelement.h
    title: ns-textelement.h
  - id: m
    resource: /src/ns-textelement.m
    title: ns-textelement.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `wrap / destroy` | ownership |
| `isRepresentedElement / childElementsCount` | graph |
| `elementRangePtr` | borrowed native NSTextRange* |
| `textContentManager` | retained NSTextContentManager handle |
