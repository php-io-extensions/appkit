---
type: CoreType
title: AppKit\NS\NSFontCollection\NSFontCollection
description: Named and query-based font lists
resource: /appkit/ns/nsfontcollection/nsfontcollection.zep
tags: [appkit, api, nsfontcollection]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T07:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsfontcollection/nsfontcollection.zep
    title: nsfontcollection.zep
  - id: h
    resource: /src/ns-fontcollection.h
    title: ns-fontcollection.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `withDescriptor` | `+fontCollectionWithDescriptors:` (single descriptor) |
| `withAllAvailable` | `+fontCollectionWithAllAvailableDescriptors` |
| `withName` / `withNameVisibility` | named collections |
| `show` / `hide` / `rename` | persistent naming |
| `allNamesCount` / `allNameAt` | `+allFontCollectionNames` |
| `queryDescriptors*` / `exclusionDescriptors*` | query sets |
| `matchingDescriptors*` / `matchingDescriptorsForFamily*` | runtime matches |
| `mutableWith*` | `NSMutableFontCollection` factories |
| `addQueryForDescriptor` / `removeQueryForDescriptor` | mutable edits |

# NSFontCollectionVisibility (bitfield int)

| Bit | Meaning |
|-----|---------|
| `1 << 0` | Process |
| `1 << 1` | User |
| `1 << 2` | Computer |

# Bound as part of NSFontCollection

`NSMutableFontCollection` — mutable factories and `addQueryForDescriptor` / `removeQueryForDescriptor` live on this class (same C ABI module). No separate Zephir class yet.

# Not yet bound

Locale factories, matching-option dictionaries, `queryDescriptors`/`exclusionDescriptors` full-array setters.
