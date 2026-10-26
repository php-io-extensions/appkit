<?php

/** @generate-class-entries */

enum NSViewLayerContentsRedrawPolicy: int
{
    case NEVER = 0;
    case ON_SET_NEEDS_DISPLAY = 1;
    case DURING_VIEW_RESIZE = 2;
    case BEFORE_VIEW_RESIZE = 3;
    case CROSSFADE = 4;
}

/** NS_OPTIONS: combine the values with |. */
enum NSTrackingAreaOptions: int
{
    case MOUSE_ENTERED_AND_EXITED = 0x01;
    case MOUSE_MOVED = 0x02;
    case CURSOR_UPDATE = 0x04;
    case ACTIVE_WHEN_FIRST_RESPONDER = 0x10;
    case ACTIVE_IN_KEY_WINDOW = 0x20;
    case ACTIVE_IN_ACTIVE_APP = 0x40;
    case ACTIVE_ALWAYS = 0x80;
    case ASSUME_INSIDE = 0x100;
    case IN_VISIBLE_RECT = 0x200;
    case ENABLED_DURING_MOUSE_DRAG = 0x400;
}

/**
 * A region of a view whose mouse entered, exited and moved events AppKit sends to its owner.
 * Any thread may make one; NSView::addTrackingArea() installs it.
 *
 * @not-serializable
 */
class NSTrackingArea extends NSObject
{
    public static function initWithRectOptionsOwnerUserInfo(NSRect $rect, NSTrackingAreaOptions|int $options, ?NSObject $owner, ?array $userInfo): static {}

    public function rect(): NSRect {}

    public function options(): NSTrackingAreaOptions|int {}

    public function owner(): ?NSObject {}
}

/**
 * @not-serializable
 */
class NSView extends NSResponder
{
    /** [[<called class> alloc] initWithFrame:]: NSTextField::initWithFrame() makes an NSTextField. */
    public static function initWithFrame(NSRect $frame): static {}

    public function frame(): NSRect {}

    public function setFrame(NSRect $frame): void {}

    public function window(): ?NSWindow {}

    /** The view's context menu; an NSPopUpButton's is the menu it pops up. */
    public function menu(): ?NSMenu {}

    public function superview(): ?NSView {}

    /** The farthest descendant (or this view) at $point, given in the superview's coordinates; null outside. */
    public function hitTest(NSPoint $point): ?NSView {}

    /** $point in $view's coordinates (the window's base coordinates for null), in this view's. */
    public function convertPointFromView(NSPoint $point, ?NSView $view): NSPoint {}

    /** $rect in this view's coordinates, in $view's (the window's base coordinates for null). */
    public function convertRectToView(NSRect $rect, ?NSView $view): NSRect {}

    public function addTrackingArea(NSTrackingArea $trackingArea): void {}

    public function removeTrackingArea(NSTrackingArea $trackingArea): void {}

    public function isFlipped(): bool {}

    /** @return NSView[] */
    public function subviews(): array {}

    public function addSubview(NSView $view): void {}

    public function removeFromSuperview(): void {}

    /** setNeedsDisplay: */
    public function setNeedsDisplay(bool $flag): void {}

    public function needsDisplay(): bool {}

    public function isHidden(): bool {}

    public function setHidden(bool $hidden): void {}

    public function isHiddenOrHasHiddenAncestor(): bool {}

    /** The view Tab moves to from this one; null for none. */
    public function nextKeyView(): ?NSView {}

    public function setNextKeyView(?NSView $nextKeyView): void {}

    public function contentHuggingPriorityForOrientation(NSLayoutConstraintOrientation $orientation): float {}

    /** NSLayoutPriority as float (250 = low, 750 = high, 1000 = required) */
    public function setContentHuggingPriorityForOrientation(float $priority, NSLayoutConstraintOrientation $orientation): void {}

    public function contentCompressionResistancePriorityForOrientation(NSLayoutConstraintOrientation $orientation): float {}

    public function setContentCompressionResistancePriorityForOrientation(float $priority, NSLayoutConstraintOrientation $orientation): void {}

    public function fittingSize(): NSSize {}

    public function intrinsicContentSize(): NSSize {}

    public function layoutSubtreeIfNeeded(): void {}

    /** The part of the view not clipped by its ancestors, in its own coordinates. */
    public function visibleRect(): NSRect {}

    /** Scrolls the nearest enclosing clip view so $point lies at its origin. */
    public function scrollPoint(NSPoint $point): void {}

    public function translatesAutoresizingMaskIntoConstraints(): bool {}

    public function setTranslatesAutoresizingMaskIntoConstraints(bool $flag): void {}

    public function wantsLayer(): bool {}

    public function setWantsLayer(bool $flag): void {}

    /** wantsExtendedDynamicRangeOpenGLSurface: an OpenGL surface on this view shows values past 1.0 on an EDR display. */
    public function wantsExtendedDynamicRangeOpenGLSurface(): bool {}

    public function setWantsExtendedDynamicRangeOpenGLSurface(bool $flag): void {}

    /** wantsBestResolutionOpenGLSurface: an OpenGL surface on this view at the backing's pixel size (Retina). */
    public function wantsBestResolutionOpenGLSurface(): bool {}

    public function setWantsBestResolutionOpenGLSurface(bool $flag): void {}

    /** The view's layer; null when it has none. */
    public function layer(): ?CALayer {}

    /** The view's layer = $layer. */
    public function setLayer(?CALayer $layer): void {}

    public function postsFrameChangedNotifications(): bool {}

    public function setPostsFrameChangedNotifications(bool $flag): void {}

    public function postsBoundsChangedNotifications(): bool {}

    public function setPostsBoundsChangedNotifications(bool $flag): void {}

    public function widthAnchor(): NSLayoutDimension {}

    public function heightAnchor(): NSLayoutDimension {}

    public function leadingAnchor(): NSLayoutXAxisAnchor {}

    public function trailingAnchor(): NSLayoutXAxisAnchor {}

    public function topAnchor(): NSLayoutYAxisAnchor {}

    public function bottomAnchor(): NSLayoutYAxisAnchor {}

    public function centerXAnchor(): NSLayoutXAxisAnchor {}

    public function centerYAnchor(): NSLayoutYAxisAnchor {}

    public function bounds(): NSRect {}

    public function convertRectToBacking(NSRect $rect): NSRect {}

    /** The bounds less the safe-area insets: what no title bar, notch or rounded corner covers (macOS 11). */
    public function safeAreaRect(): NSRect {}

    public function convertSizeToBacking(NSSize $size): NSSize {}

    /** Marks a rect dirty: drawRect: is asked for that rect only. */
    public function setNeedsDisplayInRect(NSRect $rect): void {}

    public function displayIfNeeded(): void {}

    public function layerContentsRedrawPolicy(): NSViewLayerContentsRedrawPolicy {}

    public function setLayerContentsRedrawPolicy(NSViewLayerContentsRedrawPolicy $policy): void {}

    /**
     * displayLinkWithTarget:selector: (macOS 14+): a CADisplayLink following the display this
     * view is on, sending $selector to $target each frame. Not yet added to a run loop.
     */
    public function displayLinkWithTargetSelector(NSObject $target, string $selector): CADisplayLink {}
}
