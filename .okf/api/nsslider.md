---
type: CoreType
title: AppKit\\NS\\NSSlider\\NSSlider
description: NSSlider value control
resource: /appkit/ns/nsslider/nsslider.zep
tags: [appkit, api, nsslider]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T02:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsslider/nsslider.zep
    title: nsslider.zep
  - id: h
    resource: /src/ns-slider.h
    title: ns-slider.h
  - id: m
    resource: /src/ns-slider.m
    title: ns-slider.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(..., min, max)` | `[[NSSlider alloc] initWithFrame:]` + min/max |
| `destroy` | view-box teardown |
| `setValue` / `getValue` | `doubleValue` |
| `pollChange` | one-shot change flag |

Moved from `Metal\\MTL\\Slider` / `mtl_slider_*`.
