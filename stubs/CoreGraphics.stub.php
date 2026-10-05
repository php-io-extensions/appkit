<?php

/** @generate-class-entries */

/**
 * @var string
 * @cvalue appkit_cfstring_constant(kCGColorSpaceSRGB)
 */
const kCGColorSpaceSRGB = UNKNOWN;

/**
 * @var int
 * @cvalue kCGImageAlphaNone
 */
const kCGImageAlphaNone = UNKNOWN;

/**
 * @var int
 * @cvalue kCGImageAlphaPremultipliedLast
 */
const kCGImageAlphaPremultipliedLast = UNKNOWN;

/**
 * @var int
 * @cvalue kCGImageAlphaPremultipliedFirst
 */
const kCGImageAlphaPremultipliedFirst = UNKNOWN;

/**
 * @var int
 * @cvalue kCGImageAlphaLast
 */
const kCGImageAlphaLast = UNKNOWN;

/**
 * @var int
 * @cvalue kCGImageAlphaFirst
 */
const kCGImageAlphaFirst = UNKNOWN;

/**
 * @var int
 * @cvalue kCGImageAlphaNoneSkipLast
 */
const kCGImageAlphaNoneSkipLast = UNKNOWN;

/**
 * @var int
 * @cvalue kCGImageAlphaNoneSkipFirst
 */
const kCGImageAlphaNoneSkipFirst = UNKNOWN;

/**
 * @var int
 * @cvalue kCGBitmapByteOrderDefault
 */
const kCGBitmapByteOrderDefault = UNKNOWN;

/**
 * @var int
 * @cvalue kCGBitmapByteOrder32Little
 */
const kCGBitmapByteOrder32Little = UNKNOWN;

/**
 * @var int
 * @cvalue kCGBitmapByteOrder32Big
 */
const kCGBitmapByteOrder32Big = UNKNOWN;

/**
 * @var int
 * @cvalue kCGRenderingIntentDefault
 */
const kCGRenderingIntentDefault = UNKNOWN;

/**
 * @not-serializable
 */
final class CFData extends CFType
{
    /**
     * CFDataCreate: a copy of $bytes, or of $length bytes read at the address $bytes
     * (an ext-fb buffer's pointer()). An address is trusted: it must hold $length readable bytes.
     */
    public static function create(string|int $bytes, ?int $length = null): CFData {}

    public function getLength(): int {}
}

/**
 * @not-serializable
 */
final class CGDataProvider extends CFType
{
    /** null when Core Graphics refuses the data: an empty CFData */
    public static function createWithCFData(CFData $data): ?CGDataProvider {}
}

/**
 * @not-serializable
 */
final class CGColorSpace extends CFType
{
    /** null when no colour space has that name (a kCGColorSpace* string) */
    public static function createWithName(string $name): ?CGColorSpace {}
}

/**
 * @not-serializable
 */
final class CGImage extends CFType
{
    /**
     * CGImageCreate with no decode array. $bitmapInfo is a kCGImageAlpha* value, or'ed with a
     * kCGBitmapByteOrder* one. The provider's data must hold $bytesPerRow × $height bytes.
     * null when Core Graphics refuses the description.
     */
    public static function create(int $width, int $height, int $bitsPerComponent, int $bitsPerPixel, int $bytesPerRow, CGColorSpace $space, int $bitmapInfo, CGDataProvider $provider, bool $shouldInterpolate, int $intent): ?CGImage {}

    public function getWidth(): int {}

    public function getHeight(): int {}
}
