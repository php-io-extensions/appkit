---
type: CoreType
title: AppKit\NS\NSText\NSText
description: NSText text object editing and display attributes
resource: /appkit/ns/nstext/nstext.zep
tags: [appkit, api, nstext]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T03:15:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstext/nstext.zep
    title: nstext.zep
  - id: h
    resource: /src/ns-text.h
    title: ns-text.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `create` / `wrap` / `destroy` / `nsText` | ownership |
| `setString` / `getString` | string value |
| editable / selectable / richText / drawsBackground | flags |
| backgroundColor / textColor / font / alignment / writingDirection | attributes |
| `setSelectedRange` / `getSelectedRange` | selection (`[location, length]`) |
| `sizeToFit` | size to fit |
