<?php

declare(strict_types=1);

beforeEach(function (): void {
    $this->app = NSApplication::sharedApplication();
    $this->app->finishLaunching();
});

/** $bytes of zeroed memory that stays put, and its address: a stand-in for an ext-fb buffer. */
function pinnedBytes(int $bytes): array
{
    $ffi = FFI::cdef();
    $memory = $ffi->new("uint8_t[{$bytes}]", false);

    return [$memory, $ffi->cast('uintptr_t', FFI::addr($memory))->cdata];
}

/** A width x height RGBX image over the memory at $address, rows $stride bytes apart. */
function imageAt(int $address, int $size, int $width, int $height, int $stride): ?CGImage
{
    return CGImage::create($width, $height, 8, 32, $stride, CGColorSpace::createWithName(kCGColorSpaceSRGB),
        kCGImageAlphaNoneSkipLast | kCGBitmapByteOrder32Big, CGDataProvider::createDirect($address, $size), false, kCGRenderingIntentDefault);
}

it('reads an image straight from memory it does not copy', function (): void {
    [$memory, $address] = pinnedBytes(16 * 4 * 8);
    $image = imageAt($address, 16 * 4 * 8, 16, 8, 16 * 4);

    expect(CGDataProvider::createDirect($address, 64))->toBeInstanceOf(CGDataProvider::class)
        ->and([$image->getWidth(), $image->getHeight()])->toBe([16, 8]);

    FFI::free($memory);
});

it('describes a sub-rect of a frame by its stride, the last row without the padding', function (): void {
    // A 4x2 rect at (2, 1) inside a 16-wide frame: 64-byte rows, the rect ends 16 bytes into its last row.
    [$memory, $address] = pinnedBytes(16 * 4 * 8);
    $offset = 1 * 64 + 2 * 4;

    $rect = imageAt($address + $offset, 64 + 16, 4, 2, 64);

    expect([$rect->getWidth(), $rect->getHeight()])->toBe([4, 2])
        ->and(fn () => imageAt($address + $offset, 64 + 15, 4, 2, 64))->toThrow(ValueError::class, 'must provide 80 bytes for that description, it holds 79');

    FFI::free($memory);
});

it('refuses a provider over no memory', function (): void {
    expect(fn () => CGDataProvider::createDirect(0, 16))->toThrow(ValueError::class, 'must not be a null address')
        ->and(fn () => CGDataProvider::createDirect(1024, 0))->toThrow(ValueError::class, 'must be the byte count at the address');
});

it('cuts a rect out of an image, and answers null outside it', function (): void {
    $image = CGImage::create(4, 4, 8, 32, 16, CGColorSpace::createWithName(kCGColorSpaceSRGB), kCGImageAlphaNoneSkipLast | kCGBitmapByteOrder32Big,
        CGDataProvider::createWithCFData(CFData::create(str_repeat("\x10\x20\x30\xff", 16))), false, kCGRenderingIntentDefault);
    $part = CGImage::createWithImageInRect($image, new NSRect(1, 1, 2, 3));

    expect([$part->getWidth(), $part->getHeight()])->toBe([2, 3])
        ->and(CGImage::createWithImageInRect($image, new NSRect(10, 10, 2, 2)))->toBeNull();
});

it('asks the draw view for only the rect marked dirty, inside its graphics context', function (): void {
    $window = newWindow(200, 100);
    $calls = [];
    $view = ObjCDrawView::initWithFrameDraw(new NSRect(0, 0, 200, 100), function (ObjCDrawView $drawn, NSRect $dirty) use (&$calls, &$view): void {
        $context = NSGraphicsContext::currentContext();
        $calls[] = [$drawn === $view, $dirty, $context?->CGContext() instanceof CGContext];
    });
    $view->setLayerContentsRedrawPolicy(NSViewLayerContentsRedrawPolicy::ON_SET_NEEDS_DISPLAY);
    $window->setContentView($view);
    $window->makeKeyAndOrderFront(null);
    pumpFor($this->app, 0.2);
    $view->displayIfNeeded();
    $calls = [];

    $view->setNeedsDisplayInRect(new NSRect(20, 10, 30, 40));
    $view->displayIfNeeded();

    expect($view)->toBeInstanceOf(NSView::class)
        ->and($view->layerContentsRedrawPolicy())->toBe(NSViewLayerContentsRedrawPolicy::ON_SET_NEEDS_DISPLAY)
        ->and($calls)->toHaveCount(1)
        ->and($calls[0][0])->toBeTrue()
        ->and($calls[0][1])->toEqual(new NSRect(20.0, 10.0, 30.0, 40.0))
        ->and($calls[0][2])->toBeTrue();

    $window->close();
});

it('draws a dirty rect from memory through the context, nearest-neighbour', function (): void {
    [$memory, $address] = pinnedBytes(64 * 4 * 32);
    $window = newWindow(64, 32);
    $drawn = null;
    $view = ObjCDrawView::initWithFrameDraw(new NSRect(0, 0, 64, 32), function (ObjCDrawView $view, NSRect $dirty) use ($address, &$drawn): void {
        $context = NSGraphicsContext::currentContext()->CGContext();
        $context->saveGState();
        $context->clipToRect($dirty);
        $context->setInterpolationQuality(CGInterpolationQuality::NONE);
        $quality = $context->getInterpolationQuality();
        $context->translateCTM(0.0, 32.0);
        $context->scaleCTM(1.0, -1.0);
        $context->drawImage(new NSRect(0, 0, 64, 32), imageAt($address, 64 * 4 * 32, 64, 32, 64 * 4));
        $context->restoreGState();
        $drawn = [$dirty, $quality];
    });
    $window->setContentView($view);
    $window->makeKeyAndOrderFront(null);
    pumpFor($this->app, 0.2);

    $view->setNeedsDisplayInRect(new NSRect(8, 8, 16, 8));
    $view->displayIfNeeded();

    expect($drawn[0])->toEqual(new NSRect(8.0, 8.0, 16.0, 8.0))
        ->and($drawn[1])->toBe(CGInterpolationQuality::NONE);

    $window->close();
    FFI::free($memory);
});

it('measures a view and converts it to backing pixels', function (): void {
    $window = newWindow(120, 80);
    $view = $window->contentView();
    $scale = $window->backingScaleFactor();

    expect($view->bounds())->toEqual(new NSRect(0.0, 0.0, 120.0, 80.0))
        ->and($view->convertRectToBacking(new NSRect(0, 0, 120, 80)))->toEqual(new NSRect(0.0, 0.0, 120 * $scale, 80 * $scale))
        ->and($view->convertSizeToBacking(new NSSize(10, 20)))->toEqual(new NSSize(10 * $scale, 20 * $scale));

    $window->close();
});
