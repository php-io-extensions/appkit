<?php

declare(strict_types=1);

// Site cfdata-string-length (outcome 1): CFDataCreate copying more bytes than the PHP string holds. libgmalloc.

beforeEach(fn () => requireProbeBuild());

it('refuses a byte count past the string, which Core Foundation reads past (SIGSEGV) without the refusal', function (): void {
    // A runtime string (malloc'd with Zend's allocator off) of 16 bytes, read for 64 KiB: past the guard page.
    $code = <<<'PHP'
    CFData::create(null, str_repeat('x', 16), 65536);
    PHP;

    $kept = probeRun($code, null, gmalloc: true);
    $off = probeRun($code, 'cfdata-string-length', gmalloc: true);

    expect($kept['signal'])->toBeNull()
        ->and($kept['stdout'])->toContain('REFUSED ValueError')
        ->and($off['signal'])->toBe(PROBE_SIGSEGV);
});
