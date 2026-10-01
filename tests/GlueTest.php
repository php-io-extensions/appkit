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
