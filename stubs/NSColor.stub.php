<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class NSColor extends NSObject
{
    public static function colorWithRedGreenBlueAlpha(float $red, float $green, float $blue, float $alpha): NSColor {}

    public function redComponent(): float {}

    public function greenComponent(): float {}

    public function blueComponent(): float {}

    public function alphaComponent(): float {}
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
