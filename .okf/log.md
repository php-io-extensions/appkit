# Log

## 2026-11-13

* `CFData` gains `createMutable` (CFDataCreateMutable), `setLength` (CFDataSetLength), `getMutableBytePtr` (CFDataGetMutableBytePtr) and `getBytes` (CFDataGetBytes), and the value class `CFRange`. Together they are memory at an address that PHP can read back as a string: what a call that writes to an address (Metal's `getBytes:`) needs, with no other extension. `getBytes` fills a by-reference string; its `CFRange` is marshalled by `appkit_range_from`. No refusal was added (`sites` is the maintainer's). Measured, each in its own process: a range past the length aborts (Core Foundation's own assertion, exit 134); `setLength` past a fixed capacity traps (exit 133); `setLength(-1)` raises NSMallocException, translated to AppKitException. `tests/CoreGraphicsTest.php`, NTS and ZTS. [surface](api/surface.md)

## 2026-11-11

* 0.11.2: `CMTime`, `AVPlayerItem`, `AVPlayer`, `AVPlayerView`, their enums and `AVPlayerItemDidPlayToEndTimeNotification` are no longer bound here; `src/AVKit.m`, the AVKit stub, `tests/VideoTest.php` and its clip are gone, and AVKit, AVFoundation and CoreMedia are no longer linked. `NSURL` stays, now in `src/NSObject.m`. `SurfaceTest` checks a bare appkit has none of the AV classes.
* The installer and `PHP_INSTALL_HEADERS` put `php_appkit.h`, `php_appkit_api.h`, `src/runtime.h` and `src/controls.h` under `$(php-config --include-dir)/ext/appkit`, for an extension whose classes extend appkit's (`appkit_object_setup`, `appkit_map_objc_class`). `tests/ApiHeaderTest.php`.
* `appkit_box_cf_as(rv, ref, ce)`: boxes a CF object as a given `CFType` subclass, for CF types `appkit_box_cf`'s type table does not know (one PHP object per native object, retained as `appkit_box_cf` does).

## 2026-11-10

* WebKit (framework linked): `WKWebView` initWithFrame:configuration:, setNavigationDelegate:, loadRequest:, loadHTMLString:baseURL:, title, URL, isLoading, canGoBack/canGoForward, goBack/goForward, reload, stopLoading; `WKWebViewConfiguration` init; `NSURLRequest` requestWithURL:, URL; `WKNavigation`. Each WKWebView call keeps the main-thread refusal (`main-thread-wkwebview-*`, probe `tests/Probes/MainThreadTest.php`). `tests/WebKitTest.php` (2 passed, ZTS).

* `NSTableView::rowForView:`; `NSCollectionView` indexPathForItem:, selectionIndexPaths (the NSSet as an array), deselectItemsAtIndexPaths:. No refusal. Tests in `tests/TableRowsTest.php` and `tests/SegmentedAndCollectionTest.php` (12 passed, ZTS, no window).

* `NSTableView` rowHeight (+set), makeViewWithIdentifier:owner:, insertRowsAtIndexes:withAnimation:, removeRowsAtIndexes:withAnimation:, reloadDataForRowIndexes:columnIndexes:, noteNumberOfRowsChanged; `NSTableView::ANIMATION_*` (`NSTableViewAnimationOptions`, `@cvalue`). No refusal. A view-based table's cells come from an `ObjCDelegate('NSTableViewDelegate')` answering `tableView:viewForTableColumn:row:`. `tests/TableRowsTest.php` (3 passed, NTS, no window).
* Boxing: an `NSProxy` is mapped to its PHP class through `[obj class]` (the class it stands for), not its private runtime class. `NSView::animator()`: a collection view's animator is an `NSCollectionView`, and `deleteItemsAtIndexPaths:` through it inside an `NSAnimationContext` group animates.
* `NSCollectionViewItem` view / setView; `NSCollectionView` insert, delete, reload and scroll-to items (a PHP array of `NSIndexPath` as an `NSSet`, through the new marshal helper `appkit_object_array`), `NSCollectionViewScrollPosition*` constants. New source `src/NSArray.m`: `NSArray` count, objectAtIndex (an NSString as a string), `NSMutableArray` array, addObject (a string as an NSString). New source `src/NSToolbar.m`: `NSToolbar` (initWithIdentifier, delegate, display mode, visible, customization, insert and remove items, selected item identifier), `NSToolbarItem` (initWithItemIdentifier, label, view, bordered), enums `NSToolbarDisplayMode`, `NSWindowToolbarStyle`, constants `NSToolbarFlexibleSpaceItemIdentifier`, `NSToolbarSpaceItemIdentifier`. `NSWindow` toolbar, toolbarStyle (+set). `NSView` identifier (+set). A toolbar delegate returns its identifier lists as `NSMutableArray`; it gets item identifiers as `NSString`. No refusal. `tests/SegmentedAndCollectionTest.php` (6 passed, NTS). `GlueTest` "struct argument" fails here with and without this change (windowWillResize:toSize: not sent to an unshown window).
* `NSSegmentedControl` (segment count, selection, label, image, width and enabled per segment, tracking mode, style, distribution; enums `NSSegmentSwitchTracking`, `NSSegmentStyle`, `NSSegmentDistribution`, `_Static_assert`-checked). New source `src/NSCollectionView.m`: `NSIndexPath` (`indexPathForItem:inSection:`, item, section), `NSCollectionViewLayout` invalidateLayout, `NSCollectionViewFlowLayout` (init, item size, spacings, section inset), `NSCollectionViewItem` (init, isSelected, collectionView), `NSCollectionView` (layout, data source, delegate, reloadData, sections and items, selectable, multiple selection, registerClass:forItemWithIdentifier:, makeItemWithIdentifier:forIndexPath:, itemAtIndexPath:, indexPathForItemAtPoint:). No refusal. The data source is an `ObjCDelegate('NSCollectionViewDataSource')`. `tests/SegmentedAndCollectionTest.php` (3 passed, NTS). Not yet bound: `NSViewController` view / setView (the guard does not read `IBOutlet`), and the `NSSet<NSIndexPath>` calls (insert, delete, reload, scroll to items).

## 2026-11-09

* `CALayer` `cornerRadius` / `setCornerRadius:`, no refusal. `tests/AnimationTest.php` (5 passed, ZTS): a layer starts at radius 0 and keeps the radius it is given.

* `CALayer` `opacity` and `presentationLayer`, no refusal: the layer as Core Animation draws it now, mid-animation values included; null before the layer is committed.

* `NSAnimationContext` (+beginGrouping, +endGrouping, +currentContext, duration, allowsImplicitAnimation, each with its setter) and `NSView` `alphaValue` / `setAlphaValue:` / `setBoundsOrigin:`. No block API (runAnimationGroup:, completionHandler) is bound; a group is opened and closed by hand. They carry no main-thread refusal. `tests/AnimationTest.php` (3 passed, NTS): a group's context keeps its duration and implicit-animation flag, a view takes the alpha it is set to, and a bounds origin moves without moving the frame.

## 2026-11-08

* **Version**: 0.11.1 in `PHP_APPKIT_VERSION` (`php_appkit.h`) and the version test; nothing else changed.

* `NSTimer` (scheduledTimerWithTimeInterval:target:selector:userInfo:repeats:, invalidate, isValid) and `NSApplication` `stopModalWithCode:` and `modalWindow`. They carry no main-thread refusal: AppKit answers a call off the main thread. `tests/NSTimerTest.php` (3 passed on a scratch build, ZTS): a repeating timer fires into PHP through an `ObjCTarget` while the run loop runs and stops after `invalidate`, a one-shot fires once, and `modalWindow` is null outside a modal session. `tests/PartialRedrawTest.php` takes its pinned buffer from ext-posi (`posi_mem_alloc`), not FFI.

## 2026-11-07

* `NSColor` controlAccentColor (+[NSColor controlAccentColor], a catalog colour: `colorUsingColorSpace:` sRGB before reading components). No refusal site: the call returns a colour and raises nothing. 685 / 7210.

## 2026-11-04

* `NSFont` ascender, descender, leading and isFixedPitch; `NSFontManager` convertFont:toHaveTrait: and traitsOfFont:, with `NSItalicFontMask` and `NSBoldFontMask` (registered with the module's constants); `NSString` sizeWithAttributes:; `NSNumber` numberWithInteger: and integerValue (any thread); `NSUnderlineStyleAttributeName`, `NSStrikethroughStyleAttributeName` and `NSUnderlineStyle`; `NSParagraphStyle` defaultTabInterval and tabStops, `NSMutableParagraphStyle` setDefaultTabInterval: and setTabStops: (entries that are not NSTextTab are left out); `NSTextView` alignment and defaultParagraphStyle (+set), each with its own main-thread site. 684 / 7210.

## 2026-10-28

* **Version**: 0.11.0 in `PHP_APPKIT_VERSION` (`php_appkit.h`); `branch-alias` `dev-main` is `0.11.x-dev`. Promoted with the Venusian 0.11 ecosystem. No API or behaviour change. SurfaceTest expects `NSPopUpButton`'s parent `NSButton`, as the 2026-10-23 surface change declared. Built and loaded on Homebrew PHP 8.4 NTS and ZTS: 347 passed, 10 skipped on each.

## 2026-10-27

* `NSAlert` alertStyle (`NSAlertStyle`), showsSuppressionButton and suppressionButton (+set); `NSSavePanel` allowedContentTypes and showsHiddenFiles (+set), each with its own main-thread site; `UTType` typeWithFilenameExtension: and identifier (UniformTypeIdentifiers framework, any thread); `NSPasteboard` availableTypeFromArray: and changeCount. Array setters skip entries of the wrong type. 669 / 7210.

## 2026-10-26

* `NSResponder::interpretKeyEvents` (its own main-thread site); glue `ObjCFocusView` forwards `keyDown:`, `keyUp:`, `flagsChanged:`, `insertText:replacementRange:` and `doCommandBySelector:` to PHP handlers (false = NSView's own) and conforms to `NSTextInputClient`, holding a dead key's marked text itself. 658 / 7210. [glue](architecture/glue.md)
* Glue `ObjCFocusView` forwards the standard edit actions `cut:`, `copy:`, `paste:`, `selectAll:`, `undo:`, `redo:` with their sender (false = next responder), answering `respondsToSelector:` for each only while a handler is set. [glue](architecture/glue.md)

## 2026-10-24

* `NSScroller` `rectForPart:` (scroller coordinates) and `testPart:` (window coordinates, as an event's `locationInWindow`): a scroller that tracks its own knob drag, so the app's loop runs during it.

## 2026-10-23

* `NSComboBox` (object values as strings), `NSScroller` (style, knob proportion, hit part, width per style, the preferred-style notification), `NSTrackingArea`, `NSButton` image, image position (`NSCellImagePosition`) and bordered, `NSMenuItem` image, `NSControl` refusesFirstResponder, `NSView` convertRect:toView: and tracking areas, `NSEvent` phase / momentumPhase / trackingArea (`NSEventPhase`), `NSWindow` child windows (`NSWindowOrderingMode`) and convertRectToScreen:, `NSTabView` insertTabViewItem:atIndex:. `NSPopUpButton` extends `NSButton`, as the header declares. Each new UI method has its own main-thread site; NSEvent and NSTrackingArea readers have none. 655 / 7210. [surface](api/surface.md)

## 2026-10-22

* Key-view loop: `NSView` nextKeyView (+set); `NSWindow` initialFirstResponder (+set), selectNextKeyView:, selectPreviousKeyView:, setAutorecalculatesKeyViewLoop:; `NSResponder` acceptsFirstResponder; glue `ObjCFocusView` (acceptsFirstResponder handler) and `ObjCKeyWindow` (keyDown: handler; false = NSWindow's own). Each with its own main-thread site. [surface](api/surface.md), [glue](architecture/glue.md)
* Coverage: `scripts/support.php` writes `SUPPORT.md` (every live AppKit method and property accessor from clang's AST dump of the SDK headers, bound or not; protocol methods not counted; a stub method on a subclass counts for the ancestor's member) and the README API badge; `--check` compares without the date. 609 / 7210 on the macOS SDK.
* Fix: an enum read with an int fallback (`NSEvent::type()`, button and menu item `state`) crashed on a value no case has: Zend answers it with SUCCESS and no case. It now returns the int. An `NSOpenPanel` sheet posts the private event type 21. [surface](api/surface.md)

## 2026-10-21

* 0.10.3: `NSAlert`, `NSPanel`, `NSSavePanel`, `NSOpenPanel` (each UI method with its own main-thread site; both `beginSheetModalForWindowCompletionHandler` forward a `^(NSModalResponse)` block), `NSPasteboard` (any thread), `NSAlertFirstButtonReturn`, `NSModalResponseOK`, `NSModalResponseCancel`, `NSPasteboardTypeString`. [surface](api/surface.md)

## 2026-10-20

* 0.10.3: `NSWindow` sheets (`beginSheetCompletionHandler` forwards a `^(NSModalResponse)` block to the closure, `endSheet`, `endSheetReturnCode`, `sheets`, `attachedSheet`, `sheetParent`), `NSButton::keyEquivalent` / `setKeyEquivalent`, `NSView::isHiddenOrHasHiddenAncestor`; each with its own main-thread site. [surface](api/surface.md)
* 0.10.3: `NSMenu::performKeyEquivalent` (its own main-thread site), `CGEvent::createKeyboardEvent`, `getFlags`, `setFlags`, the arrow, F1-F12, Delete, Home, End, Page Up and Page Down function-key characters, `NSBackspaceCharacter`, `NSTabCharacter`. AppKit matches a key equivalent's Shift exactly only for a key event that carries its Quartz event (`eventWithCGEvent`); one made with `keyEventWithType…` matches Shift loosely. [surface](api/surface.md)

## 2026-10-18

* 0.10.3: `NSOutlineView` (outline column, expand/collapse, item ↔ row, reload, indentation), `NSTableView` double action, clicked row, `scrollRowToVisible:`, `NSString` (`stringWithString:`, `UTF8String`; every AppKit string boxes as it), `NSNotification::userInfo`, `NSCarriageReturnCharacter` / `NSEnterCharacter`. Each new UI method carries its own main-thread site. [surface](api/surface.md)

## 2026-10-16

* 1:1 remediation, 0.10.2. Names and types native: `CMTime::make` / `makeWithSeconds` / `getSeconds`, `CFType::copyDescription`, `NSRequestUserAttentionType::*_REQUEST`, `NSTextBlockValueType::*_VALUE_TYPE`, `glyphRangeForCharacterRangeActualCharacterRange`, `?CFAllocator` on CF creators, `?CGEventSource` on CGEvent creators, `?NSGraphicsContext` on NSEvent constructors, every struct field required. New 1:1 bindings: `CGColor`, `CFAllocator`, `CGEventSource::create`, `NSError`, `NSLayoutDimension` / `NSLayoutXAxisAnchor` / `NSLayoutYAxisAnchor` (the `…ToConstant` methods on the dimension), CALayer backgroundColor / contents / contentsGravity / masksToBounds, `NSColor` CGColor / colorWithCGColor: / colorUsingColorSpace:, `NSWindow` canBecomeKeyWindow / canBecomeMainWindow, `NSGridCell::emptyContentView`, `ObjCObserver::OPTION_PRIOR`, `kCGError*`, `kIOReturnSuccess`. Pass-through: CGError / IOReturn returned as `int` (out-parameters by reference), null from CF/CG creates, AppKit's clamps and exceptions, availability through the unrecognized-selector exception; the main-thread gate only on AppKit UI classes. Kept refusals only at eight probed crash sites, each `/* binding:<id> */` with a `tests/Probes` test and the `--enable-appkit-probes` build. Glue forwards only: `ObjCOpenGLView` hands `(view, dirty)` with no make-current/flush, `ObjCStageWindow` `on`/`off` handlers for both overrides, `ObjCObserver` native options + context + whole change dictionary, local monitor return passed to AppKit, delegate structs and `char` marshalled both ways, `createDirect` untagged. Invented API removed: NSView `layer*` helpers and `setLayer:` wantsLayer toggling, `NSAttributedString::attributeAtIndex`, NSColor sRGB conversion, NSGridView null ↔ empty cell, `ObjCStageWindow::canBecomeKey` / `setCanBecomeKey`, `CMTime::withSeconds` / `seconds`, `CFType::description`. AGENTS.md. [surface](api/surface.md), [glue](architecture/glue.md), [errors and threads](architecture/errors-and-threads.md)
* NSSplitView (divider style, positions, arranged subviews, holding priorities), NSTabView and NSTabViewItem, NSEvent local event monitors. 0.10.2. [surface](api/surface.md)

## 2026-10-14

* Text storage attributes (NSMutableAttributedString, NSTextStorage, foreground and background colour names), NSTextBlock and paragraph text blocks, NSClipView scrolling and bounds notifications, NSTextView selection, resizing and max size, NSTextContainer size and width tracking, NSLayoutManager glyph ranges and rects, the monospaced system font; NSRange returned. 0.10.1. [surface](api/surface.md)
* attribute:atIndex:effectiveRange:; colour, paragraph-style, font and link attribute values of the wrong class refused with TypeError instead of failing at draw time. [surface](api/surface.md)

## 2026-10-10

* `NSParagraphStyle` alignment, `NSMutableParagraphStyle` init / setAlignment:, `NSParagraphStyleAttributeName`: attributed text draws by its paragraph style, not the field's alignment, so a centred link needs one. [surface](api/surface.md)
* NSAttributedString, NSLinkAttributeName and NSFontAttributeName, NSTextField attributed text, selectable and editing-attributes, NSURL URLWithString / absoluteString, NSWorkspace openURL (toolkit links). [surface](api/surface.md)
* `NSWindow` makeFirstResponder: / firstResponder, `NSMenu` update: for the Edit menu (HumanInput slice 29). [surface](api/surface.md)

## 2026-10-09

* `NSEvent::pressedMouseButtons` and `CGEventSource::keyState` (`CGEventSourceKeyState`, `CGEventSourceStateID`): the button and key state AppKit's own tracking loops (controls, menus) keep the release events of. [surface](api/surface.md)
* Input for HumanInput's appkit engine and the macOS pad source (slice 19): key `NSEvent`s and the key, wheel and delta accessors, `eventWithCGEvent:` over a new `CGEvent` binding (scroll wheels, other buttons, motion deltas), `mouseLocation`, moved-event tracking and the window at a point on `NSWindow`, `NSApplicationDidResignActiveNotification`, and GameController.framework (`GCController` with wireless discovery, background events and player index; extended and micro gamepads; elements). `PHPAppKitBlockCallout` is declared in `runtime.h` for every block-taking selector. Measured on macOS 15.4.1: GameController input reaches the active app only; 15.4.x reads `shouldMonitorBackgroundEvents` back false; discovery's completion handler is never called; a `CGEvent` scroll or mouse event has window number 0 and a screen location. Linking GameController costs no measurable launch time. [surface](api/surface.md)
* `NSMenu` popUpMenuPositioningItem:atLocation:inView: and cancelTracking. For context menus (HumanInput slice 27). [surface](api/surface.md)
* `NSView` hitTest:, convertPoint:fromView:, isFlipped; `NSEvent` mouseEventWithType:…pressure:, buttonNumber. For right-click mail (HumanInput slice 26). [surface](api/surface.md)

## 2026-10-08

* Staged-window scaffold: everything a game engine's window layer asks of a bare AppKit window, no input (HumanInput comes after). Window modes (min/max/aspect, origin, frame↔content rect, zoom, minimize, native full screen + collection behavior, borderless + level, see-through/shadowless/click-through, occlusion), `NSScreen`, `CGDisplay`/`CGDisplayMode` (modes incl. HiDPI, set, capture/release, shielding level), partial redraw (`ObjCDrawView` + `setNeedsDisplayInRect:` + `NSGraphicsContext`/`CGContext`, `CGDataProvider::createDirect` reading a framebuffer in place, `CGImage::createWithImageInRect`), vsync (`CADisplayLink` + `CAFrameRateRange` + `NSRunLoop`, `NSOpenGLContext` swap interval), `NSProcessInfo` activities + `IOPMAssertion`, Dock icon. Links IOKit. Suite 199 on Homebrew PHP 8.4 NTS and ZTS. [surface](api/surface.md), [glue](architecture/glue.md)
* For the staged-window stager: `NSWindow` alphaValue (+set), `NSView` safeAreaRect, `NSApplication` requestUserAttention: / cancelUserAttentionRequest: with `NSRequestUserAttentionType`, `NSImage::initWithCGImageSize`. `ObjCStageWindow` (key status as a flag; borderless windows take focus); `NSWindow` init allocates the called class. Suite 204.
* `CGImage::create` measures a `createDirect` provider by its recorded size, not a copy; its short-provider error reads "must provide N bytes for that description, it holds M".

## 2026-10-06

* OpenGL views: `NSOpenGLPixelFormat`, `NSOpenGLContext`, `NSOpenGLView`, the `ObjCOpenGLView` trampoline (`drawRect:` calls PHP with the view's context current, then flushes), the `NSOpenGLPFA*` constants, and `NSView::setNeedsDisplay()` / `needsDisplay()`. Built with `GL_SILENCE_DEPRECATION`, linked against `OpenGL.framework`. Suite 159 on Homebrew PHP 8.4 NTS and ZTS. [surface](api/surface.md)

## 2026-10-05

* `CALayer::sublayers()` / `addSublayer()`: a layer a toolkit nests (Qt's container layer holds its `CAMetalLayer`) is reached from the view's layer. [surface](api/surface.md)
* Extension version is 0.10.2. Layers: `CALayer` (`layer`, `contentsScale`), `NSView::layer()` / `setLayer()`, `NSObject::fromPointer()` checked against the called class. [surface](api/surface.md)

## 2026-10-04

* Extension version is 0.10.1. `CFData::create()` also copies `$length` bytes at a trusted address.

## 2026-10-03

* Pixels from bytes: `CFData`, `CGDataProvider`, `CGColorSpace`, `CGImage` and their constants; `NSView::setLayerContents()` takes a `CGImage` as well as an `NSImage`; `NSWindow::backingScaleFactor()`. [surface](api/surface.md)

## 2026-10-02

* Toolkit primitives slice: view/layout/colour/font, stack and grid, controls, table, KVO + notification observers, AVKit video. [surface](api/surface.md) rows, new [layout](architecture/layout.md) and [video](architecture/video.md); delegate `@` returns now box PHP strings and numbers.
* Review fixes: delegate object returns retained (+1 autoreleased); callouts refuse foreign threads; `ObjCObserver` rolls back a refused key path; notification blocks take the 1:1 queue (`NSOperationQueue`); constructors/factories build the called class; `CMTime` carries flags/epoch; `NSRange`/`CMTime` readers checked; KVO geometry as value classes; getters for every new setter; `NSCell` + table cell/view readers. [callouts](architecture/callouts.md), [video](architecture/video.md), [layout](architecture/layout.md), [surface](api/surface.md).
* NSView content hugging / compression resistance, NSScrollView contentView, anchor inequalities, NSView visibleRect / scrollPoint:, NSFontManager, layer contents/gravity/masking + kCAGravity*, NSControlTextDidChangeNotification / NSTextDidChangeNotification, NSView menu, NSControl sendAction:to:, NSTimeZone + NSDatePicker timeZone, AVPlayer actionAtItemEnd, NSTextView/NSTableView background colour, NSTextView layout manager / text container measuring (AppKit driver containers need them). [surface](api/surface.md).

## 2026-10-01

* [Surface](api/surface.md): NSWindow, NSView, NSMenu, NSMenuItem, NSRect, NSSize, the window/menu enums, NSApplication menu and About calls; ownership note. New [glue trampolines](architecture/glue.md).

## 2026-09-30

* Bundle created with ext-appkit 0.10.0: [surface](api/surface.md), [run-loop modes](api/run-loop-modes.md), [object model](architecture/object-model.md), [callouts](architecture/callouts.md), [errors and threads](architecture/errors-and-threads.md), [build](runbooks/build.md), [adding a binding](runbooks/adding-a-binding.md).
