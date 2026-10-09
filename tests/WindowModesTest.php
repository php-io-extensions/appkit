<?php

declare(strict_types=1);

beforeEach(function (): void {
    $this->app = NSApplication::sharedApplication();
    $this->app->finishLaunching();
});

it('limits and locks the content size', function (): void {
    $window = newWindow(400, 300);

    $window->setContentMinSize(new NSSize(200, 150));
    $window->setContentMaxSize(new NSSize(800, 600));
    $window->setContentAspectRatio(new NSSize(16, 9));

    expect($window->contentMinSize())->toEqual(new NSSize(200.0, 150.0))
        ->and($window->contentMaxSize())->toEqual(new NSSize(800.0, 600.0))
        ->and($window->contentAspectRatio())->toEqual(new NSSize(16.0, 9.0));

    $window->close();
});

it('moves and resizes its frame, and converts between frame and content rects', function (): void {
    $window = newWindow(400, 300);

    $window->setFrameOrigin(new NSPoint(120, 140));
    expect([$window->frame()->x, $window->frame()->y])->toBe([120.0, 140.0]);

    $frame = $window->frameRectForContentRect(new NSRect(50, 60, 640, 360));
    $window->setFrameDisplay($frame, false);

    expect($window->frame())->toEqual($frame)
        ->and($window->contentRectForFrameRect($window->frame()))->toEqual(new NSRect(50.0, 60.0, 640.0, 360.0))
        ->and($window->contentView()->frame()->width)->toBe(640.0)
        ->and($frame->height)->toBeGreaterThan(360.0);

    $window->close();
});

it('converts a rect to backing pixels by its scale factor', function (): void {
    $window = newWindow(400, 300);
    $scale = $window->backingScaleFactor();

    expect($window->convertRectToBacking(new NSRect(0, 0, 100, 50)))->toEqual(new NSRect(0.0, 0.0, 100 * $scale, 50 * $scale));

    $window->close();
});

it('sets and reads the style mask', function (): void {
    $window = newWindow();

    $window->setStyleMask(NSWindowStyleMask::BORDERLESS);
    expect($window->styleMask())->toBe(0);

    $window->setStyleMask(NSWindowStyleMask::TITLED->value | NSWindowStyleMask::RESIZABLE->value);
    expect($window->styleMask())->toBe(NSWindowStyleMask::TITLED->value | NSWindowStyleMask::RESIZABLE->value);

    $window->close();
});

it('zooms to fill its screen and back', function (): void {
    $window = newWindow(300, 200);
    $window->makeKeyAndOrderFront(null);

    $window->zoom(null);
    expect(pumpUntil($this->app, fn (): bool => $window->isZoomed(), 2.0))->toBeTrue();

    $window->zoom(null);
    expect(pumpUntil($this->app, fn (): bool => ! $window->isZoomed(), 2.0))->toBeTrue();

    $window->close();
});

it('miniaturizes to the Dock and back', function (): void {
    $window = newWindow();
    $window->makeKeyAndOrderFront(null);
    pumpFor($this->app, 0.2);

    $window->miniaturize(null);
    expect(pumpUntil($this->app, fn (): bool => $window->isMiniaturized(), 3.0))->toBeTrue();

    $window->deminiaturize(null);
    expect(pumpUntil($this->app, fn (): bool => ! $window->isMiniaturized(), 3.0))->toBeTrue();

    $window->close();
});

it('enters and leaves native full screen, telling its delegate', function (): void {
    $window = newWindow();
    $window->setCollectionBehavior(NSWindowCollectionBehavior::FULL_SCREEN_PRIMARY);
    $calls = [];
    $delegate = new ObjCDelegate('NSWindowDelegate');
    $delegate->on('windowDidEnterFullScreen:', function () use (&$calls): void { $calls[] = 'enter'; });
    $delegate->on('windowDidExitFullScreen:', function () use (&$calls): void { $calls[] = 'exit'; });
    $window->setDelegate($delegate);
    $window->makeKeyAndOrderFront(null);
    pumpFor($this->app, 0.3);

    $window->toggleFullScreen(null);
    expect(pumpUntil($this->app, function () use (&$calls): bool { return $calls === ['enter']; }, 5.0))->toBeTrue()
        ->and($window->styleMask() & NSWindowStyleMask::FULL_SCREEN->value)->toBe(NSWindowStyleMask::FULL_SCREEN->value);

    $window->toggleFullScreen(null);
    expect(pumpUntil($this->app, function () use (&$calls): bool { return $calls === ['enter', 'exit']; }, 5.0))->toBeTrue()
        ->and($window->styleMask() & NSWindowStyleMask::FULL_SCREEN->value)->toBe(0);

    $window->setDelegate(null);
    $window->close();
});

