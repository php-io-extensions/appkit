---
type: CoreType
title: AppKit\\NS\\NSLayoutConstraint\\NSLayoutConstraint
description: Auto Layout constraint object
resource: /appkit/ns/nslayoutconstraint/nslayoutconstraint.zep
tags: [appkit, api, nslayoutconstraint]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:55:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nslayoutconstraint/nslayoutconstraint.zep
    title: nslayoutconstraint.zep
  - id: h
    resource: /src/ns-layoutconstraint.h
    title: ns-layoutconstraint.h
  - id: m
    resource: /src/ns-layoutconstraint.m
    title: ns-layoutconstraint.m
---

# Schema

| Method | Maps to |
|--------|---------|
| `wrap / destroy / nsLayoutConstraint` | retain of NSLayoutConstraint |
| `constraintWithItem` | +constraintWithItem:attribute:relatedBy: |
| `activateConstraints / deactivateConstraints` | class activate/deactivate |
| `active / priority / constant / identifier` | constraint properties |
| `firstAttribute / secondAttribute / relation / multiplier` | equation metadata |
| `firstAnchor / secondAnchor` | anchor accessors |
