<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class NSIndexSet extends NSObject
{
    public static function indexSetWithIndex(int $index): static {}

    /** NSNotFound when the set is empty */
    public function firstIndex(): int {}

    public function count(): int {}
}

/**
 * @not-serializable
 */
class NSTableColumn extends NSObject
{
    /** NSTableColumnResizingOptions, combined with | */
    public const int RESIZING_MASK_NONE = 0;
    public const int RESIZING_MASK_AUTORESIZING = 1;
    public const int RESIZING_MASK_USER_RESIZING = 2;

    public static function initWithIdentifier(string $identifier): static {}

    public function identifier(): string {}

    public function title(): string {}

    public function setTitle(string $title): void {}

    public function width(): float {}

    public function setWidth(float $width): void {}

    public function setResizingMask(int $mask): void {}
}

/**
 * @not-serializable
 */
class NSTableHeaderView extends NSView
{
}

/**
 * @not-serializable
 */
class NSTableView extends NSControl
{
    public function addTableColumn(NSTableColumn $column): void {}

    public function removeTableColumn(NSTableColumn $column): void {}

    /** @return NSTableColumn[] */
    public function tableColumns(): array {}

    public function dataSource(): ?NSObject {}

    public function setDataSource(?NSObject $dataSource): void {}

    public function delegate(): ?NSObject {}

    public function setDelegate(?NSObject $delegate): void {}

    public function reloadData(): void {}

    public function numberOfRows(): int {}

    /** -1 when nothing is selected */
    public function selectedRow(): int {}

    public function selectRowIndexesByExtendingSelection(NSIndexSet $indexes, bool $extend): void {}

    public function deselectAll(?NSObject $sender): void {}

    public function setAllowsEmptySelection(bool $allows): void {}

    public function setUsesAlternatingRowBackgroundColors(bool $uses): void {}

    public function backgroundColor(): NSColor {}

    public function setBackgroundColor(NSColor $color): void {}

    public function headerView(): ?NSTableHeaderView {}

    public function setHeaderView(?NSTableHeaderView $header): void {}

    /** The cell a cell-based table draws at (column, row), with its object value set. */
    public function preparedCellAtColumnRow(int $column, int $row): ?NSCell {}

    /** The view a view-based table shows at (column, row); null when none exists and $makeIfNecessary is false. */
    public function viewAtColumnRowMakeIfNecessary(int $column, int $row, bool $makeIfNecessary): ?NSView {}
}

/**
 * @not-serializable
 */
class NSCell extends NSObject
{
    /** NSString → string, NSNumber → int/float/bool, NSNull/nil → null, other objects boxed */
    public function objectValue(): mixed {}
}
