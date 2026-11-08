<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class NSRunLoop extends NSObject
{
    public static function mainRunLoop(): NSRunLoop {}

    public static function currentRunLoop(): NSRunLoop {}

    /** getCFRunLoop */
    public function getCFRunLoop(): CFRunLoop {}

    /** Give a timer from NSTimer::timerWithTimeInterval…() to this loop in $mode (NSRunLoopCommonModes: every mode, a modal session included). */
    public function addTimerForMode(NSTimer $timer, string $mode): void {}
}
