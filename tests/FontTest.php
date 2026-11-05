<?php

declare(strict_types=1);

it('reads the metrics of a fixed-pitch and a proportional font', function (): void {
    $mono = NSFont::monospacedSystemFontOfSizeWeight(13.0, NSFont::WEIGHT_REGULAR);
    $system = NSFont::systemFontOfSizeWeight(13.0, NSFont::WEIGHT_REGULAR);

    expect($mono->isFixedPitch())->toBeTrue()
        ->and($mono->ascender())->toBeGreaterThan(0.0)
        ->and($mono->descender())->toBeLessThan(0.0)
        ->and($mono->leading())->toBeGreaterThanOrEqual(0.0)
        ->and($system->isFixedPitch())->toBeFalse();
});

it('converts a font to have a trait and reads the traits back', function (): void {
    $manager = NSFontManager::sharedFontManager();
    $system = NSFont::systemFontOfSizeWeight(13.0, NSFont::WEIGHT_REGULAR);
    $italic = $manager->convertFontToHaveTrait($system, NSItalicFontMask);
    $bold = $manager->convertFontToHaveTrait(NSFont::fontWithNameSize('Menlo', 13.0), NSBoldFontMask);

    expect(NSItalicFontMask)->toBe(1)
        ->and(NSBoldFontMask)->toBe(2)
        ->and($manager->traitsOfFont($system) & NSItalicFontMask)->toBe(0)
        ->and($manager->traitsOfFont($italic) & NSItalicFontMask)->toBe(NSItalicFontMask)
        ->and($manager->traitsOfFont($bold) & NSBoldFontMask)->toBe(NSBoldFontMask);
});

it('measures a string with a font', function (): void {
    $attributes = [NSFontAttributeName => NSFont::monospacedSystemFontOfSizeWeight(13.0, NSFont::WEIGHT_REGULAR)];
    $one = NSString::stringWithString('abc')->sizeWithAttributes($attributes);
    $two = NSString::stringWithString('abcabc')->sizeWithAttributes($attributes);

    expect($one)->toBeInstanceOf(NSSize::class)
        ->and($one->width)->toBeGreaterThan(0.0)
        ->and(abs($two->width - 2 * $one->width))->toBeLessThan(1.0);
});

it('wraps an integer in an NSNumber', function (): void {
    $number = NSNumber::numberWithInteger(1);

    expect($number)->toBeInstanceOf(NSObject::class)
        ->and($number->integerValue())->toBe(1);
});
