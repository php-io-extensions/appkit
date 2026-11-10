<?php

declare(strict_types=1);

it('reads a layer\'s opacity, and has no presentation layer before the layer is committed', function (): void {
    $layer = CALayer::layer();

    expect($layer->opacity())->toEqualWithDelta(1.0, 0.0001)
        ->and($layer->presentationLayer())->toBeNull();
});

it('keeps the corner radius a layer is given, from 0 at first', function (): void {
    $layer = CALayer::layer();

    expect($layer->cornerRadius())->toEqualWithDelta(0.0, 0.0001);

    $layer->setCornerRadius(8.0);

    expect($layer->cornerRadius())->toEqualWithDelta(8.0, 0.0001);
});

it('opens a group whose current context keeps the duration and the implicit-animation flag it is given', function (): void {
    NSAnimationContext::beginGrouping();
    $context = NSAnimationContext::currentContext();
    $context->setDuration(0.35);
    $context->setAllowsImplicitAnimation(true);

    expect($context)->toBeInstanceOf(NSAnimationContext::class)
        ->and($context->duration())->toEqualWithDelta(0.35, 0.0001)
        ->and($context->allowsImplicitAnimation())->toBeTrue();

    NSAnimationContext::endGrouping();
});

it('gives a view the alpha value it is set to, outside a group at once', function (): void {
    $view = NSView::initWithFrame(new NSRect(0.0, 0.0, 100.0, 100.0));

    expect($view->alphaValue())->toEqualWithDelta(1.0, 0.0001);

    $view->setAlphaValue(0.25);

    expect($view->alphaValue())->toEqualWithDelta(0.25, 0.0001);
});

it('moves a view\'s bounds origin and leaves its frame where it was', function (): void {
    $view = NSView::initWithFrame(new NSRect(10.0, 20.0, 100.0, 50.0));

    $view->setBoundsOrigin(new NSPoint(0.0, -30.0));

    expect($view->bounds()->x)->toEqualWithDelta(0.0, 0.0001)
        ->and($view->bounds()->y)->toEqualWithDelta(-30.0, 0.0001)
        ->and($view->frame()->x)->toEqualWithDelta(10.0, 0.0001)
        ->and($view->frame()->y)->toEqualWithDelta(20.0, 0.0001);
});
