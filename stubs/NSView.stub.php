<?php

/** @generate-class-entries */

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) kCAGravityResize)
 */
const kCAGravityResize = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) kCAGravityResizeAspect)
 */
const kCAGravityResizeAspect = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) kCAGravityResizeAspectFill)
 */
const kCAGravityResizeAspectFill = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) kCAGravityCenter)
 */
const kCAGravityCenter = UNKNOWN;

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

    /** @return NSView[] */
    public function subviews(): array {}

    public function addSubview(NSView $view): void {}

    public function removeFromSuperview(): void {}

    /** setNeedsDisplay: */
    public function setNeedsDisplay(bool $flag): void {}

    public function needsDisplay(): bool {}

    public function isHidden(): bool {}

    public function setHidden(bool $hidden): void {}

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

    /** The view's layer; null when it has none. */
    public function layer(): ?CALayer {}

    /**
     * setWantsLayer:YES, then the view's layer = $layer (the view hosts it). Null puts a fresh
     * backing layer of the view's own in place: wantsLayer off and on again.
     */
    public function setLayer(?CALayer $layer): void {}

    /** NSColor of layer.backgroundColor; null when the view has no layer or the layer no colour */
    public function layerBackgroundColor(): ?NSColor {}

    /** setWantsLayer:YES, then layer.backgroundColor = color.CGColor; null clears the colour */
    public function setLayerBackgroundColor(?NSColor $color): void {}

    /** layer.contents; null when the view has no layer or its contents are neither kind of image */
    public function layerContents(): NSImage|CGImage|null {}

    /** setWantsLayer:YES, then layer.contents = contents; null clears it */
    public function setLayerContents(NSImage|CGImage|null $contents): void {}

    /** layer.contentsGravity; null when the view has no layer */
    public function layerContentsGravity(): ?string {}

    /** setWantsLayer:YES, then layer.contentsGravity = gravity (a kCAGravity* string) */
    public function setLayerContentsGravity(string $gravity): void {}

    public function layerMasksToBounds(): bool {}

    /** setWantsLayer:YES, then layer.masksToBounds = flag */
    public function setLayerMasksToBounds(bool $flag): void {}

    public function postsFrameChangedNotifications(): bool {}

    public function setPostsFrameChangedNotifications(bool $flag): void {}

    public function widthAnchor(): NSLayoutAnchor {}

    public function heightAnchor(): NSLayoutAnchor {}

    public function leadingAnchor(): NSLayoutAnchor {}

    public function trailingAnchor(): NSLayoutAnchor {}

    public function topAnchor(): NSLayoutAnchor {}

    public function bottomAnchor(): NSLayoutAnchor {}

    public function centerXAnchor(): NSLayoutAnchor {}

    public function centerYAnchor(): NSLayoutAnchor {}
}
