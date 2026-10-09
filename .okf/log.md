# Log

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
