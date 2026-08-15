---
type: Convention
title: Handle ownership
description: Opaque ints, destroy/release rules, borrowed cross-ext pointers
resource: /AGENTS.md
tags: [appkit, convention, memory]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T00:10:00Z" }
sources:
  - id: agents
    resource: /AGENTS.md
    title: AGENTS.md
  - id: abi
    resource: /.okf/architecture/c-abi.md
    title: C ABI surface
---

# Rules

| Handle | Create | Destroy / release |
|--------|--------|-------------------|
| Window | `NSWindow::create` | `NSWindow::destroy` (caller owns) |
| View | `NSView::create` / `contentView` | `NSView::destroy` when caller created it |
| Widgets (button, fields, …) | `*::create` | matching `*::destroy` (often same box as View) |
| Menu items | install / add | owned by menu bar / AppKit until removed |

# Semantics

- `0` means failure / null; never call destroy on `0`.
- Handles are opaque `uintptr_t` / PHP `int`. Do not cast in PHP.
- **Cross-ext:** when exporting an `NSView*` or layer pointer to `metal`, it is **borrowed**. Metal must not free it. AppKit owns the view box lifetime.
- Never share a C box struct definition across `appkit.so` and `metal.so` — only raw Apple object pointers.
- Prefer one `NSApplication::init` per process; init is idempotent.

# Checklist

1. Create window → build view tree → loop with `NSApplication::poll` → destroy widgets → destroy window.
2. Hybrid Metal: AppKit owns window/view; metal receives borrowed layer pointer for attach/clear/present.
3. Do not share handles across process forks.
4. Do not call Metal present APIs from this extension.

[^agents]: AGENTS.md
[^abi]: C ABI surface
