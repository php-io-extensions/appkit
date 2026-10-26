<?php

declare(strict_types=1);

beforeEach(function (): void {
    $this->app = NSApplication::sharedApplication();
});

it('adds, selects, deselects and clears object values', function (): void {
    $combo = NSComboBox::initWithFrame(new NSRect(0.0, 0.0, 200.0, 26.0));
    foreach (['/Users', '/Volumes', '/tmp'] as $path) {
        $combo->addItemWithObjectValue($path);
    }
    $combo->setNumberOfVisibleItems(5);

    expect($combo)->toBeInstanceOf(NSTextField::class)
        ->and($combo->numberOfItems())->toBe(3);

    $combo->selectItemAtIndex(1);
    expect($combo->indexOfSelectedItem())->toBe(1)
        ->and($combo->stringValue())->toBe('/Volumes');

    $combo->deselectItemAtIndex(1);
    expect($combo->indexOfSelectedItem())->toBe(-1);

    $combo->removeAllItems();
    expect($combo->numberOfItems())->toBe(0);
});

it('asks its delegate for the field editor commands a key makes', function (): void {
    $window = newWindow();
    $combo = NSComboBox::initWithFrame(new NSRect(10.0, 10.0, 200.0, 26.0));
    $window->contentView()->addSubview($combo);
    $seen = [];
    $delegate = new ObjCDelegate('NSComboBoxDelegate');
    $delegate->on('control:textView:doCommandBySelector:', function (NSObject $control, NSObject $view, string $selector) use (&$seen): bool {
        $seen[] = $selector;

        return $selector === 'moveDown:';
    });
    $combo->setDelegate($delegate);
    $this->app->setActivationPolicy(NSApplicationActivationPolicy::REGULAR);
    $this->app->activateIgnoringOtherApps(true);
    $window->makeKeyAndOrderFront(null);
    pumpUntil($this->app, fn (): bool => $window->isKeyWindow(), 2.0);
    $window->makeFirstResponder($combo);

    $this->app->sendEvent(NSEvent::eventWithCGEvent(CGEvent::createKeyboardEvent(null, 125, true)));

    expect($seen)->toContain('moveDown:');
    $window->close();
});
