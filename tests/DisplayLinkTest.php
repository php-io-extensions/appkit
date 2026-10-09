<?php

declare(strict_types=1);

beforeEach(function (): void {
    $this->app = NSApplication::sharedApplication();
    $this->app->finishLaunching();
});

it('answers the main and current run loops over the CFRunLoop beneath', function (): void {
    expect(NSRunLoop::mainRunLoop())->toBeInstanceOf(NSRunLoop::class)
        ->and(NSRunLoop::currentRunLoop())->toBe(NSRunLoop::mainRunLoop())
        ->and(NSRunLoop::mainRunLoop()->getCFRunLoop())->toBe(CFRunLoop::getMain());
});

it('ticks a PHP target once a frame, paced by the display, and pauses', function (): void {
    $window = newWindow();
    $window->makeKeyAndOrderFront(null);
    pumpFor($this->app, 0.2);
    $ticks = [];
    $target = new ObjCTarget(function (CADisplayLink $link) use (&$ticks): void {
        $ticks[] = [$link->timestamp(), $link->targetTimestamp(), $link->duration()];
    });
    $link = $window->contentView()->displayLinkWithTargetSelector($target, 'action:');
    $link->addToRunLoopForMode(NSRunLoop::mainRunLoop(), NSRunLoopCommonModes);

    expect(pumpUntil($this->app, function () use (&$ticks): bool { return count($ticks) >= 5; }, 2.0))->toBeTrue();

    [$timestamp, $target_timestamp, $duration] = $ticks[4];
    expect($target_timestamp)->toBeGreaterThan($timestamp)
        ->and($duration)->toBeGreaterThan(0.0)->toBeLessThan(0.05)
        ->and($ticks[4][0])->toBeGreaterThan($ticks[0][0])
        ->and($link->isPaused())->toBeFalse();

    $link->setPaused(true);
    pumpFor($this->app, 0.05);
    $count = count($ticks);
    pumpFor($this->app, 0.2);
    expect($link->isPaused())->toBeTrue()
        ->and(count($ticks))->toBe($count);

    $link->removeFromRunLoopForMode(NSRunLoop::mainRunLoop(), NSRunLoopCommonModes);
    $link->invalidate();
    $window->close();
});

it('asks for a frame-rate range and reads it back', function (): void {
    $window = newWindow();
    $link = $window->contentView()->displayLinkWithTargetSelector(new ObjCTarget(fn () => null), 'action:');

    $link->setPreferredFrameRateRange(new CAFrameRateRange(30.0, 120.0, 60.0));
    $range = $link->preferredFrameRateRange();

    expect($range)->toBeInstanceOf(CAFrameRateRange::class)
        ->and([$range->minimum, $range->maximum, $range->preferred])->toBe([30.0, 120.0, 60.0])
        ->and(new CAFrameRateRange())->toEqual(new CAFrameRateRange(0.0, 0.0, 0.0));

    $link->invalidate();
    $window->close();
});
