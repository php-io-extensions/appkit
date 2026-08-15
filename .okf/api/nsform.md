---
type: CoreType
title: AppKit\\NS\\NSForm\\NSForm
description: Deprecated NSForm labeled-entry matrix
resource: /appkit/ns/nsform/nsform.zep
tags: [appkit, api, nsform, deprecated]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T12:54:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsform/nsform.zep
    title: nsform.zep
  - id: h
    resource: /src/ns-form.h
    title: ns-form.h
  - id: m
    resource: /src/ns-form.m
    title: ns-form.m
---

# Deprecated

Entire class is deprecated in AppKit. Bound for SDK completeness only.

# Schema

| Method | Maps to |
|--------|---------|
| `create / destroy` | view-box ownership |
| `addEntry / setTitleAt / getTitleAt` | row titles |
| `setValueAt / getValueAt` | row values |
| `numberOfRows / cellAt` | NSFormCell wrap |
