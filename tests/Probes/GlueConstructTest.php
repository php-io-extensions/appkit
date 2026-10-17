<?php

declare(strict_types=1);

// Site glue-construct-once (outcome 1): a second __construct on a delegate AppKit holds. Task 1 probe 8, libgmalloc.

beforeEach(fn () => requireProbeBuild());

it('refuses a second constructor call, which leaves AppKit a freed delegate (SIGSEGV) without the refusal', function (): void {
    $code = <<<'PHP'
    $window = newWindow();
    $delegate = new ObjCDelegate('NSWindowDelegate');
    $window->setDelegate($delegate);
    $delegate->__construct('NSWindowDelegate');
    unset($delegate);
    gc_collect_cycles();
    $window->delegate();
    $window->makeKeyAndOrderFront(null);
    pump(0.5);
    $window->close();
    pump(0.3);
    PHP;

    $kept = probeRun($code, null, gmalloc: true);
    $off = probeRun($code, 'glue-construct-once', gmalloc: true);

    expect($kept['signal'])->toBeNull()
        ->and($kept['stdout'])->toContain('called twice')
        ->and($off['signal'])->toBe(PROBE_SIGSEGV);
});
