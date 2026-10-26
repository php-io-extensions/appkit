<?php

declare(strict_types=1);

beforeEach(function (): void {
    $this->app = NSApplication::sharedApplication();
});

it('makes a tracking area and reads its rect, options and owner', function (): void {
    $view = NSView::initWithFrame(new NSRect(0.0, 0.0, 100.0, 50.0));
    $options = NSTrackingAreaOptions::MOUSE_ENTERED_AND_EXITED->value | NSTrackingAreaOptions::MOUSE_MOVED->value
        | NSTrackingAreaOptions::ACTIVE_IN_ACTIVE_APP->value | NSTrackingAreaOptions::IN_VISIBLE_RECT->value;

    $area = NSTrackingArea::initWithRectOptionsOwnerUserInfo(new NSRect(0.0, 0.0, 0.0, 0.0), $options, $view, null);

    expect($area)->toBeInstanceOf(NSTrackingArea::class)
        ->and($area->options())->toBe($options)
        ->and($area->owner())->toBe($view)
        ->and($area->rect()->width)->toBe(0.0);
});

it('installs and removes a tracking area on a view', function (): void {
    $window = newWindow();
    $view = NSView::initWithFrame(new NSRect(10.0, 10.0, 100.0, 50.0));
    $window->contentView()->addSubview($view);
    $area = NSTrackingArea::initWithRectOptionsOwnerUserInfo(new NSRect(0.0, 0.0, 100.0, 50.0), NSTrackingAreaOptions::MOUSE_ENTERED_AND_EXITED->value | NSTrackingAreaOptions::ACTIVE_ALWAYS->value, $view, null);

    $view->addTrackingArea($area);
    $view->removeTrackingArea($area);

    expect(true)->toBeTrue();
    $window->close();
});

it('reads the gesture and momentum phases of a scroll', function (): void {
    $scroll = CGEvent::createScrollWheelEvent2(null, CGScrollEventUnit::PIXEL, 1, 4, 0, 0);
    $scroll->setIntegerValueField(99, 1);
    $scroll->setIntegerValueField(123, 0);
    $event = NSEvent::eventWithCGEvent($scroll);

    expect($event->phase())->toBe(NSEventPhase::BEGAN)
        ->and($event->momentumPhase())->toBe(NSEventPhase::NONE);
});

it('lets AppKit refuse a tracking area on an event that has none', function (): void {
    $key = NSEvent::eventWithCGEvent(CGEvent::createKeyboardEvent(null, 0, true));

    expect(fn () => $key->trackingArea())->toThrow(AppKitException::class, 'Invalid message sent to event');
});
