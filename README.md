# ext-appkit

1:1 PHP bindings of AppKit and the CoreFoundation run loop it runs on, written
directly in Objective-C against the Zend API. Each PHP class is its native
counterpart (`NSApplication`, `NSEvent`, `CFRunLoop`, …) and each method is one
native call. No defaults, no composites: behaviour is composed by the caller.

macOS only. PHP 8.4+, NTS and ZTS.

## What is bound

The calls that start AppKit, present the app to the OS and withdraw it, pump
events, sleep with a budget, and wake a sleep from a file descriptor:

| Class | Native |
|---|---|
| `NSObject`, `NSResponder` | `className`, `isKindOfClass:`, `respondsToSelector:`, `isEqual:`, `hash`, `description` |
| `NSApplication` | `sharedApplication`, `finishLaunching`, `run`, `stop:`, `activationPolicy`, `setActivationPolicy:`, `activate`, `activateIgnoringOtherApps:`, `deactivate`, `isActive`, `isRunning`, `nextEventMatchingMask:untilDate:inMode:dequeue:`, `discardEventsMatchingMask:beforeEvent:`, `sendEvent:`, `postEvent:atStart:`, `currentEvent`, `updateWindows` |
| `NSEvent` | `otherEventWithType:…data2:`, `type`, `subtype`, `modifierFlags`, `timestamp`, `windowNumber`, `locationInWindow`, `data1`, `data2` |
| `NSDate` | `date`, `dateWithTimeIntervalSinceNow:`, `distantPast`, `distantFuture`, `timeIntervalSinceNow`, `timeIntervalSince1970` |
| `CFRunLoop`, `CFRunLoopSource` | `CFRunLoopGetMain/GetCurrent/Run/RunInMode/Stop/WakeUp/IsWaiting/CopyCurrentMode/AddSource/RemoveSource/ContainsSource`, `CFRunLoopSourceGetOrder/Invalidate/IsValid/Signal` |
| `CFFileDescriptor` | `Create` (fd as int, stream or Socket; PHP callable callout), `GetNativeDescriptor`, `EnableCallBacks`, `DisableCallBacks`, `Invalidate`, `IsValid`, `CreateRunLoopSource` |

Enums: `NSApplicationActivationPolicy`, `NSEventType`, `NSEventMask`,
`NSEventModifierFlags`, `CFRunLoopRunResult`. Constants: run-loop modes and
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
php examples/smoke.php   # needs a logged-in GUI session; prints SMOKE_OK
```

Design notes live in the OKF bundle under `.okf/`.

## License

MIT
