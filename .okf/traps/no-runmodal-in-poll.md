---
type: Trap
title: Never runModal inside ns_app_poll
description: NSAlert runModal nested in the poll loop deadlocks NSApplication; use sheet + poll instead
tags: [appkit, trap, runloop, nsalert]
status: draft
generated: { by: cursor-agent, at: "2026-08-16T23:40:00Z" }
---

# Trap

`ns_app_poll()` already pumps AppKit. `ns_alert_run_modal()` / `[NSAlert runModal]` starts a nested modal session on the same thread. That can freeze the window so Cmd-Q and SIGTERM never land.

# Rule

Do not call `ns_alert_run_modal` from a sketch `loop()` or anything reached from `ns_app_poll()`.

For in-loop alerts, use **`ns_alert_begin_sheet(alert, window)`** plus **`ns_alert_poll_response(alert)`** each frame. The sheet attaches to the window without a nested run loop; the completion handler stores a pending `NSModalResponse` (typically `1000+` for button indices) that PHP drains once via poll.

`runModal` remains in the ABI for one-shot scripts outside the poll loop.
