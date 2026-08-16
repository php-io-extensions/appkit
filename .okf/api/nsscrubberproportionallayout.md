---
type: CoreType
title: AppKit\\NS\\NSScrubberProportionalLayout\\NSScrubberProportionalLayout
description: NSScrubberProportionalLayout viewport-fraction scrubber layout
resource: /appkit/ns/nsscrubberproportionallayout/nsscrubberproportionallayout.zep
tags: [appkit, api, nsscrubberproportionallayout]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T13:23:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsscrubberproportionallayout/nsscrubberproportionallayout.zep
    title: nsscrubberproportionallayout.zep
  - id: h
    resource: /src/ns-scrubberproportionallayout.h
    title: ns-scrubberproportionallayout.h
  - id: m
    resource: /src/ns-scrubberproportionallayout.m
    title: ns-scrubberproportionallayout.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(numberOfVisibleItems) / wrap / destroy / nsScrubberProportionalLayout` | ownership |
| `setNumberOfVisibleItems / getNumberOfVisibleItems` | numberOfVisibleItems |

Sizes each item to a fraction of the scrubber viewport (`initWithNumberOfVisibleItems:`).
