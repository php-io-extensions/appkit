<?php

/** @generate-class-entries */

enum NSControlStateValue: int
{
    case MIXED = -1;
    case OFF = 0;
    case ON = 1;
}

/**
 * @not-serializable
 */
class NSMenu extends NSObject
{
    /** alloc + initWithTitle: */
    public static function initWithTitle(string $title): NSMenu {}

    public function title(): string {}

    public function setTitle(string $title): void {}

    public function addItem(NSMenuItem $newItem): void {}

    public function insertItemAtIndex(NSMenuItem $newItem, int $index): void {}

    public function removeItem(NSMenuItem $item): void {}

    public function removeAllItems(): void {}

    public function numberOfItems(): int {}

    public function itemAtIndex(int $index): ?NSMenuItem {}

    public function indexOfItem(NSMenuItem $item): int {}

    public function autoenablesItems(): bool {}

    public function setAutoenablesItems(bool $autoenablesItems): void {}

    public function performActionForItemAtIndex(int $index): void {}

    /** popUpMenuPositioningItem:atLocation:inView: tracks the menu until it closes; true when an item was chosen. $location is in $view, or on screen when $view is null. */
    public function popUpMenuPositioningItemAtLocationInView(?NSMenuItem $item, NSPoint $location, ?NSView $view): bool {}

    public function cancelTracking(): void {}
}

/**
 * @not-serializable
 */
class NSMenuItem extends NSObject
{
    /** alloc + initWithTitle:action:keyEquivalent:; $selector null is a nil action */
    public static function initWithTitleActionKeyEquivalent(string $string, ?string $selector, string $charCode): NSMenuItem {}

    public static function separatorItem(): NSMenuItem {}

    public function title(): string {}

    public function setTitle(string $title): void {}

    public function isSeparatorItem(): bool {}

    public function hasSubmenu(): bool {}

    public function submenu(): ?NSMenu {}

    public function setSubmenu(?NSMenu $submenu): void {}

    public function menu(): ?NSMenu {}

    public function target(): ?NSObject {}

    public function setTarget(?NSObject $target): void {}

    /** The action selector's name, or null for none. */
    public function action(): ?string {}

    public function setAction(?string $action): void {}

    public function state(): NSControlStateValue|int {}

    public function setState(NSControlStateValue|int $state): void {}

    public function isEnabled(): bool {}

    public function setEnabled(bool $enabled): void {}

    public function keyEquivalent(): string {}

    public function setKeyEquivalent(string $keyEquivalent): void {}

    public function keyEquivalentModifierMask(): int {}

    public function setKeyEquivalentModifierMask(NSEventModifierFlags|int $mask): void {}

    public function tag(): int {}

    public function setTag(int $tag): void {}
}
