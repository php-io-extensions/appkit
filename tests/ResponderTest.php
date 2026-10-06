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
