# appkit

AppKit bound 1:1 into PHP. One static method per Objective-C selector, no
opinions: this extension is AppKit plus the glue PHP cannot provide for itself.
Composition belongs in `jovian/appkit` (a PHP function per ext call),
`venusian-appkit` (composition), and Surface (abstraction) — not here.

Requires macOS and PHP 8.4+. Install with `bash install-macos.sh`
(`install-macos-herd.sh` puts Herd's PHP first on PATH).

## Binding rules

| AppKit | PHP |
|---|---|
| `@interface NSButton` | `AppKit\NS\NSButton\NSButton`, all methods static |
| `- (void)setBezelStyle:(NSBezelStyle)s` | `NSButton::setBezelStyle(int handle, int style): void` |
| `@property NSBezelStyle bezelStyle` | `bezelStyle(int handle)` + `setBezelStyle(...)`; `getter=isX` emits `isX()` |
| `[[NSWindow alloc] initWith...]` | one call returning a handle (construction is the only sanctioned composite) |
| `+ (X)classMethod` | static, no handle parameter |
| BOOL / NSInteger / CGFloat / enum | `bool` / `int` / `double` / `int` |
| NSString | `string`, or `var` when nullable (null = nil) |
| any object, `id` | `int` handle, 0 = nil |
| `SEL` | `string` |
| NSRect / NSPoint / NSSize / NSRange / NSEdgeInsets | component doubles in, assoc array out |
| `NSArray<NS*>` / `NSArray<NSString *>` | array of handles / array of strings |
| blocks, `NSError**`, `NSCoder`, `Class`, `NSAttributedString`, `NSData`, deprecated | not bound; kept as a commented `@reserved` signature in `src/*.h` |
| inherited methods | bound once on the declaring class; handles are untyped, so `NSView::setFrame($button, ...)` works |

Enum values and notification-name constants are deliberately absent — they live
in `jovian/appkit` as PHP enums. Pass the raw ints, as the example does.

All glue lives in `AppKit\Bridge\Bridge`: the handle registry
(`retain`/`release`/`isValid`/`className`/`isKindOfClass`), `pump`, `setAction`,
`observeNotification`, and the generic protocol delegate (`delegateNew`,
`delegateOn`, `delegateOff`).

## Example

```php
use AppKit\Bridge\Bridge;
use AppKit\NS\NSApplication\NSApplication;
use AppKit\NS\NSButton\NSButton;
use AppKit\NS\NSView\NSView;
use AppKit\NS\NSWindow\NSWindow;

$app = NSApplication::sharedApplication();
NSApplication::setActivationPolicy($app, 0);        // NSApplicationActivationPolicyRegular
NSApplication::finishLaunching($app);

$win = NSWindow::initWithContentRectStyleMaskBackingDefer(240.0, 240.0, 420.0, 260.0, 15, 2, false);
NSWindow::setReleasedWhenClosed($win, false);       // the registry owns the handle
NSWindow::setTitle($win, 'hello from PHP');
NSWindow::makeKeyAndOrderFront($win, 0);

$btn = NSButton::buttonWithTitleTargetAction('Click me', 0, '');
NSView::setFrame($btn, 20.0, 20.0, 140.0, 40.0);    // NSView setter on an NSButton handle
NSView::addSubview(NSWindow::contentView($win), $btn);

Bridge::setAction($btn, function (int $sender): void {
    echo "clicked\n";                               // a real AppKit event calls straight into PHP
});

while (NSWindow::isVisible($win)) {
    Bridge::pump(0.05);                             // PHP drives the event loop
}
```

See [`examples/smoke.php`](examples/smoke.php) for notifications, protocol
delegates, menus, tables, toolbars, and the failure paths.

## Working on this extension

`src/*.h` is the single source of truth: `appkit/**/*.zep` and `optimizers/` are
generated and must never be hand-edited. See [`AGENTS.md`](AGENTS.md) for the
rules and [`.okf/`](.okf/index.md) for the full knowledge bundle.

```bash
php scripts/gen-zep.php           # annotations -> .zep + optimizers
php scripts/check-parity.php      # PARITY_OK: zep calls = optimizers = prototypes
php scripts/audit-headers.php     # AUDIT_OK: bound + reserved = SDK header members
bash install-macos.sh             # build and install
php scripts/verify-reflection.php # REFLECTION_OK: installed .so matches annotations
php examples/smoke.php            # SMOKE_OK
```
