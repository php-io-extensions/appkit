---
type: CoreType
title: AppKit\\NS\\NSBitmapImageRep\\NSBitmapImageRep
description: Raster bitmap image representations
resource: /appkit/ns/nsbitmapimagerep/nsbitmapimagerep.zep
tags: [appkit, api, nsbitmapimagerep]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T07:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsbitmapimagerep/nsbitmapimagerep.zep
    title: nsbitmapimagerep.zep
  - id: h
    resource: /src/ns-bitmapimagerep.h
    title: ns-bitmapimagerep.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `withData` | `-initWithData:` |
| `repWithContentsOfFile` | `+imageRepWithContentsOfFile:` |
| `withPixels` | `-initWithBitmapDataPlanes:…` (8-bit RGB/RGBA) |
| `withCGImage` | `-initWithCGImage:` |
| `isPlanar` / `samplesPerPixel` / `bitsPerPixel` / `bytesPerRow` / `numberOfPlanes` | bitmap layout |
| `bitmapData` | `bitmapData` pointer |
| `tiffRepresentation` | `TIFFRepresentation` |
| `representationUsingType` | `-representationUsingType:properties:` |
| `setColorAt` / `colorAt` | pixel color access |

# NSBitmapImageFileType (`representationUsingType` int)

| Value | Type |
|-------|------|
| 0 | TIFF |
| 1 | BMP |
| 2 | GIF |
| 3 | JPEG |
| 4 | PNG |
| 5 | JPEG2000 |

Use backed PHP Enums outside the extension for these integers.
