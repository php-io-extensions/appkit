<?php

declare(strict_types=1);

it('finds the declared type for a filename extension', function (): void {
    $type = UTType::typeWithFilenameExtension('txt');

    expect($type)->toBeInstanceOf(UTType::class)
        ->and($type)->toBeInstanceOf(NSObject::class)
        ->and($type->identifier())->toBe('public.plain-text');
});

it('makes a dynamic type for an extension nothing declares', function (): void {
    expect(UTType::typeWithFilenameExtension('zzqq')->identifier())->toStartWith('dyn.');
});
