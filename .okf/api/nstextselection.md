---
type: CoreType
title: AppKit\NS\NSTextSelection\NSTextSelection
description: NSTextSelection created from a borrowed NSTextLocation* plus affinity.
resource: /appkit/ns/nstextselection/nstextselection.zep
tags: [appkit, api, nstextselection, textkit]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstextselection/nstextselection.zep
    title: nstextselection.zep
  - id: h
    resource: /src/ns-textselection.h
    title: ns-textselection.h
  - id: m
    resource: /src/ns-textselection.m
    title: ns-textselection.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `createWithLocation / wrap / destroy` | ownership |
| `granularity / affinity / isTransient` | selection traits |
| `textRangesCount` | textRanges.count |
| `getAnchorPositionOffset / setAnchorPositionOffset` | anchorPositionOffset |
