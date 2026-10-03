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
 * recorded. Changes made on another thread do not reach PHP: the handler runs only on
 * the thread that constructed the observer.
 *
 * @not-serializable
 */
final class ObjCObserver extends NSObject
{
    /** NSKeyValueObservingOptions */
    public const int OPTION_NEW = 1;
    public const int OPTION_OLD = 2;
    public const int OPTION_INITIAL = 4;

    /**
     * @param callable $handler called as $handler(string $keyPath, NSObject $object, array $change) where
     *                          $change holds 'new' and/or 'old' as a string, int, float, bool, null,
     *                          NSRect/NSSize/NSPoint for geometry, or NSObject
     */
    public function __construct(callable $handler) {}

    public function observe(NSObject $object, string $keyPath, int $options): void {}

    public function stop(NSObject $object, string $keyPath): void {}
}
