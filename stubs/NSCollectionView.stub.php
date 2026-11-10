<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class NSIndexPath extends NSObject
{
    public static function indexPathForItemInSection(int $item, int $section): NSIndexPath {}

    public function item(): int {}

    public function section(): int {}
}

/**
 * @not-serializable
 */
class NSCollectionViewLayout extends NSObject
{
    public function invalidateLayout(): void {}
}

/**
 * @not-serializable
 */
class NSCollectionViewFlowLayout extends NSCollectionViewLayout
{
    /** [[NSCollectionViewFlowLayout alloc] init] */
    public static function init(): static {}

    public function itemSize(): NSSize {}

    public function setItemSize(NSSize $itemSize): void {}

    public function minimumInteritemSpacing(): float {}

    public function setMinimumInteritemSpacing(float $minimumInteritemSpacing): void {}

    public function minimumLineSpacing(): float {}

    public function setMinimumLineSpacing(float $minimumLineSpacing): void {}

    public function sectionInset(): NSEdgeInsets {}

    public function setSectionInset(NSEdgeInsets $sectionInset): void {}
}

/**
 * @not-serializable
 */
class NSCollectionViewItem extends NSObject
{
    /** [[<called class> alloc] init] */
    public static function init(): static {}

    public function view(): NSView {}

    public function setView(NSView $view): void {}

    public function isSelected(): bool {}

    public function collectionView(): ?NSCollectionView {}
}

/**
 * @not-serializable
 */
class NSCollectionView extends NSView
{
    public function collectionViewLayout(): ?NSCollectionViewLayout {}

    public function setCollectionViewLayout(?NSCollectionViewLayout $collectionViewLayout): void {}

    public function dataSource(): ?NSObject {}

    /** Not retained: keep the data source alive while it is set. */
    public function setDataSource(?NSObject $dataSource): void {}

    public function delegate(): ?NSObject {}

    /** Not retained: keep the delegate alive while it is set. */
    public function setDelegate(?NSObject $delegate): void {}

    public function reloadData(): void {}

    public function numberOfSections(): int {}

    public function numberOfItemsInSection(int $section): int {}

    public function isSelectable(): bool {}

    public function setSelectable(bool $selectable): void {}

    public function allowsMultipleSelection(): bool {}

    public function setAllowsMultipleSelection(bool $allowsMultipleSelection): void {}

    /** registerClass:forItemWithIdentifier:, the class by its ObjC name; null unregisters. */
    public function registerClassForItemWithIdentifier(?string $itemClass, string $identifier): void {}

    public function makeItemWithIdentifierForIndexPath(string $identifier, NSIndexPath $indexPath): NSCollectionViewItem {}

    public function itemAtIndexPath(NSIndexPath $indexPath): ?NSCollectionViewItem {}

    public function indexPathForItemAtPoint(NSPoint $point): ?NSIndexPath {}

    /** $indexPaths: [NSIndexPath] as an NSSet. */
    public function insertItemsAtIndexPaths(array $indexPaths): void {}

    /** $indexPaths: [NSIndexPath] as an NSSet. */
    public function deleteItemsAtIndexPaths(array $indexPaths): void {}

    /** $indexPaths: [NSIndexPath] as an NSSet. */
    public function reloadItemsAtIndexPaths(array $indexPaths): void {}

    /** $indexPaths: [NSIndexPath] as an NSSet; $scrollPosition: NSCollectionViewScrollPosition* combined with |. */
    public function scrollToItemsAtIndexPathsScrollPosition(array $indexPaths, int $scrollPosition): void {}
}

/**
 * @var int
 * @cvalue NSCollectionViewScrollPositionNone
 */
const NSCollectionViewScrollPositionNone = UNKNOWN;
/**
 * @var int
 * @cvalue NSCollectionViewScrollPositionTop
 */
const NSCollectionViewScrollPositionTop = UNKNOWN;
/**
 * @var int
 * @cvalue NSCollectionViewScrollPositionCenteredVertically
 */
const NSCollectionViewScrollPositionCenteredVertically = UNKNOWN;
/**
 * @var int
 * @cvalue NSCollectionViewScrollPositionBottom
 */
const NSCollectionViewScrollPositionBottom = UNKNOWN;
