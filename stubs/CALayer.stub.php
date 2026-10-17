<?php

/** @generate-class-entries */

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) kCAGravityCenter)
 */
const kCAGravityCenter = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) kCAGravityTop)
 */
const kCAGravityTop = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) kCAGravityBottom)
 */
const kCAGravityBottom = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) kCAGravityLeft)
 */
const kCAGravityLeft = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) kCAGravityRight)
 */
const kCAGravityRight = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) kCAGravityTopLeft)
 */
const kCAGravityTopLeft = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) kCAGravityTopRight)
 */
const kCAGravityTopRight = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) kCAGravityBottomLeft)
 */
const kCAGravityBottomLeft = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) kCAGravityBottomRight)
 */
const kCAGravityBottomRight = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) kCAGravityResize)
 */
const kCAGravityResize = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) kCAGravityResizeAspect)
 */
const kCAGravityResizeAspect = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) kCAGravityResizeAspectFill)
 */
const kCAGravityResizeAspectFill = UNKNOWN;

/**
 * @not-serializable
 */
class CALayer extends NSObject
{
    /** [CALayer layer] */
    public static function layer(): CALayer {}

    public function contentsScale(): float {}

    public function setContentsScale(float $contentsScale): void {}

    /** @return list<CALayer> */
    public function sublayers(): array {}

    public function addSublayer(CALayer $layer): void {}

    public function backgroundColor(): ?CGColor {}

    public function setBackgroundColor(?CGColor $backgroundColor): void {}

    /** The contents object: a CGImageRef comes back as CGImage, any other object boxed as its class. */
    public function contents(): NSObject|CFType|null {}

    /** The contents object: an NSImage, a CGImage, or any object CALayer takes. */
    public function setContents(NSObject|CFType|null $contents): void {}

    /** A kCAGravity* string. */
    public function contentsGravity(): string {}

    public function setContentsGravity(string $contentsGravity): void {}

    public function masksToBounds(): bool {}

    public function setMasksToBounds(bool $masksToBounds): void {}
}
