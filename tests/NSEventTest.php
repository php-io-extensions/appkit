<?php

declare(strict_types=1);

it('builds an application-defined event with every field it was given', function (): void {
    $event = NSEvent::otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2(
        NSEventType::APPLICATION_DEFINED, new NSPoint(12.5, 7.25), NSEventModifierFlags::SHIFT, 3.5, 0, null, 9, 100, -200,
    );

    expect($event->type())->toBe(NSEventType::APPLICATION_DEFINED)
        ->and($event->subtype())->toBe(9)
        ->and($event->data1())->toBe(100)
        ->and($event->data2())->toBe(-200)
        ->and($event->timestamp())->toBe(3.5)
        ->and($event->windowNumber())->toBe(0)
        ->and($event->modifierFlags() & NSEventModifierFlags::SHIFT->value)->toBe(NSEventModifierFlags::SHIFT->value)
        ->and($event->locationInWindow())->toEqual(new NSPoint(12.5, 7.25));
});

it('turns an NSException into AppKitException', function (): void {
    // otherEventWithType: only accepts the "other" event types; a key event raises.
    expect(fn () => NSEvent::otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2(
        NSEventType::KEY_DOWN, new NSPoint(), 0, 0.0, 0, null, 0, 0, 0,
    ))->toThrow(AppKitException::class, 'NSInternalInconsistencyException');
});

it('rejects a subtype outside a short', function (): void {
    expect(fn () => NSEvent::otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2(
        NSEventType::APPLICATION_DEFINED, new NSPoint(), 0, 0.0, 0, null, 40000, 0, 0,
    ))->toThrow(ValueError::class);
});

it('defaults NSPoint to the origin', function (): void {
    $p = new NSPoint();

    expect($p->x)->toBe(0.0)->and($p->y)->toBe(0.0);
});
