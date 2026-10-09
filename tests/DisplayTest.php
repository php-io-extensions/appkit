<?php

declare(strict_types=1);

it('finds the main display among the active ones', function (): void {
    $main = CGDisplay::mainDisplayID();

    expect($main)->toBeGreaterThan(0)
        ->and(CGDisplay::getActiveDisplayList())->toContain($main)
        ->and(count(CGDisplay::getActiveDisplayList()))->toBe(count(NSScreen::screens()));
});

it('answers the display bounds the menu-bar screen has', function (): void {
    $bounds = CGDisplay::bounds(CGDisplay::mainDisplayID());
    $frame = NSScreen::screens()[0]->frame();

    expect([$bounds->width, $bounds->height])->toBe([$frame->width, $frame->height]);
});

it('reads the current mode, and lists it among every mode', function (): void {
    $display = CGDisplay::mainDisplayID();
    $current = CGDisplay::copyDisplayMode($display);
    $modes = CGDisplay::copyAllDisplayModes($display, [kCGDisplayShowDuplicateLowResolutionModes => true]);
    $sizes = array_map(fn (CGDisplayMode $mode): array => [$mode->getWidth(), $mode->getHeight()], $modes);

    expect($current)->toBeInstanceOf(CGDisplayMode::class)
        ->and($current)->toBeInstanceOf(CFType::class)
        ->and($current->getWidth())->toBe((int) CGDisplay::bounds($display)->width)
        ->and($current->getPixelWidth())->toBeGreaterThanOrEqual($current->getWidth())
        ->and($current->getPixelHeight())->toBeGreaterThanOrEqual($current->getHeight())
        ->and($current->getRefreshRate())->toBeGreaterThanOrEqual(0.0)
        ->and($current->isUsableForDesktopGUI())->toBeTrue()
        ->and($modes)->not->toBeEmpty()
        ->and($sizes)->toContain([$current->getWidth(), $current->getHeight()])
        ->and(count(CGDisplay::copyAllDisplayModes($display)))->toBeLessThanOrEqual(count($modes))
        ->and(kCGDisplayShowDuplicateLowResolutionModes)->toBe('kCGDisplayResolution');
});

it('sets the mode the display already runs, a change of nothing', function (): void {
    $display = CGDisplay::mainDisplayID();
    $current = CGDisplay::copyDisplayMode($display);

    CGDisplay::setDisplayMode($display, $current);

    expect(CGDisplay::copyDisplayMode($display)->getWidth())->toBe($current->getWidth());
});

it('captures the display and releases it', function (): void {
    $display = CGDisplay::mainDisplayID();

    CGDisplay::capture($display);
    CGDisplay::release($display);

    expect(CGDisplay::shieldingWindowLevel())->toBeGreaterThan(NSScreenSaverWindowLevel);
});

it('turns a CGError into an AppKitException, and refuses an id that is no display id', function (): void {
    $mode = CGDisplay::copyDisplayMode(CGDisplay::mainDisplayID());

    expect(fn () => CGDisplay::release(0xFFFFFFF0))->toThrow(AppKitException::class, 'CGDisplayRelease failed with CGError 1001')
        ->and(fn () => CGDisplay::setDisplayMode(0xFFFFFFF0, $mode))->toThrow(AppKitException::class, 'CGDisplaySetDisplayMode failed with CGError 1000')
        ->and(CGDisplay::copyDisplayMode(0xFFFFFFF0))->toBeNull()
        ->and(fn () => CGDisplay::bounds(-1))->toThrow(ValueError::class, 'must be a CGDirectDisplayID')
        ->and(fn () => CGDisplay::copyDisplayMode(0x1_0000_0000))->toThrow(ValueError::class, 'must be a CGDirectDisplayID');
});
