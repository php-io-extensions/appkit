<?php

declare(strict_types=1);

/*
 * GameController.framework with whatever pads this Mac has: none, or a DualSense. The pad tests
 * skip without one. GameController gives input only to the active app (macOS 15.4.x ignores
 * shouldMonitorBackgroundEvents), so they read at-rest values without asserting presses.
 */

function anyGamePad(): ?GCController
{
    CFRunLoop::runInMode(kCFRunLoopDefaultMode, 0.2, false);

    return GCController::controllers()[0] ?? null;
}

it('keeps the GameController class hierarchy', function (): void {
    expect(get_parent_class(GCController::class))->toBe(NSObject::class)
        ->and(get_parent_class(GCExtendedGamepad::class))->toBe(GCPhysicalInputProfile::class)
        ->and(get_parent_class(GCMicroGamepad::class))->toBe(GCPhysicalInputProfile::class)
        ->and(get_parent_class(GCPhysicalInputProfile::class))->toBe(NSObject::class)
        ->and(get_parent_class(GCControllerButtonInput::class))->toBe(GCControllerElement::class)
        ->and(get_parent_class(GCControllerAxisInput::class))->toBe(GCControllerElement::class)
        ->and(get_parent_class(GCControllerDirectionPad::class))->toBe(GCControllerElement::class)
        ->and(get_parent_class(GCControllerElement::class))->toBe(NSObject::class);
});

it('lists the connected controllers as GCController objects', function (): void {
    CFRunLoop::runInMode(kCFRunLoopDefaultMode, 0.2, false);
    $controllers = GCController::controllers();

    expect($controllers)->toBeArray()->toBeList();
    foreach ($controllers as $controller) {
        expect($controller)->toBeInstanceOf(GCController::class);
    }
});

it('reads and sets whether background events are wanted', function (): void {
    $before = GCController::shouldMonitorBackgroundEvents();
    GCController::setShouldMonitorBackgroundEvents(! $before);
    $flipped = GCController::shouldMonitorBackgroundEvents();
    GCController::setShouldMonitorBackgroundEvents($before);

    // macOS 15.4.x keeps it false whatever is set (Apple forum 780929); elsewhere it flips.
    expect($before)->toBeBool()
        ->and($flipped)->toBeBool()
        ->and(GCController::shouldMonitorBackgroundEvents())->toBe($before);
});

it('starts and stops wireless discovery with a completion handler or none', function (): void {
    // macOS 15.4.1 never calls the handler, on stop or after 40 s, with or without an
    // NSApplication (measured with a native probe): it is held, and never called in the start.
    $ended = 0;
    GCController::startWirelessControllerDiscoveryWithCompletionHandler(function () use (&$ended): void {
        $ended++;
    });
    $during = $ended;
    GCController::stopWirelessControllerDiscovery();
    CFRunLoop::runInMode(kCFRunLoopDefaultMode, 0.2, false);
    GCController::startWirelessControllerDiscoveryWithCompletionHandler(null);
    GCController::stopWirelessControllerDiscovery();

    expect($during)->toBe(0)
        ->and(fn () => GCController::startWirelessControllerDiscoveryWithCompletionHandler('strlen'))->toThrow(TypeError::class);
});

it('names the connect notifications and numbers player indexes as GameController does', function (): void {
    expect([GCControllerDidConnectNotification, GCControllerDidDisconnectNotification])
        ->toBe(['GCControllerDidConnectNotification', 'GCControllerDidDisconnectNotification'])
        ->and(array_map(fn (GCControllerPlayerIndex $i): int => $i->value, GCControllerPlayerIndex::cases()))->toBe([-1, 0, 1, 2, 3]);
});

it('reads a connected pad\'s elements and sets its player index', function (): void {
    $controller = anyGamePad();
    $pad = $controller->extendedGamepad();
    $micro = $controller->microGamepad();

    expect(is_null($pad) && is_null($micro))->toBeFalse()
        ->and($controller->vendorName())->toBeString();
    if (! is_null($pad)) {
        $stick = $pad->leftThumbstick();
        expect($pad)->toBeInstanceOf(GCExtendedGamepad::class)
            ->and($pad->buttonY())->toBeInstanceOf(GCControllerButtonInput::class)
            ->and($pad->buttonY()->isPressed())->toBeBool()
            ->and($pad->rightTrigger()->value())->toBeFloat()->toBeGreaterThanOrEqual(0.0)->toBeLessThanOrEqual(1.0)
            ->and($stick)->toBeInstanceOf(GCControllerDirectionPad::class)
            ->and($stick->xAxis())->toBeInstanceOf(GCControllerAxisInput::class)
            ->and($stick->yAxis()->value())->toBeFloat()->toBeGreaterThanOrEqual(-1.0)->toBeLessThanOrEqual(1.0)
            ->and($pad->dpad()->up())->toBeInstanceOf(GCControllerButtonInput::class)
            ->and($pad->buttonMenu())->toBeInstanceOf(GCControllerButtonInput::class);
        foreach ([$pad->buttonOptions(), $pad->buttonHome(), $pad->leftThumbstickButton(), $pad->rightThumbstickButton()] as $optional) {
            expect(is_null($optional) || $optional instanceof GCControllerButtonInput)->toBeTrue();
        }
    }
    if (! is_null($micro)) {
        expect($micro->buttonA())->toBeInstanceOf(GCControllerButtonInput::class)
            ->and($micro->buttonX())->toBeInstanceOf(GCControllerButtonInput::class)
            ->and($micro->dpad())->toBeInstanceOf(GCControllerDirectionPad::class);
    }

    $before = $controller->playerIndex();
    $controller->setPlayerIndex(GCControllerPlayerIndex::INDEX_2);
    $set = $controller->playerIndex();
    $controller->setPlayerIndex($before);

    expect($set)->toBe(GCControllerPlayerIndex::INDEX_2)
        ->and($controller->playerIndex())->toBe($before)
        ->and($controller->hash())->toBe(GCController::controllers()[0]->hash());
})->skip(fn (): bool => is_null(anyGamePad()), 'needs a game pad connected to this Mac');
