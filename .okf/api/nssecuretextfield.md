---
type: CoreType
title: AppKit\\NS\\NSSecureTextField\\NSSecureTextField
description: Password-style NSSecureTextField
resource: /appkit/ns/nssecuretextfield/nssecuretextfield.zep
tags: [appkit, api, nssecuretextfield]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T01:00:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nssecuretextfield/nssecuretextfield.zep
    title: nssecuretextfield.zep
  - id: h
    resource: /src/ns-securetextfield.h
    title: ns-securetextfield.h
  - id: m
    resource: /src/ns-securetextfield.m
    title: ns-securetextfield.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(...)` | `[[NSSecureTextField alloc] initWithFrame:]` |
| `destroy` | view-box teardown |
| `setStringValue` / `getStringValue` | `stringValue` (via NSTextField helpers) |
| `pollChange` | one-shot delegate change flag |

Moved from `Metal\\MTL\\SecureField` / `mtl_securefield_*`.
