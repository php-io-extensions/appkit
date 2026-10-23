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

it('makes a key event for a virtual key, with its flags, that AppKit reads as that key', function (): void {
    $event = CGEvent::createKeyboardEvent(null, 30, true);
    $event->setFlags(NSEventModifierFlags::COMMAND->value | NSEventModifierFlags::SHIFT->value);
    $key = NSEvent::eventWithCGEvent($event);

    expect($event->getFlags())->toBe(NSEventModifierFlags::COMMAND->value | NSEventModifierFlags::SHIFT->value)
        ->and($key->type())->toBe(NSEventType::KEY_DOWN)
        ->and($key->keyCode())->toBe(30)
        ->and($key->charactersIgnoringModifiers())->toBe('}');
});

it('moves an event to another location', function (): void {
    $event = CGEvent::createScrollWheelEvent2(null, CGScrollEventUnit::LINE, 1, 1, 0, 0);
    $event->setLocation(new NSPoint(50.0, 60.0));

    expect($event->getLocation())->toEqual(new NSPoint(50.0, 60.0));
});

it('makes events from the event source it is given', function (): void {
    $source = CGEventSource::create(CGEventSourceStateID::HID_SYSTEM_STATE);

    expect(CGEvent::createMouseEvent($source, CGEventType::MOUSE_MOVED, new NSPoint(1.0, 2.0), CGMouseButton::LEFT))->toBeInstanceOf(CGEvent::class)
        ->and(CGEvent::createScrollWheelEvent2($source, CGScrollEventUnit::LINE, 1, 1, 0, 0))->toBeInstanceOf(CGEvent::class)
        ->and((string) (new ReflectionMethod(CGEvent::class, 'createMouseEvent'))->getParameters()[0]->getType())->toBe('?CGEventSource')
        ->and((string) (new ReflectionMethod(CGEvent::class, 'createScrollWheelEvent2'))->getParameters()[0]->getType())->toBe('?CGEventSource')
        ->and(fn () => CGEvent::createMouseEvent(CFData::create(null, 'x', 1), CGEventType::MOUSE_MOVED, new NSPoint(0.0, 0.0), CGMouseButton::LEFT))
        ->toThrow(TypeError::class);
});

it('passes any wheel count to Quartz, which makes no event for 0 and one for 4', function (): void {
    expect(CGEvent::createScrollWheelEvent2(null, CGScrollEventUnit::LINE, 0, 1, 0, 0))->toBeNull()
        ->and(CGEvent::createScrollWheelEvent2(null, CGScrollEventUnit::LINE, 4, 1, 0, 0))->toBeInstanceOf(CGEvent::class);
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

it('creates an event source for a state', function (): void {
    $source = CGEventSource::create(CGEventSourceStateID::HID_SYSTEM_STATE);

    expect($source)->toBeInstanceOf(CGEventSource::class)
        ->and($source->copyDescription())->toContain('CGEventSource')
        ->and(method_exists(CFType::class, 'description'))->toBeFalse();
});

it('takes a key code within an unsigned short', function (): void {
    expect(fn () => CGEventSource::keyState(CGEventSourceStateID::COMBINED_SESSION_STATE, 70000))->toThrow(ValueError::class);
});
