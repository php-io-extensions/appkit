<?php

declare(strict_types=1);

beforeEach(function (): void {
    $this->app = NSApplication::sharedApplication();
    $this->app->finishLaunching();
    drainApplicationDefined($this->app);
});

it('hands back one PHP object for the shared application', function (): void {
    expect(NSApplication::sharedApplication())->toBe($this->app)
        ->and($this->app->className())->toBe('NSApplication')
        ->and($this->app->isKindOfClass('NSResponder'))->toBeTrue()
        ->and($this->app->isKindOfClass('NSEvent'))->toBeFalse()
        ->and($this->app->isKindOfClass('NoSuchClass'))->toBeFalse()
        ->and($this->app->respondsToSelector('finishLaunching'))->toBeTrue()
        ->and($this->app->pointer())->toBeGreaterThan(0);
});

it('switches activation policy and reads it back', function (): void {
    expect($this->app->setActivationPolicy(NSApplicationActivationPolicy::ACCESSORY))->toBeTrue()
        ->and($this->app->activationPolicy())->toBe(NSApplicationActivationPolicy::ACCESSORY)
        ->and($this->app->setActivationPolicy(NSApplicationActivationPolicy::PROHIBITED))->toBeTrue()
        ->and($this->app->activationPolicy())->toBe(NSApplicationActivationPolicy::PROHIBITED);
});

it('returns nil when nothing arrives within the untilDate budget', function (): void {
    $t = hrtime(true);
    $event = $this->app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::APPLICATION_DEFINED, NSDate::dateWithTimeIntervalSinceNow(0.03), NSDefaultRunLoopMode, true);
    $ms = (hrtime(true) - $t) / 1e6;

    expect($event)->toBeNull()
        ->and($ms)->toBeGreaterThanOrEqual(25.0)
        ->and($ms)->toBeLessThan(100.0);
});

it('delivers a posted event to a distantFuture wait at once', function (): void {
    $this->app->postEventAtStart(applicationDefined(41, 42), false);

    $t = hrtime(true);
    $event = $this->app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::APPLICATION_DEFINED, NSDate::distantFuture(), NSDefaultRunLoopMode, true);

    expect((hrtime(true) - $t) / 1e6)->toBeLessThan(10.0)
        ->and($event)->toBeInstanceOf(NSEvent::class)
        ->and($event->type())->toBe(NSEventType::APPLICATION_DEFINED)
        ->and($event->data1())->toBe(41)
        ->and($event->data2())->toBe(42);
});

it('peeks without dequeuing and dispatches with sendEvent', function (): void {
    $this->app->postEventAtStart(applicationDefined(7), false);

    $peeked = $this->app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::APPLICATION_DEFINED->value, NSDate::distantPast(), NSDefaultRunLoopMode, false);
    $taken = $this->app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::APPLICATION_DEFINED, NSDate::distantPast(), NSDefaultRunLoopMode, true);

    expect($peeked?->data1())->toBe(7)
        ->and($taken?->data1())->toBe(7)
        ->and($this->app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::APPLICATION_DEFINED, NSDate::distantPast(), NSDefaultRunLoopMode, true))->toBeNull();

    $this->app->sendEvent($taken);
    $this->app->updateWindows();
});

it('discards queued events matching a mask', function (): void {
    $this->app->postEventAtStart(applicationDefined(1), false);
    $this->app->postEventAtStart(applicationDefined(2), false);

    $this->app->discardEventsMatchingMaskBeforeEvent(NSEventMask::APPLICATION_DEFINED, null);

    expect($this->app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::APPLICATION_DEFINED, NSDate::distantPast(), NSDefaultRunLoopMode, true))->toBeNull();
});

it('runs its own loop until stopped from inside it', function (): void {
    [$read, $write] = stream_socket_pair(STREAM_PF_UNIX, STREAM_SOCK_STREAM, 0);
    $app = $this->app;

    $fd = CFFileDescriptor::create($read, false, function () use ($app): void {
        $app->stop(null);
        $app->postEventAtStart(applicationDefined(), false);
    });
    $fd->enableCallBacks(kCFFileDescriptorReadCallBack);
    $source = $fd->createRunLoopSource(0);
    CFRunLoop::getMain()->addSource($source, kCFRunLoopCommonModes);

    fwrite($write, 'x');
    $app->run();

    expect($app->isRunning())->toBeFalse();

    $fd->invalidate();
});
