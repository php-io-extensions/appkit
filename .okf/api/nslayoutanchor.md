---
type: CoreType
title: AppKit\\NS\\NSLayoutAnchor\\NSLayoutAnchor
description: Base layout anchor; see also X/Y/Dimension subclasses
resource: /appkit/ns/nslayoutanchor/nslayoutanchor.zep
tags: [appkit, api, nslayoutanchor, nslayoutxaxisanchor, nslayoutyaxisanchor, nslayoutdimension]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:55:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nslayoutanchor/nslayoutanchor.zep
    title: nslayoutanchor.zep
  - id: h
    resource: /src/ns-layoutanchor.h
    title: ns-layoutanchor.h
  - id: m
    resource: /src/ns-layoutanchor.m
    title: ns-layoutanchor.m
---

# Schema

## NSLayoutAnchor

| Method | Maps to |
|--------|---------|
| `wrap / destroy / nsLayoutAnchor` | retain of NSLayoutAnchor |
| `constraintEqualToAnchor*` | equal / ≥ / ≤ relations |
| `name / item / hasAmbiguousLayout` | debug properties |
| `constraintsAffectingLayoutCount / constraintAffectingLayoutAt` | layout debug |
| `view*Anchor` | NSView anchor properties |

## NSLayoutXAxisAnchor

| Method | Maps to |
|--------|---------|
| `anchorWithOffsetToAnchor` | horizontal offset dimension |
| `constraint*SystemSpacingAfterAnchor` | macOS 11+ system spacing |

## NSLayoutYAxisAnchor

| Method | Maps to |
|--------|---------|
| `anchorWithOffsetToAnchor` | vertical offset dimension |
| `constraint*SystemSpacingBelowAnchor` | macOS 11+ system spacing |

## NSLayoutDimension

| Method | Maps to |
|--------|---------|
| `constraint*ToConstant` | fixed size constraints |
| `constraint*ToAnchor` | proportional size constraints |
