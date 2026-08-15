---
type: CoreType
title: AppKit\NS\NSSliderCell\NSSliderCell
description: NSSliderCell used by NSSlider
resource: /appkit/ns/nsslidercell/nsslidercell.zep
tags: [appkit, api, nsslidercell]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T03:45:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsslidercell/nsslidercell.zep
    title: nsslidercell.zep
  - id: h
    resource: /src/ns-slidercell.h
    title: ns-slidercell.h
  - id: m
    resource: /src/ns-slidercell.m
    title: ns-slidercell.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `createText / wrap / destroy / nsSliderCell` | ownership |
| `title / state / enabled / tag` | NSActionCell base |
| `minValue / maxValue / altIncrementValue` | range |
| `sliderType / vertical` | appearance |
| `numberOfTickMarks / tickMarkPosition / allowsTickMarkValuesOnly` | ticks |
| `tickMarkValueAtIndex / closestTickMarkValueToValue` | tick query |
