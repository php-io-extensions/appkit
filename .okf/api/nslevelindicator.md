---
type: CoreType
title: AppKit\\NS\\NSLevelIndicator\\NSLevelIndicator
description: NSLevelIndicator capacity / rating control
resource: /appkit/ns/nslevelindicator/nslevelindicator.zep
tags: [appkit, api, nslevelindicator]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:54:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nslevelindicator/nslevelindicator.zep
    title: nslevelindicator.zep
  - id: h
    resource: /src/ns-levelindicator.h
    title: ns-levelindicator.h
  - id: m
    resource: /src/ns-levelindicator.m
    title: ns-levelindicator.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / destroy` | view-box ownership |
| `setLevelIndicatorStyle / getLevelIndicatorStyle` | NSLevelIndicatorStyle |
| `setEditable / isEditable` | editable |
| `min / max / warning / critical / doubleValue` | capacity values |
| `tick marks / tiered capacity / placeholderVisibility` | appearance |
