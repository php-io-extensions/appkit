---
type: API
title: Binding surface
description: Classes, enums and constants ext-appkit binds, each method one AppKit or CoreFoundation call.
resource: stubs/
tags: [appkit, corefoundation, api]
status: draft
generated: { by: claude-opus/5.5, at: 2026-10-02T19:16:05Z }
sources:
  - id: stubs
    resource: stubs/
    title: Stub files, one per SDK header group
  - id: sdk
    resource: /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks/AppKit.framework/Headers/
    title: AppKit SDK headers
---

# Overview

Scope: calls that start AppKit, present/withdraw app from OS, pump events, sleep with a budget, wake a sleep, open/close windows, build the main menu. Stubs = source of truth; `tests/SurfaceTest.php` fails if a stub declaration is missing from the build.[^stubs]

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
| `NSWindow` | initWithContentRect:styleMask:backing:defer: (alloc+init, static), title/setTitle:, makeKeyAndOrderFront:, orderOut:, close, performClose:, miniaturize:, isVisible, isKeyWindow, isMainWindow, makeKeyWindow, delegate/setDelegate:, isReleasedWhenClosed/setReleasedWhenClosed:, center, contentView, windowNumber, frame, setContentSize:, styleMask |
| `NSView` | initWithFrame: (static, allocates the called class), frame/setFrame:, window, menu, superview, subviews, addSubview:, removeFromSuperview, isHidden/setHidden:, content hugging / compression resistance priority per orientation (+set), fittingSize, intrinsicContentSize, layoutSubtreeIfNeeded, visibleRect, scrollPoint:, translatesAutoresizingMaskIntoConstraints (+set), wantsLayer (+set), layerBackgroundColor (+set: turns the layer on, null clears), layerContents / layerContentsGravity / layerMasksToBounds (+set: layer.contents as an NSImage, kCAGravity*, masksToBounds; each turns the layer on), postsFrameChangedNotifications (+set), width/height/leading/trailing/top/bottom/centerX/centerY anchors |
| `NSLayoutAnchor` | constraintEqualToAnchor:, constraintEqualToAnchor:constant:, constraintEqualToConstant:, constraintGreaterThanOrEqualToAnchor: / constraintLessThanOrEqualToAnchor: (± constant:), constraintGreaterThanOrEqualToConstant:, constraintLessThanOrEqualToConstant: (constant-only forms: NSLayoutDimension only, else AppKitException); one PHP class for dimension/x-axis/y-axis anchors |
| `NSLayoutConstraint` | activateConstraints:, deactivateConstraints: (static, arrays type-checked), isActive/setActive:, constant/setConstant:, priority/setPriority: |
| `NSStackView` | stackViewWithViews:, orientation, spacing, edgeInsets, alignment, distribution (+ setters), addArrangedSubview:, insertArrangedSubview:atIndex:, removeArrangedSubview:, arrangedSubviews, customSpacingAfterView: / visibilityPriorityForView: / huggingPriorityForOrientation: (+ setters) |
| `NSGridView` | gridViewWithNumberOfColumns:rows:, numberOfRows, numberOfColumns, addRowWithViews:, insertRowAtIndex:withViews:, removeRowAtIndex:, addColumnWithViews:, rowSpacing/columnSpacing (+ setters), cellAtColumnIndex:rowIndex:, mergeCellsInHorizontalRange:verticalRange:, rowAtIndex:, columnAtIndex:; a null view = `NSGridCell.emptyContentView` |
| `NSGridCell`, `NSGridRow`, `NSGridColumn` | contentView (+set; empty sentinel ↔ null), x/yPlacement (+set); height, topPadding, bottomPadding, yPlacement (+set); width, leadingPadding, trailingPadding, xPlacement (+set) |
| `NSColor` | colorWithRed:green:blue:alpha:, red/green/blue/alphaComponent (via sRGB colour space) |
| `NSFont` | systemFontOfSize:weight:, fontWithName:size: (null when unknown), pointSize, familyName (nullable); `WEIGHT_*` = NSFontWeight* |
| `NSFontManager` | sharedFontManager, fontWithFamily:traits:weight:size: (0–15 weight scale; null when the family is missing), weightOfFont: |
| `NSControl` | sendAction:to:, isEnabled/setEnabled:, target/setTarget:, action/setAction: (selector name), stringValue/doubleValue/integerValue (+ setters), font/setFont:, alignment/setAlignment:, sizeToFit, performClick: |
| `NSTextField`, `NSSecureTextField` | labelWithString:, textFieldWithString:, placeholderString, isEditable, isBezeled, drawsBackground, textColor, backgroundColor, lineBreakMode, maximumNumberOfLines, preferredMaxLayoutWidth, delegate (+ setters); initWithFrame: |
| `NSButton`, `NSSwitch` | buttonWithTitle:target:action:, checkboxWithTitle:target:action:, setButtonType:, title/setTitle:, state/setState:, contentTintColor/setContentTintColor:; initWithFrame:, state/setState: |
| `NSSlider` | sliderWithValue:minValue:maxValue:target:action:, minValue/maxValue (+ setters), isContinuous/setContinuous: |
| `NSPopUpButton` | initWithFrame:pullsDown:, addItemWithTitle:, addItemsWithTitles:, removeAllItems, numberOfItems, indexOfSelectedItem, selectItemAtIndex:, titleOfSelectedItem, itemTitles |
| `NSDatePicker`, `NSTimeZone` | initWithFrame:, dateValue/setDateValue:, timeZone/setTimeZone: (NSTimeZone timeZoneWithName:, name), setDatePickerStyle:, setDatePickerElements: (`ELEMENT_*` ints), setDatePickerMode: |
| `NSProgressIndicator` | initWithFrame:, setStyle:, minValue/maxValue/doubleValue (+ setters), isIndeterminate/setIndeterminate:, startAnimation:, stopAnimation:, setDisplayedWhenStopped: |
| `NSImage`, `NSImageView` | initWithContentsOfFile: (null when unreadable), size; imageViewWithImage:, initWithFrame:, image/setImage:, imageScaling/setImageScaling: |
| `NSBox`, `NSScrollView` | initWithFrame:, boxType/setBoxType:; initWithFrame:, contentView (NSClipView, boxed as NSView), documentView/setDocumentView:, hasVerticalScroller, hasHorizontalScroller, drawsBackground (+ setters), contentSize |
| `NSTextView` | scrollableTextView (static, returns the NSScrollView), initWithFrame:, string/setString:, isEditable/setEditable:, backgroundColor/drawsBackground (+set), layoutManager, textContainer, textContainerInset (NSLayoutManager ensureLayoutForTextContainer:, usedRectForTextContainer:), font/setFont:, textColor/setTextColor:, delegate/setDelegate: |
| `NSTableView` | initWithFrame:, addTableColumn:, removeTableColumn:, tableColumns, dataSource/setDataSource:, delegate/setDelegate:, reloadData, numberOfRows, selectedRow, selectRowIndexes:byExtendingSelection:, deselectAll:, setAllowsEmptySelection:, setUsesAlternatingRowBackgroundColors:, backgroundColor/setBackgroundColor:, headerView/setHeaderView:, preparedCellAtColumn:row:, viewAtColumn:row:makeIfNecessary: |
| `NSTableColumn`, `NSTableHeaderView`, `NSCell`, `NSIndexSet` | initWithIdentifier:, identifier, title/setTitle:, width/setWidth:, setResizingMask: (`RESIZING_MASK_*`); initWithFrame: (inherited); objectValue (Foundation values as PHP scalars); indexSetWithIndex:, firstIndex, count |
| `NSNotificationCenter`, `NSNotification`, `NSOperationQueue` | defaultCenter, addObserverForName:object:queue:usingBlock: (block = PHP callable, returns the token), removeObserver:, postNotificationName:object:; name, object; mainQueue, init (alloc+init), waitUntilAllOperationsAreFinished |
| `NSURL` | fileURLWithPath:, path |
| `AVPlayerItem` | playerItemWithURL:, status, duration, error |
| `AVPlayer` | playerWithPlayerItem:, actionAtItemEnd/setActionAtItemEnd: (AVPlayerActionAtItemEnd), play, pause, rate/setRate:, currentTime, seekToTime:, isMuted/setMuted:, timeControlStatus, currentItem, replaceCurrentItemWithPlayerItem: |
| `AVPlayerView` | initWithFrame:, player/setPlayer:, controlsStyle/setControlsStyle: |
| `NSMenu` | initWithTitle:, title/setTitle:, addItem:, insertItem:atIndex:, removeItem:, removeAllItems, numberOfItems, itemAtIndex:, indexOfItem:, autoenablesItems/setAutoenablesItems:, performActionForItemAtIndex: |
| `NSMenuItem` | initWithTitle:action:keyEquivalent:, separatorItem, title/setTitle:, isSeparatorItem, hasSubmenu, submenu/setSubmenu:, menu, target/setTarget:, action/setAction: (selector name), state/setState:, isEnabled/setEnabled:, keyEquivalent/setKeyEquivalent:, keyEquivalentModifierMask/setKeyEquivalentModifierMask:, tag/setTag: |
| `NSRect`, `NSSize`, `NSEdgeInsets`, `NSRange`, `CMTime` | value classes like `NSPoint`; `NSRange` must be non-negative; `CMTime` = value, timescale, flags (`FLAG_*`), epoch; `CMTime::withSeconds()` = CMTimeMakeWithSeconds, `seconds()` = CMTimeGetSeconds (NaN invalid/indefinite, ±INF) |
| `ObjCDelegate` | trampoline: `new ObjCDelegate(protocol)`, `on(selector, callable)`, `off(selector)`; answers the protocol's selectors by calling PHP (see [glue](/architecture/glue.md)) |
| `ObjCTarget` | trampoline: `new ObjCTarget(callable)`; `ObjCTarget::ACTION` (`action:`) calls PHP with the sender |
| `ObjCObserver` | KVO trampoline: `new ObjCObserver(callable)`, `observe(object, keyPath, OPTION_*)`, `stop(object, keyPath)`; handler gets (keyPath, object, change['new'/'old'], geometry as NSRect/NSSize/NSPoint); a refused key path throws and is not recorded; observed objects retained until stop()/free, pairs still observed removed at free |
| `NSEvent` | otherEventWithType:location:modifierFlags:timestamp:windowNumber:context:subtype:data1:data2:, type, subtype, modifierFlags, timestamp, windowNumber, locationInWindow, data1, data2 |
| `NSDate` | date, dateWithTimeIntervalSinceNow:, dateWithTimeIntervalSince1970:, distantPast, distantFuture, timeIntervalSinceNow, timeIntervalSince1970 |
| `NSPoint` | value class: `float $x`, `float $y` |
| `CFType` | CFGetTypeID, CFHash, CFCopyDescription; `pointer()` |
| `CFRunLoop` | GetMain, GetCurrent, Run, RunInMode, Stop, WakeUp, IsWaiting, CopyCurrentMode, AddSource, RemoveSource, ContainsSource |
| `CFRunLoopSource` | GetOrder, Invalidate, IsValid, Signal |
| `CFFileDescriptor` | Create (fd = int, stream or Socket; callout = PHP callable), GetNativeDescriptor, EnableCallBacks, DisableCallBacks, Invalidate, IsValid, CreateRunLoopSource |
| `AppKitException` | extends RuntimeException |

Enums: `NSApplicationActivationPolicy`, `NSEventType`, `NSEventMask`, `NSEventModifierFlags`, `CFRunLoopRunResult`, `NSWindowStyleMask`, `NSBackingStoreType`, `NSControlStateValue`.

Ownership: `init…` statics return an object the PHP wrapper owns (+1 from alloc/init, kept, not re-retained). `NSWindow` defaults to `releasedWhenClosed = YES`, which releases the window a second time on close; whoever holds the PHP object sets it to `false`. Weak references in AppKit (`delegate`, `target`) do not keep trampolines alive: hold the PHP object.

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
