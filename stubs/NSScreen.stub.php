<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class NSScreen extends NSObject
{
    /** The screen with the key window, else the one with the menu bar; null with no screens. */
    public static function mainScreen(): ?NSScreen {}

    /** @return list<NSScreen> the menu-bar screen first */
    public static function screens(): array {}

    public function frame(): NSRect {}

    /** The frame less the menu bar and the Dock. */
    public function visibleFrame(): NSRect {}

    public function backingScaleFactor(): float {}

    /** The highest refresh rate the screen runs at, in Hz (120 on ProMotion). */
    public function maximumFramesPerSecond(): int {}

    public function localizedName(): string {}

    /**
     * The device description dictionary: 'NSScreenNumber' is the CGDirectDisplayID,
     * 'NSDeviceSize' an NSSize, 'NSDeviceResolution' an NSSize in dots per inch.
     * @return array<string, mixed>
     */
    public function deviceDescription(): array {}

    /** The EDR headroom right now: 1.0 when the screen shows no extended range. */
    public function maximumExtendedDynamicRangeColorComponentValue(): float {}

    /** The EDR headroom the screen can reach. */
    public function maximumPotentialExtendedDynamicRangeColorComponentValue(): float {}
}
