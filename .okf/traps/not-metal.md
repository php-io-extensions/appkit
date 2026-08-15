---
type: Trap
title: Not Metal / not GameController
description: AppKit package must not absorb Metal.framework or GameController
resource: /config.json
tags: [appkit, trap, boundary]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T00:10:00Z" }
sources:
  - id: config
    resource: /config.json
    title: Zephir config
  - id: agents
    resource: /AGENTS.md
    title: AGENTS.md
---

# Symptom

Temptation to keep `CAMetalLayer` present, `MTLDevice`, or gamepad APIs “handy” inside appkit because they used to live in metal’s AppKit files.

# Cause

Pre-split `php-io-extensions/metal` mixed AppKit windowing with Metal present and GameController input.

# Guidance

- Link line is **only** Foundation + AppKit + CoreGraphics.[^config]
- Drawable/layer present (`attachDevice` / `clear` / `presentTexture`) stays in **metal**, taking a borrowed layer pointer.
- GameController (`mtl_input_gamepad_*`) is deleted from metal and **not** added here.
- Hybrid demos load **both** extensions.

[^config]: Zephir config
[^agents]: AGENTS.md
