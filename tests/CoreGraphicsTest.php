<?php

declare(strict_types=1);

/** A width x height image over RGBA bytes, alpha ignored: what a framebuffer's RGBA8 dump becomes. */
function rgbx(int $width, int $height, string $bytes): ?CGImage
{
    return CGImage::create($width, $height, 8, 32, $width * 4, CGColorSpace::createWithName(kCGColorSpaceSRGB),
        kCGImageAlphaNoneSkipLast | kCGBitmapByteOrder32Big, CGDataProvider::createWithCFData(CFData::create(null, $bytes, strlen($bytes))), null, false, kCGRenderingIntentDefault);
}

it('copies bytes into a CFData', function (): void {
    $data = CFData::create(null, "\x01\x02\x03\x00\x05", 5);

    expect($data)->toBeInstanceOf(CFType::class)
        ->and($data->getLength())->toBe(5)
        ->and(CFData::create(null, '', 0)->getLength())->toBe(0)
        ->and(CFData::create(CFAllocator::getDefault(), 'abcd', 2)->getLength())->toBe(2)
        ->and((string) (new ReflectionMethod(CFData::class, 'create'))->getParameters()[0]->getType())->toBe('?CFAllocator')
        ->and($data->pointer())->not->toBe(0);
});

it('names colour spaces, and answers null for a name there is none for', function (): void {
    expect(CGColorSpace::createWithName(kCGColorSpaceSRGB))->toBeInstanceOf(CGColorSpace::class)
        ->and(kCGColorSpaceSRGB)->toBe('kCGColorSpaceSRGB')
        ->and(CGColorSpace::createWithName('no such space'))->toBeNull();
});

it('makes an image from bytes', function (): void {
    $image = rgbx(3, 2, str_repeat("\xff\x80\x00\xff", 6));

    expect($image)->toBeInstanceOf(CGImage::class)
        ->and([$image->getWidth(), $image->getHeight()])->toBe([3, 2])
        ->and(CGDataProvider::createWithCFData(CFData::create(null, 'abcd', 4)))->toBeInstanceOf(CGDataProvider::class)
        ->and(CGDataProvider::createWithCFData(CFData::create(null, '', 0)))->toBeNull();
});

it('carries the Core Graphics values of its constants', function (): void {
    expect([kCGImageAlphaNone, kCGImageAlphaPremultipliedLast, kCGImageAlphaPremultipliedFirst, kCGImageAlphaLast, kCGImageAlphaFirst, kCGImageAlphaNoneSkipLast, kCGImageAlphaNoneSkipFirst])->toBe([0, 1, 2, 3, 4, 5, 6])
        ->and([kCGBitmapByteOrderDefault, kCGBitmapByteOrder32Little, kCGBitmapByteOrder32Big])->toBe([0, 2 << 12, 4 << 12])
        ->and(kCGRenderingIntentDefault)->toBe(0);
});

it('answers null for a description Core Graphics refuses', function (Closure $create): void {
    expect($create())->toBeNull();
})->with([
    'too few bytes' => [fn () => rgbx(3, 2, str_repeat('x', 23))],
    'no width' => [fn () => rgbx(0, 2, 'abcd')],
    'a negative width' => [fn () => rgbx(-1, 2, 'abcd')],
    'a row shorter than its pixels' => [fn () => CGImage::create(3, 2, 8, 32, 11, CGColorSpace::createWithName(kCGColorSpaceSRGB), kCGImageAlphaNoneSkipLast, CGDataProvider::createWithCFData(CFData::create(null, str_repeat('x', 24), 24)), null, false, 0)],
    'more bits a component than a pixel' => [fn () => CGImage::create(3, 2, 8, 4, 12, CGColorSpace::createWithName(kCGColorSpaceSRGB), kCGImageAlphaNoneSkipLast, CGDataProvider::createWithCFData(CFData::create(null, str_repeat('x', 24), 24)), null, false, 0)],
    'more bits a component than 32' => [fn () => CGImage::create(2, 2, 33, 132, 64, CGColorSpace::createWithName(kCGColorSpaceSRGB), kCGImageAlphaNoneSkipLast, CGDataProvider::createWithCFData(CFData::create(null, str_repeat('x', 128), 128)), null, false, 0)],
    'no provider' => [fn () => CGImage::create(2, 2, 8, 32, 8, CGColorSpace::createWithName(kCGColorSpaceSRGB), kCGImageAlphaNoneSkipLast, null, null, false, 0)],
]);

