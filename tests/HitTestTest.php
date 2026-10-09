<?php

declare(strict_types=1);

it('hit-tests the innermost subview at a point in the superview, and converts points between views', function (): void {
    $outer = NSView::initWithFrame(new NSRect(0, 0, 200, 100));
    $inner = NSView::initWithFrame(new NSRect(20, 10, 50, 30));
    $outer->addSubview($inner);

    $hit = $outer->hitTest(new NSPoint(30, 20));
    $miss = $outer->hitTest(new NSPoint(150, 80));
    $local = $inner->convertPointFromView(new NSPoint(30, 20), $outer);

    expect($hit)->toBe($inner)
        ->and($miss)->toBe($outer)
        ->and($outer->hitTest(new NSPoint(500, 500)))->toBeNull()
        ->and([$local->x, $local->y])->toBe([10.0, 10.0])
        ->and($inner->isFlipped())->toBeFalse();
});

it('makes a mouse event and reads its button number', function (): void {
    $right = NSEvent::mouseEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberClickCountPressure(
        NSEventType::RIGHT_MOUSE_DOWN, new NSPoint(5, 6), NSEventModifierFlags::CONTROL, 0.0, 0, null, 0, 1, 1.0,
    );

    expect($right->type())->toBe(NSEventType::RIGHT_MOUSE_DOWN)
        ->and([$right->locationInWindow()->x, $right->locationInWindow()->y])->toBe([5.0, 6.0])
        ->and($right->modifierFlags() & NSEventModifierFlags::CONTROL->value)->toBe(NSEventModifierFlags::CONTROL->value)
        // mouseEventWithType: has no button field: AppKit reports 0 for a made event; a real right press reads 1.
        ->and($right->buttonNumber())->toBe(0);
});
