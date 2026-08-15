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

# Playbooks

* [Regenerate committed ext/](playbooks/regenerate-ext.md) - Maintainer steps before tagging

# Indexes

* [Orientation](orientation/) — start here
* [Architecture](architecture/)
* [API](api/)
* [Build](build/)
* [Conventions](conventions/)
* [Traps](traps/)
* [Playbooks](playbooks/)
