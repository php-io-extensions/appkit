# Log

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
