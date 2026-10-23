<?php

declare(strict_types=1);

beforeEach(function (): void {
    $this->app = NSApplication::sharedApplication();
    $this->app->finishLaunching();
});

it('creates a window with the rect, style and title it was given', function (): void {
    $window = newWindow(400, 300);
    $window->setTitle('Probe');

    expect($window)->toBeInstanceOf(NSWindow::class)
        ->and($window->title())->toBe('Probe')
        ->and($window->isReleasedWhenClosed())->toBeFalse()
        ->and($window->styleMask() & NSWindowStyleMask::CLOSABLE->value)->toBe(NSWindowStyleMask::CLOSABLE->value)
        ->and($window->contentView())->toBeInstanceOf(NSView::class)
        ->and($window->contentView()->frame())->toEqual(new NSRect(0.0, 0.0, 400.0, 300.0))
        ->and($window->contentView()->window())->toBe($window)
        ->and($window->windowNumber())->toBeInt();

    $window->setContentSize(new NSSize(500, 250));
    expect($window->contentView()->frame())->toEqual(new NSRect(0.0, 0.0, 500.0, 250.0));

    $window->close();
});

it('answers whether it can become key and main by its style', function (): void {
    $titled = newWindow();
    $borderless = NSWindow::initWithContentRectStyleMaskBackingDefer(new NSRect(0.0, 0.0, 100.0, 100.0), NSWindowStyleMask::BORDERLESS->value, NSBackingStoreType::BUFFERED, false);
    $borderless->setReleasedWhenClosed(false);

    // AppKit answers main only for a visible window.
    expect([$titled->canBecomeKeyWindow(), $titled->canBecomeMainWindow()])->toBe([true, false])
        ->and([$borderless->canBecomeKeyWindow(), $borderless->canBecomeMainWindow()])->toBe([false, false]);

    $titled->makeKeyAndOrderFront(null);
    expect($titled->canBecomeMainWindow())->toBeTrue();

    $titled->close();
    $borderless->close();
});

it('shows, orders out and closes', function (): void {
    $window = newWindow();

    $window->makeKeyAndOrderFront(null);
    expect($window->isVisible())->toBeTrue()
        ->and($this->app->windows())->toContain($window);

    $window->orderOut(null);
    expect($window->isVisible())->toBeFalse();

    $window->makeKeyAndOrderFront(null);
    $window->close();
    expect($window->isVisible())->toBeFalse();
});

it('asks its delegate, through PHP, before and while closing', function (): void {
    $window = newWindow();
    $calls = [];
    $delegate = new ObjCDelegate('NSWindowDelegate');
    $delegate->on('windowShouldClose:', function (NSWindow $sender) use (&$calls, $window): bool {
        $calls[] = ['should', $sender === $window];

        return count($calls) > 1;
    });
    $delegate->on('windowWillClose:', function (NSObject $notification) use (&$calls): void {
        $calls[] = ['will', $notification->className()];
    });
    $window->setDelegate($delegate);
    $window->makeKeyAndOrderFront(null);

    $window->performClose(null);
    expect($window->isVisible())->toBeTrue();

    $window->performClose(null);
    expect($window->isVisible())->toBeFalse()
        ->and($calls)->toBe([['should', true], ['should', true], ['will', 'NSConcreteNotification']]);

    expect($window->delegate())->toBe($delegate);
});

it('refuses a window rect with an unset property', function (): void {
    $rect = new NSRect(0.0, 0.0, 320.0, 200.0);
    unset($rect->width);

    expect(fn () => NSWindow::initWithContentRectStyleMaskBackingDefer($rect, 0, NSBackingStoreType::BUFFERED, false))->toThrow(ValueError::class);
});

it('takes every NSRect and NSSize field', function (): void {
    expect(fn () => new NSRect(0.0, 0.0))->toThrow(ArgumentCountError::class)
        ->and(fn () => new NSSize(1.0))->toThrow(ArgumentCountError::class)
        ->and((new ReflectionProperty(NSRect::class, 'width'))->hasDefaultValue())->toBeFalse()
        ->and((new ReflectionProperty(NSSize::class, 'height'))->hasDefaultValue())->toBeFalse();
});

