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
    $fd = CFFileDescriptor::create(null, streamDescriptor($read), false, fn () => null);
    $source = $fd->createRunLoopSource(null, 0);
    $loop = CFRunLoop::getMain();

    $loop->addSource($source, kCFRunLoopCommonModes);

    // Registered under a mode literally named "kCFRunLoopCommonModes", the default mode would not see it.
    expect($loop->containsSource($source, kCFRunLoopDefaultMode))->toBeTrue();

    $loop->removeSource($source, kCFRunLoopCommonModes);

    expect($loop->containsSource($source, kCFRunLoopDefaultMode))->toBeFalse();

    $fd->invalidate();
});

it('calls back when the descriptor turns readable and ends the run', function (): void {
    [$read, $write] = stream_socket_pair(STREAM_PF_UNIX, STREAM_SOCK_STREAM, 0);
    $calls = [];

    $fd = CFFileDescriptor::create(null, streamDescriptor($read), false, function (CFFileDescriptor $f, int $types) use (&$calls): void {
        $calls[] = [$f, $types];
    });
    $fd->enableCallBacks(kCFFileDescriptorReadCallBack);
    $source = $fd->createRunLoopSource(null, 0);
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
});

it('reports the descriptor it watches', function (): void {
    [$read] = stream_socket_pair(STREAM_PF_UNIX, STREAM_SOCK_STREAM, 0);
    $native = streamDescriptor($read);
    $fd = CFFileDescriptor::create(CFAllocator::getDefault(), $native, false, fn () => null);

    expect($native)->toBeGreaterThan(2)
        ->and($fd->getNativeDescriptor())->toBe($native)
        ->and($fd->createRunLoopSource(CFAllocator::getDefault(), 0))->toBeInstanceOf(CFRunLoopSource::class);
});

it('takes the native CFFileDescriptor parameters', function (): void {
    $create = new ReflectionMethod(CFFileDescriptor::class, 'create');
    $source = new ReflectionMethod(CFFileDescriptor::class, 'createRunLoopSource');

    expect(array_map(fn (ReflectionParameter $p) => $p->getType().' $'.$p->getName(), $create->getParameters()))
        ->toBe(['?CFAllocator $allocator', 'int $fd', 'bool $closeOnInvalidate', 'callable $callout'])
        ->and(array_map(fn (ReflectionParameter $p) => $p->getType().' $'.$p->getName(), $source->getParameters()))
        ->toBe(['?CFAllocator $allocator', 'int $order']);
});

it('lets an exception thrown by the callout surface from the run', function (): void {
    [$read, $write] = stream_socket_pair(STREAM_PF_UNIX, STREAM_SOCK_STREAM, 0);
    $fd = CFFileDescriptor::create(null, streamDescriptor($read), false, function (): never {
        throw new LogicException('from the callout');
    });
    $fd->enableCallBacks(kCFFileDescriptorReadCallBack);
    CFRunLoop::getMain()->addSource($fd->createRunLoopSource(null, 0), kCFRunLoopDefaultMode);
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
        $fd = CFFileDescriptor::create(null, streamDescriptor($read), false, function () use (&$calls): void {
            $calls++;
        });
        $fd->enableCallBacks(kCFFileDescriptorReadCallBack);
        CFRunLoop::getMain()->addSource($fd->createRunLoopSource(null, 0), kCFRunLoopDefaultMode);
    })();

    fwrite($write, 'x');
    CFRunLoop::runInMode(kCFRunLoopDefaultMode, 1.0, true);

    expect($calls)->toBe(1);

    fread($read, 1);
});

it('passes a negative descriptor to Core Foundation, which makes nothing', function (): void {
    expect(CFFileDescriptor::create(null, -1, false, fn () => null))->toBeNull();
});

it('takes the descriptor as an int only', function (mixed $fd): void {
    expect(fn () => CFFileDescriptor::create(null, $fd, false, fn () => null))->toThrow(TypeError::class);
})->with([
    'string' => ['3'],
    'stream' => [fn () => stream_socket_pair(STREAM_PF_UNIX, STREAM_SOCK_STREAM, 0)[0]],
    'object' => [new stdClass()],
]);

it('rejects a callout that is not callable', function (): void {
    [$read] = stream_socket_pair(STREAM_PF_UNIX, STREAM_SOCK_STREAM, 0);

    expect(fn () => CFFileDescriptor::create(null, streamDescriptor($read), false, 'no_such_function'))->toThrow(TypeError::class);
});
