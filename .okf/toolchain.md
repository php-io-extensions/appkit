---
type: Runbook
title: Generate, verify, build, install
description: >-
  The pipeline that turns @zep annotations in src/*.h into a loadable
  extension, and the guards that keep it faithful.
tags: [toolchain, zephir, build]
status: draft
generated:
  by: cursor-grok-4.6/cursor
  at: 2026-08-28T02:25:00Z
---

# Toolchain

The annotations in `src/*.h` are the single source of truth. Everything under
`appkit/` and `optimizers/` is generated and prunes itself; never hand-edit.

## Pipeline

```bash
php scripts/gen-zep.php        # @zep/@zep-construct/@reserved lines -> .zep files + optimizers
php scripts/check-parity.php   # must print PARITY_OK before anything ships
bash scripts/prepare-ext.sh    # zephir generate, stage src/, Makefile.frag, patch config.m4
bash install-macos.sh          # phpize/configure/make, codesign, ini, php --ri appkit
php scripts/verify-reflection.php  # loaded .so exposes exactly the annotated methods
```

`install-macos-herd.sh` is the same install with Herd's PHP first on PATH.

## Guards

- `check-parity.php` — zep bare calls ↔ optimizers ↔ C prototypes (names and
  arity), `config.json` extra-sources coverage, the composite guard (no binding
  sends more than its declared selector; `alloc`+`init` excepted), and the
  header audit via `audit-headers.php` (bound + reserved must equal the SDK
  header's member count per class; `@zep-construct` is printed as `construct=N`
  and is not part of that sum). A non-exempt class with no construction path
  (`init*`, no-handle factory returning int, or `@zep-construct`) fails.
  Access-only exemptions: `NSApplication`, `NSEvent`, `NSScreen`,
  `NSNotificationCenter`. Companion classes that live in another
  type's header (e.g. `NSSecureTextFieldCell` in `NSSecureTextField.h`)
  resolve by scanning for `@interface Class` when `{Class}.h` is absent.
  NS-prefixed types missing from AppKit (e.g. `NSNotificationCenter` in
  `Foundation/NSNotification.h`) resolve via `FRAMEWORK_FALLBACK`.
- `scripts/tests/*.php` — negative controls: each guard is proven able to fail
  against a bad fixture (drift, parity break, audit miss, prepare-ext patch
  failure).
- `verify-reflection.php` — the only guard that inspects the **installed**
  binary: for every class it asserts the reflected method count equals that
  class's `@zep` + `@zep-construct` count. The other guards compare source
  artefacts to each other or to the SDK headers and pass even when the
  extension cannot build, so this one closes that gap.
- `prepare-ext.sh` strips phpize leftovers (`Makefile`, `configure`,
  `modules/`, `*.lo`, `*.dSYM`, …) after generating C so `ext/` stays the
  ship-ready PIE/`phpize` input. Do not commit those artifacts.

## Gotchas

- PHP's `PHP_ADD_SOURCES_X` has no `*.m` case — `prepare-ext.sh` writes
  `ext/Makefile.frag` with one libtool rule per `.m` file.
- `PHP_EVAL_LIBLINE` drops `-framework` pairs — `config.m4` is patched to
  assign `APPKIT_SHARED_LIBADD=` directly.
- A copied Mach-O is SIGKILLed by macOS — the install re-signs with
  `xattr -cr` + `codesign --force --sign -`.
- `gen-zep.php` treats any source line containing the substring `@zep` as an
  annotation. File-header comments must not mention that token (write
  "bound or reserved" instead); a stray occurrence is a hard fail.
- Zephir lexes all-caps identifiers as constants, so a selector or parameter
  named `URL` is a syntax error; `gen-zep.php` emits `Url` (see
  [binding-rules.md](/binding-rules.md)).
- `zephir generate` reports parse failures as a bare
  `Syntax error in <file> on line N`, but on PHP 8.4 that message is swallowed
  by a deprecation notice raised from Zephir's own `ParseException`. Re-run with
  `-d error_reporting="E_ALL & ~E_DEPRECATED"` to see the file and line.
- `Zephir version has changed, use "zephir fullclean"` aborts generation until
  `zephir fullclean` is run; the install scripts do not do it automatically.
- Parity and header audit both pass on sources that Zephir cannot compile.
  Run `zephir generate` (or a full build) before declaring a wave finished.

See [binding-rules.md](/binding-rules.md) for what the generator emits.
