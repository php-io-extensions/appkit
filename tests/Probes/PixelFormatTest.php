<?php

declare(strict_types=1);

// Site pixel-format-value (outcome 1): a final attribute that takes a value, with none after it. Task 1 probe 7b, libgmalloc.

beforeEach(fn () => requireProbeBuild());

it('refuses a final valued attribute with no value, which AppKit reads past (SIGSEGV) without the refusal', function (): void {
    // Three attributes and the appended 0 fill 16 bytes exactly: the read for ColorSize's value hits the guard page.
    $code = <<<'PHP'
    NSOpenGLPixelFormat::initWithAttributes([NSOpenGLPFADoubleBuffer, NSOpenGLPFADoubleBuffer, NSOpenGLPFAColorSize]);
    PHP;

    $kept = probeRun($code, null, gmalloc: true);
    $off = probeRun($code, 'pixel-format-value', gmalloc: true);

    expect($kept['signal'])->toBeNull()
        ->and($kept['stdout'])->toContain('REFUSED ValueError')
        ->and($off['signal'])->toBe(PROBE_SIGSEGV);
});
