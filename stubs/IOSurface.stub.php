<?php

/** @generate-class-entries */

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) IOSurfacePropertyKeyWidth)
 */
const IOSurfacePropertyKeyWidth = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) IOSurfacePropertyKeyHeight)
 */
const IOSurfacePropertyKeyHeight = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) IOSurfacePropertyKeyBytesPerRow)
 */
const IOSurfacePropertyKeyBytesPerRow = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) IOSurfacePropertyKeyBytesPerElement)
 */
const IOSurfacePropertyKeyBytesPerElement = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) IOSurfacePropertyKeyPixelFormat)
 */
const IOSurfacePropertyKeyPixelFormat = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant(kIOSurfaceColorSpace)
 */
const kIOSurfaceColorSpace = UNKNOWN;

/**
 * @var int
 * @cvalue kIOSurfaceLockReadOnly
 */
const kIOSurfaceLockReadOnly = UNKNOWN;

/**
 * @var int
 * @cvalue kIOSurfaceLockAvoidSync
 */
const kIOSurfaceLockAvoidSync = UNKNOWN;

/**
 * Memory the window server reads where it lies: a layer's contents may be one.
 *
 * @not-serializable
 */
final class IOSurface extends NSObject
{
    /** initWithProperties: from IOSurfacePropertyKey* names; null when IOSurface makes none. */
    public static function initWithProperties(array $properties): ?IOSurface {}

    /** lockWithOptions:seed: a kern_return_t, kIOReturnSuccess when locked. $seed: the address of a uint32_t, or 0. */
    public function lockWithOptionsSeed(int $options, int $seed): int {}

    /** unlockWithOptions:seed: a kern_return_t. $seed: the address of a uint32_t, or 0. */
    public function unlockWithOptionsSeed(int $options, int $seed): int {}

    /** baseAddress: the address of the first byte; the CPU writes it between a lock and an unlock. */
    public function baseAddress(): int {}

    public function bytesPerRow(): int {}

    public function width(): int {}

    public function height(): int {}

    /** inUse: whether the window server or another process still uses it. */
    public function isInUse(): bool {}

    /** setAttachment:forKey: (kIOSurfaceColorSpace takes a colour space's ICC data). */
    public function setAttachmentForKey(CFType $anObject, string $key): void {}

    /** attachmentForKey: null when there is none. */
    public function attachmentForKey(string $key): NSObject|CFType|null {}
}
