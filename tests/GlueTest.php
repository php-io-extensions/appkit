<?php

declare(strict_types=1);

it('builds a delegate for a known protocol only', function (): void {
    $delegate = new ObjCDelegate('NSWindowDelegate');

    expect($delegate->protocolName())->toBe('NSWindowDelegate')
        ->and($delegate->className())->toBe('PHPAppKitDelegate')
        ->and($delegate->respondsToSelector('windowWillClose:'))->toBeFalse()
        ->and(fn () => new ObjCDelegate('NoSuchProtocol'))->toThrow(ValueError::class);
});

it('answers only the selectors it was given handlers for', function (): void {
    $delegate = new ObjCDelegate('NSWindowDelegate');
    $delegate->on('windowWillClose:', fn () => null);

    expect($delegate->respondsToSelector('windowWillClose:'))->toBeTrue()
        ->and($delegate->respondsToSelector('windowDidResize:'))->toBeFalse();

    $delegate->off('windowWillClose:');
    expect($delegate->respondsToSelector('windowWillClose:'))->toBeFalse();
});

it('rejects selectors outside the protocol and non-callables', function (): void {
    $delegate = new ObjCDelegate('NSWindowDelegate');

    expect(fn () => $delegate->on('noSuchSelector:', fn () => null))->toThrow(ValueError::class)
        ->and(fn () => $delegate->on('windowWillClose:', 'no_such_function'))->toThrow(TypeError::class)
        ->and(fn () => new ObjCTarget('no_such_function'))->toThrow(TypeError::class);
});

it('marshals About options to an NSDictionary and rejects other values', function (): void {
    $app = NSApplication::sharedApplication();

    expect(fn () => $app->orderFrontStandardAboutPanelWithOptions(['ApplicationName' => 'X', 'Bad' => []]))->toThrow(TypeError::class)
        ->and(fn () => $app->orderFrontStandardAboutPanelWithOptions([0 => 'X']))->toThrow(ValueError::class);
});

it('observes a key path and a notification', function (): void {
    $app = NSApplication::sharedApplication();
    $window = NSWindow::initWithContentRectStyleMaskBackingDefer(new NSRect(0, 0, 200, 100), NSWindowStyleMask::TITLED->value, NSBackingStoreType::BUFFERED, false);
    $window->setReleasedWhenClosed(false);
    $seen = [];
    $observer = new ObjCObserver(function (string $path, NSObject $object, array $change) use (&$seen): void {
        $seen[] = [$path, $change['new'] ?? null, $change['old'] ?? null];
    });
    $observer->observe($window, 'title', ObjCObserver::OPTION_NEW | ObjCObserver::OPTION_OLD);
    $window->setTitle('Changed');
    $observer->stop($window, 'title');
    $window->setTitle('Unseen');

    $resized = 0;
    $center = NSNotificationCenter::defaultCenter();
    $token = $center->addObserverForNameObjectQueueUsingBlock(NSWindowDidResizeNotification, $window, NSOperationQueue::mainQueue(), function (NSNotification $n) use (&$resized, $window): void {
        expect($n->name())->toBe(NSWindowDidResizeNotification)
            ->and($n->object())->toBe($window);
        $resized++;
    });
    $window->setContentSize(new NSSize(300.0, 150.0));
    $center->removeObserver($token);
    $window->setContentSize(new NSSize(310.0, 150.0));

    expect($seen)->toBe([['title', 'Changed', '']])
        ->and($resized)->toBe(1)
        ->and(NSViewFrameDidChangeNotification)->toBe('NSViewFrameDidChangeNotification');
    $window->close();
});

it('removes what a freed observer still observed and refuses to stop twice', function (): void {
    NSApplication::sharedApplication();
    $window = newWindow();
    $observer = new ObjCObserver(fn () => null);
    $observer->observe($window, 'title', ObjCObserver::OPTION_NEW);

    expect(fn () => $observer->observe($window, 'title', ObjCObserver::OPTION_NEW))->toThrow(AppKitException::class, 'already observes');
    $observer->stop($window, 'title');
    expect(fn () => $observer->stop($window, 'title'))->toThrow(AppKitException::class, 'does not observe');

    $observer->observe($window, 'title', ObjCObserver::OPTION_NEW);
    unset($observer);
    gc_collect_cycles();
    $window->setTitle('nobody listening');
    $window->close();

    expect($window->title())->toBe('nobody listening');
});

