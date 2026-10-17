<?php

declare(strict_types=1);

it('finds the main display among the active ones', function (): void {
    $main = CGDisplay::mainDisplayID();

    $countError = CGDisplay::getActiveDisplayList(0, $none, $count);
    $listError = CGDisplay::getActiveDisplayList($count, $displays, $listed);

    expect($main)->toBeGreaterThan(0)
        ->and([$countError, $listError])->toBe([kCGErrorSuccess, kCGErrorSuccess])
        ->and($none)->toBe([])
        ->and($count)->toBe(count(NSScreen::screens()))
        ->and($listed)->toBe($count)
        ->and($displays)->toContain($main)
        ->and($displays)->toHaveCount($count);
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

    expect(CGDisplay::setDisplayMode($display, $current, null))->toBe(kCGErrorSuccess)
        ->and(CGDisplay::copyDisplayMode($display)->getWidth())->toBe($current->getWidth());
});

it('captures the display and releases it', function (): void {
    $display = CGDisplay::mainDisplayID();

    $captured = CGDisplay::capture($display);
    $released = CGDisplay::release($display);

    expect([$captured, $released])->toBe([kCGErrorSuccess, kCGErrorSuccess])
        ->and(CGDisplay::shieldingWindowLevel())->toBeGreaterThan(NSScreenSaverWindowLevel);
});

it('answers Core Graphics\' CGError, and refuses an id that is no display id', function (): void {
    $mode = CGDisplay::copyDisplayMode(CGDisplay::mainDisplayID());

    expect(CGDisplay::release(0xFFFFFFF0))->toBe(kCGErrorIllegalArgument)
        ->and(CGDisplay::setDisplayMode(0xFFFFFFF0, $mode, []))->toBe(kCGErrorFailure)
        ->and(CGDisplay::setDisplayMode(CGDisplay::mainDisplayID(), null, null))->toBe(kCGErrorFailure)
        ->and(CGDisplay::copyDisplayMode(0xFFFFFFF0))->toBeNull()
        ->and(fn () => CGDisplay::bounds(-1))->toThrow(ValueError::class, 'must be a CGDirectDisplayID')
        ->and(fn () => CGDisplay::copyDisplayMode(0x1_0000_0000))->toThrow(ValueError::class, 'must be a CGDirectDisplayID');
});
