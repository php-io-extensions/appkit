<?php

/** @generate-class-entries */

/**
 * An object that answers a protocol's selectors by calling PHP: the trampoline
 * a delegate property needs. AppKit holds delegates weakly, so keep this object.
 *
 * @not-serializable
 */
final class ObjCDelegate extends NSObject
{
    public function __construct(string $protocol) {}

    /**
     * @param callable $handler called with the selector's arguments; its return becomes the selector's
     */
    public function on(string $selector, callable $handler): void {}

    public function off(string $selector): void {}

    public function protocolName(): string {}
}

/**
 * A target whose action: selector calls PHP with the sender: the trampoline a
 * target/action pair needs. Controls hold targets weakly, so keep this object.
 *
 * @not-serializable
 */
final class ObjCTarget extends NSObject
{
    /** The selector to hand setAction(). */
    public const string ACTION = "action:";

    /**
     * @param callable $handler called as $handler(?NSObject $sender)
     */
    public function __construct(callable $handler) {}
}

/**
 * A key-value observer that calls PHP from observeValueForKeyPath:ofObject:change:context:.
 * Every observe() is undone by a matching stop(); whatever is still observed when the
 * observer is freed is removed then, so a freed observer never receives a change. An
 * observed object is retained until stop() or the observer's free, so the removal never
 * messages a freed object. A key path AppKit refuses raises AppKitException and is not
 * recorded. Each observe() is one KVO registration, so observing a pair twice calls the
 * handler twice per change; stop() of a pair KVO does not hold raises AppKitException
 * (NSRangeException). Changes made on another thread do not reach PHP: the handler runs only on
 * the thread that constructed the observer.
 *
 * @not-serializable
 */
final class ObjCObserver extends NSObject
{
    /** @cvalue NSKeyValueObservingOptionNew */
    public const int OPTION_NEW = UNKNOWN;
    /** @cvalue NSKeyValueObservingOptionOld */
    public const int OPTION_OLD = UNKNOWN;
    /** @cvalue NSKeyValueObservingOptionInitial */
    public const int OPTION_INITIAL = UNKNOWN;
    /** @cvalue NSKeyValueObservingOptionPrior */
    public const int OPTION_PRIOR = UNKNOWN;

    /**
     * @param callable $handler called as $handler(string $keyPath, ?NSObject $object, array $change, int $context):
     *                          $change holds every entry of KVO's change dictionary under its own key
     *                          ('kind', 'new', 'old', 'indexes', 'notificationIsPrior') as a string, int,
     *                          float, bool, null, NSRect/NSSize/NSPoint for geometry, or NSObject (an
     *                          NSIndexSet for 'indexes'); $context is the context observe() registered
     */
    public function __construct(callable $handler) {}

    /** addObserver:forKeyPath:options:context: with this observer; $options is OPTION_* combined with |. */
    public function observe(NSObject $object, string $keyPath, int $options, int $context): void {}

    /** removeObserver:forKeyPath:context: with this observer. */
    public function stop(NSObject $object, string $keyPath, int $context): void {}
}

/**
 * An NSOpenGLView whose drawRect: calls PHP with the dirty rect, nothing more: the handler makes
 * the view's openGLContext() current and flushes it itself.
 *
 * @not-serializable
 */
final class ObjCOpenGLView extends NSOpenGLView
{
    /**
     * null when AppKit makes no view.
     *
     * @param callable $draw called as $draw(ObjCOpenGLView $view, NSRect $dirty): void from drawRect:
     */
    public static function initWithFramePixelFormatDraw(NSRect $frame, ?NSOpenGLPixelFormat $format, callable $draw): ?static {}
}

/**
 * An NSWindow whose canBecomeKeyWindow and canBecomeMainWindow overrides each ask a PHP handler,
 * and answer NSWindow's own (NO for a borderless window) while none is set or it did not run.
 * Made with initWithContentRectStyleMaskBackingDefer().
 *
 * @not-serializable
 */
final class ObjCStageWindow extends NSWindow
{
    /**
     * Sets the handler for 'canBecomeKeyWindow' or 'canBecomeMainWindow', replacing one set before.
     * The overrides ask only those two names; a handler under any other name is kept and never called.
     *
     * @param callable $handler called as $handler(): bool
     */
    public function on(string $selector, callable $handler): void {}

    public function off(string $selector): void {}
}

/**
 * An NSView whose drawRect: calls PHP with the dirty rect, inside the view's graphics context:
 * the trampoline a partial redraw needs. Mark rects with setNeedsDisplayInRect(); AppKit asks
 * for only those.
 *
 * @not-serializable
 */
final class ObjCDrawView extends NSView
{
    /** @param callable $draw called as $draw(ObjCDrawView $view, NSRect $dirty): void from drawRect: */
    public static function initWithFrameDraw(NSRect $frame, callable $draw): static {}
}
