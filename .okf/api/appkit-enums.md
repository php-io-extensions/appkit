---
type: CoreType
title: AppKit NS_ENUM / NS_OPTIONS PHP Enums
description: Enums live in microscrap/appkit, not in this extension
resource: microscrap/appkit/src/Enums
tags: [appkit, api, enums]
status: draft
generated: { by: cursor-agent/grok-4.6, at: "2026-08-15T15:45:00Z" }
---

# Schema

Backed PHP enums for AppKit `NS_ENUM` / `NS_OPTIONS` ship in **`microscrap/appkit`**:

- Namespace: `Microscrap\Bindings\AppKit\Enums`
- Path: `src/Enums/*.php`
- Autoload: Composer PSR-4 on `microscrap/appkit` (`Microscrap\Bindings\AppKit\` → `src/`)

This php-ext package does **not** autoload PHP userland. PIE loads `appkit.so` only. Generator: `scripts/generate-appkit-enums.py` writes into the microscrap tree and never overwrites hand-owned enums.
