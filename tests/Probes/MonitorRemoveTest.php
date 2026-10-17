<?php

declare(strict_types=1);

// Site monitor-remove-once (outcome 2): +removeMonitor: twice on one monitor. Task 1 probe 9, libgmalloc.

beforeEach(fn () => requireProbeBuild());

it('refuses a second removal of a monitor, which AppKit dies on (SIGSEGV) without the refusal', function (): void {
    $code = <<<'PHP'
    $monitor = NSEvent::addLocalMonitorForEventsMatchingMaskHandler(NSEventMask::KEY_DOWN, fn ($event) => $event);
    NSEvent::removeMonitor($monitor);
    try {
        NSEvent::removeMonitor($monitor);
    } finally {
        pump(0.3);
        unset($monitor);
        gc_collect_cycles();
        pump(0.3);
    }
    PHP;

    $kept = probeRun($code, null, gmalloc: true);
    $off = probeRun($code, 'monitor-remove-once', gmalloc: true);

    expect($kept['signal'])->toBeNull()
        ->and($kept['stdout'])->toContain('REFUSED ValueError')
        ->and($off['signal'])->toBe(PROBE_SIGSEGV);
});
