---
type: CoreType
title: AppKit\NS\NSTokenField\NSTokenField
description: NSTokenField tokenizing text field
resource: /appkit/ns/nstokenfield/nstokenfield.zep
tags: [appkit, api, nstokenfield]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstokenfield/nstokenfield.zep
    title: nstokenfield.zep
  - id: h
    resource: /src/ns-tokenfield.h
    title: ns-tokenfield.h
  - id: m
    resource: /src/ns-tokenfield.m
    title: ns-tokenfield.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / destroy` | view-box NSTokenField |
| `setStringValue / getStringValue` | stringValue |
| `tokenStyle` | NSTokenStyle int enum |
| `completionDelay / defaultCompletionDelay` | completion timing |
| `pollChange` | one-shot delegate change flag |
