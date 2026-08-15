---
type: CoreType
title: AppKit\NS\NSTypesetter\NSTypesetter
description: NSTypesetter shared system typesetter; property get/set on a shared-instance handle.
resource: /appkit/ns/nstypesetter/nstypesetter.zep
tags: [appkit, api, nstypesetter, textkit]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstypesetter/nstypesetter.zep
    title: nstypesetter.zep
  - id: h
    resource: /src/ns-typesetter.h
    title: ns-typesetter.h
  - id: m
    resource: /src/ns-typesetter.m
    title: ns-typesetter.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `sharedSystemTypesetter / sharedSystemTypesetterForBehavior / wrap / destroy` | ownership |
| `defaultTypesetterBehavior` | NSTypesetterBehavior class default |
| `usesFontLeading / setUsesFontLeading` | usesFontLeading |
| `getTypesetterBehavior / setTypesetterBehavior` | NSTypesetterBehavior |
| `getHyphenationFactor / setHyphenationFactor` | hyphenationFactor |
| `getLineFragmentPadding / setLineFragmentPadding` | lineFragmentPadding |
| `bidiProcessingEnabled / setBidiProcessingEnabled` | bidiProcessingEnabled |
