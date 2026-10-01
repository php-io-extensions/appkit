---
type: API
title: Binding surface
description: Classes, enums and constants ext-appkit binds, each method one AppKit or CoreFoundation call.
resource: stubs/
tags: [appkit, corefoundation, api]
status: draft
generated: { by: claude-opus/5.5, at: 2026-09-30T20:37:59Z }
sources:
  - id: stubs
    resource: stubs/
    title: Stub files, one per SDK header group
  - id: sdk
    resource: /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks/AppKit.framework/Headers/
    title: AppKit SDK headers
---

# Overview

Scope: calls that start AppKit, present/withdraw app from OS, pump events, sleep with a budget, wake a sleep. Stubs = source of truth; `tests/SurfaceTest.php` fails if a stub declaration is missing from the build.[^stubs]

Naming, all fixed:

* Class = native class name, global namespace (`NSApplication`, `CFRunLoop`).
* ObjC selector = method named by joining selector parts, later parts capitalised: `nextEventMatchingMask:untilDate:inMode:dequeue:` → `nextEventMatchingMaskUntilDateInModeDequeue()`. Class methods static.
* CF function on a type = method with type prefix dropped: `CFRunLoopAddSource` → `CFRunLoop::addSource()`. Create/Get functions static.
* NS_ENUM / CF enum = backed int enum, prefix dropped, cases SCREAMING_SNAKE (`NSApplicationActivationPolicy::REGULAR`). Values from SDK headers.[^sdk]
* NS_OPTIONS param = `Enum|int`: pass a case or OR'd ints (`NSEventMask::ANY` = -1 = NSUIntegerMax).
* Enum return with values outside the header (private event types) = `Enum|int`.
* Void selector → `void`. BOOL → `bool`. NSInteger/NSUInteger → `int`. NSTimeInterval → `float`.
* Global C/ObjC constants = PHP global constants, same name, value read from framework at MINIT.

# Schema

| Class | Binds |
|---|---|
| `NSObject` | className, isKindOfClass:, respondsToSelector:, isEqual:, hash, description; `pointer()` = address for other exts |
| `NSResponder` | hierarchy only |
| `NSApplication` | sharedApplication, finishLaunching, run, stop:, isRunning, isActive, activationPolicy, setActivationPolicy:, activate, activateIgnoringOtherApps:, deactivate, nextEventMatchingMask:untilDate:inMode:dequeue:, discardEventsMatchingMask:beforeEvent:, sendEvent:, postEvent:atStart:, currentEvent, updateWindows |
| `NSEvent` | otherEventWithType:location:modifierFlags:timestamp:windowNumber:context:subtype:data1:data2:, type, subtype, modifierFlags, timestamp, windowNumber, locationInWindow, data1, data2 |
| `NSDate` | date, dateWithTimeIntervalSinceNow:, distantPast, distantFuture, timeIntervalSinceNow, timeIntervalSince1970 |
| `NSPoint` | value class: `float $x`, `float $y` |
| `CFType` | CFGetTypeID, CFHash, CFCopyDescription; `pointer()` |
| `CFRunLoop` | GetMain, GetCurrent, Run, RunInMode, Stop, WakeUp, IsWaiting, CopyCurrentMode, AddSource, RemoveSource, ContainsSource |
| `CFRunLoopSource` | GetOrder, Invalidate, IsValid, Signal |
| `CFFileDescriptor` | Create (fd = int, stream or Socket; callout = PHP callable), GetNativeDescriptor, EnableCallBacks, DisableCallBacks, Invalidate, IsValid, CreateRunLoopSource |
| `AppKitException` | extends RuntimeException |

Enums: `NSApplicationActivationPolicy`, `NSEventType`, `NSEventMask`, `NSEventModifierFlags`, `CFRunLoopRunResult`.

Constants: `kCFFileDescriptorReadCallBack`, `kCFFileDescriptorWriteCallBack`, `kCFRunLoopDefaultMode`, `kCFRunLoopCommonModes`, `NSDefaultRunLoopMode`, `NSRunLoopCommonModes`, `NSEventTrackingRunLoopMode`, `NSModalPanelRunLoopMode`.

# Examples

Connect (Dock icon up), sleep with a budget, withdraw:

```php
$app = NSApplication::sharedApplication();
$app->finishLaunching();
$app->setActivationPolicy(NSApplicationActivationPolicy::REGULAR);
$app->activate();

$event = $app->nextEventMatchingMaskUntilDateInModeDequeue(
    NSEventMask::ANY, NSDate::dateWithTimeIntervalSinceNow(0.016), NSDefaultRunLoopMode, true,
);
if ($event) {
    $app->sendEvent($event);
}

$app->setActivationPolicy(NSApplicationActivationPolicy::PROHIBITED);
```

Wake a sleep from an fd (kqueue/epoll fd works: it turns readable when its own events are pending). Callout posts an application-defined event so `nextEventMatchingMask…` returns; callbacks are one-shot until `enableCallBacks()` again:

```php
$fd = CFFileDescriptor::create($waiterFd, false, function (CFFileDescriptor $f) use ($app): void {
    $app->postEventAtStart(NSEvent::otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2(
        NSEventType::APPLICATION_DEFINED, new NSPoint(), 0, 0.0, 0, null, 0, 0, 0,
    ), false);
    $f->enableCallBacks(kCFFileDescriptorReadCallBack);
});
$fd->enableCallBacks(kCFFileDescriptorReadCallBack);
CFRunLoop::getMain()->addSource($fd->createRunLoopSource(0), kCFRunLoopCommonModes);
```

[^stubs]: Stub files, one per SDK header group
[^sdk]: AppKit SDK headers
