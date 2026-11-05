<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class NSFont extends NSObject
{
    /** @cvalue NSFontWeightUltraLight */
    public const float WEIGHT_ULTRA_LIGHT = UNKNOWN;

    /** @cvalue NSFontWeightThin */
    public const float WEIGHT_THIN = UNKNOWN;

    /** @cvalue NSFontWeightLight */
    public const float WEIGHT_LIGHT = UNKNOWN;

    /** @cvalue NSFontWeightRegular */
    public const float WEIGHT_REGULAR = UNKNOWN;

    /** @cvalue NSFontWeightMedium */
    public const float WEIGHT_MEDIUM = UNKNOWN;

    /** @cvalue NSFontWeightSemibold */
    public const float WEIGHT_SEMIBOLD = UNKNOWN;

    /** @cvalue NSFontWeightBold */
    public const float WEIGHT_BOLD = UNKNOWN;

    /** @cvalue NSFontWeightHeavy */
    public const float WEIGHT_HEAVY = UNKNOWN;

    /** @cvalue NSFontWeightBlack */
    public const float WEIGHT_BLACK = UNKNOWN;


    public static function systemFontOfSizeWeight(float $size, float $weight): NSFont {}

    /** The system's fixed-pitch face (SF Mono). */
    public static function monospacedSystemFontOfSizeWeight(float $size, float $weight): NSFont {}

    public static function fontWithNameSize(string $name, float $size): ?NSFont {}

    public function pointSize(): float {}

    public function familyName(): ?string {}

    /** Points above the baseline. */
    public function ascender(): float {}

    /** Points below the baseline, negative. */
    public function descender(): float {}

    public function leading(): float {}

    public function isFixedPitch(): bool {}
}

/**
 * @var int
 * @cvalue NSItalicFontMask
 */
const NSItalicFontMask = UNKNOWN;

/**
 * @var int
 * @cvalue NSBoldFontMask
 */
const NSBoldFontMask = UNKNOWN;

/**
 * @not-serializable
 */
class NSFontManager extends NSObject
{
    public static function sharedFontManager(): NSFontManager {}

    /**
     * $traits is an NSFontTraitMask; $weight is the 0–15 scale (5 = regular, 9 = bold).
     * null when the family is not installed.
     */
    public function fontWithFamilyTraitsWeightSize(string $family, int $traits, int $weight, float $size): ?NSFont {}

    public function weightOfFont(NSFont $font): int {}

    /** convertFont:toHaveTrait:; $trait is an NSFontTraitMask. The font itself when no face has the trait. */
    public function convertFontToHaveTrait(NSFont $fontObj, int $trait): NSFont {}

    /** An NSFontTraitMask. */
    public function traitsOfFont(NSFont $fontObj): int {}
}
