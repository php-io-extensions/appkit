---
type: CoreType
title: AppKit\\NS\\NSColorSampler\\NSColorSampler
description: Screen color sampling UI (macOS 10.15+)
resource: /appkit/ns/nscolorsampler/nscolorsampler.zep
tags: [appkit, api, nscolorsampler]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T06:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscolorsampler/nscolorsampler.zep
    title: nscolorsampler.zep
  - id: h
    resource: /src/ns-colorsampler.h
    title: ns-colorsampler.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `create` | `[[NSColorSampler alloc] init]` |
| `show` | `-showSamplerWithSelectionHandler:` |
| `poll` | async handler bridged to `[status, colorHandle]` |

Poll status: `0` pending, `1` selected (color handle at index 1), `2` cancelled.
