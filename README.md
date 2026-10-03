# ext-appkit

1:1 PHP bindings of AppKit and the CoreFoundation run loop it runs on, written
directly in Objective-C against the Zend API. Each PHP class is its native
counterpart (`NSApplication`, `NSEvent`, `CFRunLoop`, …) and each method is one
native call. No defaults, no composites: behaviour is composed by the caller.

macOS only. PHP 8.4+, NTS and ZTS.

## What is bound

The calls that start AppKit, present the app to the OS and withdraw it, pump
events, sleep with a budget, wake a sleep from a file descriptor, open and close
windows, build the menu bar, lay out and populate views, observe changes, and
play video:

| Class | Native |
|---|---|
| `NSObject`, `NSResponder` | `className`, `isKindOfClass:`, `respondsToSelector:`, `isEqual:`, `hash`, `description` |
| `NSApplication` | `sharedApplication`, `finishLaunching`, `run`, `stop:`, `activationPolicy`, `setActivationPolicy:`, `activate`, `activateIgnoringOtherApps:`, `deactivate`, `isActive`, `isRunning`, `nextEventMatchingMask:untilDate:inMode:dequeue:`, `discardEventsMatchingMask:beforeEvent:`, `sendEvent:`, `postEvent:atStart:`, `currentEvent`, `updateWindows`, `mainMenu`, `setMainMenu:`, `keyWindow`, `mainWindow`, `windows`, `orderFrontStandardAboutPanel:`, `orderFrontStandardAboutPanelWithOptions:` |
| `NSWindow` | `initWithContentRect:styleMask:backing:defer:`, `title`, `setTitle:`, `makeKeyAndOrderFront:`, `orderOut:`, `close`, `performClose:`, `miniaturize:`, `isVisible`, `isKeyWindow`, `isMainWindow`, `makeKeyWindow`, `delegate`, `setDelegate:`, `isReleasedWhenClosed`, `setReleasedWhenClosed:`, `center`, `contentView`, `windowNumber`, `frame`, `setContentSize:`, `styleMask` |
| `NSView` | `initWithFrame:` (allocates the class it is called on), `frame`/`setFrame:`, `window`, `menu`, `superview`, `subviews`, `addSubview:`, `removeFromSuperview`, `isHidden`/`setHidden:`, `contentHuggingPriorityForOrientation:`/`setContentHuggingPriority:forOrientation:`, `contentCompressionResistancePriorityForOrientation:`/`setContentCompressionResistancePriority:forOrientation:`, `fittingSize`, `intrinsicContentSize`, `layoutSubtreeIfNeeded`, `visibleRect`, `scrollPoint:`, `translatesAutoresizingMaskIntoConstraints`/`set…:`, `wantsLayer`/`setWantsLayer:`, `layerBackgroundColor`/`setLayerBackgroundColor:` (layer.backgroundColor; setting turns the layer on), `layerContents`/`setLayerContents:` (an NSImage), `layerContentsGravity`/`setLayerContentsGravity:` (`kCAGravity*`), `layerMasksToBounds`/`setLayerMasksToBounds:`, `postsFrameChangedNotifications`/`set…:`, `widthAnchor` … `centerYAnchor` |
| `NSLayoutAnchor`, `NSLayoutConstraint` | `constraintEqualToAnchor:`, `constraintEqualToAnchor:constant:`, `constraintEqualToConstant:`, `constraintGreaterThanOrEqualToConstant:`, `constraintLessThanOrEqualToConstant:` (dimension anchors only), `constraintGreaterThanOrEqualToAnchor:` / `constraintLessThanOrEqualToAnchor:` (± `constant:`); `activateConstraints:`, `deactivateConstraints:`, `isActive`/`setActive:`, `constant`/`setConstant:`, `priority`/`setPriority:` |
| `NSStackView` | `stackViewWithViews:`, `orientation`, `spacing`, `edgeInsets`, `alignment`, `distribution` (+ setters), `addArrangedSubview:`, `insertArrangedSubview:atIndex:`, `removeArrangedSubview:`, `arrangedSubviews`, `customSpacingAfterView:`/`setCustomSpacing:afterView:`, `visibilityPriorityForView:`/`setVisibilityPriority:forView:`, `huggingPriorityForOrientation:`/`setHuggingPriority:forOrientation:` |
| `NSGridView`, `NSGridCell`, `NSGridRow`, `NSGridColumn` | `gridViewWithNumberOfColumns:rows:`, `numberOfRows`/`numberOfColumns`, `addRowWithViews:`, `insertRowAtIndex:withViews:`, `removeRowAtIndex:`, `addColumnWithViews:`, `rowSpacing`/`columnSpacing` (+ setters), `cellAtColumnIndex:rowIndex:`, `mergeCellsInHorizontalRange:verticalRange:`, `rowAtIndex:`, `columnAtIndex:`; cell `contentView`/`setContentView:` (null = `emptyContentView`), `xPlacement`/`yPlacement` (+ setters); row `height`, `topPadding`, `bottomPadding`, `yPlacement` (+ setters); column `width`, `leadingPadding`, `trailingPadding`, `xPlacement` (+ setters) |
| `NSColor`, `NSFont`, `NSFontManager` | `colorWithRed:green:blue:alpha:`, `redComponent` … `alphaComponent` (sRGB); `systemFontOfSize:weight:`, `fontWithName:size:`, `pointSize`, `familyName` (nullable); `sharedFontManager`, `fontWithFamily:traits:weight:size:`, `weightOfFont:`; `NSFont::WEIGHT_*` = `NSFontWeight*` |
| `NSControl` | `sendAction:to:`, `isEnabled`/`setEnabled:`, `target`/`setTarget:`, `action`/`setAction:`, `stringValue`, `doubleValue`, `integerValue` (+ setters), `font`/`setFont:`, `alignment`/`setAlignment:`, `sizeToFit`, `performClick:` |
| `NSTextField`, `NSSecureTextField` | `labelWithString:`, `textFieldWithString:`, `placeholderString`, `isEditable`, `isBezeled`, `drawsBackground`, `textColor`, `backgroundColor`, `lineBreakMode`, `maximumNumberOfLines`, `preferredMaxLayoutWidth`, `delegate` (+ setters); secure field `initWithFrame:` |
| `NSButton`, `NSSwitch` | `buttonWithTitle:target:action:`, `checkboxWithTitle:target:action:`, `setButtonType:`, `title`/`setTitle:`, `state`/`setState:`, `contentTintColor`/`setContentTintColor:`; switch `initWithFrame:`, `state`/`setState:` |
| `NSSlider`, `NSPopUpButton` | `sliderWithValue:minValue:maxValue:target:action:`, `minValue`/`maxValue` (+ setters), `isContinuous`/`setContinuous:`; `initWithFrame:pullsDown:`, `addItemWithTitle:`, `addItemsWithTitles:`, `removeAllItems`, `numberOfItems`, `indexOfSelectedItem`, `selectItemAtIndex:`, `titleOfSelectedItem`, `itemTitles` |
| `NSDatePicker`, `NSTimeZone`, `NSProgressIndicator` | `initWithFrame:`, `dateValue`/`setDateValue:`, `timeZone`/`setTimeZone:` (`NSTimeZone` `timeZoneWithName:`, `name`), `setDatePickerStyle:`, `setDatePickerElements:` (`ELEMENT_*`), `setDatePickerMode:`; `setStyle:`, `minValue`/`maxValue`/`doubleValue` (+ setters), `isIndeterminate`/`setIndeterminate:`, `startAnimation:`/`stopAnimation:`, `setDisplayedWhenStopped:` |
| `NSImage`, `NSImageView`, `NSBox`, `NSScrollView`, `NSTextView` | `initWithContentsOfFile:` (null when unreadable), `size`; `imageViewWithImage:`, `image`/`setImage:`, `imageScaling`/`setImageScaling:`; `boxType`/`setBoxType:`; `contentView` (the clip view), `documentView`/`setDocumentView:`, `hasVerticalScroller`/`hasHorizontalScroller`/`drawsBackground` (+ setters), `contentSize`; `scrollableTextView`, `string`/`setString:`, `backgroundColor`/`drawsBackground` (+ setters), `layoutManager`, `textContainer`, `textContainerInset`; `NSLayoutManager` `ensureLayoutForTextContainer:`, `usedRectForTextContainer:`; `isEditable`/`setEditable:`, `font`, `textColor`, `delegate` (+ setters) |
| `NSTableView`, `NSTableColumn`, `NSTableHeaderView`, `NSCell`, `NSIndexSet` | `addTableColumn:`/`removeTableColumn:`, `tableColumns`, `dataSource`/`delegate` (+ setters), `reloadData`, `numberOfRows`, `selectedRow`, `selectRowIndexes:byExtendingSelection:`, `deselectAll:`, `setAllowsEmptySelection:`, `setUsesAlternatingRowBackgroundColors:`, `backgroundColor`/`setBackgroundColor:`, `headerView`/`setHeaderView:`, `preparedCellAtColumn:row:`, `viewAtColumn:row:makeIfNecessary:`; `NSCell` `objectValue`; column `initWithIdentifier:`, `identifier`, `title`, `width`, `setResizingMask:` (`RESIZING_MASK_*`); `indexSetWithIndex:`, `firstIndex`, `count` |
| `NSNotificationCenter`, `NSNotification`, `NSOperationQueue` | `defaultCenter`, `addObserverForName:object:queue:usingBlock:` (PHP callable), `removeObserver:`, `postNotificationName:object:`; `name`, `object`; `mainQueue`, `init`, `waitUntilAllOperationsAreFinished`. Constants `NSViewFrameDidChangeNotification`, `NSWindowDidResizeNotification`, `AVPlayerItemDidPlayToEndTimeNotification` |
| `NSURL`, `AVPlayerItem`, `AVPlayer`, `AVPlayerView` | `fileURLWithPath:`, `path`; `playerItemWithURL:`, `status`, `duration`, `error`; `playerWithPlayerItem:`, `actionAtItemEnd`/`setActionAtItemEnd:` (`AVPlayerActionAtItemEnd`), `play`, `pause`, `rate`/`setRate:`, `currentTime`, `seekToTime:`, `isMuted`/`setMuted:`, `timeControlStatus`, `currentItem`, `replaceCurrentItemWithPlayerItem:`; `initWithFrame:`, `player`/`setPlayer:`, `controlsStyle`/`setControlsStyle:` |
| `NSMenu` | `initWithTitle:`, `title`, `setTitle:`, `addItem:`, `insertItem:atIndex:`, `removeItem:`, `removeAllItems`, `numberOfItems`, `itemAtIndex:`, `indexOfItem:`, `autoenablesItems`, `setAutoenablesItems:`, `performActionForItemAtIndex:` |
| `NSMenuItem` | `initWithTitle:action:keyEquivalent:`, `separatorItem`, `title`/`setTitle:`, `isSeparatorItem`, `hasSubmenu`, `submenu`/`setSubmenu:`, `menu`, `target`/`setTarget:`, `action`/`setAction:`, `state`/`setState:`, `isEnabled`/`setEnabled:`, `keyEquivalent`/`setKeyEquivalent:`, `keyEquivalentModifierMask`/`setKeyEquivalentModifierMask:`, `tag`/`setTag:` |
| `NSRect`, `NSSize`, `NSPoint`, `NSEdgeInsets`, `NSRange`, `CMTime` | value classes; `CMTime` carries value, timescale, flags, epoch (`FLAG_*`), `CMTime::withSeconds()`, `seconds()` |
| `ObjCDelegate`, `ObjCTarget`, `ObjCObserver` | trampolines: an object answering a protocol's selectors by calling PHP (returns box PHP strings and numbers as `NSString`/`NSNumber`), a target whose `action:` calls PHP, and a KVO observer (`observe`/`stop`, `OPTION_*`) handing `(keyPath, object, change)` to PHP |
| `NSEvent` | `otherEventWithType:…data2:`, `type`, `subtype`, `modifierFlags`, `timestamp`, `windowNumber`, `locationInWindow`, `data1`, `data2` |
| `NSDate` | `date`, `dateWithTimeIntervalSinceNow:`, `dateWithTimeIntervalSince1970:`, `distantPast`, `distantFuture`, `timeIntervalSinceNow`, `timeIntervalSince1970` |
| `CFRunLoop`, `CFRunLoopSource` | `CFRunLoopGetMain/GetCurrent/Run/RunInMode/Stop/WakeUp/IsWaiting/CopyCurrentMode/AddSource/RemoveSource/ContainsSource`, `CFRunLoopSourceGetOrder/Invalidate/IsValid/Signal` |
| `CFFileDescriptor` | `Create` (fd as int, stream or Socket; PHP callable callout), `GetNativeDescriptor`, `EnableCallBacks`, `DisableCallBacks`, `Invalidate`, `IsValid`, `CreateRunLoopSource` |

