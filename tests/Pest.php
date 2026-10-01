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
