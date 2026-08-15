---
type: CoreType
title: AppKit\NS\NSTextContainer\NSTextContainer
description: NSTextContainer layout region
resource: /appkit/ns/nstextcontainer/nstextcontainer.zep
tags: [appkit, api, nstextcontainer]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nstextcontainer/nstextcontainer.zep
    title: nstextcontainer.zep
  - id: h
    resource: /src/ns-textcontainer.h
    title: ns-textcontainer.h
  - id: m
    resource: /src/ns-textcontainer.m
    title: ns-textcontainer.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsTextContainer` | ownership |
| `setSize / getSize` | container size |
| `lineBreakMode / lineFragmentPadding / maximumNumberOfLines` | layout |
| `widthTracksTextView / heightTracksTextView` | text view tracking |
| `isSimpleRectangularTextContainer / replaceLayoutManager` | geometry |
