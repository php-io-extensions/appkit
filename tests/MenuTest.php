<?php

declare(strict_types=1);

beforeEach(function (): void {
    $this->app = NSApplication::sharedApplication();
    $this->app->finishLaunching();
});

it('builds a menu tree and installs it as the main menu', function (): void {
    $main = NSMenu::initWithTitle('Main');
    $slot = NSMenuItem::initWithTitleActionKeyEquivalent('App', null, '');
    $sub = NSMenu::initWithTitle('App');
    $quit = NSMenuItem::initWithTitleActionKeyEquivalent('Quit', null, 'q');

    $sub->addItem($quit);
    $sub->addItem(NSMenuItem::separatorItem());
    $slot->setSubmenu($sub);
    $main->addItem($slot);
    $this->app->setMainMenu($main);

    expect($this->app->mainMenu())->toBe($main)
        ->and($main->numberOfItems())->toBe(1)
        ->and($main->itemAtIndex(0))->toBe($slot)
        ->and($slot->hasSubmenu())->toBeTrue()
        ->and($slot->submenu())->toBe($sub)
        ->and($sub->numberOfItems())->toBe(2)
        ->and($sub->itemAtIndex(1)->isSeparatorItem())->toBeTrue()
        ->and($sub->indexOfItem($quit))->toBe(0)
        ->and($quit->menu())->toBe($sub)
        ->and($quit->keyEquivalent())->toBe('q')
        ->and(fn () => $main->itemAtIndex(5))->toThrow(AppKitException::class, 'NSInternalInconsistencyException');

    $sub->removeItem($quit);
    expect($sub->numberOfItems())->toBe(1);

    $sub->removeAllItems();
    expect($sub->numberOfItems())->toBe(0);
});

it('sets item state, enabling, title, tag and key modifiers', function (): void {
    $item = NSMenuItem::initWithTitleActionKeyEquivalent('Grid', null, 'g');

    $item->setState(NSControlStateValue::ON);
    $item->setEnabled(false);
    $item->setTitle('Show Grid');
    $item->setTag(42);
    $item->setKeyEquivalentModifierMask(NSEventModifierFlags::COMMAND->value | NSEventModifierFlags::SHIFT->value);

    expect($item->state())->toBe(NSControlStateValue::ON)
        ->and($item->isEnabled())->toBeFalse()
        ->and($item->title())->toBe('Show Grid')
        ->and($item->tag())->toBe(42)
        ->and($item->keyEquivalentModifierMask())->toBe(NSEventModifierFlags::COMMAND->value | NSEventModifierFlags::SHIFT->value);

    $item->setState(NSControlStateValue::MIXED);
    expect($item->state())->toBe(NSControlStateValue::MIXED);
});

it('calls the target through PHP when an item is performed', function (): void {
    $menu = NSMenu::initWithTitle('View');
    $menu->setAutoenablesItems(false);
    $item = NSMenuItem::initWithTitleActionKeyEquivalent('Refresh', null, '');
    $senders = [];
    $target = new ObjCTarget(function (?NSObject $sender) use (&$senders): void {
        $senders[] = $sender;
    });

    $item->setTarget($target);
    $item->setAction(ObjCTarget::ACTION);
    $menu->addItem($item);
    $menu->performActionForItemAtIndex(0);

    expect($senders)->toBe([$item])
        ->and($item->target())->toBe($target)
        ->and($item->action())->toBe('action:')
        ->and($menu->autoenablesItems())->toBeFalse();

    $item->setAction(null);
    expect($item->action())->toBeNull();
});

it('lets an exception thrown by a target surface', function (): void {
    $menu = NSMenu::initWithTitle('View');
    $menu->setAutoenablesItems(false);
    $item = NSMenuItem::initWithTitleActionKeyEquivalent('Boom', 'action:', '');
    $target = new ObjCTarget(function (): never {
        throw new LogicException('from the target');
    });
    $item->setTarget($target);
    $menu->addItem($item);

    expect(fn () => $menu->performActionForItemAtIndex(0))->toThrow(LogicException::class, 'from the target');
});
