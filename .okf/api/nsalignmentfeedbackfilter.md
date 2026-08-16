---
type: CoreType
title: AppKit\\NS\\NSAlignmentFeedbackFilter\\NSAlignmentFeedbackFilter
description: Alignment haptic feedback during drag
resource: /appkit/ns/nsalignmentfeedbackfilter/nsalignmentfeedbackfilter.zep
tags: [appkit, api, nsalignmentfeedbackfilter]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:55:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsalignmentfeedbackfilter/nsalignmentfeedbackfilter.zep
    title: nsalignmentfeedbackfilter.zep
  - id: h
    resource: /src/ns-alignmentfeedbackfilter.h
    title: ns-alignmentfeedbackfilter.h
  - id: m
    resource: /src/ns-alignmentfeedbackfilter.m
    title: ns-alignmentfeedbackfilter.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy` | NSAlignmentFeedbackFilter |
| `inputEventMask` | +inputEventMask |
| `updateWithEvent / updateWithPanRecognizer` | event input |
| `tokenFor*Movement` | alignmentFeedbackTokenFor* |
| `performFeedback / destroyToken` | haptic perform + token cleanup |
