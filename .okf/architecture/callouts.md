---
type: Module
title: Callouts
description: PHP callables that native code calls back into; lifetime follows the native object, detached at request end.
resource: src/runtime.m
tags: [appkit, callbacks, lifetime]
status: draft
generated: { by: claude-opus/5.5, at: 2026-09-30T20:37:59Z }
sources:
  - id: runtime
    resource: src/runtime.m
    title: appkit_callout_*
  - id: fd
    resource: src/CFFileDescriptor.m
    title: CFFileDescriptor::create
---

# Overview

`appkit_callout` = persistent record holding a PHP callable, a native refcount, the owning native object (not retained) and a detach function.[^runtime] Native side owns the record through its context `info` + `retain`/`release` callbacks, so a callback keeps working after PHP drops every handle while the native object lives (run loop holds source → source holds descriptor → descriptor holds record).

Invocation (`appkit_callout_invoke`): boxes args, calls the callable with the record and callable both held (a callable may invalidate its own owner). Skipped while a PHP exception is pending; the exception surfaces when the native call that ran the callback returns to PHP.

Callbacks only run inside a PHP call that spins the run loop (`nextEventMatchingMask…`, `run`, `CFRunLoop::runInMode`), on the main thread, inside the request.

RSHUTDOWN (`appkit_callouts_detach_all`): every attached record's owner is detached (`CFFileDescriptorInvalidate`) and its callable freed while the engine can still free it. Records stay until the native side releases them.

First user: `CFFileDescriptor::create(fd, closeOnInvalidate, callout)`; callout gets `(CFFileDescriptor $f, int $callBackTypes)`.[^fd]

[^runtime]: appkit_callout_*
[^fd]: CFFileDescriptor::create
