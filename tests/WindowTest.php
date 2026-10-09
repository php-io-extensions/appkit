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
    $rect = new NSRect();
    unset($rect->width);

    expect(fn () => NSWindow::initWithContentRectStyleMaskBackingDefer($rect, 0, NSBackingStoreType::BUFFERED, false))->toThrow(ValueError::class);
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
