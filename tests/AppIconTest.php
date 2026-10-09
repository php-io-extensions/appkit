<?php

declare(strict_types=1);

it('sets the Dock icon from an image and restores the bundle\'s', function (): void {
    $app = NSApplication::sharedApplication();
    $app->finishLaunching();
    $icon = NSImage::initWithContentsOfFile('/System/Library/CoreServices/CoreTypes.bundle/Contents/Resources/GenericApplicationIcon.icns');

    $app->setApplicationIconImage($icon);
    expect($app->applicationIconImage())->toBeInstanceOf(NSImage::class)
        ->and($app->applicationIconImage()->size())->toEqual($icon->size());

    $app->setApplicationIconImage(null);
    expect($app->applicationIconImage())->toBeInstanceOf(NSImage::class);

    // The Dock redraws the icon through run-loop sources: let them run, so the next test starts idle.
    for ($i = 0; $i < 50 && CFRunLoop::runInMode(kCFRunLoopDefaultMode, 0.05, true) !== CFRunLoopRunResult::TIMED_OUT; $i++) {
    }
});

it('makes an image over a CGImage at a size in points and sets it as the Dock icon', function (): void {
    $app = NSApplication::sharedApplication();
    $provider = CGDataProvider::createWithCFData(CFData::create(str_repeat("\xff\x80\x00\xff", 16 * 16)));
    $cg = CGImage::create(16, 16, 8, 32, 64, CGColorSpace::createWithName(kCGColorSpaceSRGB), kCGImageAlphaPremultipliedLast | kCGBitmapByteOrder32Big, $provider, false, kCGRenderingIntentDefault);

    $image = NSImage::initWithCGImageSize($cg, new NSSize(32.0, 32.0));
    $app->setApplicationIconImage($image);

    expect($image)->toBeInstanceOf(NSImage::class)
        ->and($image->size())->toEqual(new NSSize(32.0, 32.0))
        ->and($app->applicationIconImage()->size())->toEqual(new NSSize(32.0, 32.0));

    $app->setApplicationIconImage(null);
    for ($i = 0; $i < 50 && CFRunLoop::runInMode(kCFRunLoopDefaultMode, 0.05, true) !== CFRunLoopRunResult::TIMED_OUT; $i++) {
    }
});

it('requests the user\'s attention and cancels the request', function (): void {
    $app = NSApplication::sharedApplication();
    $app->finishLaunching();

    $request = $app->requestUserAttention(NSRequestUserAttentionType::INFORMATIONAL);
    $app->cancelUserAttentionRequest($request);

    expect($request)->toBeInt()->toBeGreaterThanOrEqual(0)
        ->and(NSRequestUserAttentionType::CRITICAL->value)->toBe(0);
});
