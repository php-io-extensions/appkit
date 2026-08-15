# Agent guidance — php-io-extensions/appkit

1. **Read [`.okf/index.md`](.okf/index.md) first** before changing architecture, API, or packaging.
2. Open only the concept files you need; prefer `status: stable` when present (most are currently `draft`).
3. This package is **macOS-only AppKit.framework**. Zero Metal, zero QuartzCore `CAMetalLayer` present, zero GameController. Sibling `php-io-extensions/metal` owns Metal.framework + drawable present.
4. Public PHP API: `AppKit\NS\{Type}\{Type}` (Apple names). Zephir path: `appkit/ns/nswindow/nswindow.zep` → `AppKit\NS\NSWindow\NSWindow`. Opaque handles are PHP `int`. C ABI prefix `ns_*`, headers `src/ns-*.h`, ObjC `src/ns-*.m`.
5. Zephir stays thin: one static method → one C ABI entry → one ObjC call. Cross-ext values are borrowed native pointers (`NSView*`, `NSWindow*`), never a shared C box across `.so` files.
6. No PHP class-level constants. Prefer backed PHP Enums with FULLY UPPERCASE cases (outside the extension / in microscrap).
7. Build gotchas: `Makefile.frag` for `.m`, `APPKIT_SHARED_LIBADD -framework Foundation -framework AppKit -framework CoreGraphics`, prefer `make -j1`, adhoc codesign after `cp`, whitespace temp path for phpize.
8. Do **not** run `install-macos*.sh` against the ship tree. Angel installs from his copy. Local `php-io-extensions-dev` can run `zephir generate` / `prepare-ext.sh`.
9. Demo: `examples/proof_appkit.php` (AppKit-only). Hybrid window + Metal present is metal's proof loading both extensions.
10. When you learn a durable package fact, **update the matching `.okf` concept**, bump `generated.at`, and append `.okf/log.md`.
11. Do not invent APIs not present in `.zep` / headers. Do not dump GameController or Metal into this package.
