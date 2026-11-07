<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class NSColor extends NSObject
{
    public static function colorWithRedGreenBlueAlpha(float $red, float $green, float $blue, float $alpha): NSColor {}

    /** +controlAccentColor: a catalog colour; convert it (colorUsingColorSpace:) before reading components. */
    public static function controlAccentColor(): NSColor {}

    public function redComponent(): float {}

    public function greenComponent(): float {}

    public function blueComponent(): float {}

    public function alphaComponent(): float {}

    public function CGColor(): CGColor {}

    public static function colorWithCGColor(CGColor $cgColor): ?NSColor {}

    public function colorUsingColorSpace(NSColorSpace $space): ?NSColor {}
}

/**
 * @not-serializable
 */
class NSColorSpace extends NSObject
{
    /** initWithCGColorSpace:; null when AppKit takes none. */
    public static function initWithCGColorSpace(CGColorSpace $space): ?NSColorSpace {}

    public static function sRGBColorSpace(): NSColorSpace {}

    public static function displayP3ColorSpace(): NSColorSpace {}

    public function localizedName(): ?string {}
}
