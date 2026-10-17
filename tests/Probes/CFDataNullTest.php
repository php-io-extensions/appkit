<?php

declare(strict_types=1);

// Site cfdata-null-address (outcome 2): CFDataCreate copying a byte count from address 0. Task 1 probe 4.

beforeEach(fn () => requireProbeBuild());

it('refuses a null address with a byte count, which Core Foundation dies on (SIGTRAP) without the refusal', function (): void {
    $code = <<<'PHP'
    CFData::create(null, 0, 4);
    PHP;

    $kept = probeRun($code, null);
    $off = probeRun($code, 'cfdata-null-address');

    expect($kept['signal'])->toBeNull()
        ->and($kept['stdout'])->toContain('REFUSED ValueError')
        ->and($off['signal'])->toBe(PROBE_SIGTRAP);
});