it('forgets a key path AppKit refused to observe', function (): void {
    NSApplication::sharedApplication();
    $view = NSView::initWithFrame(new NSRect(0, 0, 10, 10));
    $observer = new ObjCObserver(fn () => null);

    expect(fn () => $observer->observe($view, 'titel', ObjCObserver::OPTION_NEW | ObjCObserver::OPTION_INITIAL))->toThrow(AppKitException::class)
        ->and(fn () => $observer->stop($view, 'titel'))->toThrow(AppKitException::class, 'does not observe');

    unset($observer);
    gc_collect_cycles();
    expect($view->isHidden())->toBeFalse();
});

it('hands geometry changes to PHP as value classes', function (): void {
    NSApplication::sharedApplication();
    $view = NSView::initWithFrame(new NSRect(0, 0, 10, 10));
    $changes = [];
    $observer = new ObjCObserver(function (string $path, NSObject $object, array $change) use (&$changes): void {
        $changes[] = $change['new'];
    });
    $observer->observe($view, 'frame', ObjCObserver::OPTION_NEW);
    $view->setFrame(new NSRect(1.0, 2.0, 3.0, 4.0));
    $observer->stop($view, 'frame');

    expect($changes[0])->toBeInstanceOf(NSRect::class)
        ->and([$changes[0]->x, $changes[0]->y, $changes[0]->width, $changes[0]->height])->toBe([1.0, 2.0, 3.0, 4.0]);
});

it('enters PHP only on the thread that registered the callable', function (): void {
    NSApplication::sharedApplication();
    $center = NSNotificationCenter::defaultCenter();
    $calls = 0;
    $count = function () use (&$calls): void {
        $calls++;
    };

    $background = NSOperationQueue::init();
    $offThread = $center->addObserverForNameObjectQueueUsingBlock('VenusianAppKitTestNotification', null, $background, $count);
    $center->postNotificationNameObject('VenusianAppKitTestNotification', null);
    $background->waitUntilAllOperationsAreFinished();
    $center->removeObserver($offThread);
    expect($calls)->toBe(0);

    $onMain = $center->addObserverForNameObjectQueueUsingBlock('VenusianAppKitTestNotification', null, NSOperationQueue::mainQueue(), $count);
    $center->postNotificationNameObject('VenusianAppKitTestNotification', null);
    $center->removeObserver($onMain);
    expect($calls)->toBe(1);
});

it('names the text-change notifications a control and a text view tell their delegates', function (): void {
    expect(NSControlTextDidChangeNotification)->toBe('NSControlTextDidChangeNotification')
        ->and(NSTextDidChangeNotification)->toBe('NSTextDidChangeNotification');
});

it('lets a borderless stage window become key, and makes any refuse it', function (): void {
    $app = NSApplication::sharedApplication();
    $app->finishLaunching();
    $app->setActivationPolicy(NSApplicationActivationPolicy::REGULAR);
    $app->activateIgnoringOtherApps(true);
    $window = ObjCStageWindow::initWithContentRectStyleMaskBackingDefer(new NSRect(200.0, 200.0, 160.0, 120.0), NSWindowStyleMask::BORDERLESS, NSBackingStoreType::BUFFERED, false);
    $window->setReleasedWhenClosed(false);

    $window->makeKeyAndOrderFront(null);
    pumpUntil($app, fn (): bool => $window->isKeyWindow(), 2.0);
    expect($window)->toBeInstanceOf(NSWindow::class)
        ->and($window->canBecomeKey())->toBeTrue()
        ->and($window->isKeyWindow())->toBeTrue();

    $window->orderOut(null);
    $window->setCanBecomeKey(false);
    $window->makeKeyAndOrderFront(null);
    pumpFor($app, 0.2);
    expect($window->canBecomeKey())->toBeFalse()
        ->and($window->isKeyWindow())->toBeFalse();

    $window->close();
});
