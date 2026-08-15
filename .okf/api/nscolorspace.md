---
type: CoreType
title: AppKit\\NS\\NSColorSpace\\NSColorSpace
description: sRGB, P3, device, and ICC color spaces
resource: /appkit/ns/nscolorspace/nscolorspace.zep
tags: [appkit, api, nscolorspace]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T06:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nscolorspace/nscolorspace.zep
    title: nscolorspace.zep
  - id: h
    resource: /src/ns-colorspace.h
    title: ns-colorspace.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `standard` | class properties (`sRGBColorSpace`, `displayP3ColorSpace`, …) |
| `model` | `colorSpaceModel` |
| `numberOfColorComponents` | `numberOfColorComponents` |
| `localizedName` | `localizedName` |
| `availableCount` / `availableAt` | `+availableColorSpacesWithModel:` |

# NSColorSpaceKind (`standard` int)

| Value | Space |
|-------|-------|
| 0 | `sRGBColorSpace` |
| 1 | `genericGamma22GrayColorSpace` |
| 2 | `extendedSRGBColorSpace` |
| 3 | `extendedGenericGamma22GrayColorSpace` |
| 4 | `displayP3ColorSpace` |
| 5 | `adobeRGB1998ColorSpace` |
| 6–11 | generic / device RGB, gray, CMYK |

# NSColorSpaceModel (`model` int)

Matches `NSColorSpaceModel` in AppKit (`Unknown=-1`, `Gray=0`, `RGB=1`, …). Pass to `availableCount` / `availableAt`; use `-1` for all models.
