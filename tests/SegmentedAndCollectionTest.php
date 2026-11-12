<?php

declare(strict_types=1);

it('keeps the segments, labels, widths and selection a segmented control is given', function (): void {
    $control = NSSegmentedControl::initWithFrame(new NSRect(0.0, 0.0, 400.0, 24.0));
    $control->setSegmentCount(4);
    foreach (['Today', 'Recently', 'APODdex', 'Favorites'] as $i => $label) {
        $control->setLabelForSegment($label, $i);
    }
    $control->setWidthForSegment(90.0, 1);
    $control->setEnabledForSegment(false, 3);
    $control->setTrackingMode(NSSegmentSwitchTracking::SELECT_ONE);
    $control->setSegmentStyle(NSSegmentStyle::AUTOMATIC);
    $control->setSegmentDistribution(NSSegmentDistribution::FILL_EQUALLY);
    $control->setSelectedSegment(2);

    expect($control->segmentCount())->toBe(4)
        ->and($control->labelForSegment(2))->toBe('APODdex')
        ->and($control->widthForSegment(1))->toEqualWithDelta(90.0, 0.0001)
        ->and($control->isEnabledForSegment(3))->toBeFalse()
        ->and($control->imageForSegment(0))->toBeNull()
        ->and($control->trackingMode())->toBe(NSSegmentSwitchTracking::SELECT_ONE)
        ->and($control->segmentStyle())->toBe(NSSegmentStyle::AUTOMATIC)
        ->and($control->segmentDistribution())->toBe(NSSegmentDistribution::FILL_EQUALLY)
        ->and($control->selectedSegment())->toBe(2);
});

it('makes index paths and a flow layout with the item size, spacing and insets it is given', function (): void {
    $path = NSIndexPath::indexPathForItemInSection(7, 0);
    $layout = NSCollectionViewFlowLayout::init();
    $layout->setItemSize(new NSSize(220.0, 136.0));
    $layout->setMinimumInteritemSpacing(14.0);
    $layout->setMinimumLineSpacing(14.0);
    $layout->setSectionInset(new NSEdgeInsets(64.0, 14.0, 14.0, 14.0));

    expect($path->item())->toBe(7)
        ->and($path->section())->toBe(0)
        ->and($layout->itemSize()->width)->toEqualWithDelta(220.0, 0.0001)
        ->and($layout->minimumInteritemSpacing())->toEqualWithDelta(14.0, 0.0001)
        ->and($layout->minimumLineSpacing())->toEqualWithDelta(14.0, 0.0001)
        ->and($layout->sectionInset()->top)->toEqualWithDelta(64.0, 0.0001);
});

it('asks its data source for the item count and makes items of the registered class', function (): void {
    $view = NSCollectionView::initWithFrame(new NSRect(0.0, 0.0, 600.0, 400.0));
    $view->setCollectionViewLayout($layout = NSCollectionViewFlowLayout::init());
    $view->registerClassForItemWithIdentifier('NSCollectionViewItem', 'day');

    $source = new ObjCDelegate('NSCollectionViewDataSource');
    $source->on('collectionView:numberOfItemsInSection:', fn (NSCollectionView $v, int $section): int => 42);
    $view->setDataSource($source);
    $view->setSelectable(true);
    $view->reloadData();

    $item = $view->makeItemWithIdentifierForIndexPath('day', NSIndexPath::indexPathForItemInSection(0, 0));

    expect($view->collectionViewLayout())->toBe($layout)
        ->and($view->dataSource())->toBe($source)
        ->and($view->numberOfSections())->toBe(1)
        ->and($view->numberOfItemsInSection(0))->toBe(42)
        ->and($view->isSelectable())->toBeTrue()
        ->and($item)->toBeInstanceOf(NSCollectionViewItem::class)
        ->and($item->isSelected())->toBeFalse();

    $view->setDataSource(null);
});

it('reports an empty selection, deselects index paths, and has no path for an item it does not show', function (): void {
    $view = NSCollectionView::initWithFrame(new NSRect(0.0, 0.0, 600.0, 400.0));
    $view->setCollectionViewLayout(NSCollectionViewFlowLayout::init());
    $view->setSelectable(true);
    $item = NSCollectionViewItem::init();
    $item->setView(NSView::initWithFrame(new NSRect(0.0, 0.0, 10.0, 10.0)));

    $view->deselectItemsAtIndexPaths([NSIndexPath::indexPathForItemInSection(0, 0)]);

    expect($view->selectionIndexPaths())->toBe([])
        ->and($view->indexPathForItem($item))->toBeNull()
        ->and(fn () => $view->deselectItemsAtIndexPaths(['nope']))->toThrow(TypeError::class);
});

