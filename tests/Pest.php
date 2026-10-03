<?php

declare(strict_types=1);

if (! extension_loaded('appkit')) {
    throw new RuntimeException('The appkit extension is not loaded; run pest with -d extension=/path/to/appkit.so');
}

function applicationDefined(int $data1 = 0, int $data2 = 0): NSEvent
{
    return NSEvent::otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2(
        NSEventType::APPLICATION_DEFINED, new NSPoint(0.0, 0.0), 0, 0.0, 0, null, 0, $data1, $data2,
    );
}

/** Drop every queued application-defined event so each test starts from an empty queue. */
function drainApplicationDefined(NSApplication $app): void
{
    while ($app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::APPLICATION_DEFINED, NSDate::distantPast(), NSDefaultRunLoopMode, true)) {
    }
}

function newWindow(int $width = 320, int $height = 200): NSWindow
{
    $window = NSWindow::initWithContentRectStyleMaskBackingDefer(
        new NSRect(0.0, 0.0, $width, $height),
        NSWindowStyleMask::TITLED->value | NSWindowStyleMask::CLOSABLE->value | NSWindowStyleMask::MINIATURIZABLE->value | NSWindowStyleMask::RESIZABLE->value,
        NSBackingStoreType::BUFFERED,
        false,
    );
    // The PHP object holds its own reference: AppKit must not release the window again on close.
    $window->setReleasedWhenClosed(false);

    return $window;
}

/** Dispatch whatever AppKit has queued for up to $seconds. */
function pumpFor(NSApplication $app, float $seconds): void
{
    $until = microtime(true) + $seconds;
    while (microtime(true) < $until) {
        if ($event = $app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::ANY, NSDate::dateWithTimeIntervalSinceNow(0.01), NSDefaultRunLoopMode, true)) {
            $app->sendEvent($event);
        }
    }
}

/** Dispatch AppKit events until $until() holds or $seconds pass; true when it held. */
function pumpUntil(NSApplication $app, callable $until, float $seconds): bool
{
    $limit = microtime(true) + $seconds;
    while (! $until()) {
        if (microtime(true) >= $limit) {
            return false;
        }
        if ($event = $app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::ANY, NSDate::dateWithTimeIntervalSinceNow(0.01), NSDefaultRunLoopMode, true)) {
            $app->sendEvent($event);
        }
    }

    return true;
}
