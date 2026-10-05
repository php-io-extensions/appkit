<?php

declare(strict_types=1);

/** A width x height image over RGBA bytes, alpha ignored: what a framebuffer's RGBA8 dump becomes. */
function rgbx(int $width, int $height, string $bytes): ?CGImage
{
    return CGImage::create($width, $height, 8, 32, $width * 4, CGColorSpace::createWithName(kCGColorSpaceSRGB),
        kCGImageAlphaNoneSkipLast | kCGBitmapByteOrder32Big, CGDataProvider::createWithCFData(CFData::create($bytes)), false, kCGRenderingIntentDefault);
}

it('copies bytes into a CFData', function (): void {
    $data = CFData::create("\x01\x02\x03\x00\x05");

    expect($data)->toBeInstanceOf(CFType::class)
        ->and($data->getLength())->toBe(5)
        ->and(CFData::create('')->getLength())->toBe(0)
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
        ->and(CGDataProvider::createWithCFData(CFData::create('abcd')))->toBeInstanceOf(CGDataProvider::class)
        ->and(CGDataProvider::createWithCFData(CFData::create('')))->toBeNull();
});

it('carries the Core Graphics values of its constants', function (): void {
    expect([kCGImageAlphaNone, kCGImageAlphaPremultipliedLast, kCGImageAlphaPremultipliedFirst, kCGImageAlphaLast, kCGImageAlphaFirst, kCGImageAlphaNoneSkipLast, kCGImageAlphaNoneSkipFirst])->toBe([0, 1, 2, 3, 4, 5, 6])
        ->and([kCGBitmapByteOrderDefault, kCGBitmapByteOrder32Little, kCGBitmapByteOrder32Big])->toBe([0, 2 << 12, 4 << 12])
        ->and(kCGRenderingIntentDefault)->toBe(0);
});

it('refuses a description its provider cannot back', function (Closure $create, string $message): void {
    expect($create)->toThrow(ValueError::class, $message);
})->with([
    'too few bytes' => [fn () => rgbx(3, 2, str_repeat('x', 23)), 'must provide bytesPerRow x height (24) bytes, it holds 23'],
    'no width' => [fn () => rgbx(0, 2, 'abcd'), 'must be between 1 and'],
    'a row shorter than its pixels' => [fn () => CGImage::create(3, 2, 8, 32, 11, CGColorSpace::createWithName(kCGColorSpaceSRGB), kCGImageAlphaNoneSkipLast, CGDataProvider::createWithCFData(CFData::create(str_repeat('x', 24))), false, 0), 'must hold a row: at least 12 bytes'],
    'more bits a component than a pixel' => [fn () => CGImage::create(3, 2, 8, 4, 12, CGColorSpace::createWithName(kCGColorSpaceSRGB), kCGImageAlphaNoneSkipLast, CGDataProvider::createWithCFData(CFData::create(str_repeat('x', 24))), false, 0), 'must be between bitsPerComponent and 128'],
]);

it('shows an image made from bytes as a view\'s layer contents, and clears it', function (): void {
    $window = newWindow();
    $view = NSView::initWithFrame(new NSRect(0.0, 0.0, 30.0, 20.0));
    $window->contentView()->addSubview($view);

    $image = rgbx(3, 2, str_repeat("\xff\x80\x00\xff", 6));
    $view->setLayerContents($image);
    expect($view->wantsLayer())->toBeTrue()
        ->and($view->layerContents())->toBe($image);
    $view->setLayerContents(null);
    expect($view->layerContents())->toBeNull();

    expect(fn () => $view->setLayerContents(CFData::create('x')))->toThrow(TypeError::class, 'must be of type NSImage|CGImage|null, CFData given')
        ->and($window->backingScaleFactor())->toBeGreaterThanOrEqual(1.0);
});

it('copies bytes at an address into a CFData', function () {
    $buffer = new FbBuffer(new FbFormat(FB_LAYOUT_RGBA8888, channelOrder: FB_CHANNELS_RGBA), 4, 2);
    $buffer->fill(0x11223344);

    $data = CFData::create($buffer->pointer(), $buffer->size());

    expect($data->getLength())->toBe(32)
        ->and(CFData::create($buffer->bytes())->getLength())->toBe(32);
})->skip(! class_exists(FbBuffer::class), 'needs ext-fb for a native address');

it('refuses an address without a length, a null address, and a length with a string', function (Closure $call, string $message) {
    expect($call)->toThrow(ValueError::class, $message);
})->with([
    'no length' => [fn () => CFData::create(4096), 'must be the byte count'],
    'null address' => [fn () => CFData::create(0, 4), 'must not be a null address'],
    'string with length' => [fn () => CFData::create('abcd', 4), 'must be null when $bytes is a string'],
]);