it('gives an item the view it is set, and deletes items at index paths', function (): void {
    $count = 5;
    $view = NSCollectionView::initWithFrame(new NSRect(0.0, 0.0, 600.0, 400.0));
    $view->setCollectionViewLayout(NSCollectionViewFlowLayout::init());
    $view->registerClassForItemWithIdentifier('NSCollectionViewItem', 'day');

    $source = new ObjCDelegate('NSCollectionViewDataSource');
    $source->on('collectionView:numberOfItemsInSection:', function (NSCollectionView $v, int $section) use (&$count): int {
        return $count;
    });
    $source->on('collectionView:itemForRepresentedObjectAtIndexPath:', function (NSCollectionView $v, NSIndexPath $path): NSCollectionViewItem {
        $item = $v->makeItemWithIdentifierForIndexPath('day', $path);
        $item->setView(NSView::initWithFrame(new NSRect(0.0, 0.0, 50.0, 50.0)));

        return $item;
    });
    $view->setDataSource($source);
    $view->reloadData();

    $cell = NSView::initWithFrame(new NSRect(0.0, 0.0, 10.0, 10.0));
    $item = NSCollectionViewItem::init();
    $item->setView($cell);

    $count = 4;
    $view->deleteItemsAtIndexPaths([NSIndexPath::indexPathForItemInSection(2, 0)]);

    expect($item->view())->toBe($cell)
        ->and($view->numberOfItemsInSection(0))->toBe(4)
        ->and(fn () => $view->deleteItemsAtIndexPaths(['nope']))->toThrow(TypeError::class);

    $view->setDataSource(null);
});

it('deletes an item through the collection view\'s animator inside a group', function (): void {
    $count = 3;
    $view = NSCollectionView::initWithFrame(new NSRect(0.0, 0.0, 600.0, 400.0));
    $view->setCollectionViewLayout(NSCollectionViewFlowLayout::init());
    $source = new ObjCDelegate('NSCollectionViewDataSource');
    $source->on('collectionView:numberOfItemsInSection:', function (NSCollectionView $v, int $section) use (&$count): int {
        return $count;
    });
    $view->setDataSource($source);
    $view->reloadData();

    $animator = $view->animator();
    $count = 2;
    NSAnimationContext::beginGrouping();
    NSAnimationContext::currentContext()->setDuration(0.3);
    $animator->deleteItemsAtIndexPaths([NSIndexPath::indexPathForItemInSection(0, 0)]);
    NSAnimationContext::endGrouping();

    expect($animator)->toBeInstanceOf(NSCollectionView::class)
        ->and($animator)->not->toBe($view)
        ->and($view->numberOfItemsInSection(0))->toBe(2);

    $view->setDataSource(null);
});

it('builds a mutable array of strings and objects', function (): void {
    $array = NSMutableArray::array();
    $array->addObject('today');
    $array->addObject($view = NSView::initWithFrame(new NSRect(0.0, 0.0, 1.0, 1.0)));

    expect($array->count())->toBe(2)
        ->and($array->objectAtIndex(0))->toBe('today')
        ->and($array->objectAtIndex(1))->toBe($view);
});

it('fills a window toolbar from its delegate, items holding a segmented control', function (): void {
    $segments = NSSegmentedControl::initWithFrame(new NSRect(0.0, 0.0, 320.0, 24.0));
    $segments->setSegmentCount(2);
    $asked = [];

    $delegate = new ObjCDelegate('NSToolbarDelegate');
    $ids = function (): NSMutableArray {
        $list = NSMutableArray::array();
        foreach ([NSToolbarFlexibleSpaceItemIdentifier, 'sections', NSToolbarFlexibleSpaceItemIdentifier] as $id) {
            $list->addObject($id);
        }

        return $list;
    };
    $delegate->on('toolbarDefaultItemIdentifiers:', $ids);
    $delegate->on('toolbarAllowedItemIdentifiers:', $ids);
    $delegate->on('toolbar:itemForItemIdentifier:willBeInsertedIntoToolbar:', function (NSToolbar $t, NSString $id, bool $insert) use ($segments, &$asked): ?NSToolbarItem {
        $asked[] = $id->UTF8String();
        $item = NSToolbarItem::initWithItemIdentifier($id->UTF8String());
        $item->setView($segments);
        $item->setLabel('Sections');

        return $item;
    });

    $toolbar = NSToolbar::initWithIdentifier('apod');
    $toolbar->setDelegate($delegate);
    $toolbar->setDisplayMode(NSToolbarDisplayMode::ICON_ONLY);

    $window = NSWindow::initWithContentRectStyleMaskBackingDefer(new NSRect(0, 0, 600, 400), NSWindowStyleMask::TITLED->value, NSBackingStoreType::BUFFERED, false);
    $window->setToolbarStyle(NSWindowToolbarStyle::UNIFIED);
    $window->setToolbar($toolbar);

    expect($window->toolbar())->toBe($toolbar)
        ->and($window->toolbarStyle())->toBe(NSWindowToolbarStyle::UNIFIED)
        ->and($toolbar->identifier())->toBe('apod')
        ->and($toolbar->displayMode())->toBe(NSToolbarDisplayMode::ICON_ONLY)
        ->and($asked)->toContain('sections');

    $window->setToolbar(null);
    $toolbar->setDelegate(null);
});
