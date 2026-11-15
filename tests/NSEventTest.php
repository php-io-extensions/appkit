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
        NSEventType::KEY_DOWN, new NSPoint(0.0, 0.0),0, 0.0, 0, null, 0, 0, 0,
    ))->toThrow(AppKitException::class, 'NSInternalInconsistencyException');
});

it('rejects a subtype outside a short', function (): void {
    expect(fn () => NSEvent::otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2(
        NSEventType::APPLICATION_DEFINED, new NSPoint(0.0, 0.0),0, 0.0, 0, null, 40000, 0, 0,
    ))->toThrow(ValueError::class);
});

it('takes both NSPoint coordinates', function (): void {
    $p = new NSPoint(0.0, 0.0);

    expect($p->x)->toBe(0.0)->and($p->y)->toBe(0.0)
        ->and(fn () => new NSPoint())->toThrow(ArgumentCountError::class)
        ->and((new ReflectionProperty(NSPoint::class, 'x'))->hasDefaultValue())->toBeFalse();
});

it('types the event constructors\' context as an NSGraphicsContext', function (string $method): void {
    $context = (new ReflectionMethod(NSEvent::class, $method))->getParameters()[5];

    expect([$context->getName(), (string) $context->getType()])->toBe(['context', '?NSGraphicsContext']);
})->with([
    'otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2',
    'mouseEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberClickCountPressure',
    'keyEventWithTypeLocationModifierFlagsTimestampWindowNumberContextCharactersCharactersIgnoringModifiersIsARepeatKeyCode',
]);

it('builds a key event with every field it was given and reads it back', function (): void {
    $event = NSEvent::keyEventWithTypeLocationModifierFlagsTimestampWindowNumberContextCharactersCharactersIgnoringModifiersIsARepeatKeyCode(
        NSEventType::KEY_DOWN, new NSPoint(3.0, 4.0), NSEventModifierFlags::SHIFT, 1.25, 0, null, 'W', 'w', true, 0x0D,
    );

    expect([$event->type(), $event->keyCode(), $event->characters(), $event->charactersIgnoringModifiers(), $event->isARepeat()])
        ->toBe([NSEventType::KEY_DOWN, 0x0D, 'W', 'w', true])
        ->and($event->modifierFlags() & NSEventModifierFlags::SHIFT->value)->toBe(NSEventModifierFlags::SHIFT->value)
        ->and($event->timestamp())->toBe(1.25)
        ->and($event->window())->toBeNull();
});

it('builds a flags-changed event through the key constructor, keeping device-dependent bits', function (): void {
    $event = NSEvent::keyEventWithTypeLocationModifierFlagsTimestampWindowNumberContextCharactersCharactersIgnoringModifiersIsARepeatKeyCode(
        NSEventType::FLAGS_CHANGED, new NSPoint(0.0, 0.0),NSEventModifierFlags::SHIFT->value | 0x2, 0.0, 0, null, '', '', false, 0x38,
    );

    expect([$event->type(), $event->keyCode(), $event->modifierFlags() & 0x2])->toBe([NSEventType::FLAGS_CHANGED, 0x38, 0x2]);
});

it('rejects a key code outside an unsigned short', function (): void {
    expect(fn () => NSEvent::keyEventWithTypeLocationModifierFlagsTimestampWindowNumberContextCharactersCharactersIgnoringModifiersIsARepeatKeyCode(
        NSEventType::KEY_DOWN, new NSPoint(0.0, 0.0),0, 0.0, 0, null, '', '', false, 70000,
    ))->toThrow(ValueError::class);
});

it('reads a mouse event\'s click count and window', function (): void {
    $window = newWindow();
    $event = NSEvent::mouseEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberClickCountPressure(
        NSEventType::RIGHT_MOUSE_DOWN, new NSPoint(10.0, 20.0), 0, 0.0, $window->windowNumber(), null, 7, 2, 1.0,
    );

    expect([$event->clickCount(), $event->buttonNumber()])->toBe([2, 0])
        ->and($event->window())->toBe($window);

    $window->close();
});

it('raises AppKitException asking a mouse event for characters', function (): void {
    $event = NSEvent::mouseEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberClickCountPressure(
        NSEventType::LEFT_MOUSE_DOWN, new NSPoint(0.0, 0.0),0, 0.0, 0, null, 0, 1, 1.0,
    );

    expect(fn () => $event->characters())->toThrow(AppKitException::class, 'NSInternalInconsistencyException');
});

it('reads a mouse event\'s pressure', function (): void {
    $event = NSEvent::mouseEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberClickCountPressure(
        NSEventType::LEFT_MOUSE_DOWN, new NSPoint(0.0, 0.0), 0, 0.0, 0, null, 0, 1, 0.75,
    );

    expect($event->pressure())->toBe(0.75)
        ->and($event->rotation())->toBe(0.0);
});

it('raises AppKitException asking a mouse event for gesture or force-click values', function (string $method): void {
    $event = NSEvent::mouseEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberClickCountPressure(
        NSEventType::LEFT_MOUSE_DOWN, new NSPoint(0.0, 0.0), 0, 0.0, 0, null, 0, 1, 1.0,
    );

    expect(fn () => $event->$method())->toThrow(AppKitException::class, 'NSInternalInconsistencyException');
})->with(['magnification', 'stage', 'stageTransition']);

/*
 * A trackpad gesture as Quartz carries it: event type 29, the IOHID event kind in integer field
 * 110 (8 zoom, 5 rotation, 32 force), then the kind's values. Zoom: double 113 magnification.
 * Rotation: double 114 degrees. Force: double 119 pressure, integer 143 stage, double 113 stage
 * transition. Integer 132: the IOHID phase. Fields 113 and 114 share one slot, so each event
 * sets only the one its kind reads.
 */
