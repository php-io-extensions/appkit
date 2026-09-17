---
type: Component
title: AppKit\Bridge\Bridge — the only glue
description: >-
  Everything PHP cannot do without native code, and nothing else: handle
  registry, event pump, input tap, target/action, notification observer,
  generic delegate.
resource: src/ns-bridge.m
tags: [bridge, glue, appkit]
status: draft
generated:
  by: claude-opus-5/claude-code
  at: 2026-09-17T03:00:00Z
---

# AppKit\Bridge\Bridge

Everything in `src/ns-bridge.{h,m}` exists because PHP cannot be an
Objective-C object: it cannot hold a strong reference, receive target/action,
observe a notification, or conform to a protocol. Nothing here decides anything
about how AppKit is used. **No other `NSPhp*` class may exist** — verified by
`grep -rn "@interface NSPhp" src | grep -v ns-bridge.m` being empty.

## Surface

- Handle registry: `retain(handle)`, `release(handle)`, `isValid(handle)`,
  `className(handle)`, `isKindOfClass(handle, className)`. Handles are the
  object's pointer as int; 0 = nil; stale ints resolve to nil, never crash.
- Cross-extension pointer seam: `pointerOf(int handle) -> int` and
  `adopt(string className, int pointerBits) -> int` (0.8.1). `pointerOf`
  hands out the `__bridge void*` bits of a registry object (0 for an
  invalid handle); `adopt` wraps a foreign pointer into *this* extension's
  own registry, retained — a `NULL` pointer returns 0, a resolvable class
  name enforces `isKindOfClass:` (0 on mismatch), and an unresolvable name
  adopts unchecked (the caller asked). Raw pointer bits are the only
  inter-extension currency — never a registry handle from another
  extension. Ported from ext-metal's identical `mtl_bridge_pointer_of` /
  `mtl_bridge_adopt` (`mtl-bridge.{h,m}`, that repo's `.okf/bridge.md`);
  see [binding-rules.md](/binding-rules.md) for the QuartzCore split this
  seam exists for, proven end-to-end by that repo's
  `examples/proof_view.php` (`PROOF_VIEW_OK`, 2026-09-13).
- `pump(timeout)` — dequeue and send pending events; PHP callables fire on
  this stack (direct callbacks, hardware-proven 2026-08-27, no queue).
- Input tap (0.8.0, 2026-09-17): `watchInput(int mask)` /
  `drainInput() -> array`. One `+[NSEvent addLocalMonitorForEventsMatchingMask:handler:]`
  monitor; block copies fields into a C ring buffer (cap 4096, drop oldest)
  and returns the event unchanged. `mask` = OR of `1 << NSEventType`;
  re-call replaces the monitor; `0` removes it and empties the buffer.
  `drainInput` returns and empties, oldest first: `type`, `timestamp`,
  `windowNumber`, `keyCode`, `characters`, `charactersIgnoringModifiers`,
  `isARepeat`, `modifierFlags` (full value), `buttonNumber`, `clickCount`,
  `locationInWindow {x, y}`, `deltaX`, `deltaY`, `scrollingDeltaX`,
  `scrollingDeltaY`, `hasPreciseScrollingDeltas`,
  `isDirectionInvertedFromDevice`. Type-gated reads (AppKit raises
  otherwise): `keyCode` keyDown/keyUp/flagsChanged (modifier-key identity);
  characters/isARepeat keyDown/keyUp only; button/click on left/right/other
  mouse down/up/dragged only; location on those + mouseMoved + scrollWheel +
  entered/exited; deltas on mouseMoved, *Dragged, scrollWheel only (not
  down/up); scrolling fields + `isDirectionInvertedFromDevice` (true =
  natural scrolling, deltas inverted from physical motion) scrollWheel only.
  Ungated fields read 0 / '' / false. Monitor fires on the main
  thread inside `pump` → no lock. Captures real keystrokes to the key
  window too. Proof: `examples/smoke.php` `INPUT_TAP_OK` (posted keyDown),
  `MOUSE_FIELD_GATES_OK` (posted mouseDown + mouseMoved),
  `SCROLL_INVERTED_KEY_OK` (key present, false off scrollWheel — no bound
  path posts a scroll event);
  `examples/input-probe.php` (10 s, prints events + controllers).
- `swallowKeysIn(array windowNumbers)` — tap consumes (after recording)
  keyDown/keyUp in listed windows whose first responder is nil, the window,
  or its content view → no no-responder beep. Swallowed Command keyDown goes
  to `[[NSApp mainMenu] performKeyEquivalent:]` first (menu shortcuts live;
  Cmd + held key no beep). `[]` or `watchInput(0)` clears. Proof: smoke
  `SWALLOW_RECORDS_OK`.
- `setAction(handle, callable)` / `removeAction(handle)` — target/action with
  a PHP receiver; the callable receives `(int sender)`.
- `observeNotification(object, name, callable)` / `removeObserver(token)` —
  NSNotificationCenter observation with a PHP receiver. Post and
  remove-by-handle live on `NSNotificationCenter` itself
  (`src/ns-notificationcenter.{h,m}`); the two `addObserver*`
  selectors stay reserved there so observation is not bound twice.
- `delegateNew(protocolName)` / `delegateOn(delegate, selector, callable)` /
  `delegateOff(delegate, selector)` — a generic `forwardInvocation:` delegate
  that marshals any protocol selector by type encoding.

## Delegate return marshalling (`id` returns)

When a PHP callable answers a selector whose return type is `id`, the value
maps the same way the bindings map everywhere else: `int` = registry handle
(0 = nil), `string` → `NSString`, `float` → `NSNumber`, `bool` → `NSNumber`.
Proven live by `DATASOURCE_OK` (view-based `NSTableView`: `NSInteger` +
view-handle returns) and `VALUE_RETURN_OK` (`NSComboBox` data source: PHP
string round-trips through AppKit and reads back via `stringValue`) in
`examples/smoke.php`.

## Protocol registration

`NSProtocolFromString` only resolves protocols whose metadata is linked into
the runtime. AppKit does not itself conform to purely user-facing protocols
(e.g. `NSComboBoxDataSource`), so their metadata is absent unless referenced.
`ns_bridge_register_protocols()` (a `__attribute__((constructor))` in
`ns-bridge.m`) references every delegate/data-source protocol of a bound class
so `delegateNew` can resolve all of them. If `delegateNew` returns 0 for a
protocol of a newly bound class, add it to that list.

## Gotchas

- `NSComboBox::itemObjectValueAtIndex` must **not** be called when
  `usesDataSource` is true — AppKit logs a warning and then throws
  `NSRangeException` from its empty internal array, which terminates PHP.
  In data-source mode, select an item and read `stringValue` instead.

See [binding-rules.md](/binding-rules.md) for the marshalling conventions.
