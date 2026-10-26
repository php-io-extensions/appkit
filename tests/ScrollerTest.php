<?php

declare(strict_types=1);

beforeEach(function (): void {
    $this->app = NSApplication::sharedApplication();
});

function scrollerClick(NSApplication $app, NSWindow $window, NSPoint $at): void
{
    $make = static fn (NSEventType $type, float $pressure): NSEvent => NSEvent::mouseEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberClickCountPressure(
        $type, $at, 0, 0.0, $window->windowNumber(), null, 0, 1, $pressure,
    );
    // postEventAtStart(…, false) appends: the press goes first.
    $app->postEventAtStart($make(NSEventType::LEFT_MOUSE_DOWN, 1.0), false);
    $app->postEventAtStart($make(NSEventType::LEFT_MOUSE_UP, 0.0), false);
}

it('reads the preferred style and a width per style', function (): void {
    expect(NSScroller::preferredScrollerStyle())->toBeInstanceOf(NSScrollerStyle::class)
        ->and(NSScroller::scrollerWidthForControlSizeScrollerStyle(NSControlSize::REGULAR, NSScrollerStyle::LEGACY))->toBeGreaterThan(0.0)
        ->and(NSPreferredScrollerStyleDidChangeNotification)->toBe('NSPreferredScrollerStyleDidChangeNotification');
});

it('keeps its style and knob proportion, and hits no part before a click', function (): void {
    $scroller = NSScroller::initWithFrame(new NSRect(0.0, 0.0, 16.0, 220.0));
    $scroller->setScrollerStyle(NSScrollerStyle::OVERLAY);
    $scroller->setKnobProportion(0.2);

    expect($scroller->scrollerStyle())->toBe(NSScrollerStyle::OVERLAY)
        ->and($scroller->knobProportion())->toEqualWithDelta(0.2, 0.0001)
        ->and($scroller->hitPart())->toBe(NSScrollerPart::NO_PART);
});

it('calls its action with the page part on a track click and leaves the value', function (): void {
    $window = newWindow(200, 260);
    $scroller = NSScroller::initWithFrame(new NSRect(160.0, 20.0, 16.0, 220.0));
    $scroller->setScrollerStyle(NSScrollerStyle::LEGACY);
    $scroller->setEnabled(true);
    $scroller->setKnobProportion(0.2);
    $scroller->setDoubleValue(0.0);
    $parts = [];
    $target = new ObjCTarget(function () use ($scroller, &$parts): void {
        $parts[] = $scroller->hitPart();
    });
    $scroller->setTarget($target);
    $scroller->setAction(ObjCTarget::ACTION);
    $window->contentView()->addSubview($scroller);
    $window->makeKeyAndOrderFront(null);
    pumpFor($this->app, 0.3);

    // The knob sits at the top of the track (a scroller is flipped); window y 25 is near the bottom.
    scrollerClick($this->app, $window, new NSPoint(168.0, 25.0));
    pumpUntil($this->app, fn (): bool => $parts !== [], 2.0);

    expect($parts)->toContain(NSScrollerPart::INCREMENT_PAGE)
        ->and($scroller->doubleValue())->toBe(0.0);
    $window->close();
});

it('gives the knob and slot rects, and the part at a window point', function (): void {
    $window = newWindow(200, 260);
    $scroller = NSScroller::initWithFrame(new NSRect(160.0, 20.0, 16.0, 220.0));
    $scroller->setScrollerStyle(NSScrollerStyle::LEGACY);
    $scroller->setEnabled(true);
    $scroller->setKnobProportion(0.2);
    $scroller->setDoubleValue(0.5);
    $window->contentView()->addSubview($scroller);
    $window->makeKeyAndOrderFront(null);
    pumpFor($this->app, 0.3);

    $knob = $scroller->rectForPart(NSScrollerPart::KNOB);
    $slot = $scroller->rectForPart(NSScrollerPart::KNOB_SLOT);
    // The scroller is flipped: its y runs down from its top, which sits at window y 240.
    $center = new NSPoint(160.0 + $knob->x + $knob->width / 2, 240.0 - ($knob->y + $knob->height / 2));

    expect($knob->height)->toBeGreaterThan(0.0)
        ->and($knob->height)->toBeLessThan($slot->height)
        ->and($knob->y)->toBeGreaterThan($slot->y)
        ->and($scroller->testPart($center))->toBe(NSScrollerPart::KNOB)
        ->and($scroller->testPart(new NSPoint(168.0, 25.0)))->toBe(NSScrollerPart::INCREMENT_PAGE)
        ->and($scroller->testPart(new NSPoint(20.0, 100.0)))->toBe(NSScrollerPart::NO_PART);
    $window->close();
});
