---
type: CoreType
title: AppKit\\NS\\NSVisualEffectView\\NSVisualEffectView
description: NSVisualEffectView vibrancy material background
resource: /appkit/ns/nsvisualeffectview/nsvisualeffectview.zep
tags: [appkit, api, nsvisualeffectview]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T14:30:00Z" }
---

# Schema

| Method | Maps to |
|--------|---------|
| `create / wrap / destroy / nsVisualEffectView` | view-box ownership |
| `setMaterial / getMaterial` | `material` (NSVisualEffectMaterial int) |
| `setBlendingMode / getBlendingMode` | `blendingMode` |
| `setState / getState` | `state` |
| `setEmphasized / isEmphasized` | `emphasized` |
| `interiorBackgroundStyle` | readonly `interiorBackgroundStyle` |

Use backed PHP Enums for material/blending/state cases (FULLY UPPERCASE) outside the extension.
