---
type: Component
title: AppKit\Bridge\Bridge — the only glue
description: >-
  Everything PHP cannot do without native code, and nothing else: handle
  registry, event pump, target/action, notification observer, generic delegate.
resource: src/ns-bridge.m
tags: [bridge, glue, appkit]
status: draft
generated:
  by: cursor-grok-4.6/cursor
  at: 2026-08-27T18:40:00Z
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
- `pump(timeout)` — dequeue and send pending events; PHP callables fire on
  this stack (direct callbacks, hardware-proven 2026-08-27, no queue).
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
