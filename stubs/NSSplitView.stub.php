<?php

/** @generate-class-entries */

enum NSSplitViewDividerStyle: int
{
    case THICK = 1;
    case THIN = 2;
    case PANE_SPLITTER = 3;
}

/**
 * Posted by an NSSplitView after it resized its subviews: a divider drag, a window resize, adjustSubviews.
 *
 * @var string
 * @cvalue appkit_cfstring_constant((CFStringRef) NSSplitViewDidResizeSubviewsNotification)
 */
const NSSplitViewDidResizeSubviewsNotification = UNKNOWN;

/**
 * Made with NSView::initWithFrame().
 *
 * @not-serializable
 */
class NSSplitView extends NSView
{
    /** true: dividers vertical, subviews side by side */
    public function isVertical(): bool {}

    public function setVertical(bool $vertical): void {}

    public function dividerStyle(): NSSplitViewDividerStyle {}

    public function setDividerStyle(NSSplitViewDividerStyle $style): void {}

    public function dividerThickness(): float {}

    public function arrangesAllSubviews(): bool {}

    public function setArrangesAllSubviews(bool $arranges): void {}

    public function addArrangedSubview(NSView $view): void {}

    /** AppKitException (NSRangeException) past the arranged subview count */
    public function insertArrangedSubviewAtIndex(NSView $view, int $index): void {}

    public function removeArrangedSubview(NSView $view): void {}

    /** @return NSView[] */
    public function arrangedSubviews(): array {}

    /** An index that is not a divider does nothing */
    public function setPositionOfDividerAtIndex(float $position, int $index): void {}

    public function adjustSubviews(): void {}

    public function isSubviewCollapsed(NSView $view): bool {}

    /** NSLayoutPriority as float */
    public function holdingPriorityForSubviewAtIndex(int $index): float {}

    public function setHoldingPriorityForSubviewAtIndex(float $priority, int $index): void {}
}

/**
 * Made with NSView::initWithFrame().
 *
 * @not-serializable
 */
class NSTabView extends NSView
{
    public function addTabViewItem(NSTabViewItem $item): void {}

    /** An item not in this tab view is left alone */
    public function removeTabViewItem(NSTabViewItem $item): void {}

    /** @return NSTabViewItem[] */
    public function tabViewItems(): array {}

    public function numberOfTabViewItems(): int {}

    /** -1 (NSNotFound) when no item has $identifier */
    public function indexOfTabViewItemWithIdentifier(string $identifier): int {}

    /** AppKitException (NSInternalInconsistencyException) when no item has $identifier */
    public function selectTabViewItemWithIdentifier(string $identifier): void {}

    public function selectedTabViewItem(): ?NSTabViewItem {}

    public function delegate(): ?NSObject {}

    /** Not retained: keep the delegate alive while it is set. */
    public function setDelegate(?NSObject $delegate): void {}
}

/**
 * @not-serializable
 */
class NSTabViewItem extends NSObject
{
    /** The identifier is an NSString holding $identifier. */
    public static function initWithIdentifier(string $identifier): static {}

    /** An NSString identifier as a string, any other object boxed */
    public function identifier(): mixed {}

    public function label(): string {}

    public function setLabel(string $label): void {}

    public function view(): ?NSView {}

    public function setView(?NSView $view): void {}

    public function tabView(): ?NSTabView {}
}
