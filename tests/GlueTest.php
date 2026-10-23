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

it('accepts a selector outside the protocol, which nothing sends, and rejects non-callables', function (): void {
    $delegate = new ObjCDelegate('NSWindowDelegate');
    $delegate->on('noSuchSelector:', fn () => null);

    expect($delegate->protocolName())->toBe('NSWindowDelegate')
        ->and(fn () => $delegate->on('windowWillClose:', 'no_such_function'))->toThrow(TypeError::class)
        ->and(fn () => new ObjCTarget('no_such_function'))->toThrow(TypeError::class);
});

it('hands a delegate a struct argument and writes its struct answer back (windowWillResize:toSize:)', function (): void {
    NSApplication::sharedApplication();
    $window = newWindow(200, 100);
    $delegate = new ObjCDelegate('NSWindowDelegate');
    $seen = [];
    $delegate->on('windowWillResize:toSize:', function (NSWindow $sender, NSSize $size) use (&$seen): NSSize {
        $seen[] = [$sender, $size->width, $size->height];

        return new NSSize($size->width / 2, $size->height / 4);
    });
    // AppKit sends windowWillResize:toSize: only while the user drags an edge: send it as AppKit would, through objc_msgSend.
    $ffi = FFI::cdef('typedef struct { double width; double height; } CGSize; void *sel_registerName(const char *name); CGSize objc_msgSend(void *self, void *op, void *sender, CGSize size);', '/usr/lib/libobjc.A.dylib');
    $size = $ffi->new('CGSize');
    $size->width = 300.0;
    $size->height = 200.0;
    $answer = $ffi->objc_msgSend($ffi->cast('void *', $delegate->pointer()), $ffi->sel_registerName('windowWillResize:toSize:'), $ffi->cast('void *', $window->pointer()), $size);

    expect($seen)->toHaveCount(1)
        ->and($seen[0][0])->toBe($window)
        ->and([$seen[0][1], $seen[0][2]])->toBe([300.0, 200.0])
        ->and([$answer->width, $answer->height])->toBe([150.0, 50.0]);
    $window->close();
})->skip(! extension_loaded('ffi'), 'needs ext-ffi to send the selector as AppKit would');

it('hands a delegate NSRange arguments and writes its NSRange answer back', function (): void {
    $scroll = NSTextView::scrollableTextView();
    $text = $scroll->documentView();
    $text->setString('selectable text');
    $delegate = new ObjCDelegate('NSTextViewDelegate');
    $seen = [];
    $delegate->on('textView:willChangeSelectionFromCharacterRange:toCharacterRange:', function (NSTextView $view, NSRange $old, NSRange $new) use (&$seen): NSRange {
        $seen[] = [$old->location, $old->length, $new->location, $new->length];

        return new NSRange($new->location, 1);
    });
    $text->setDelegate($delegate);
    $text->setSelectedRange(new NSRange(2, 5));

    expect($seen)->not->toBeEmpty()
        // setString: left the selection at the end of the 15 characters.
        ->and(end($seen))->toBe([15, 0, 2, 5])
        ->and([$text->selectedRange()->location, $text->selectedRange()->length])->toBe([2, 1]);
    $text->setDelegate(null);
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
    $observer = new ObjCObserver(function (string $path, NSObject $object, array $change, int $context) use (&$seen): void {
        $seen[] = [$path, $change, $context];
    });
    $observer->observe($window, 'title', ObjCObserver::OPTION_NEW | ObjCObserver::OPTION_OLD, 7);
    $window->setTitle('Changed');
    $observer->stop($window, 'title', 7);
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

    // KVO's whole change dictionary: the kind (NSKeyValueChangeSetting = 1) beside new and old, and the registered context.
    expect($seen)->toHaveCount(1)
        ->and($seen[0][0])->toBe('title')
        ->and($seen[0][1])->toEqualCanonicalizing(['kind' => 1, 'new' => 'Changed', 'old' => ''])
        ->and($seen[0][2])->toBe(7)
        ->and($resized)->toBe(1)
        ->and(NSViewFrameDidChangeNotification)->toBe('NSViewFrameDidChangeNotification');
    $window->close();
});

it('hands PHP the prior notification as well when asked', function (): void {
    $window = NSWindow::initWithContentRectStyleMaskBackingDefer(new NSRect(0, 0, 200, 100), NSWindowStyleMask::TITLED->value, NSBackingStoreType::BUFFERED, false);
    $window->setReleasedWhenClosed(false);
    $window->setTitle('Before');
    $seen = [];
    $observer = new ObjCObserver(function (string $path, NSObject $object, array $change) use (&$seen): void {
        $seen[] = [$change['new'] ?? null, $change['old'] ?? null];
    });
    $observer->observe($window, 'title', ObjCObserver::OPTION_PRIOR | ObjCObserver::OPTION_NEW | ObjCObserver::OPTION_OLD, 0);
    $window->setTitle('After');
    $observer->stop($window, 'title', 0);

    expect(ObjCObserver::OPTION_PRIOR)->toBe(8)
        ->and([ObjCObserver::OPTION_NEW, ObjCObserver::OPTION_OLD, ObjCObserver::OPTION_INITIAL])->toBe([1, 2, 4])
        ->and($seen)->toBe([[null, 'Before'], ['After', 'Before']]);
    $window->close();
});

