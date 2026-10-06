<?php

declare(strict_types=1);

/*
 * A view's layer: the one AppKit backs it with, or one set from outside (a
 * CAMetalLayer made by ext-metal, reached by its address).
 */

it('makes a layer of its own and reads its scale', function (): void {
    $layer = CALayer::layer();

    expect($layer)->toBeInstanceOf(NSObject::class)
        ->and($layer->className())->toBe('CALayer')
        ->and($layer->contentsScale())->toBe(1.0);

    $layer->setContentsScale(2.0);
    expect($layer->contentsScale())->toBe(2.0);
});

it('boxes a layer at an address, the same object again', function (): void {
    $layer = CALayer::layer();

    $again = CALayer::fromPointer($layer->pointer());

    expect($again)->toBe($layer)
        ->and(NSObject::fromPointer($layer->pointer()))->toBe($layer);
});

it('refuses a null address', function (): void {
    CALayer::fromPointer(0);
})->throws(ValueError::class);

it('refuses an object of another kind', function (): void {
    $view = NSView::initWithFrame(new NSRect(0.0, 0.0, 10.0, 10.0));
    $layer = CALayer::layer();

    expect(fn () => CALayer::fromPointer($view->pointer()))->toThrow(TypeError::class, 'is an NSView, not a CALayer');
    expect(fn () => NSView::fromPointer($layer->pointer()))->toThrow(TypeError::class, 'is a CALayer, not an NSView');
});

it('has no layer until it wants one, then its own', function (): void {
    $view = NSView::initWithFrame(new NSRect(0.0, 0.0, 10.0, 10.0));

    expect($view->layer())->toBeNull();

    $view->setWantsLayer(true);
    $backing = $view->layer();
    expect($backing)->toBeInstanceOf(CALayer::class)
        ->and($view->layer())->toBe($backing);
});

it('takes a layer set from outside, and goes back to a backing layer of its own', function (): void {
    $view = NSView::initWithFrame(new NSRect(0.0, 0.0, 10.0, 10.0));
    $mine = CALayer::layer();

    $view->setLayer($mine);
    expect($view->layer())->toBe($mine)
        ->and($view->wantsLayer())->toBeTrue();

    $view->setLayer(null);
    expect($view->layer())->not->toBeNull()
        ->and($view->layer())->not->toBe($mine)
        ->and($view->wantsLayer())->toBeTrue();
});

it('shows contents on the layer it went back to', function (): void {
    $view = NSView::initWithFrame(new NSRect(0.0, 0.0, 10.0, 10.0));
    $view->setLayer(CALayer::layer());
    $view->setLayer(null);
    $provider = CGDataProvider::createWithCFData(CFData::create(str_repeat("\xff\x00\x00\xff", 4)));
    $image = CGImage::create(2, 2, 8, 32, 8, CGColorSpace::createWithName(kCGColorSpaceSRGB), kCGImageAlphaNoneSkipLast | kCGBitmapByteOrder32Big, $provider, true, kCGRenderingIntentDefault);

    $view->setLayerContents($image);

    expect($view->layerContents())->toBe($image);
});

it('hosts sublayers, a Metal layer among them, in the order they were added', function (): void {
    $host = CALayer::layer();
    $first = CALayer::layer();
    $metal = CAMetalLayer::layer();

    expect($host->sublayers())->toBe([]);

    $host->addSublayer($first);
    $host->addSublayer(CALayer::fromPointer($metal->pointer()));

    $sublayers = $host->sublayers();
    expect($sublayers)->toHaveCount(2)
        ->and($sublayers[0])->toBe($first)
        ->and($sublayers[1]->pointer())->toBe($metal->pointer())
        ->and($sublayers[1]->className())->toBe('CAMetalLayer');
})->skip(! class_exists(CAMetalLayer::class), 'needs ext-metal for a CAMetalLayer');
