---
type: Trap
title: Live resize nested tracking loop
description: ns_app_poll uses NSDefaultRunLoopMode so PHP is stuck in sendEvent during live resize; layout must run from windowDidResize
tags: [appkit, trap, runloop, resize]
status: draft
generated: { by: cursor-agent/grok-4.6, at: "2026-08-17T04:30:00Z" }
---

# Trap

`ns_app_poll()` dequeues with `NSDefaultRunLoopMode`. Dragging a window edge runs a nested tracking loop in `NSEventTrackingRunLoopMode` inside `sendEvent:`. PHP does not return from `pump()` until mouse-up, so sketch-loop `pollResize()` cannot move views during the stretch.

`windowDidResize:` on `NSPhpWindowDelegate` still fires on every live-resize tick. Register a PHP callable with `NSWindow::setDidResize` / `ns_window_set_did_resize` so layout runs on the main thread inside that delegate (still inside `sendEvent`, so `zend_call` is valid). Do not wait for `pump()` to return.

GTK `g_main_context_iteration` does not nest this way; sketch `pollResize` after `pump()` is enough there.

# Rule

Do not add Auto Layout or springs to make live resize look live. Keep explicit frames. Invoke PHP relayout from `windowDidResize:`.
