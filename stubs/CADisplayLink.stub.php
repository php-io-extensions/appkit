<?php

/** @generate-class-entries */

/** CAFrameRateRange: the frame rates a display link may run at, in Hz. */
final class CAFrameRateRange
{
    public float $minimum = 0.0;

    public float $maximum = 0.0;

    public float $preferred = 0.0;

    public function __construct(float $minimum = 0.0, float $maximum = 0.0, float $preferred = 0.0) {}
}

/**
 * Made by NSView::displayLinkWithTargetSelector() (macOS 14+).
 *
 * @not-serializable
 */
class CADisplayLink extends NSObject
{
    /** When the frame being shown was shown, in seconds of CACurrentMediaTime(). */
    public function timestamp(): float {}

    /** When the next frame will be shown: the deadline to present by. */
    public function targetTimestamp(): float {}

    /** The time between frames, in seconds. */
    public function duration(): float {}

    public function preferredFrameRateRange(): CAFrameRateRange {}

    public function setPreferredFrameRateRange(CAFrameRateRange $range): void {}

    public function addToRunLoopForMode(NSRunLoop $runLoop, string $mode): void {}

    public function removeFromRunLoopForMode(NSRunLoop $runLoop, string $mode): void {}

    public function isPaused(): bool {}

    public function setPaused(bool $paused): void {}

    /** Removes the link from every run loop and lets go of its target. */
    public function invalidate(): void {}
}
