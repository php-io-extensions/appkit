---
type: CoreType
title: AppKit\NS\NSTextViewportLayoutController\NSTextViewportLayoutController
description: NSTextViewportLayoutController wrap from NSTextLayoutManager.textViewportLayoutController; destroy releases the retain.
resource: /appkit/ns/nstextviewportlayoutcontroller/nstextviewportlayoutcontroller.zep
tags: [appkit, api, nstextviewportlayoutcontroller, textkit]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstextviewportlayoutcontroller/nstextviewportlayoutcontroller.zep
    title: nstextviewportlayoutcontroller.zep
  - id: h
    resource: /src/ns-textviewportlayoutcontroller.h
    title: ns-textviewportlayoutcontroller.h
  - id: m
    resource: /src/ns-textviewportlayoutcontroller.m
    title: ns-textviewportlayoutcontroller.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `wrap / destroy` | ownership (retained wrap) |
| `viewportBounds` | [x, y, w, h] |
| `layoutViewport / adjustViewportByVerticalOffset` | viewport layout |
