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

it('sets the layer it is given and leaves wantsLayer alone; a backing layer of its own comes back with wantsLayer off and on', function (): void {
    $view = NSView::initWithFrame(new NSRect(0.0, 0.0, 10.0, 10.0));
    $mine = CALayer::layer();

    $view->setLayer($mine);
    expect($view->layer())->toBe($mine)
        ->and($view->wantsLayer())->toBeFalse();

    $view->setWantsLayer(true);
    $view->setLayer(null);
    $view->setWantsLayer(false);
    $view->setWantsLayer(true);
    expect($view->layer())->toBeInstanceOf(CALayer::class)
        ->and($view->layer())->not->toBe($mine)
        ->and($view->wantsLayer())->toBeTrue();
});

it('shows contents on the layer it went back to', function (): void {
    $view = NSView::initWithFrame(new NSRect(0.0, 0.0, 10.0, 10.0));
    $view->setWantsLayer(true);
    $view->setLayer(CALayer::layer());
    $view->setLayer(null);
    $view->setWantsLayer(false);
    $view->setWantsLayer(true);
    $provider = CGDataProvider::createWithCFData(CFData::create(null, str_repeat("\xff\x00\x00\xff", 4), 16));
    $image = CGImage::create(2, 2, 8, 32, 8, CGColorSpace::createWithName(kCGColorSpaceSRGB), kCGImageAlphaNoneSkipLast | kCGBitmapByteOrder32Big, $provider, null, true, kCGRenderingIntentDefault);

    $view->layer()->setContents($image);

    expect($view->layer()->contents())->toBe($image);
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

it('reads and writes its background colour as a CGColor', function (): void {
    $layer = CALayer::layer();
    $red = NSColor::colorWithRedGreenBlueAlpha(1.0, 0.0, 0.0, 1.0)->CGColor();

    expect($layer->backgroundColor())->toBeNull();

    $layer->setBackgroundColor($red);
    expect($layer->backgroundColor())->toBe($red);

    $layer->setBackgroundColor(null);
    expect($layer->backgroundColor())->toBeNull();
});

it('reads its contents back as the object it holds', function (): void {
    $layer = CALayer::layer();
    $view = NSView::initWithFrame(new NSRect(0.0, 0.0, 10.0, 10.0));
    $view->setLayer($layer);
    $provider = CGDataProvider::createWithCFData(CFData::create(null, str_repeat("\xff\x00\x00\xff", 4), 16));
    $image = CGImage::create(2, 2, 8, 32, 8, CGColorSpace::createWithName(kCGColorSpaceSRGB), kCGImageAlphaNoneSkipLast | kCGBitmapByteOrder32Big, $provider, null, true, kCGRenderingIntentDefault);
    $nsImage = NSImage::initWithCGImageSize($image, new NSSize(2.0, 2.0));

    expect($layer->contents())->toBeNull();

    $layer->setContents($image);
    expect($layer->contents())->toBe($image);

    $layer->setContents($nsImage);
    expect($layer->contents())->toBe($nsImage);

    $layer->setContents(null);
    expect($layer->contents())->toBeNull()
        ->and(fn () => $layer->setContents(new stdClass()))->toThrow(TypeError::class, 'must be of type NSObject|CFType|null, stdClass given');
});

it('reads and writes its contents gravity with the kCAGravity strings', function (): void {
    $layer = CALayer::layer();

    expect($layer->contentsGravity())->toBe(kCAGravityResize)
        ->and([kCAGravityCenter, kCAGravityTop, kCAGravityBottom, kCAGravityLeft, kCAGravityRight, kCAGravityTopLeft, kCAGravityTopRight,
            kCAGravityBottomLeft, kCAGravityBottomRight, kCAGravityResize, kCAGravityResizeAspect, kCAGravityResizeAspectFill])
        ->toBe(['center', 'top', 'bottom', 'left', 'right', 'topLeft', 'topRight', 'bottomLeft', 'bottomRight', 'resize', 'resizeAspect', 'resizeAspectFill']);

    $layer->setContentsGravity(kCAGravityTopLeft);
    expect($layer->contentsGravity())->toBe(kCAGravityTopLeft);
});

it('reads and writes masksToBounds', function (): void {
    $layer = CALayer::layer();

    expect($layer->masksToBounds())->toBeFalse();

    $layer->setMasksToBounds(true);
    expect($layer->masksToBounds())->toBeTrue();
});
