---
type: CoreType
title: AppKit\NS\NSPathControl\NSPathControl
description: NSPathControl path browser view
resource: /appkit/ns/nspathcontrol/nspathcontrol.zep
tags: [appkit, api, nspathcontrol]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T03:45:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nspathcontrol/nspathcontrol.zep
    title: nspathcontrol.zep
  - id: h
    resource: /src/ns-pathcontrol.h
    title: ns-pathcontrol.h
  - id: m
    resource: /src/ns-pathcontrol.m
    title: ns-pathcontrol.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / destroy` | view ownership |
| `urlPath / pathStyle` | path + NSPathStyle |
| `editable / placeholderString / backgroundColor` | appearance |
| `allowedTypes` | UTI filter |
| `pollChange` | one-shot change flag |