Enums: `NSApplicationActivationPolicy`, `NSEventType`, `NSEventMask`,
`NSEventModifierFlags`, `CFRunLoopRunResult`, `NSWindowStyleMask`,
`NSBackingStoreType`, `NSControlStateValue`, `NSUserInterfaceLayoutOrientation`,
`NSLayoutConstraintOrientation`, `NSStackViewGravity`, `NSLayoutAttribute`,
`NSStackViewDistribution`, `NSGridCellPlacement`, `NSTextAlignment` (values from
the SDK: arm64 and x86_64 differ), `NSLineBreakMode`, `NSButtonType`,
`NSDatePickerStyle`, `NSDatePickerMode`, `NSProgressIndicatorStyle`,
`NSImageScaling`, `NSBoxType`, `AVPlayerItemStatus`, `AVPlayerTimeControlStatus`,
`AVPlayerViewControlsStyle`. Constants: run-loop modes, `kCFFileDescriptor*CallBack`,
`NSTextAlignment*`, `kCAGravity{Resize,ResizeAspect,ResizeAspectFill,Center}`, `NSControlTextDidChangeNotification`, `NSTextDidChangeNotification`, the notification names above. The stubs in `stubs/` are the
full declaration; every enum's values are `_Static_assert`-checked against the SDK.

Static constructors and `instancetype` factories build the class they are called
on: `NSTextField::initWithFrame()` is `[[NSTextField alloc] initWithFrame:]`.

A PHP callable handed to native code (delegate, target, observer, notification
block, file-descriptor callout) only ever runs on the PHP thread that handed it
over; a native call on any other thread does not enter PHP. Route notifications
that may be posted elsewhere (AVFoundation's) through `NSOperationQueue::mainQueue()`.

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