function gestureEvent(int $kind, array $doubles = [], array $integers = []): NSEvent
{
    $quartz = CGEvent::create(null);
    $quartz->setType(29);
    $quartz->setIntegerValueField(110, $kind);
    foreach ($doubles as $field => $value) {
        $quartz->setDoubleValueField($field, $value);
    }
    foreach ($integers as $field => $value) {
        $quartz->setIntegerValueField($field, $value);
    }

    return NSEvent::eventWithCGEvent($quartz);
}

it('reads a magnify gesture\'s magnification in each phase', function (int $iohid, NSEventPhase $phase): void {
    $event = gestureEvent(8, [113 => 0.25], [132 => $iohid]);

    expect([$event->type(), $event->magnification(), $event->phase()])->toBe([NSEventType::MAGNIFY, 0.25, $phase]);
})->with([
    'began' => [1, NSEventPhase::BEGAN],
    'changed' => [2, NSEventPhase::CHANGED],
    'ended' => [4, NSEventPhase::ENDED],
    'cancelled' => [8, NSEventPhase::CANCELLED],
    'may begin' => [128, NSEventPhase::MAY_BEGIN],
]);

it('reads a rotate gesture\'s degrees in both directions', function (float $degrees): void {
    $event = gestureEvent(5, [114 => $degrees]);

    expect([$event->type(), $event->rotation()])->toBe([NSEventType::ROTATE, $degrees]);
})->with(['clockwise' => -30.0, 'counter-clockwise' => 12.5]);

/* pressure and stageTransition are float in AppKit: these values are exact in 32 bits. */
it('reads a force click\'s stage, pressure and stage transition', function (int $stage, float $pressure, float $transition): void {
    $event = gestureEvent(32, [119 => $pressure, 113 => $transition], [143 => $stage]);

    expect([$event->type(), $event->stage(), $event->pressure(), $event->stageTransition()])
        ->toBe([NSEventType::PRESSURE, $stage, $pressure, $transition]);
})->with([
    'stage 0' => [0, 0.125, 0.0],
    'stage 1' => [1, 0.5, 0.25],
    'stage 2' => [2, 0.625, 0.375],
]);

it('raises AppKitException asking a gesture for another kind\'s value', function (int $kind, string $method): void {
    expect(fn () => gestureEvent($kind)->$method())->toThrow(AppKitException::class, 'NSInternalInconsistencyException');
})->with([
    'stage of a magnify' => [8, 'stage'],
    'stage transition of a magnify' => [8, 'stageTransition'],
    'pressure of a magnify' => [8, 'pressure'],
    'rotation of a magnify' => [8, 'rotation'],
    'magnification of a rotate' => [5, 'magnification'],
    'stage of a rotate' => [5, 'stage'],
    'magnification of a force click' => [32, 'magnification'],
]);

it('reads a scroll wheel and an other-button event made from Quartz events', function (): void {
    $lines = NSEvent::eventWithCGEvent(CGEvent::createScrollWheelEvent2(null, CGScrollEventUnit::LINE, 2, 3, -1, 0));
    $pixels = NSEvent::eventWithCGEvent(CGEvent::createScrollWheelEvent2(null, CGScrollEventUnit::PIXEL, 2, 5, 0, 0));
    $quartz = CGEvent::createMouseEvent(null, CGEventType::OTHER_MOUSE_DOWN, new NSPoint(100.0, 100.0), CGMouseButton::CENTER);
    $quartz->setIntegerValueField(kCGMouseEventButtonNumber, 4);
    $other = NSEvent::eventWithCGEvent($quartz);

    expect([$lines->type(), $lines->deltaX(), $lines->deltaY(), $lines->scrollingDeltaY(), $lines->hasPreciseScrollingDeltas(), $lines->isDirectionInvertedFromDevice()])
        ->toBe([NSEventType::SCROLL_WHEEL, -1.0, 3.0, 3.0, false, false])
        ->and([$pixels->deltaY(), $pixels->scrollingDeltaY(), $pixels->hasPreciseScrollingDeltas()])->toBe([0.5, 5.0, true])
        ->and([$other->type(), $other->buttonNumber()])->toBe([NSEventType::OTHER_MOUSE_DOWN, 4]);
});

it('reads motion deltas from a Quartz moved event', function (): void {
    $quartz = CGEvent::createMouseEvent(null, CGEventType::MOUSE_MOVED, new NSPoint(100.0, 100.0), CGMouseButton::LEFT);
    $quartz->setIntegerValueField(kCGMouseEventDeltaX, 7);
    $quartz->setIntegerValueField(kCGMouseEventDeltaY, -3);
    $event = NSEvent::eventWithCGEvent($quartz);

    expect([$event->type(), $event->deltaX(), $event->deltaY()])->toBe([NSEventType::MOUSE_MOVED, 7.0, -3.0]);
});

it('reads where the pointer is on screen', function (): void {
    expect(NSEvent::mouseLocation())->toBeInstanceOf(NSPoint::class);
});

it('names the resign-active notification as AppKit does', function (): void {
    expect(NSApplicationDidResignActiveNotification)->toBe('NSApplicationDidResignActiveNotification');
});

it('reads which mouse buttons are down as a bit mask', function (): void {
    expect(NSEvent::pressedMouseButtons())->toBeInt()->toBeGreaterThanOrEqual(0);
});
