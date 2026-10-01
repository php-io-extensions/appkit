<?php

declare(strict_types=1);

it('hands back one PHP object per run loop', function (): void {
    expect(CFRunLoop::getMain())->toBe(CFRunLoop::getMain())
        ->and(CFRunLoop::getCurrent())->toBe(CFRunLoop::getMain())
        ->and(CFRunLoop::getMain()->getTypeID())->toBeGreaterThan(0)
        ->and(CFRunLoop::getMain()->isWaiting())->toBeFalse();
});

it('times out a run with nothing to do', function (): void {
    $t = hrtime(true);
    $result = CFRunLoop::runInMode(kCFRunLoopDefaultMode, 0.02, true);

    expect($result)->toBeIn([CFRunLoopRunResult::TIMED_OUT, CFRunLoopRunResult::FINISHED])
        ->and((hrtime(true) - $t) / 1e6)->toBeLessThan(100.0);
});

it('adds a source to the common modes, not to a mode named after them', function (): void {
    [$read] = stream_socket_pair(STREAM_PF_UNIX, STREAM_SOCK_STREAM, 0);
    $fd = CFFileDescriptor::create($read, false, fn () => null);
    $source = $fd->createRunLoopSource(0);
    $loop = CFRunLoop::getMain();

    $loop->addSource($source, kCFRunLoopCommonModes);

    // Registered under a mode literally named "kCFRunLoopCommonModes", the default mode would not see it.
    expect($loop->containsSource($source, kCFRunLoopDefaultMode))->toBeTrue();

    $loop->removeSource($source, kCFRunLoopCommonModes);

    expect($loop->containsSource($source, kCFRunLoopDefaultMode))->toBeFalse();

    $fd->invalidate();
});

it('calls back when the descriptor turns readable and ends the run', function (string $as): void {
    [$read, $write] = stream_socket_pair(STREAM_PF_UNIX, STREAM_SOCK_STREAM, 0);
    $calls = [];

    $fd = CFFileDescriptor::create($as === 'Socket' ? socket_import_stream($read) : $read, false, function (CFFileDescriptor $f, int $types) use (&$calls): void {
        $calls[] = [$f, $types];
    });
    $fd->enableCallBacks(kCFFileDescriptorReadCallBack);
    $source = $fd->createRunLoopSource(0);
    CFRunLoop::getMain()->addSource($source, kCFRunLoopDefaultMode);

    fwrite($write, 'x');
    $result = CFRunLoop::runInMode(kCFRunLoopDefaultMode, 1.0, true);

    expect($result)->toBe(CFRunLoopRunResult::HANDLED_SOURCE)
        ->and($calls)->toHaveCount(1)
        ->and($calls[0][0])->toBe($fd)
        ->and($calls[0][1])->toBe(kCFFileDescriptorReadCallBack);

    // Callbacks are one-shot until re-enabled.
    $result = CFRunLoop::runInMode(kCFRunLoopDefaultMode, 0.02, true);
    expect($calls)->toHaveCount(1);

    $fd->enableCallBacks(kCFFileDescriptorReadCallBack);
    CFRunLoop::runInMode(kCFRunLoopDefaultMode, 1.0, true);
    expect($calls)->toHaveCount(2);

    $fd->invalidate();
    expect($fd->isValid())->toBeFalse()
        ->and($source->isValid())->toBeFalse();
})->with(['stream', 'Socket']);

it('reports the descriptor it watches', function (): void {
    [$read] = stream_socket_pair(STREAM_PF_UNIX, STREAM_SOCK_STREAM, 0);
    $fd = CFFileDescriptor::create($read, false, fn () => null);
    $native = $fd->getNativeDescriptor();

    expect($native)->toBeGreaterThan(2)
        ->and(CFFileDescriptor::create($native, false, fn () => null)?->getNativeDescriptor())->toBe($native);
});

it('lets an exception thrown by the callout surface from the run', function (): void {
    [$read, $write] = stream_socket_pair(STREAM_PF_UNIX, STREAM_SOCK_STREAM, 0);
    $fd = CFFileDescriptor::create($read, false, function (): never {
        throw new LogicException('from the callout');
    });
    $fd->enableCallBacks(kCFFileDescriptorReadCallBack);
    CFRunLoop::getMain()->addSource($fd->createRunLoopSource(0), kCFRunLoopDefaultMode);
    fwrite($write, 'x');

    try {
        expect(fn () => CFRunLoop::runInMode(kCFRunLoopDefaultMode, 1.0, true))->toThrow(LogicException::class, 'from the callout');
    } finally {
        $fd->invalidate();
    }
});

it('keeps calling back after PHP drops its handles while the run loop holds the source', function (): void {
    [$read, $write] = stream_socket_pair(STREAM_PF_UNIX, STREAM_SOCK_STREAM, 0);
    $calls = 0;

    (function () use ($read, &$calls): void {
        $fd = CFFileDescriptor::create($read, false, function () use (&$calls): void {
            $calls++;
        });
        $fd->enableCallBacks(kCFFileDescriptorReadCallBack);
        CFRunLoop::getMain()->addSource($fd->createRunLoopSource(0), kCFRunLoopDefaultMode);
    })();

    fwrite($write, 'x');
    CFRunLoop::runInMode(kCFRunLoopDefaultMode, 1.0, true);

    expect($calls)->toBe(1);

    fread($read, 1);
});

it('rejects what is not a descriptor', function (mixed $fd, string $error): void {
    expect(fn () => CFFileDescriptor::create($fd, false, fn () => null))->toThrow($error);
})->with([
    'negative int' => [-1, ValueError::class],
    'string' => ['3', TypeError::class],
    'object' => [new stdClass(), TypeError::class],
]);

it('rejects a callout that is not callable', function (): void {
    [$read] = stream_socket_pair(STREAM_PF_UNIX, STREAM_SOCK_STREAM, 0);

    expect(fn () => CFFileDescriptor::create($read, false, 'no_such_function'))->toThrow(TypeError::class);
});
