<?php

declare(strict_types=1);

it('makes a mouse event at a location and carries its integer fields', function (): void {
    $event = CGEvent::createMouseEvent(null, CGEventType::LEFT_MOUSE_DOWN, new NSPoint(12.0, 34.0), CGMouseButton::LEFT);
    $event->setIntegerValueField(kCGMouseEventClickState, 2);

    expect($event)->toBeInstanceOf(CGEvent::class)
        ->and(get_parent_class($event))->toBe(CFType::class)
        ->and($event->getLocation())->toEqual(new NSPoint(12.0, 34.0))
        ->and($event->getIntegerValueField(kCGMouseEventClickState))->toBe(2)
        ->and($event->getIntegerValueField(kCGMouseEventButtonNumber))->toBe(0);
});

it('moves an event to another location', function (): void {
    $event = CGEvent::createScrollWheelEvent2(null, CGScrollEventUnit::LINE, 1, 1, 0, 0);
    $event->setLocation(new NSPoint(50.0, 60.0));

    expect($event->getLocation())->toEqual(new NSPoint(50.0, 60.0));
});

it('takes no event source but null', function (): void {
    expect(fn () => CGEvent::createMouseEvent(CFData::create('x'), CGEventType::MOUSE_MOVED, new NSPoint(), CGMouseButton::LEFT))
        ->toThrow(ValueError::class, 'must be null')
        ->and(fn () => CGEvent::createScrollWheelEvent2(CFData::create('x'), CGScrollEventUnit::LINE, 1, 1, 0, 0))
        ->toThrow(ValueError::class, 'must be null');
});

it('takes one to three wheels', function (): void {
    expect(fn () => CGEvent::createScrollWheelEvent2(null, CGScrollEventUnit::LINE, 0, 1, 0, 0))->toThrow(ValueError::class)
        ->and(fn () => CGEvent::createScrollWheelEvent2(null, CGScrollEventUnit::LINE, 4, 1, 0, 0))->toThrow(ValueError::class);
});

it('numbers event types, buttons, units and mouse fields as Quartz does', function (): void {
    expect([CGEventType::LEFT_MOUSE_DOWN->value, CGEventType::MOUSE_MOVED->value, CGEventType::KEY_DOWN->value, CGEventType::SCROLL_WHEEL->value, CGEventType::OTHER_MOUSE_DRAGGED->value])
        ->toBe([1, 5, 10, 22, 27])
        ->and([CGMouseButton::LEFT->value, CGMouseButton::RIGHT->value, CGMouseButton::CENTER->value])->toBe([0, 1, 2])
        ->and([CGScrollEventUnit::PIXEL->value, CGScrollEventUnit::LINE->value])->toBe([0, 1])
        ->and([kCGMouseEventButtonNumber, kCGMouseEventDeltaX, kCGMouseEventDeltaY, kCGMouseEventWindowUnderMousePointer])->toBe([3, 4, 5, 91]);
});

it('reads whether a key is down in an event source state', function (): void {
    // 0x7F is no key on any Mac keyboard: never down.
    expect(CGEventSource::keyState(CGEventSourceStateID::COMBINED_SESSION_STATE, 0x7F))->toBeFalse()
        ->and(CGEventSource::keyState(CGEventSourceStateID::HID_SYSTEM_STATE, 0x7F))->toBeFalse()
        ->and(array_map(fn (CGEventSourceStateID $s): int => $s->value, CGEventSourceStateID::cases()))->toBe([-1, 0, 1])
        ->and(get_parent_class(CGEventSource::class))->toBe(CFType::class);
});

it('takes a key code within an unsigned short', function (): void {
    expect(fn () => CGEventSource::keyState(CGEventSourceStateID::COMBINED_SESSION_STATE, 70000))->toThrow(ValueError::class);
});
