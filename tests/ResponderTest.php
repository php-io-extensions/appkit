<?php

declare(strict_types=1);

/*
 * The responder chain's next link, on views and windows, and the
 * application's delegate.
 */

it('reads and sets a responder\'s next responder', function (): void {
    $outer = NSView::initWithFrame(new NSRect(0.0, 0.0, 40.0, 40.0));
    $inner = NSView::initWithFrame(new NSRect(0.0, 0.0, 10.0, 10.0));
    $outer->addSubview($inner);

    expect($inner->nextResponder())->toBe($outer);

    $window = NSWindow::initWithContentRectStyleMaskBackingDefer(new NSRect(0.0, 0.0, 80.0, 60.0), NSWindowStyleMask::TITLED, NSBackingStoreType::BUFFERED, true);
    $inner->setNextResponder($window);
    expect($inner->nextResponder())->toBe($window);

    $inner->setNextResponder(null);
    expect($inner->nextResponder())->toBeNull();
});

it('reads and sets the application\'s delegate', function (): void {
    $app = NSApplication::sharedApplication();
    $before = $app->delegate();
    $delegate = new ObjCDelegate('NSApplicationDelegate');

    $app->setDelegate($delegate);
    expect($app->delegate())->toBe($delegate);

    $app->setDelegate($before);
    expect($app->delegate())->toBe($before);
});

it('reads and sets the key-view loop and the initial first responder, and moves along it', function (): void {
    $app = NSApplication::sharedApplication();
    $app->finishLaunching();
    $app->setActivationPolicy(NSApplicationActivationPolicy::REGULAR);
    $app->activateIgnoringOtherApps(true);
    $window = NSWindow::initWithContentRectStyleMaskBackingDefer(new NSRect(200.0, 200.0, 240.0, 120.0), NSWindowStyleMask::TITLED, NSBackingStoreType::BUFFERED, false);
    $window->setReleasedWhenClosed(false);
    // Views that accept first responder: selectNextKeyView: from a text field's field editor does
    // not walk the loop (the field editor's own insertTab: does, on a real Tab).
    $first = ObjCFocusView::initWithFrame(new NSRect(10.0, 70.0, 200.0, 24.0));
    $second = ObjCFocusView::initWithFrame(new NSRect(10.0, 20.0, 200.0, 24.0));
    foreach ([$first, $second] as $view) {
        $view->on('acceptsFirstResponder', fn (): bool => true);
        $window->contentView()->addSubview($view);
    }

    $window->setAutorecalculatesKeyViewLoop(false);
    $first->setNextKeyView($second);
    $window->setInitialFirstResponder($first);
    expect($first->nextKeyView())->toBe($second)
        ->and($window->initialFirstResponder())->toBe($first);

    $window->makeKeyAndOrderFront(null);
    pumpUntil($app, fn (): bool => $window->isKeyWindow(), 2.0);
    $window->makeFirstResponder($first);
    $window->selectNextKeyView(null);
    expect($window->firstResponder())->toBe($second);

    $window->selectPreviousKeyView(null);
    expect($window->firstResponder())->toBe($first);

    $first->setNextKeyView(null);
    $window->setInitialFirstResponder(null);
    expect($first->nextKeyView())->toBeNull()
        ->and($window->initialFirstResponder())->toBeNull();
    $window->close();
});

it('interprets key events into insertText: and doCommandBySelector: on a first-responder focus view', function (): void {
    $app = NSApplication::sharedApplication();
    $app->finishLaunching();
    $app->setActivationPolicy(NSApplicationActivationPolicy::REGULAR);
    $app->activateIgnoringOtherApps(true);
    $window = NSWindow::initWithContentRectStyleMaskBackingDefer(new NSRect(200.0, 200.0, 240.0, 120.0), NSWindowStyleMask::TITLED, NSBackingStoreType::BUFFERED, false);
    $window->setReleasedWhenClosed(false);
    $view = ObjCFocusView::initWithFrame(new NSRect(0.0, 0.0, 200.0, 100.0));
    $window->contentView()->addSubview($view);
    $view->on('acceptsFirstResponder', static fn (): bool => true);
    $window->makeKeyAndOrderFront(null);
    pumpUntil($app, fn (): bool => $window->isKeyWindow(), 2.0);
    $window->makeFirstResponder($view);
    // The view's input context activates on the next run-loop pass; before that, interpretKeyEvents: inserts nothing.
    pumpFor($app, 0.1);
    $key = static fn (int $code): NSEvent => NSEvent::eventWithCGEvent(CGEvent::createKeyboardEvent(null, $code, true));

    $text = [];
    $commands = [];
    $view->on('insertText:replacementRange:', function (string $string) use (&$text): bool {
        $text[] = $string;

        return true;
    });
    $view->on('doCommandBySelector:', function (string $selector) use (&$commands): bool {
        $commands[] = $selector;

        return true;
    });

    $view->interpretKeyEvents([$key(0)]);
    expect($text)->toBe(['a'])
        ->and($commands)->toBe([]);

    $view->interpretKeyEvents([$key(123)]);
    expect($commands)->toBe(['moveLeft:'])
        ->and($text)->toBe(['a']);

    $view->off('insertText:replacementRange:');
    $view->off('doCommandBySelector:');
    $window->close();
});
