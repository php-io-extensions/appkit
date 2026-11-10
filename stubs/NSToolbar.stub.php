<?php

/** @generate-class-entries */

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) NSToolbarFlexibleSpaceItemIdentifier)
 */
const NSToolbarFlexibleSpaceItemIdentifier = UNKNOWN;

/**
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) NSToolbarSpaceItemIdentifier)
 */
const NSToolbarSpaceItemIdentifier = UNKNOWN;

enum NSToolbarDisplayMode: int
{
    case DEFAULT = 0;
    case ICON_AND_LABEL = 1;
    case ICON_ONLY = 2;
    case LABEL_ONLY = 3;
}

enum NSWindowToolbarStyle: int
{
    case AUTOMATIC = 0;
    case EXPANDED = 1;
    case PREFERENCE = 2;
    case UNIFIED = 3;
    case UNIFIED_COMPACT = 4;
}

/**
 * The delegate is an ObjCDelegate('NSToolbarDelegate'); its identifier lists are NSMutableArray objects of strings.
 *
 * @not-serializable
 */
class NSToolbar extends NSObject
{
    /** [[<called class> alloc] initWithIdentifier:] */
    public static function initWithIdentifier(string $identifier): static {}

    public function identifier(): string {}

    public function delegate(): ?NSObject {}

    /** Not retained: keep the delegate alive while it is set. */
    public function setDelegate(?NSObject $delegate): void {}

    public function displayMode(): NSToolbarDisplayMode {}

    public function setDisplayMode(NSToolbarDisplayMode $displayMode): void {}

    public function isVisible(): bool {}

    public function setVisible(bool $visible): void {}

    public function allowsUserCustomization(): bool {}

    public function setAllowsUserCustomization(bool $allowsUserCustomization): void {}

    public function insertItemWithItemIdentifierAtIndex(string $itemIdentifier, int $index): void {}

    public function removeItemAtIndex(int $index): void {}

    public function selectedItemIdentifier(): ?string {}

    public function setSelectedItemIdentifier(?string $selectedItemIdentifier): void {}
}

/**
 * @not-serializable
 */
class NSToolbarItem extends NSObject
{
    /** [[<called class> alloc] initWithItemIdentifier:] */
    public static function initWithItemIdentifier(string $itemIdentifier): static {}

    public function itemIdentifier(): string {}

    public function label(): string {}

    public function setLabel(string $label): void {}

    public function view(): ?NSView {}

    public function setView(?NSView $view): void {}

    public function isBordered(): bool {}

    public function setBordered(bool $bordered): void {}
}
