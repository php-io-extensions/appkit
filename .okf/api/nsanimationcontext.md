---
type: CoreType
title: AppKit\NS\NSAnimationContext\NSAnimationContext
description: NSAnimationContext implicit animation grouping
resource: /appkit/ns/nsanimationcontext/nsanimationcontext.zep
tags: [appkit, api, nsanimationcontext]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T03:15:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsanimationcontext/nsanimationcontext.zep
    title: nsanimationcontext.zep
  - id: h
    resource: /src/ns-animationcontext.h
    title: ns-animationcontext.h
---

# Schema

| Method | Maps to |
|--------|---------|
| `beginGrouping` / `endGrouping` | group stack |
| `current` | current context handle |
| `setDuration` / `getDuration` | duration |
| `setAllowsImplicitAnimation` / `getAllowsImplicitAnimation` | implicit animation flag |
