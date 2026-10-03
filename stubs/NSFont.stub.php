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

    public static function fontWithNameSize(string $name, float $size): ?NSFont {}

    public function pointSize(): float {}

    public function familyName(): ?string {}
}

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
}