it('registers a pair as often as observed, removes what a freed observer still observed, and lets KVO refuse a stop', function (): void {
    NSApplication::sharedApplication();
    $window = newWindow();
    $calls = 0;
    $observer = new ObjCObserver(function () use (&$calls): void {
        $calls++;
    });
    $observer->observe($window, 'title', ObjCObserver::OPTION_NEW, 0);
    $observer->observe($window, 'title', ObjCObserver::OPTION_NEW, 0);
    $window->setTitle('twice');

    expect($calls)->toBe(2);
    $observer->stop($window, 'title', 0);
    $observer->stop($window, 'title', 0);
    expect(fn () => $observer->stop($window, 'title', 0))->toThrow(AppKitException::class, 'NSRangeException');

    $observer->observe($window, 'title', ObjCObserver::OPTION_NEW, 0);
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

    expect(fn () => $observer->observe($view, 'titel', ObjCObserver::OPTION_NEW | ObjCObserver::OPTION_INITIAL, 0))->toThrow(AppKitException::class)
        ->and(fn () => $observer->stop($view, 'titel', 0))->toThrow(AppKitException::class, 'NSRangeException');

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
    $observer->observe($view, 'frame', ObjCObserver::OPTION_NEW, 0);
    $view->setFrame(new NSRect(1.0, 2.0, 3.0, 4.0));
    $observer->stop($view, 'frame', 0);

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

it('answers NSWindow\'s own key and main status until a handler answers instead', function (): void {
    $app = NSApplication::sharedApplication();
    $app->finishLaunching();
    $app->setActivationPolicy(NSApplicationActivationPolicy::REGULAR);
    $app->activateIgnoringOtherApps(true);
    $window = ObjCStageWindow::initWithContentRectStyleMaskBackingDefer(new NSRect(200.0, 200.0, 160.0, 120.0), NSWindowStyleMask::BORDERLESS, NSBackingStoreType::BUFFERED, false);
    $window->setReleasedWhenClosed(false);

    // No handler: a borderless window answers NO, as NSWindow does.
    expect($window)->toBeInstanceOf(NSWindow::class)
        ->and([$window->canBecomeKeyWindow(), $window->canBecomeMainWindow()])->toBe([false, false]);

    $asked = [];
    $window->on('canBecomeKeyWindow', function () use (&$asked): bool {
        $asked[] = 'key';

        return true;
    });
    $window->on('canBecomeMainWindow', fn (): bool => false);
    $window->makeKeyAndOrderFront(null);
    pumpUntil($app, fn (): bool => $window->isKeyWindow(), 2.0);
    expect([$window->canBecomeKeyWindow(), $window->canBecomeMainWindow()])->toBe([true, false])
        ->and($window->isKeyWindow())->toBeTrue()
        ->and($asked)->toContain('key');

    $window->orderOut(null);
    $window->off('canBecomeKeyWindow');
    $window->makeKeyAndOrderFront(null);
    pumpFor($app, 0.2);
    expect($window->canBecomeKeyWindow())->toBeFalse()
        ->and($window->isKeyWindow())->toBeFalse()
        ->and(method_exists($window, 'setCanBecomeKey'))->toBeFalse();

    $window->close();
});

it('lets a focus view take first responder only while its handler answers yes', function (): void {
    $window = NSWindow::initWithContentRectStyleMaskBackingDefer(new NSRect(200.0, 200.0, 160.0, 120.0), NSWindowStyleMask::TITLED, NSBackingStoreType::BUFFERED, false);
    $window->setReleasedWhenClosed(false);
    $view = ObjCFocusView::initWithFrame(new NSRect(0.0, 0.0, 100.0, 80.0));
    $window->contentView()->addSubview($view);

    // No handler: an NSView answers NO. (makeFirstResponder: does not ask; a click and Tab do.)
    expect($view)->toBeInstanceOf(NSView::class)
        ->and($view->acceptsFirstResponder())->toBeFalse();

    $asked = 0;
    $view->on('acceptsFirstResponder', function () use (&$asked): bool {
        $asked++;

        return true;
    });
    expect($view->acceptsFirstResponder())->toBeTrue()
        ->and($asked)->toBe(1);

    $view->off('acceptsFirstResponder');
    expect($view->acceptsFirstResponder())->toBeFalse();
    $window->close();
});

it('hands a key window\'s keyDown: to PHP, and to NSWindow when PHP declines', function (): void {
    $app = NSApplication::sharedApplication();
    $app->finishLaunching();
    $app->setActivationPolicy(NSApplicationActivationPolicy::REGULAR);
    $app->activateIgnoringOtherApps(true);
    $window = ObjCKeyWindow::initWithContentRectStyleMaskBackingDefer(new NSRect(200.0, 200.0, 240.0, 120.0), NSWindowStyleMask::TITLED, NSBackingStoreType::BUFFERED, false);
    $window->setReleasedWhenClosed(false);
    $field = NSTextField::initWithFrame(new NSRect(10.0, 40.0, 200.0, 24.0));
    $window->contentView()->addSubview($field);
    $window->setAutorecalculatesKeyViewLoop(true);
    $window->makeKeyAndOrderFront(null);
    pumpUntil($app, fn (): bool => $window->isKeyWindow(), 2.0);
    $window->makeFirstResponder(null);
    $key = static fn (int $code): NSEvent => NSEvent::eventWithCGEvent(CGEvent::createKeyboardEvent(null, $code, true));

    expect($window)->toBeInstanceOf(NSWindow::class);

    $seen = [];
    $window->on('keyDown:', function (NSEvent $event) use (&$seen): bool {
        $seen[] = $event->keyCode();

        // Tab (key code 48) is declined: NSWindow moves along the key-view loop.
        return $event->keyCode() !== 48;
    });
    $app->sendEvent($key(96));
    expect($seen)->toBe([96]);

    $app->sendEvent($key(48));
    expect($seen)->toBe([96, 48])
        ->and($window->firstResponder()?->delegate())->toBe($field);

    $window->off('keyDown:');
    $window->makeFirstResponder(null);
    $app->sendEvent($key(96));
    expect($seen)->toBe([96, 48]);
    $window->close();
});
