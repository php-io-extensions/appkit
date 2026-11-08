<?php

/** @generate-class-entries */

/**
 * A timer on the current run loop that sends $aSelector to $aTarget with the timer as its argument. Give it an
 * ObjCTarget and ObjCTarget::ACTION to call PHP. A scheduled timer fires in the default run loop mode; to fire in a modal
 * session too, make it with timerWithTimeInterval…() and give it to a run loop in NSRunLoopCommonModes.
 *
 * @not-serializable
 */
class NSTimer extends NSObject
{
    /** A timer on no run loop yet: NSRunLoop::addTimerForMode() gives it one (with NSRunLoopCommonModes it also fires in a modal session). */
    public static function timerWithTimeIntervalTargetSelectorUserInfoRepeats(float $ti, NSObject $aTarget, string $aSelector, ?NSObject $userInfo, bool $yesOrNo): NSTimer {}

    public static function scheduledTimerWithTimeIntervalTargetSelectorUserInfoRepeats(float $ti, NSObject $aTarget, string $aSelector, ?NSObject $userInfo, bool $yesOrNo): NSTimer {}

    public function invalidate(): void {}

    public function isValid(): bool {}
}
