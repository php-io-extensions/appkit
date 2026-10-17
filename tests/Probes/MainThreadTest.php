<?php

declare(strict_types=1);

// Site main-thread-appkit-ui (outcome 2): AppKit UI classes off the main thread. Task 1 probe 1.

beforeEach(function (): void {
    requireProbeBuild();
    if (! PHP_ZTS) {
        $this->markTestSkipped('needs a ZTS PHP: only a parallel\Runtime worker runs PHP off the main thread');
    }
    if (! is_file(probeExtension('parallel'))) {
        $this->markTestSkipped('needs ext-parallel at '.probeExtension('parallel').' (or env APPKIT_PROBE_PARALLEL)');
    }
});

it('refuses an NSWindow off the main thread, which AppKit dies on (SIGTRAP) without the refusal', function (): void {
    $code = <<<'PHP'
    $future = (new parallel\Runtime())->run(function (): string {
        $w = NSWindow::initWithContentRectStyleMaskBackingDefer(new NSRect(0.0, 0.0, 200.0, 200.0), 15, NSBackingStoreType::BUFFERED, false);
        $w->makeKeyAndOrderFront(null);
        $v = NSView::initWithFrame(new NSRect(0.0, 0.0, 10.0, 10.0));
        $w->contentView()->addSubview($v);
        $v->layoutSubtreeIfNeeded();
        return 'worker finished';
    });
    try {
        echo $future->value(), "\n";
    } catch (Throwable $t) {
        echo 'REFUSED ', get_class($t), ': ', $t->getMessage(), "\n";
    }
    // The main thread's own NSApplication comes up after the worker's attempt, as in Task 1's probe 1.
    NSApplication::sharedApplication();
    pump(1.0);
    PHP;

    $kept = probeRun($code, null, parallel: true, app: false);
    $off = probeRun($code, 'main-thread-appkit-ui', parallel: true, app: false);

    expect($kept['signal'])->toBeNull()
        ->and($kept['stdout'])->toContain('must be called on the main thread')
        ->and($off['signal'])->toBe(PROBE_SIGTRAP);
});
