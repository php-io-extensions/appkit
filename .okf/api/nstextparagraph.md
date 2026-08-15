---
type: CoreType
title: AppKit\NS\NSTextParagraph\NSTextParagraph
description: NSTextParagraph attributed string and borrowed content/separator ranges.
resource: /appkit/ns/nstextparagraph/nstextparagraph.zep
tags: [appkit, api, nstextparagraph, textkit]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstextparagraph/nstextparagraph.zep
    title: nstextparagraph.zep
  - id: h
    resource: /src/ns-textparagraph.h
    title: ns-textparagraph.h
  - id: m
    resource: /src/ns-textparagraph.m
    title: ns-textparagraph.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy` | ownership |
| `getAttributedString` | plain string of attributedString |
| `paragraphContentRangePtr / paragraphSeparatorRangePtr` | borrowed NSTextRange* |
