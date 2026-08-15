---
type: CoreType
title: AppKit\\NS\\NSDictionary\\NSDictionary
description: Foundation NSDictionary bridge for AppKit option dictionaries
resource: /appkit/ns/nsdictionary/nsdictionary.zep
tags: [appkit, api, nsdictionary, foundation]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:10:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsdictionary/nsdictionary.zep
    title: nsdictionary.zep
  - id: h
    resource: /src/ns-dictionary.h
    title: ns-dictionary.h
  - id: m
    resource: /src/ns-dictionary.m
    title: ns-dictionary.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `createMutable / wrap / destroy / nsDictionary` | ownership |
| `setString / getString` | `NSString` values |
| `setInt / getInt` | `NSNumber` integer values |
| `setDouble / getDouble` | `NSNumber` floating values |
| `setBool / isTrue` | `NSNumber` boolean values |
| `setDictionary / getDictionary` | nested `NSDictionary` handles |
| `hasKey / count` | lookup |
| `copyImmutable` | `-copy` immutable snapshot |
| `fromArray / toArray` | PHP associative array ↔ dictionary |

Foundation type bound under `AppKit\\NS` namespace for extension consistency. Use `fromArray()` for `NSTextCheckingOptionKey` maps passed to `NSTextCheckingController::checkTextInRange`.
