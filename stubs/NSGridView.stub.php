<?php

/** @generate-class-entries */

enum NSGridCellPlacement: int
{
    case INHERITED = 0;
    case NONE = 1;
    case LEADING = 2;
    case TRAILING = 3;
    case CENTER = 4;
    case FILL = 5;
}

/** Both properties must be set and non-negative where a binding reads it (ValueError otherwise). */
final class NSRange
{
    public int $location = 0;

    public int $length = 0;

    public function __construct(int $location = 0, int $length = 0) {}
}

/**
 * @not-serializable
 */
class NSGridView extends NSView
{
    public static function gridViewWithNumberOfColumnsRows(int $columns, int $rows): static {}

    public function numberOfRows(): int {}

    public function numberOfColumns(): int {}

    /**
     * A null element leaves that cell empty.
     *
     * @param NSView[] $views
     */
    public function addRowWithViews(array $views): NSGridRow {}

    /**
     * A null element leaves that cell empty.
     *
     * @param NSView[] $views
     */
    public function insertRowAtIndexWithViews(int $index, array $views): NSGridRow {}

    public function removeRowAtIndex(int $index): void {}

    /**
     * A null element leaves that cell empty.
     *
     * @param NSView[] $views
     */
    public function addColumnWithViews(array $views): NSGridColumn {}

    public function rowSpacing(): float {}

    public function setRowSpacing(float $spacing): void {}

    public function columnSpacing(): float {}

    public function setColumnSpacing(float $spacing): void {}

    public function cellAtColumnIndexRowIndex(int $column, int $row): NSGridCell {}

    public function mergeCellsInHorizontalRangeVerticalRange(NSRange $horizontal, NSRange $vertical): void {}

    public function rowAtIndex(int $index): NSGridRow {}

    public function columnAtIndex(int $index): NSGridColumn {}
}

/**
 * @not-serializable
 */
class NSGridCell extends NSObject
{
    public function contentView(): ?NSView {}

    /** null empties the cell (NSGridCell.emptyContentView), which contentView() reads back as null */
    public function setContentView(?NSView $view): void {}

    public function xPlacement(): NSGridCellPlacement {}

    public function setXPlacement(NSGridCellPlacement $placement): void {}

    public function yPlacement(): NSGridCellPlacement {}

    public function setYPlacement(NSGridCellPlacement $placement): void {}
}

/**
 * @not-serializable
 */
class NSGridRow extends NSObject
{
    public function height(): float {}

    public function setHeight(float $height): void {}

    public function topPadding(): float {}

    public function setTopPadding(float $padding): void {}

    public function bottomPadding(): float {}

    public function setBottomPadding(float $padding): void {}

    public function yPlacement(): NSGridCellPlacement {}

    public function setYPlacement(NSGridCellPlacement $placement): void {}
}

/**
 * @not-serializable
 */
class NSGridColumn extends NSObject
{
    public function width(): float {}

    public function setWidth(float $width): void {}

    public function leadingPadding(): float {}

    public function setLeadingPadding(float $padding): void {}

    public function trailingPadding(): float {}

    public function setTrailingPadding(float $padding): void {}

    public function xPlacement(): NSGridCellPlacement {}

    public function setXPlacement(NSGridCellPlacement $placement): void {}
}
