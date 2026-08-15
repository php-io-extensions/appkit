---
type: CoreType
title: AppKit\NS\NSParagraphStyle\NSParagraphStyle
description: NSParagraphStyle immutable reads; NSMutableParagraphStyle mutation via create() and setters on the same class.
resource: /appkit/ns/nsparagraphstyle/nsparagraphstyle.zep
tags: [appkit, api, nsparagraphstyle, textkit]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsparagraphstyle/nsparagraphstyle.zep
    title: nsparagraphstyle.zep
  - id: h
    resource: /src/ns-paragraphstyle.h
    title: ns-paragraphstyle.h
  - id: m
    resource: /src/ns-paragraphstyle.m
    title: ns-paragraphstyle.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `defaultParagraphStyle / create / wrap / destroy` | ownership |
| `getLineSpacing / setLineSpacing` | lineSpacing |
| `getLineBreakMode / setLineBreakMode` | NSLineBreakMode |
| `getAlignment / setAlignment` | NSTextAlignment |
| `getHeadIndent / setHeadIndent` | headIndent |
| `getHyphenationFactor / setHyphenationFactor` | hyphenationFactor |
| `setParagraphStyle` | copy from another style handle |
NSMutableParagraphStyle setters require a handle from `create()`.
