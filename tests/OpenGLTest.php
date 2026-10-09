<?php

declare(strict_types=1);

/*
 * NSOpenGLPixelFormat, NSOpenGLContext, NSOpenGLView and the ObjCOpenGLView
 * trampoline: the GL view a canvas lends. Contexts are read back through
 * ext-opengl's CGL bindings.
 */

beforeEach(function (): void {
    if (! extension_loaded('opengl')) {
        $this->markTestSkipped('needs ext-opengl to read the current context');
    }
});

it('makes a 4.1 core context from a pixel format and reads its CGL context back', function (): void {
    $format = NSOpenGLPixelFormat::initWithAttributes([NSOpenGLPFAOpenGLProfile, NSOpenGLProfileVersion4_1Core, NSOpenGLPFAAccelerated, NSOpenGLPFAColorSize, 24, NSOpenGLPFAAlphaSize, 8, 0]);
    $context = NSOpenGLContext::initWithFormatShareContext($format, null);

    $context->makeCurrentContext();

    expect($format)->not->toBeNull()
        ->and($context->CGLContextObj())->toBe(CGLGetCurrentContext()?->pointer())
        ->and(NSOpenGLContext::currentContext()?->pointer())->toBe($context->pointer())
        ->and(glGetString(GL_VERSION))->toStartWith('4.1');
    NSOpenGLContext::clearCurrentContext();
    expect(NSOpenGLContext::currentContext())->toBeNull();
});

it('refuses an attribute list that does not end in 0', function (): void {
    NSOpenGLPixelFormat::initWithAttributes([NSOpenGLPFAAccelerated]);
})->throws(ValueError::class);

it('answers null for a pixel format no renderer offers', function (): void {
    // 1024 colour bits: no renderer has them.
    expect(NSOpenGLPixelFormat::initWithAttributes([NSOpenGLPFAColorSize, 1024, NSOpenGLPFAAccelerated, 0]))->toBeNull();
});

it('marks a view as needing display', function (): void {
    $window = newWindow(200, 150);
    $view = NSView::initWithFrame(new NSRect(0.0, 0.0, 50.0, 50.0));
    $window->contentView()->addSubview($view);

    $view->setNeedsDisplay(true);

    expect($view->needsDisplay())->toBeTrue();
});

it('draws through PHP from drawRect: with the view\'s context current', function (): void {
    $app = NSApplication::sharedApplication();
    $window = newWindow(200, 150);
    $format = NSOpenGLPixelFormat::initWithAttributes([NSOpenGLPFAOpenGLProfile, NSOpenGLProfileVersion4_1Core, NSOpenGLPFAAccelerated, NSOpenGLPFADoubleBuffer, NSOpenGLPFAColorSize, 24, 0]);
    $seen = [];
    $view = ObjCOpenGLView::initWithFramePixelFormatDraw(new NSRect(0.0, 0.0, 200.0, 150.0), $format, function (ObjCOpenGLView $drawn) use (&$seen): void {
        glGetIntegerv(GL_DRAW_FRAMEBUFFER_BINDING, $bound);
        $seen[] = [$drawn, $bound[0], CGLGetCurrentContext()?->pointer()];
        glClearColor(1.0, 0.0, 0.0, 1.0);
        glClear(GL_COLOR_BUFFER_BIT);
    });
    $view->setWantsBestResolutionOpenGLSurface(true);
    $window->contentView()->addSubview($view);
    $window->makeKeyAndOrderFront(null);
    pumpUntil($app, function () use (&$seen): bool { return $seen !== []; }, 3.0);
    $count = count($seen);
    // An NSOpenGLView reads needsDisplay as false at once; the draw it schedules is what counts.
    $view->setNeedsDisplay(true);
    pumpUntil($app, function () use (&$seen, $count): bool { return count($seen) > $count; }, 3.0);

    expect(count($seen))->toBeGreaterThan($count)
        ->and($seen[0][0]->pointer())->toBe($view->pointer())
        ->and($seen[0][1])->toBe(0)
        ->and($seen[0][2])->toBe($view->openGLContext()->CGLContextObj())
        ->and($view->wantsBestResolutionOpenGLSurface())->toBeTrue()
        ->and($view->pixelFormat()?->pointer())->toBe($format->pointer())
        ->and($view->openGLContext()->view()?->pointer())->toBe($view->pointer());
    $window->close();
});

