---
type: CoreType
title: AppKit\\NS\\NSRulerView\\NSRulerView
description: NSRulerView horizontal or vertical ruler
resource: /appkit/ns/nsrulerview/nsrulerview.zep
tags: [appkit, api, nsrulerview]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:30:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `create(orientation) / wrap / destroy / nsRulerView` | view-box ownership |
| `setOrientation / getOrientation` | `orientation` (HORIZONTAL=0, VERTICAL=1) |
| `setRuleThickness / getRuleThickness` | `ruleThickness` |
| `setMeasurementUnits / getMeasurementUnits` | `measurementUnits` |
| `setOriginOffset / getOriginOffset` | `originOffset` |
| `setClientView / clientView` | `clientView` |
| `setAccessoryView / accessoryView` | `accessoryView` |
| `addMarker / removeMarker` | marker array |
| `invalidateHashMarks` | `invalidateHashMarks` |
| `baselineLocation / requiredThickness` | readonly geometry |