it('hands Core Graphics a decode array, two values per colour component, and refuses a shorter one', function (): void {
    $provider = CGDataProvider::createWithCFData(CFData::create(null, str_repeat("\xff\x00\x00\xff", 4), 16));
    $space = CGColorSpace::createWithName(kCGColorSpaceSRGB);
    $inverted = CGImage::create(2, 2, 8, 32, 8, $space, kCGImageAlphaNoneSkipLast, $provider, [1.0, 0.0, 1.0, 0.0, 1.0, 0.0], false, 0);

    expect($inverted)->toBeInstanceOf(CGImage::class)
        ->and(fn () => CGImage::create(2, 2, 8, 32, 8, $space, kCGImageAlphaNoneSkipLast, $provider, [0.0, 1.0], false, 0))
        ->toThrow(ValueError::class, 'must hold 6 values for that colour space, 2 given');
});

it('shows an image made from bytes as a view\'s layer contents, and clears it', function (): void {
    $window = newWindow();
    $view = NSView::initWithFrame(new NSRect(0.0, 0.0, 30.0, 20.0));
    $window->contentView()->addSubview($view);

    $image = rgbx(3, 2, str_repeat("\xff\x80\x00\xff", 6));
    $view->setWantsLayer(true);
    $view->layer()->setContents($image);
    expect($view->wantsLayer())->toBeTrue()
        ->and($view->layer()->contents())->toBe($image);
    $view->layer()->setContents(null);
    expect($view->layer()->contents())->toBeNull()
        ->and($window->backingScaleFactor())->toBeGreaterThanOrEqual(1.0);
});

it('copies bytes at an address into a CFData', function () {
    $buffer = new FbBuffer(new FbFormat(FB_LAYOUT_RGBA8888, channelOrder: FB_CHANNELS_RGBA), 4, 2);
    $buffer->fill(0x11223344);

    $data = CFData::create(null, $buffer->pointer(), $buffer->size());

    expect($data->getLength())->toBe(32)
        ->and(CFData::create(null, $buffer->bytes(), strlen($buffer->bytes()))->getLength())->toBe(32);
})->skip(! class_exists(FbBuffer::class), 'needs ext-fb for a native address');

it('refuses a byte count past the string and a null address with a byte count', function (Closure $call, string $message) {
    expect($call)->toThrow(ValueError::class, $message);
})->with([
    'past the string' => [fn () => CFData::create(null, 'abcd', 5), 'must not exceed the 4 bytes of $bytes'],
    'null address' => [fn () => CFData::create(null, 0, 4), 'must not be a null address when $length is above 0'],
]);

it('passes an empty null address and a negative length to Core Foundation', function () {
    expect(CFData::create(null, 0, 0)->getLength())->toBe(0)
        ->and(CFData::create(null, 'abcd', -1))->toBeNull();
});

it('boxes a CGColorRef as a CGColor', function (): void {
    $color = NSColor::colorWithRedGreenBlueAlpha(0.0, 0.0, 1.0, 1.0)->CGColor();

    expect($color)->toBeInstanceOf(CGColor::class)
        ->and(get_parent_class(CGColor::class))->toBe(CFType::class)
        ->and($color->copyDescription())->toContain('CGColor');
});

it('answers the default allocator', function (): void {
    $allocator = CFAllocator::getDefault();

    expect($allocator)->toBeInstanceOf(CFAllocator::class)
        ->and(get_parent_class(CFAllocator::class))->toBe(CFType::class)
        ->and(CFAllocator::getDefault())->toBe($allocator);
});

it('carries the CGError values', function (): void {
    expect([kCGErrorSuccess, kCGErrorFailure, kCGErrorIllegalArgument, kCGErrorInvalidConnection, kCGErrorInvalidContext, kCGErrorCannotComplete,
        kCGErrorNotImplemented, kCGErrorRangeCheck, kCGErrorTypeCheck, kCGErrorInvalidOperation, kCGErrorNoneAvailable])
        ->toBe([0, 1000, 1001, 1002, 1003, 1004, 1006, 1007, 1008, 1010, 1011]);
});