it('puts back the context that was current after it draws', function (): void {
    $app = NSApplication::sharedApplication();
    $window = newWindow(200, 150);
    $format = NSOpenGLPixelFormat::initWithAttributes([NSOpenGLPFAOpenGLProfile, NSOpenGLProfileVersion4_1Core, NSOpenGLPFAAccelerated, NSOpenGLPFADoubleBuffer, NSOpenGLPFAColorSize, 24, 0]);
    $draws = 0;
    $view = ObjCOpenGLView::initWithFramePixelFormatDraw(new NSRect(0.0, 0.0, 200.0, 150.0), $format, function () use (&$draws): void {
        $draws++;
    });
    $window->contentView()->addSubview($view);
    $other = NSOpenGLContext::initWithFormatShareContext($format, null);
    $other->makeCurrentContext();
    $before = CGLGetCurrentContext()?->pointer();

    $window->makeKeyAndOrderFront(null);
    pumpUntil($app, function () use (&$draws): bool { return $draws > 0; }, 3.0);

    expect($draws)->toBeGreaterThan(0)
        ->and(CGLGetCurrentContext()?->pointer())->toBe($before)
        ->and(NSOpenGLContext::currentContext()?->pointer())->toBe($other->pointer());
    NSOpenGLContext::clearCurrentContext();
    $window->close();
});

it('leaves no context current after it draws when none was', function (): void {
    $app = NSApplication::sharedApplication();
    $window = newWindow(200, 150);
    $draws = 0;
    $view = ObjCOpenGLView::initWithFramePixelFormatDraw(new NSRect(0.0, 0.0, 200.0, 150.0), null, function () use (&$draws): void {
        $draws++;
    });
    $window->contentView()->addSubview($view);
    NSOpenGLContext::clearCurrentContext();

    $window->makeKeyAndOrderFront(null);
    pumpUntil($app, function () use (&$draws): bool { return $draws > 0; }, 3.0);

    expect($draws)->toBeGreaterThan(0)
        ->and(CGLGetCurrentContext())->toBeNull()
        ->and(NSOpenGLContext::currentContext())->toBeNull();
    $window->close();
});

it('turns vsync off and on through the swap interval, and reads it back', function (): void {
    $format = NSOpenGLPixelFormat::initWithAttributes([NSOpenGLPFAOpenGLProfile, NSOpenGLProfileVersion4_1Core, NSOpenGLPFAAccelerated, NSOpenGLPFADoubleBuffer, 0]);
    $context = NSOpenGLContext::initWithFormatShareContext($format, null);

    $context->setValuesForParameter([0], NSOpenGLContextParameter::SWAP_INTERVAL);
    expect($context->getValuesForParameter(NSOpenGLContextParameter::SWAP_INTERVAL, 1))->toBe([0]);

    $context->setValuesForParameter([1], NSOpenGLContextParameter::SWAP_INTERVAL);
    expect($context->getValuesForParameter(NSOpenGLContextParameter::SWAP_INTERVAL, 1))->toBe([1])
        ->and(NSOpenGLContextParameter::SWAP_INTERVAL->value)->toBe(222);
});

it('refuses a parameter list it cannot pass', function (): void {
    $format = NSOpenGLPixelFormat::initWithAttributes([NSOpenGLPFAOpenGLProfile, NSOpenGLProfileVersion4_1Core, 0]);
    $context = NSOpenGLContext::initWithFormatShareContext($format, null);

    expect(fn () => $context->setValuesForParameter([1, 2, 3, 4, 5], NSOpenGLContextParameter::SWAP_RECTANGLE))->toThrow(ValueError::class, 'must hold at most 4 ints')
        ->and(fn () => $context->setValuesForParameter(['1'], NSOpenGLContextParameter::SWAP_INTERVAL))->toThrow(TypeError::class, 'must be a list of 32-bit ints')
        ->and(fn () => $context->getValuesForParameter(NSOpenGLContextParameter::SWAP_INTERVAL, 0))->toThrow(ValueError::class, 'must be between 1 and 4');
});

it('makes a half-float context and puts a view in extended dynamic range', function (): void {
    $format = NSOpenGLPixelFormat::initWithAttributes([NSOpenGLPFAOpenGLProfile, NSOpenGLProfileVersion4_1Core, NSOpenGLPFAAccelerated, NSOpenGLPFADoubleBuffer, NSOpenGLPFAColorFloat, NSOpenGLPFAColorSize, 64, NSOpenGLPFAAlphaSize, 16, 0]);
    $view = NSView::initWithFrame(new NSRect(0.0, 0.0, 32.0, 32.0));

    $before = $view->wantsExtendedDynamicRangeOpenGLSurface();
    $view->setWantsExtendedDynamicRangeOpenGLSurface(true);
    $view->setWantsBestResolutionOpenGLSurface(true);

    expect($format)->not->toBeNull()
        ->and(NSOpenGLContext::initWithFormatShareContext($format, null))->not->toBeNull()
        ->and([$before, $view->wantsExtendedDynamicRangeOpenGLSurface()])->toBe([false, true])
        ->and($view->wantsBestResolutionOpenGLSurface())->toBeTrue();
});
