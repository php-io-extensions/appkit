<?php

declare(strict_types=1);

/** A BGRA surface, as a layer takes one. */
function bgraSurface(int $width, int $height): ?IOSurface
{
    return IOSurface::initWithProperties([
        IOSurfacePropertyKeyWidth => $width,
        IOSurfacePropertyKeyHeight => $height,
        IOSurfacePropertyKeyBytesPerElement => 4,
        IOSurfacePropertyKeyBytesPerRow => $width * 4,
        IOSurfacePropertyKeyPixelFormat => 0x42475241, // 'BGRA'
    ]);
}

it('makes a surface of the size it is asked for, with memory at an address', function (): void {
    $surface = bgraSurface(64, 32);

    expect($surface)->toBeInstanceOf(IOSurface::class)
        ->and([$surface->width(), $surface->height(), $surface->bytesPerRow()])->toBe([64, 32, 256])
        ->and($surface->baseAddress())->toBeGreaterThan(0)
        ->and($surface->isInUse())->toBeFalse();
});

it('answers null for properties IOSurface makes nothing from, and refuses a list without names', function (): void {
    expect(bgraSurface(0, 0))->toBeNull()
        ->and(fn () => IOSurface::initWithProperties([64, 32]))->toThrow(ValueError::class);
});

it('locks and unlocks, writing the seed at the address given, and answers an unlock without a lock as IOSurface does', function (): void {
    $surface = bgraSurface(4, 4);
    $seed = CFData::createMutable(null, 0);
    $seed->setLength(4);
    $seed->getBytes(new CFRange(0, 4), $before);

    $locked = $surface->lockWithOptionsSeed(0, $seed->getMutableBytePtr());
    $seed->getBytes(new CFRange(0, 4), $after);
    $unlocked = $surface->unlockWithOptionsSeed(0, 0);
    $again = $surface->unlockWithOptionsSeed(0, 0);

    expect($locked)->toBe(kIOReturnSuccess)
        ->and($unlocked)->toBe(kIOReturnSuccess)
        ->and($again)->not->toBe(kIOReturnSuccess)
        ->and($before)->toBe("\0\0\0\0")
        ->and($after)->not->toBe("\0\0\0\0")
        ->and($surface->lockWithOptionsSeed(kIOSurfaceLockReadOnly, 0))->toBe(kIOReturnSuccess)
        ->and($surface->unlockWithOptionsSeed(kIOSurfaceLockReadOnly, 0))->toBe(kIOReturnSuccess);
});

it('carries a colour space as an attachment', function (): void {
    $surface = bgraSurface(8, 8);
    $icc = CGColorSpace::createWithName(kCGColorSpaceSRGB)->copyICCData();

    expect($surface->attachmentForKey(kIOSurfaceColorSpace))->toBeNull();
    $surface->setAttachmentForKey($icc, kIOSurfaceColorSpace);
    $back = $surface->attachmentForKey(kIOSurfaceColorSpace);
    $back->getBytes(new CFRange(0, 64), $start);
    $icc->getBytes(new CFRange(0, 64), $expected);

    expect($back)->toBeInstanceOf(CFData::class)
        ->and($back->getLength())->toBe($icc->getLength())
        ->and($start)->toBe($expected);
});

it('takes drawing into its memory, and is a layer\'s contents', function (): void {
    $surface = bgraSurface(2, 1);
    $info = kCGImageAlphaPremultipliedFirst | kCGBitmapByteOrder32Little;
    $srgb = CGColorSpace::createWithName(kCGColorSpaceSRGB);
    $pixels = "\x10\x20\x30\x80\x40\x50\x60\xff";
    $image = CGImage::create(2, 1, 8, 32, 8, $srgb, $info, CGDataProvider::createWithCFData(CFData::create(null, $pixels, 8)), null, false, kCGRenderingIntentDefault);
    $context = CGBitmapContext::create($surface->baseAddress(), 2, 1, 8, $surface->bytesPerRow(), $srgb, $info);
    $context->setBlendMode(CGBlendMode::COPY);
    $context->drawImage(new NSRect(0.0, 0.0, 2.0, 1.0), $image);
    CFData::create(null, $surface->baseAddress(), 8)->getBytes(new CFRange(0, 8), $written);

    $layer = CALayer::layer();
    $layer->setContents($surface);

    expect($written)->toBe($pixels)
        ->and($layer->contents())->toBe($surface);
});
