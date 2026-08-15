---
type: CoreType
title: AppKit\NS\NSTextContentStorage\NSTextContentStorage
description: NSTextContentStorage attributed-string backing store for TextKit 2.
resource: /appkit/ns/nstextcontentstorage/nstextcontentstorage.zep
tags: [appkit, api, nstextcontentstorage, textkit]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstextcontentstorage/nstextcontentstorage.zep
    title: nstextcontentstorage.zep
  - id: h
    resource: /src/ns-textcontentstorage.h
    title: ns-textcontentstorage.h
  - id: m
    resource: /src/ns-textcontentstorage.m
    title: ns-textcontentstorage.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy` | ownership |
| `getAttributedString / setAttributedString` | plain string of attributedString |
| `textElementForAttributedString` | retained NSTextElement handle |
| `attributedStringForTextElement` | plain string for element handle |
