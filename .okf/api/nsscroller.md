---
type: CoreType
title: AppKit\\NS\\NSScroller\\NSScroller
description: NSScroller scroll bar control
resource: /appkit/ns/nsscroller/nsscroller.zep
tags: [appkit, api, nsscroller]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:30:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsScroller` | view-box ownership |
| `setScrollerStyle / getScrollerStyle` | `scrollerStyle` (LEGACY=0, OVERLAY=1) |
| `setKnobStyle / getKnobStyle` | `knobStyle` |
| `setControlSize / getControlSize` | `controlSize` |
| `setKnobProportion / getKnobProportion` | `knobProportion` |
| `hitPart` | `hitPart` (readonly) |
| `preferredScrollerStyle` | `+[NSScroller preferredScrollerStyle]` |
| `scrollerWidth` | `+[NSScroller scrollerWidthForControlSize:scrollerStyle:]` |
