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
     * CGGetActiveDisplayList: the CGError. $activeDisplays receives up to $maxDisplays IDs
     * as a list of ints (a $maxDisplays of 0 passes no list: the count query); $displayCount
     * receives the count.
     */
    public static function getActiveDisplayList(int $maxDisplays, ?array &$activeDisplays = null, ?int &$displayCount = null): int {}

    public static function bounds(int $display): NSRect {}

    public static function copyDisplayMode(int $display): ?CGDisplayMode {}

    /**
     * CGDisplayCopyAllDisplayModes. $options holds CFDictionary keys, as
     * [kCGDisplayShowDuplicateLowResolutionModes => true] to list the scaled (HiDPI) modes too.
     * @return list<CGDisplayMode>
     */
    public static function copyAllDisplayModes(int $display, ?array $options = null): array {}

    /** CGDisplaySetDisplayMode: the CGError. $options holds CFDictionary keys, as copyAllDisplayModes() takes them. */
    public static function setDisplayMode(int $display, ?CGDisplayMode $mode, ?array $options): int {}

    /** CGDisplayCapture: the CGError. The display is the caller's alone until release(). */
    public static function capture(int $display): int {}

    /** CGDisplayRelease: the CGError. */
    public static function release(int $display): int {}

    /** CGShieldingWindowLevel: the level above a captured display's shield. */
    public static function shieldingWindowLevel(): int {}
}
