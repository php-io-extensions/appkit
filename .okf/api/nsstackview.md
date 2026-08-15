---
type: CoreType
title: AppKit\\NS\\NSStackView\\NSStackView
description: NSStackView auto-layout stack container
resource: /appkit/ns/nsstackview/nsstackview.zep
tags: [appkit, api, nsstackview]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T03:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsstackview/nsstackview.zep
    title: nsstackview.zep
  - id: h
    resource: /src/ns-stackview.h
    title: ns-stackview.h
  - id: m
    resource: /src/ns-stackview.m
    title: ns-stackview.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(...)` | `[[NSStackView alloc] initWithFrame:]` |
| `destroy` | view-box teardown |
| `setSpacing` | inter-view spacing |
| `addArrangedSubview` | `addArrangedSubview:` |

Moved from `Metal\\MTL\\StackView` / `mtl_stack_*`.
