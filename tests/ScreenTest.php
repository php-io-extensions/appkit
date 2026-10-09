<?php

declare(strict_types=1);

beforeEach(function (): void {
    NSApplication::sharedApplication()->finishLaunching();
});

it('lists its screens, the menu-bar screen first', function (): void {
    $screens = NSScreen::screens();

    expect($screens)->not->toBeEmpty()
        ->and($screens)->each->toBeInstanceOf(NSScreen::class)
        ->and(NSScreen::mainScreen())->toBeInstanceOf(NSScreen::class)
        ->and($screens[0]->frame()->x)->toBe(0.0)
        ->and($screens[0]->frame()->y)->toBe(0.0);
});

it('describes a screen: frame, visible frame, scale, refresh, name, EDR', function (): void {
    $screen = NSScreen::screens()[0];
    $frame = $screen->frame();
    $visible = $screen->visibleFrame();

    expect($frame->width)->toBeGreaterThan(0.0)
        ->and($visible->width)->toBeLessThanOrEqual($frame->width)
        ->and($visible->height)->toBeLessThan($frame->height)
        ->and($screen->backingScaleFactor())->toBeGreaterThanOrEqual(1.0)
        ->and($screen->maximumFramesPerSecond())->toBeGreaterThan(0)
        ->and($screen->localizedName())->not->toBe('')
        ->and($screen->maximumExtendedDynamicRangeColorComponentValue())->toBeGreaterThanOrEqual(1.0)
        ->and($screen->maximumPotentialExtendedDynamicRangeColorComponentValue())->toBeGreaterThanOrEqual(1.0);
});

it('names its CGDirectDisplayID in the device description', function (): void {
    $description = NSScreen::screens()[0]->deviceDescription();

    expect($description['NSScreenNumber'])->toBe(CGDisplay::mainDisplayID())
        ->and($description['NSDeviceSize'])->toBeInstanceOf(NSSize::class)
        ->and($description['NSDeviceResolution'])->toBeInstanceOf(NSSize::class);
});
