---
type: CoreType
title: AppKit\NS\NSGraphics\NSGraphics
description: NSApp-adjacent C functions from NSGraphics.h (NSBeep, NSRectFill, bezels)
resource: /appkit/ns/nsgraphics/nsgraphics.zep
tags: [appkit, api, nsgraphics]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T15:30:00Z" }
sources:
  - id: zep
    resource: /appkit/ns/nsgraphics/nsgraphics.zep
    title: nsgraphics.zep
  - id: h
    resource: /src/ns-graphics.h
    title: ns-graphics.h
---

# Schema

`NSApp` global is `NSApplication::nsApp()` (same borrowed pointer as `shared` after init). `NSAppKitVersionNumber` is `NSApplication::appKitVersionNumber()`.

| Method | Maps to |
|--------|---------|
| `beep` | `NSBeep` |
| `rectFill / rectFillUsingOperation` | `NSRectFill` / `NSRectFillUsingOperation` |
| `frameRect / frameRectWithWidth / frameRectWithWidthUsingOperation` | frame rect C functions |
| `rectClip` | `NSRectClip` |
| `drawGrayBezel / drawGroove / drawWhiteBezel / drawButton / drawDarkBezel / drawLightBezel` | bezel drawing |
| `eraseRect / highlightRect / dottedFrameRect / drawWindowBackground` | fill/erase |
| `setFocusRingStyle` | `NSSetFocusRingStyle` |
| `disableScreenUpdates / enableScreenUpdates` | deprecated screen-update lock |
| `showAnimationEffect` | deprecated `NSShowAnimationEffect` (no delegate) |
| `white / lightGray / darkGray / black` | `NSWhite` … `NSBlack` |

# Not bound (complex / unused)

`NSRectFillList*`, `NSDrawTiledRects`, `NSDrawBitmap`, `NSReadPixel`, `NSGetWindowServerMemory`, `NSCountWindows*`, `NSCopyBits`, `NSAvailableWindowDepths`. Color-space name constants stay on `NSColorSpace`.