it('sets the collection behavior from cases or bits', function (): void {
    $window = newWindow();

    $window->setCollectionBehavior(NSWindowCollectionBehavior::FULL_SCREEN_PRIMARY->value | NSWindowCollectionBehavior::MANAGED->value);
    expect($window->collectionBehavior())->toBe(NSWindowCollectionBehavior::FULL_SCREEN_PRIMARY->value | NSWindowCollectionBehavior::MANAGED->value);

    $window->setCollectionBehavior(NSWindowCollectionBehavior::FULL_SCREEN_NONE);
    expect($window->collectionBehavior())->toBe(NSWindowCollectionBehavior::FULL_SCREEN_NONE->value);

    $window->close();
});

it('raises its level, up to the shield above a captured display', function (): void {
    $window = newWindow();

    expect($window->level())->toBe(NSNormalWindowLevel);

    foreach ([NSFloatingWindowLevel, NSStatusWindowLevel, NSScreenSaverWindowLevel, CGDisplay::shieldingWindowLevel()] as $level) {
        $window->setLevel($level);
        expect($window->level())->toBe($level);
    }

    expect([NSNormalWindowLevel, NSFloatingWindowLevel, NSSubmenuWindowLevel, NSTornOffMenuWindowLevel, NSMainMenuWindowLevel, NSStatusWindowLevel, NSModalPanelWindowLevel, NSPopUpMenuWindowLevel, NSScreenSaverWindowLevel])
        ->toBe([0, 3, 3, 3, 24, 25, 8, 101, 1000]);

    $window->close();
});

it('answers the screen it is on once shown', function (): void {
    $window = newWindow();
    $window->makeKeyAndOrderFront(null);

    expect($window->screen())->toBeInstanceOf(NSScreen::class);

    $window->close();
});

it('goes see-through, shadowless, title-free and click-through', function (): void {
    $window = newWindow();
    $clear = NSColor::colorWithRedGreenBlueAlpha(0.0, 0.0, 0.0, 0.0);

    $window->setOpaque(false);
    $window->setBackgroundColor($clear);
    $window->setHasShadow(false);
    $window->setTitlebarAppearsTransparent(true);
    $window->setTitleVisibility(NSWindowTitleVisibility::HIDDEN);
    $window->setIgnoresMouseEvents(true);
    $window->setMovableByWindowBackground(true);

    expect($window->isOpaque())->toBeFalse()
        ->and($window->backgroundColor()->alphaComponent())->toBe(0.0)
        ->and($window->hasShadow())->toBeFalse()
        ->and($window->titlebarAppearsTransparent())->toBeTrue()
        ->and($window->titleVisibility())->toBe(NSWindowTitleVisibility::HIDDEN)
        ->and($window->ignoresMouseEvents())->toBeTrue()
        ->and($window->isMovableByWindowBackground())->toBeTrue();

    $window->setOpaque(true);
    $window->setBackgroundColor(null);
    $window->setTitleVisibility(NSWindowTitleVisibility::VISIBLE);
    expect($window->isOpaque())->toBeTrue()
        ->and($window->backgroundColor())->toBeInstanceOf(NSColor::class)
        ->and($window->titleVisibility())->toBe(NSWindowTitleVisibility::VISIBLE);

    $window->close();
});

it('reports itself visible to the occlusion state once on screen, and orders front', function (): void {
    $window = newWindow();
    expect($window->occlusionState() & NSWindowOcclusionState::VISIBLE->value)->toBe(0);

    $window->orderFront(null);
    expect($window->isVisible())->toBeTrue()
        ->and(pumpUntil($this->app, fn (): bool => ($window->occlusionState() & NSWindowOcclusionState::VISIBLE->value) !== 0, 2.0))->toBeTrue();

    $window->close();
});

it('sets and reads the window\'s alpha', function (): void {
    $window = newWindow();

    $window->setAlphaValue(0.5);

    expect($window->alphaValue())->toBe(0.5);
    $window->close();
});

it('reports the content view\'s safe area inside its bounds', function (): void {
    $window = newWindow(320, 200);
    $area = $window->contentView()->safeAreaRect();

    expect($area)->toBeInstanceOf(NSRect::class)
        ->and($area->width)->toBeLessThanOrEqual(320.0)->toBeGreaterThan(0.0)
        ->and($area->height)->toBeLessThanOrEqual(200.0)->toBeGreaterThan(0.0);
    $window->close();
});