it('takes a colour space from Core Graphics and gives a window its own', function (): void {
    $window = NSWindow::initWithContentRectStyleMaskBackingDefer(new NSRect(0.0, 0.0, 64.0, 64.0), NSWindowStyleMask::TITLED->value, NSBackingStoreType::BUFFERED, false);
    $window->setReleasedWhenClosed(false);
    $extended = NSColorSpace::initWithCGColorSpace(CGColorSpace::createWithName('kCGColorSpaceExtendedLinearSRGB'));

    $window->setColorSpace($extended);
    $named = $window->colorSpace()?->localizedName();
    $window->setColorSpace(NSColorSpace::displayP3ColorSpace());
    $p3 = $window->colorSpace()?->localizedName();
    $window->setColorSpace(null);

    expect($extended)->toBeInstanceOf(NSColorSpace::class)
        ->and($named)->toBe($extended->localizedName())
        ->and($p3)->toBe(NSColorSpace::displayP3ColorSpace()->localizedName())
        ->and(NSColorSpace::sRGBColorSpace()->localizedName())->not->toBe($p3);
    $window->close();
});

it('switches moved events on and off', function (): void {
    $window = newWindow();

    $window->setAcceptsMouseMovedEvents(true);
    $on = $window->acceptsMouseMovedEvents();
    $window->setAcceptsMouseMovedEvents(false);

    expect([$on, $window->acceptsMouseMovedEvents()])->toBe([true, false]);

    $window->close();
});

it('finds the window at a screen point once it is on screen', function (): void {
    // Another app's window over ours would answer instead: the test app comes to the front first.
    $app = NSApplication::sharedApplication();
    $app->setActivationPolicy(NSApplicationActivationPolicy::REGULAR);
    $app->activateIgnoringOtherApps(true);
    $window = newWindow();
    $window->setFrameOrigin(new NSPoint(240.0, 240.0));
    $window->makeKeyAndOrderFront(null);
    $content = $window->contentRectForFrameRect($window->frame());
    $centre = new NSPoint($content->x + $content->width / 2, $content->y + $content->height / 2);

    $found = pumpUntil($app, fn (): bool => NSWindow::windowNumberAtPointBelowWindowWithWindowNumber($centre, 0) === $window->windowNumber(), 3.0);
    $below = NSWindow::windowNumberAtPointBelowWindowWithWindowNumber($centre, $window->windowNumber());

    expect($found)->toBeTrue()
        ->and($below)->not->toBe($window->windowNumber());

    $window->close();
});

it('makes a view the first responder, and the window itself again', function (): void {
    $window = newWindow();
    $field = NSTextField::textFieldWithString('hello');
    $window->contentView()->addSubview($field);

    $made = $window->makeFirstResponder($field);
    $responder = $window->firstResponder();
    $back = $window->makeFirstResponder(null);

    expect($made)->toBeTrue()
        ->and($responder)->toBeInstanceOf(NSResponder::class)
        ->and($responder)->not->toBe($window)
        ->and($back)->toBeTrue()
        ->and($window->firstResponder())->toBe($window);

    $window->close();
});

it('attaches a sheet and ends it', function (): void {
    $parent = newWindow(400, 300);
    $sheet = newWindow(200, 100);
    $parent->makeKeyAndOrderFront(null);
    $parent->beginSheetCompletionHandler($sheet, null);
    pumpFor($this->app, 0.6);

    expect($parent->attachedSheet())->toBe($sheet)
        ->and($parent->sheets())->toBe([$sheet])
        ->and($sheet->sheetParent())->toBe($parent);

    $parent->endSheet($sheet);
    pumpFor($this->app, 0.6);

    expect($parent->attachedSheet())->toBeNull()
        ->and($parent->sheets())->toBe([]);

    $parent->close();
});

it('calls the completion handler with the return code', function (): void {
    $parent = newWindow(400, 300);
    $sheet = newWindow(200, 100);
    $codes = [];
    $parent->makeKeyAndOrderFront(null);
    $parent->beginSheetCompletionHandler($sheet, function (int $code) use (&$codes): void {
        $codes[] = $code;
    });
    pumpFor($this->app, 0.6);
    $parent->endSheetReturnCode($sheet, 1000);
    pumpFor($this->app, 0.6);

    expect($codes)->toBe([1000]);

    $parent->close();
});
