---
type: Decision
title: Run-loop modes
description: Mode strings from PHP map back to the framework's constant objects before reaching CFRunLoop or AppKit.
resource: src/runtime.m
tags: [corefoundation, run-loop]
status: draft
generated: { by: claude-opus/5.5, at: 2026-09-30T20:37:59Z }
sources:
  - id: runtime
    resource: src/runtime.m
    title: appkit_run_loop_mode()
---

# Overview

Modes cross into PHP as strings (`kCFRunLoopCommonModes` = `"kCFRunLoopCommonModes"`). CFRunLoop recognises common modes by pointer: `CFRunLoopAddSource` compares `modeName == kCFRunLoopCommonModes`. Equal text in a new CFString registers a mode literally named `kCFRunLoopCommonModes`, which no run ever enters.

`appkit_run_loop_mode()` returns the constant object when the text matches `kCFRunLoopDefaultMode`, `kCFRunLoopCommonModes`, `NSEventTrackingRunLoopMode` or `NSModalPanelRunLoopMode`; any other text becomes a new CFString (custom modes compare by text).[^runtime] Every mode parameter in the ext goes through it: `CFRunLoop::runInMode/addSource/removeSource/containsSource`, `NSApplication::nextEventMatchingMaskUntilDateInModeDequeue`.

Regression: `tests/CFRunLoopTest.php` "adds a source to the common modes".

[^runtime]: appkit_run_loop_mode()
