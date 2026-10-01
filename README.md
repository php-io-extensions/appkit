# ext-appkit

1:1 PHP bindings of AppKit and the CoreFoundation run loop it runs on, written
directly in Objective-C against the Zend API. Each PHP class is its native
counterpart (`NSApplication`, `NSEvent`, `CFRunLoop`, …) and each method is one
native call. No defaults, no composites: behaviour is composed by the caller.

macOS only. PHP 8.4+, NTS and ZTS.

## What is bound

The calls that start AppKit, present the app to the OS and withdraw it, pump
events, sleep with a budget, wake a sleep from a file descriptor, open and close
windows, and build the menu bar:

| Class | Native |
|---|---|
| `NSObject`, `NSResponder` | `className`, `isKindOfClass:`, `respondsToSelector:`, `isEqual:`, `hash`, `description` |
| `NSApplication` | `sharedApplication`, `finishLaunching`, `run`, `stop:`, `activationPolicy`, `setActivationPolicy:`, `activate`, `activateIgnoringOtherApps:`, `deactivate`, `isActive`, `isRunning`, `nextEventMatchingMask:untilDate:inMode:dequeue:`, `discardEventsMatchingMask:beforeEvent:`, `sendEvent:`, `postEvent:atStart:`, `currentEvent`, `updateWindows`, `mainMenu`, `setMainMenu:`, `keyWindow`, `mainWindow`, `windows`, `orderFrontStandardAboutPanel:`, `orderFrontStandardAboutPanelWithOptions:` |
| `NSWindow` | `initWithContentRect:styleMask:backing:defer:`, `title`, `setTitle:`, `makeKeyAndOrderFront:`, `orderOut:`, `close`, `performClose:`, `miniaturize:`, `isVisible`, `isKeyWindow`, `isMainWindow`, `makeKeyWindow`, `delegate`, `setDelegate:`, `isReleasedWhenClosed`, `setReleasedWhenClosed:`, `center`, `contentView`, `windowNumber`, `frame`, `setContentSize:`, `styleMask` |
| `NSView` | `frame`, `window` |
| `NSMenu` | `initWithTitle:`, `title`, `setTitle:`, `addItem:`, `insertItem:atIndex:`, `removeItem:`, `removeAllItems`, `numberOfItems`, `itemAtIndex:`, `indexOfItem:`, `autoenablesItems`, `setAutoenablesItems:`, `performActionForItemAtIndex:` |
| `NSMenuItem` | `initWithTitle:action:keyEquivalent:`, `separatorItem`, `title`/`setTitle:`, `isSeparatorItem`, `hasSubmenu`, `submenu`/`setSubmenu:`, `menu`, `target`/`setTarget:`, `action`/`setAction:`, `state`/`setState:`, `isEnabled`/`setEnabled:`, `keyEquivalent`/`setKeyEquivalent:`, `keyEquivalentModifierMask`/`setKeyEquivalentModifierMask:`, `tag`/`setTag:` |
| `NSRect`, `NSSize`, `NSPoint` | value classes |
| `ObjCDelegate`, `ObjCTarget` | trampolines: an object answering a protocol's selectors by calling PHP, and a target whose `action:` calls PHP |
| `NSEvent` | `otherEventWithType:…data2:`, `type`, `subtype`, `modifierFlags`, `timestamp`, `windowNumber`, `locationInWindow`, `data1`, `data2` |
| `NSDate` | `date`, `dateWithTimeIntervalSinceNow:`, `distantPast`, `distantFuture`, `timeIntervalSinceNow`, `timeIntervalSince1970` |
| `CFRunLoop`, `CFRunLoopSource` | `CFRunLoopGetMain/GetCurrent/Run/RunInMode/Stop/WakeUp/IsWaiting/CopyCurrentMode/AddSource/RemoveSource/ContainsSource`, `CFRunLoopSourceGetOrder/Invalidate/IsValid/Signal` |
| `CFFileDescriptor` | `Create` (fd as int, stream or Socket; PHP callable callout), `GetNativeDescriptor`, `EnableCallBacks`, `DisableCallBacks`, `Invalidate`, `IsValid`, `CreateRunLoopSource` |

Enums: `NSApplicationActivationPolicy`, `NSEventType`, `NSEventMask`,
`NSEventModifierFlags`, `CFRunLoopRunResult`, `NSWindowStyleMask`,
`NSBackingStoreType`, `NSControlStateValue`. Constants: run-loop modes and
`kCFFileDescriptor*CallBack`. The stubs in `stubs/` are the full declaration.

Selectors become methods by joining their parts:
`nextEventMatchingMask:untilDate:inMode:dequeue:` is
`nextEventMatchingMaskUntilDateInModeDequeue()`.

## Example

```php
$app = NSApplication::sharedApplication();
$app->finishLaunching();
$app->setActivationPolicy(NSApplicationActivationPolicy::REGULAR); // Dock icon
$app->activate();

// Sleep up to 16 ms for the next event, dispatch it.
$event = $app->nextEventMatchingMaskUntilDateInModeDequeue(
    NSEventMask::ANY, NSDate::dateWithTimeIntervalSinceNow(0.016), NSDefaultRunLoopMode, true,
);
if ($event) {
    $app->sendEvent($event);
}

$app->setActivationPolicy(NSApplicationActivationPolicy::PROHIBITED); // icon gone
```

A window with a menu item whose action runs PHP:

```php
$window = NSWindow::initWithContentRectStyleMaskBackingDefer(
    new NSRect(0, 0, 480, 320),
    NSWindowStyleMask::TITLED->value | NSWindowStyleMask::CLOSABLE->value,
    NSBackingStoreType::BUFFERED,
    false,
);
$window->setReleasedWhenClosed(false); // PHP holds the reference; AppKit must not release it on close

$delegate = new ObjCDelegate('NSWindowDelegate');
$delegate->on('windowWillClose:', fn (NSObject $notification) => print("closed\n"));
$window->setDelegate($delegate);       // AppKit holds delegates weakly: keep $delegate
$window->makeKeyAndOrderFront(null);

$target = new ObjCTarget(fn (?NSObject $sender) => print("refresh\n"));
$item = NSMenuItem::initWithTitleActionKeyEquivalent('Refresh', ObjCTarget::ACTION, 'r');
$item->setTarget($target);             // targets are weak too: keep $target
```

## Install

```bash
bash install-macos.sh                  # Homebrew php@8.4 and php@8.4-zts
bash install-macos.sh /path/to/php ... # specific PHP binaries
```

Or with PIE: `pie install php-io-extensions/appkit`.

## Test

```bash
composer install
php vendor/bin/pest
php examples/smoke.php          # bridge: Dock icon, pump, sleep, wake; prints SMOKE_OK
php examples/window-smoke.php   # window, menu bar, target/action, delegate close; prints SMOKE_OK
```

Design notes live in the OKF bundle under `.okf/`.

## License

MIT
