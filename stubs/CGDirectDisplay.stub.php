<?php

/** @generate-class-entries */

/**
 * @var string
 * @cvalue appkit_cfstring_constant(kCGDisplayShowDuplicateLowResolutionModes)
 */
const kCGDisplayShowDuplicateLowResolutionModes = UNKNOWN;

/**
 * A CGDisplayModeRef: one resolution and refresh rate a display can run at.
 *
 * @not-serializable
 */
final class CGDisplayMode extends CFType
{
    /** In points. */
    public function getWidth(): int {}

    public function getHeight(): int {}

    public function getPixelWidth(): int {}

    public function getPixelHeight(): int {}

    /** In Hz; 0.0 for a display that does not report one. */
    public function getRefreshRate(): float {}

    public function isUsableForDesktopGUI(): bool {}
}

/**
 * The CGDirectDisplay functions, a display named by its CGDirectDisplayID (an int).
 *
 * @not-serializable
 */
final class CGDisplay
{
    private function __construct() {}

    /** CGMainDisplayID */
    public static function mainDisplayID(): int {}

    /**
     * CGGetActiveDisplayList
     * @return list<int>
     */
    public static function getActiveDisplayList(): array {}

    public static function bounds(int $display): NSRect {}

    public static function copyDisplayMode(int $display): ?CGDisplayMode {}

    /**
     * CGDisplayCopyAllDisplayModes. $options holds CFDictionary keys, as
     * [kCGDisplayShowDuplicateLowResolutionModes => true] to list the scaled (HiDPI) modes too.
     * @return list<CGDisplayMode>
     */
    public static function copyAllDisplayModes(int $display, ?array $options = null): array {}

    /** CGDisplaySetDisplayMode with no options; throws AppKitException with the CGError on failure. */
    public static function setDisplayMode(int $display, CGDisplayMode $mode): void {}

    /** CGDisplayCapture: the display is the caller's alone until release(). Throws on a CGError. */
    public static function capture(int $display): void {}

    /** CGDisplayRelease. Throws on a CGError. */
    public static function release(int $display): void {}

    /** CGShieldingWindowLevel: the level above a captured display's shield. */
    public static function shieldingWindowLevel(): int {}
}
