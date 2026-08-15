---
type: CoreType
title: AppKit\NS\NSButtonCell\NSButtonCell
description: NSButtonCell push/switch/radio cell
resource: /appkit/ns/nsbuttoncell/nsbuttoncell.zep
tags: [appkit, api, nsbuttoncell]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsbuttoncell/nsbuttoncell.zep
    title: nsbuttoncell.zep
  - id: h
    resource: /src/ns-buttoncell.h
    title: ns-buttoncell.h
  - id: m
    resource: /src/ns-buttoncell.m
    title: ns-buttoncell.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `createText / createImage / wrap / destroy` | ownership |
| `title / state / enabled / tag` | NSActionCell base |
| `bezelStyle / setButtonType` | appearance |
| `alternateTitle / keyEquivalent / transparent / imageDimsWhenDisabled` | behavior |
| `performClick` | action |
