---
type: Trap
title: Darwin-only builds
description: Linux/Windows will not build or load
resource: /composer.json
tags: [appkit, trap, darwin]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T00:10:00Z" }
sources:
  - id: composer
    resource: /composer.json
    title: PIE package manifest
---

# Symptom

Configure/link fails on Linux CI, or PIE refuses/os-mismatch on non-macOS.

# Cause

The extension compiles Objective-C against AppKit and declares `os-families: ["darwin"]`.[^composer]

# Guidance

- Run build/test jobs only on macOS runners.
- Do not add `#ifdef` stubs that pretend Linux works unless product scope changes.
- Documented in `README.md` and `composer.json` `os-families: ["darwin"]`.

[^composer]: PIE package manifest
