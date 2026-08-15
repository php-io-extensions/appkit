---
type: CoreType
title: AppKit\\NS\\NSImage\\NSImage
description: Multi-representation image objects
resource: /appkit/ns/nsimage/nsimage.zep
tags: [appkit, api, nsimage]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T07:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsimage/nsimage.zep
    title: nsimage.zep
  - id: h
    resource: /src/ns-image.h
    title: ns-image.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `named` | `+imageNamed:` |
| `withSystemSymbolName` | `+imageWithSystemSymbolName:accessibilityDescription:` |
| `withSize` | `-initWithSize:` |
| `withContentsOfFile` | `-initWithContentsOfFile:` |
| `withData` | `-initWithData:` |
| `byReferencingFile` | `-initByReferencingFile:` |
| `getSize` / `setSize` | `size` |
| `isValid` | `valid` |
| `isTemplate` / `setTemplate` | `template` |
| `setName` / `getName` | `-setName:` / `name` |
| `addRepresentation` / `removeRepresentation` | representation list |
| `representationCount` / `representationAt` | `representations` |
| `drawInRect` | `-drawInRect:` (macOS 10.9+) |
| `tiffRepresentation` | `TIFFRepresentation` |
| `cacheMode` / `setCacheMode` | `cacheMode` |
| `getAccessibilityDescription` / `setAccessibilityDescription` | `accessibilityDescription` |

# NSImageCacheMode (`cacheMode` / `setCacheMode` int)

| Value | Mode |
|-------|------|
| 0 | `NSImageCacheDefault` |
| 1 | `NSImageCacheAlways` |
| 2 | `NSImageCacheBySize` |
| 3 | `NSImageCacheNever` |

Use backed PHP Enums outside the extension for these integers.
