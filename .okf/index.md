---
okf_version: "0.2"
---

# appkit — knowledge bundle

Faithful 1:1 Zephir binding of AppKit into PHP. Read this index first, then
open only the concepts the task needs.

- [binding-rules.md](/binding-rules.md) — the spec every class binding follows
  (types, naming, reserved members, the one-call-one-send rule).
- [bridge.md](/bridge.md) — the only glue in the extension: handle registry,
  pump, target/action, notifications, generic delegate.
- [toolchain.md](/toolchain.md) — the generate → parity → build → install
  pipeline and its guards.
