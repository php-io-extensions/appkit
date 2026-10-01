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
