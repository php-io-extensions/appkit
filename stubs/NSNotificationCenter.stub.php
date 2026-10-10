<?php

/** @generate-class-entries */

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) NSViewFrameDidChangeNotification)
 */
const NSViewFrameDidChangeNotification = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) NSWindowDidResizeNotification)
 */
const NSWindowDidResizeNotification = UNKNOWN;

/**
 * Posted when the application stops being the active app: Cmd-Tab, a click on another app.
 *
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) NSApplicationDidResignActiveNotification)
 */
const NSApplicationDidResignActiveNotification = UNKNOWN;

/**
 * Posted by an NSControl as its text changes; the control's delegate hears it as controlTextDidChange:.
 *
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) NSControlTextDidChangeNotification)
 */
const NSControlTextDidChangeNotification = UNKNOWN;

/**
 * Posted by an NSText (NSTextView) as its text changes; its delegate hears it as textDidChange:.
 *
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) NSTextDidChangeNotification)
 */
const NSTextDidChangeNotification = UNKNOWN;

/**
 * @not-serializable
 */
class NSNotification extends NSObject
{
    public function name(): string {}

    public function object(): ?NSObject {}
}

/**
 * @not-serializable
 */
class NSNotificationCenter extends NSObject
{
    public static function defaultCenter(): NSNotificationCenter {}

    /**
     * The returned token is the observer to hand removeObserver(). With a null $queue the block
     * runs on whichever thread posts; NSOperationQueue::mainQueue() delivers on the main thread.
     * The callable only ever runs on the PHP thread that registered it: a post that runs the
     * block on any other thread does not reach PHP. AVPlayerItem notifications may be posted
     * off the main thread, so observe them with the main queue.
     *
     * @param callable $block called as $block(NSNotification $notification)
     */
    public function addObserverForNameObjectQueueUsingBlock(string $name, ?NSObject $object, ?NSOperationQueue $queue, callable $block): NSObject {}

    public function removeObserver(NSObject $observer): void {}

    public function postNotificationNameObject(string $name, ?NSObject $object): void {}
}

/**
 * @not-serializable
 */
class NSOperationQueue extends NSObject
{
    /** The queue whose operations run on the main thread. */
    public static function mainQueue(): NSOperationQueue {}

    /** [[NSOperationQueue alloc] init]: a queue running its operations on its own threads. */
    public static function init(): static {}

    public function waitUntilAllOperationsAreFinished(): void {}
}
