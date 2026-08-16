---
type: CoreType
title: AppKit\\NS\\NSPressureConfiguration\\NSPressureConfiguration
description: Force Touch trackpad pressure behavior
resource: /appkit/ns/nspressureconfiguration/nspressureconfiguration.zep
tags: [appkit, api, nspressureconfiguration]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:55:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nspressureconfiguration/nspressureconfiguration.zep
    title: nspressureconfiguration.zep
  - id: h
    resource: /src/ns-pressureconfiguration.h
    title: ns-pressureconfiguration.h
  - id: m
    resource: /src/ns-pressureconfiguration.m
    title: ns-pressureconfiguration.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(behavior) / wrap / destroy` | initWithPressureBehavior: |
| `pressureBehavior / set` | read behavior + -set |
| `setOnView / viewConfiguration` | NSView pressureConfiguration category |
