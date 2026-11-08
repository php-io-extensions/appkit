<?php

declare(strict_types=1);

it('fires a repeating timer into PHP while the run loop runs, and stops once it is invalidated', function (): void {
    $fired = [];
    $target = new ObjCTarget(function (?NSObject $timer) use (&$fired): void {
        $fired[] = $timer;
    });
    $timer = NSTimer::scheduledTimerWithTimeIntervalTargetSelectorUserInfoRepeats(0.02, $target, ObjCTarget::ACTION, null, true);

    expect($timer->isValid())->toBeTrue();
    $until = microtime(true) + 1.0;
    while (count($fired) < 3 && microtime(true) < $until) {
        CFRunLoop::runInMode(kCFRunLoopDefaultMode, 0.05, false);
    }
    $timer->invalidate();
    $count = count($fired);
    CFRunLoop::runInMode(kCFRunLoopDefaultMode, 0.1, false);

    expect($count)->toBeGreaterThanOrEqual(3)
        ->and($fired[0])->toBeInstanceOf(NSTimer::class)
        ->and($timer->isValid())->toBeFalse()
        ->and(count($fired))->toBe($count);
});

it('fires a one-shot timer once and then it is no longer valid', function (): void {
    $hits = 0;
    $target = new ObjCTarget(function () use (&$hits): void {
        $hits++;
    });
    $timer = NSTimer::scheduledTimerWithTimeIntervalTargetSelectorUserInfoRepeats(0.02, $target, ObjCTarget::ACTION, null, false);

    $until = microtime(true) + 1.0;
    while ($hits === 0 && microtime(true) < $until) {
        CFRunLoop::runInMode(kCFRunLoopDefaultMode, 0.05, false);
    }
    CFRunLoop::runInMode(kCFRunLoopDefaultMode, 0.1, false);

    expect($hits)->toBe(1)->and($timer->isValid())->toBeFalse();
});

it('fires a timer made apart and given to the run loop in the common modes', function (): void {
    $hits = 0;
    $target = new ObjCTarget(function () use (&$hits): void {
        $hits++;
    });
    $timer = NSTimer::timerWithTimeIntervalTargetSelectorUserInfoRepeats(0.02, $target, ObjCTarget::ACTION, null, false);
    CFRunLoop::runInMode(kCFRunLoopDefaultMode, 0.1, false);

    expect($hits)->toBe(0);
    NSRunLoop::currentRunLoop()->addTimerForMode($timer, NSRunLoopCommonModes);
    $until = microtime(true) + 1.0;
    while ($hits === 0 && microtime(true) < $until) {
        CFRunLoop::runInMode(kCFRunLoopDefaultMode, 0.05, false);
    }

    expect($hits)->toBe(1);
});

it('has no modal window outside a modal session', function (): void {
    expect(NSApplication::sharedApplication()->modalWindow())->toBeNull();
});
