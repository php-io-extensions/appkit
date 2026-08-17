---
okf_version: "0.2"
---

# php-io-extensions/appkit

macOS-only PHP extension: Zephir static classes → thin C ABI (`ns_*`) → Objective-C (Foundation + AppKit + CoreGraphics). Open an `NSWindow`, drive `NSApplication` from PHP, build AppKit view trees, and poll keyboard/mouse via CoreGraphics/`NSEvent`. **Not** Metal.framework, **not** QuartzCore present/drawable, **not** GameController — those stay out of this package (Metal lives in sibling `php-io-extensions/metal`).

**Prefer** concepts with `status: stable` when present; content is currently `draft` pending Angel’s human verification of the OKF docs.

# Orientation

* [Package overview](orientation/overview.md) - What appkit is, version targets, and what it deliberately is not
* [Standalone macOS scope](orientation/standalone-darwin.md) - macOS-only PIE constraints; split from metal

# Architecture

* [Layered stack](architecture/stack.md) - Zephir → C ABI headers → `.m` bridges → AppKit
* [C ABI surface](architecture/c-abi.md) - Opaque `uintptr_t` handles and `ns_*` entry points

# Public PHP API

* [API index](api/index.md) - `AppKit\\NS\\*` classes (populated as binds land)

# Build & packaging

* [Zephir + PIE install](build/zephir-and-pie.md) - prepare-ext, install-macos*.sh, PIE, make -j1
* [Committed ext/ notes](build/packaging-ext.md) - Makefile.frag, APPKIT_SHARED_LIBADD, strip phpize junk

# Conventions

* [Handle ownership](conventions/handle-ownership.md) - Opaque ints, destroy/release rules, borrowed cross-ext pointers
* [Sibling patterns](conventions/sibling-patterns.md) - Patterns from metal / gtk / posi (not dependencies)

# Traps

* [Darwin-only builds](traps/darwin-only.md) - Linux/Windows will not build or load
* [Not Metal / not GameController](traps/not-metal.md) - Product boundary with ext-metal
* [ObjC Makefile.frag required](traps/objc-makefile-frag.md) - phpize mishandles .m sources
* [phpize rejects whitespace paths](traps/phpize-whitespace-path.md) - stage build under `$TMPDIR` when cwd has spaces
* [Framework link via APPKIT_SHARED_LIBADD](traps/framework-shared-libadd.md) - PHP_ADD_FRAMEWORK is not enough
* [Prefer make -j1](traps/parallel-make.md) - Conservative ObjC fragment builds
* [Copied .so SIGKILL](traps/codesign-invalid-page.md) - resign after `cp` or Herd PHP dies
* [ZEPHIR_REGISTER_CLASS double appkit_ prefix](traps/zephir-register-double-prefix.md) - shortname must stay `ns_*` (metal pattern, not gtk)
* [Never runModal inside poll](traps/no-runmodal-in-poll.md) - NSAlert sheet + pollResponse, not runModal in loops
* [Zephir generate under Herd PHP](traps/zephir-generate-herd-php.md) - use `php -n` + zephir_parser; C blocks close with `}%`
* [Missing zep.c segfaults PHP](traps/missing-zep-c-segfault.md) - every ZEPHIR_INIT class must be in PHP_NEW_EXTENSION

# Playbooks

* [Regenerate committed ext/](playbooks/regenerate-ext.md) - Maintainer steps before tagging

## 2026-08-15 (sound / speech / haptic binds)

* **Added**: `NSSound`, `NSSpeechSynthesizer`, `NSSpeechRecognizer`, `NSHapticFeedbackManager` with `ns-sound`, `ns-speechsynthesizer`, `ns-speechrecognizer`, `ns-hapticfeedbackmanager` C ABI + Zephir + OKF api pages.
* **Note**: `NSSpeechSynthesizer` marked deprecated in OKF (macOS 14). Haptic enums documented as int cases for backed PHP Enums in user code.

## 2026-08-15 (a11y / tabs / NSGraphics / enums / protocols)

* **Added**: `NSAccessibilityElement`, `NSAccessibilityCustomRotor` (+ item result), `NSWindowTab`, `NSWindowTabGroup`, `NSTitlebarAccessoryViewController`, `NSGraphics` C functions, `NSApplication::nsApp`.
* **Enums**: live in `microscrap/appkit` (`Microscrap\Bindings\AppKit\Enums`), not this php-ext.
* **Protocols**: poll surfaces via `NSProtocol` and named delegate classes; remaining `@protocol`s listed as bound as part of `NSProtocol`.

# Indexes

* [Orientation](orientation/) — start here
* [Architecture](architecture/)
* [API](api/)
* [Build](build/)
* [Conventions](conventions/)
* [Traps](traps/)
* [Playbooks](playbooks/)
