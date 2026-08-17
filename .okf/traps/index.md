# Traps

* [Darwin-only builds](darwin-only.md) - Linux/Windows will not build or load
* [Not Metal / not GameController](not-metal.md) - Product boundary with ext-metal
* [ObjC Makefile.frag required](objc-makefile-frag.md) - phpize mishandles .m sources
* [phpize rejects whitespace paths](phpize-whitespace-path.md) - stage build under `$TMPDIR` when cwd has spaces
* [Framework link via APPKIT_SHARED_LIBADD](framework-shared-libadd.md) - PHP_ADD_FRAMEWORK is not enough
* [Prefer make -j1](parallel-make.md) - Conservative ObjC fragment builds
* [Copied .so SIGKILL](codesign-invalid-page.md) - resign after `cp` or Herd PHP dies
* [ZEPHIR_REGISTER_CLASS double appkit_ prefix](zephir-register-double-prefix.md) - do not gtk-style-prefix the shortname
* [Never runModal inside poll](no-runmodal-in-poll.md) - use NSAlert sheet + pollResponse in loops
* [Live resize nested tracking](live-resize-nested-tracking.md) - PHP poll after pump misses mid-drag; use setDidResize
