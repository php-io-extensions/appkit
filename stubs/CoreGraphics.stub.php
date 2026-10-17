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
 * @var int
 * @cvalue kCGErrorSuccess
 */
const kCGErrorSuccess = UNKNOWN;

/**
 * @var int
 * @cvalue kCGErrorFailure
 */
const kCGErrorFailure = UNKNOWN;

/**
 * @var int
 * @cvalue kCGErrorIllegalArgument
 */
const kCGErrorIllegalArgument = UNKNOWN;

/**
 * @var int
 * @cvalue kCGErrorInvalidConnection
 */
const kCGErrorInvalidConnection = UNKNOWN;

/**
 * @var int
 * @cvalue kCGErrorInvalidContext
 */
const kCGErrorInvalidContext = UNKNOWN;

/**
 * @var int
 * @cvalue kCGErrorCannotComplete
 */
const kCGErrorCannotComplete = UNKNOWN;

/**
 * @var int
 * @cvalue kCGErrorNotImplemented
 */
const kCGErrorNotImplemented = UNKNOWN;

/**
 * @var int
 * @cvalue kCGErrorRangeCheck
 */
const kCGErrorRangeCheck = UNKNOWN;

/**
 * @var int
 * @cvalue kCGErrorTypeCheck
 */
const kCGErrorTypeCheck = UNKNOWN;

/**
 * @var int
 * @cvalue kCGErrorInvalidOperation
 */
const kCGErrorInvalidOperation = UNKNOWN;

/**
 * @var int
 * @cvalue kCGErrorNoneAvailable
 */
const kCGErrorNoneAvailable = UNKNOWN;

enum CGInterpolationQuality: int
{
    case DEFAULT = 0;
    case NONE = 1;
    case LOW = 2;
    case HIGH = 3;
    case MEDIUM = 4;
}

/**
 * @not-serializable
 */
final class CFData extends CFType
{
    /**
     * CFDataCreate: a copy of $length bytes from the string $bytes, or read at the address $bytes
     * (an ext-fb buffer's pointer()). An address is trusted: it must hold $length readable bytes.
     * null when Core Foundation makes no data.
     */
    public static function create(?CFAllocator $allocator, string|int $bytes, int $length): ?CFData {}

    public function getLength(): int {}
}

/**
 * @not-serializable
 */
final class CGDataProvider extends CFType
{
    /** null when Core Graphics refuses the data: an empty CFData */
    public static function createWithCFData(CFData $data): ?CGDataProvider {}

    /**
     * CGDataProviderCreateDirect over $size bytes at $address: Core Graphics reads the memory in
     * place, never copying it or freeing it. The memory (an ext-fb buffer's pointer()) is the
     * caller's and must outlive every image made from the provider. An address is trusted.
     * null when Core Graphics makes no provider (a size below 1).
     */
    public static function createDirect(int $address, int $size): ?CGDataProvider {}
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
 * A CGColorRef.
 *
 * @not-serializable
 */
final class CGColor extends CFType
{
}

/**
 * @not-serializable
 */
final class CGImage extends CFType
{
    /**
     * CGImageCreate. $bitmapInfo is a kCGImageAlpha* value, or'ed with a kCGBitmapByteOrder* one.
     * $decode is null or a list of floats, two per colour component of $space. null when Core
     * Graphics refuses the description, a provider shorter than it included.
     */
    public static function create(int $width, int $height, int $bitsPerComponent, int $bitsPerPixel, int $bytesPerRow, ?CGColorSpace $space, int $bitmapInfo, ?CGDataProvider $provider, ?array $decode, bool $shouldInterpolate, int $intent): ?CGImage {}

    public function getWidth(): int {}

    public function getHeight(): int {}

    /** CGImageCreateWithImageInRect: the part of $image inside $rect, in pixels; null when they do not meet. */
    public static function createWithImageInRect(CGImage $image, NSRect $rect): ?CGImage {}
}

/**
 * A CGContextRef: the one NSGraphicsContext::currentContext()->CGContext() answers inside drawRect:.
 *
 * @not-serializable
 */
final class CGContext extends CFType
{
    public function saveGState(): void {}

    public function restoreGState(): void {}

    public function clipToRect(NSRect $rect): void {}

    public function translateCTM(float $tx, float $ty): void {}

    public function scaleCTM(float $sx, float $sy): void {}

    public function setInterpolationQuality(CGInterpolationQuality $quality): void {}

    public function getInterpolationQuality(): CGInterpolationQuality {}

    /** CGContextDrawImage: $image scaled into $rect, in the context's user space. */
    public function drawImage(NSRect $rect, CGImage $image): void {}
}
