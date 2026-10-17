<?php

declare(strict_types=1);

// Site cgimage-decode-length (outcome 1): a decode array shorter than two values per colour component. libgmalloc.

beforeEach(fn () => requireProbeBuild());

it('refuses a short decode array, which Core Graphics reads past (SIGSEGV) without the refusal', function (): void {
    // sRGB has three components, so CGImageCreate reads six CGFloats; the list gives one. It faults in CGImageCreate itself.
    $code = <<<'PHP'
    $provider = CGDataProvider::createWithCFData(CFData::create(null, str_repeat("\xff", 16), 16));
    $image = CGImage::create(2, 2, 8, 32, 8, CGColorSpace::createWithName(kCGColorSpaceSRGB), kCGImageAlphaNoneSkipLast, $provider, [0.0], false, 0);
    $view = ObjCDrawView::initWithFrameDraw(new NSRect(0.0, 0.0, 40.0, 40.0), function () use ($image): void {
        NSGraphicsContext::currentContext()->CGContext()->drawImage(new NSRect(0.0, 0.0, 40.0, 40.0), $image);
    });
    $window = newWindow();
    $window->contentView()->addSubview($view);
    $window->makeKeyAndOrderFront(null);
    $view->setNeedsDisplay(true);
    $view->displayIfNeeded();
    pump(0.5);
    PHP;

    $kept = probeRun($code, null, gmalloc: true);
    $off = probeRun($code, 'cgimage-decode-length', gmalloc: true);

    expect($kept['signal'])->toBeNull()
        ->and($kept['stdout'])->toContain('REFUSED ValueError')
        ->and($off['signal'])->toBe(PROBE_SIGSEGV);
});
