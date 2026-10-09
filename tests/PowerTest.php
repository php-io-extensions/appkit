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
    $assertion = IOPMAssertion::createWithName(kIOPMAssertionTypePreventUserIdleDisplaySleep, kIOPMAssertionLevelOn, 'appkit test');

    expect($assertion)->toBeGreaterThan(0)
        ->and([kIOPMAssertionTypePreventUserIdleSystemSleep, kIOPMAssertionTypePreventSystemSleep, kIOPMAssertionLevelOff, kIOPMAssertionLevelOn])
        ->toBe(['PreventUserIdleSystemSleep', 'PreventSystemSleep', 0, 255]);

    IOPMAssertion::release($assertion);
    expect(fn () => IOPMAssertion::release($assertion))->toThrow(AppKitException::class, 'IOPMAssertionRelease failed with IOReturn');
});

it('refuses a level that is neither on nor off', function (): void {
    expect(fn () => IOPMAssertion::createWithName(kIOPMAssertionTypePreventUserIdleSystemSleep, 7, 'x'))
        ->toThrow(ValueError::class, 'must be kIOPMAssertionLevelOff or kIOPMAssertionLevelOn');
});
