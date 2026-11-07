<?php

declare(strict_types=1);

it('boxes the CF object at an address by its CFTypeID, the same PHP object as the one it came from', function (): void {
    $space = CGColorSpace::createWithName(kCGColorSpaceSRGB);

    expect(CFType::fromPointer($space->pointer()))->toBe($space)
        ->and(CGColorSpace::fromPointer($space->pointer()))->toBe($space);
});

it('returns null for address 0', function (): void {
    expect(CFType::fromPointer(0))->toBeNull();
});
