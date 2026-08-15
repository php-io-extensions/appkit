---
type: CoreType
title: AppKit\NS\NSTextCheckingController\NSTextCheckingController
description: Spell/link checking controller for NSTextCheckingClient adopters
resource: /appkit/ns/nstextcheckingcontroller/nstextcheckingcontroller.zep
tags: [appkit, api, nstextcheckingcontroller]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstextcheckingcontroller/nstextcheckingcontroller.zep
    title: nstextcheckingcontroller.zep
  - id: h
    resource: /src/ns-textcheckingcontroller.h
    title: ns-textcheckingcontroller.h
  - id: m
    resource: /src/ns-textcheckingcontroller.m
    title: ns-textcheckingcontroller.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `createWithClient / wrap / destroy` | ownership (initWithClient:) |
| `client` | borrowed NSTextCheckingClient* |
| `invalidate / didChange* / insertedTextInRange` | text lifecycle hooks |
| `checkTextInRange / considerTextCheckingForRange` | checking |
| `checkTextInSelection / checkTextInDocument / checkSpelling / …` | menu actions |
| `validAnnotations / spellCheckerDocumentTag` | metadata |
| `menuAtIndex` | `menuAtIndex:clickedOnSelection:effectiveRange:` — returns `[menu, effectiveLocation, effectiveLength]` |

Pass `options` handle from `NSDictionary::fromArray()` / `createMutable()` to `checkTextInRange`.
