<?php

declare(strict_types=1);

it('holds an activity that keeps the display awake, then ends it', function (): void {
    $info = NSProcessInfo::processInfo();
    $activity = $info->beginActivityWithOptionsReason(
        NSActivityOptions::USER_INITIATED->value | NSActivityOptions::IDLE_DISPLAY_SLEEP_DISABLED->value | NSActivityOptions::LATENCY_CRITICAL->value,
        'appkit test: a game is running',
    );

    expect($info)->toBe(NSProcessInfo::processInfo())
        ->and($activity)->toBeInstanceOf(NSObject::class);

    $info->endActivity($activity);
    $info->endActivity($info->beginActivityWithOptionsReason(NSActivityOptions::BACKGROUND, 'appkit test'));
});

it('carries the Foundation values of the activity options', function (): void {
    expect(NSActivityOptions::USER_INITIATED->value)->toBe(0xFFFFFF)
        ->and(NSActivityOptions::USER_INTERACTIVE->value)->toBe(NSActivityOptions::USER_INITIATED->value | NSActivityOptions::LATENCY_CRITICAL->value)
        ->and(NSActivityOptions::IDLE_DISPLAY_SLEEP_DISABLED->value)->toBe(1 << 40);
});

it('takes a power assertion against display sleep and releases it', function (): void {
    $created = IOPMAssertion::createWithName(kIOPMAssertionTypePreventUserIdleDisplaySleep, kIOPMAssertionLevelOn, 'appkit test', $assertion);

    expect($created)->toBe(kIOReturnSuccess)
        ->and($assertion)->toBeGreaterThan(0)
        ->and([kIOPMAssertionTypePreventUserIdleSystemSleep, kIOPMAssertionTypePreventSystemSleep, kIOPMAssertionLevelOff, kIOPMAssertionLevelOn])
        ->toBe(['PreventUserIdleSystemSleep', 'PreventSystemSleep', 0, 255])
        ->and(kIOPMAssertionTypePreventUserIdleDisplaySleep)->toBe('PreventUserIdleDisplaySleep')
        ->and(kIOReturnSuccess)->toBe(0);

    // A second release answers kIOReturnBadArgument (0xE00002C2), as IOReturn's signed int.
    expect(IOPMAssertion::release($assertion))->toBe(kIOReturnSuccess)
        ->and(IOPMAssertion::release($assertion))->toBe(-536870206);
});

it('passes any level to IOKit, which takes 7 as well', function (): void {
    $created = IOPMAssertion::createWithName(kIOPMAssertionTypePreventUserIdleSystemSleep, 7, 'appkit test', $assertion);

    expect($created)->toBe(kIOReturnSuccess)
        ->and($assertion)->toBeGreaterThan(0)
        ->and(IOPMAssertion::release($assertion))->toBe(kIOReturnSuccess)
        ->and(IOPMAssertion::createWithName(kIOPMAssertionTypePreventUserIdleSystemSleep, kIOPMAssertionLevelOff, 'appkit test', $off))->toBe(kIOReturnSuccess)
        ->and(IOPMAssertion::release($off))->toBe(kIOReturnSuccess);
});
