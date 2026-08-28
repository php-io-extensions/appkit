# Agent guidelines — php-io-extensions/appkit

## Knowledge Bundle (OKF)

This package ships an Open Knowledge Format bundle at [`.okf/`](.okf/) (excluded from the Composer dist via `.gitattributes` `export-ignore`). Before changing code or advising on this package: read [`.okf/index.md`](.okf/index.md) first, open only the concepts the task needs, prefer `status: stable` over `draft`. When you learn something durable, update the affected concept(s) and append `.okf/log.md`; new or changed concepts stay `status: draft` until a human verifies them.

## Binding rules (the spec: [`.okf/binding-rules.md`](.okf/binding-rules.md))

1. One ext call = one Objective-C message send. The only sanctioned composite is `alloc`+`init...` inside init bindings (construction is glue, not composition).
2. One static method per selector, no opinions: `NSButton` → `AppKit\NS\NSButton\NSButton`, generated file `appkit/ns/nsbutton/nsbutton.zep`.
3. Never hand-write `.zep` files or optimizers — they are generated from the `/*@zep ... */` and `/*@zep-construct ... */` lines in `src/*.h` by `php scripts/gen-zep.php`.
4. Every header member is either bound (`@zep`) or kept as a commented `@reserved` signature (blocks, `NSError**`, `NSCoder`, `Class`, `NSAttributedString`, `NSData`, deprecated). Nothing is silently omitted.
5. Types: BOOL/NSInteger/CGFloat/NSString/enum → bool/int/double/string/int; any object or `id` → int handle (0 = nil); `SEL` → string; structs → doubles in, assoc arrays out.
6. Inherited methods bind once on the declaring class; handles are untyped, so `NSView::setFrame($button, ...)` works. Exception: a concrete class with no declared initializer synthesizes the nearest bound ancestor's designated initializers as `/*@zep-construct ... */` construction glue (allocs the concrete class). Access-only classes (`NSApplication`, `NSEvent`, `NSScreen`, `NSNotificationCenter`) are exempt and must stay on the audit whitelist.
7. All glue lives in `AppKit\Bridge\Bridge` (`src/ns-bridge.{h,m}`); no other `NSPhp*` class may exist. Marshalling only via `src/ns-value.h`.
8. No constants in the ext — enum values become PHP enums in `jovian/appkit`.
9. Pipeline: `php scripts/gen-zep.php` → `php scripts/check-parity.php` (must print `PARITY_OK`) → `bash scripts/prepare-ext.sh` → `bash install-macos.sh`.
10. Zephir reserved words in selectors and parameter names get a trailing underscore (`print_`, `callable_`, `object_`). All-caps selectors and parameter names are emitted mixed-case (`URL` -> `Url`) because Zephir lexes all-caps identifiers as constants; PHP method lookup is case-insensitive, so callers may still write `URL()`.
