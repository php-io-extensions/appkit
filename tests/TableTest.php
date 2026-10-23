<?php

declare(strict_types=1);

beforeEach(function (): void {
    $this->app = NSApplication::sharedApplication();
});

it('feeds rows from a PHP data source and reports the selection', function (): void {
    $rows = [['a', '1'], ['b', '2']];
    $source = new ObjCDelegate('NSTableViewDataSource');
    $source->on('numberOfRowsInTableView:', fn () => count($rows));
    $source->on('tableView:objectValueForTableColumn:row:', fn (NSObject $table, NSTableColumn $column, int $row) => $rows[$row][$column->identifier() === 'name' ? 0 : 1]);
    $selected = [];
    $table = null;
    $delegate = new ObjCDelegate('NSTableViewDelegate');
    $delegate->on('tableViewSelectionDidChange:', function () use (&$selected, &$table): void {
        $selected[] = $table->selectedRow();
    });

    $table = NSTableView::initWithFrame(new NSRect(0, 0, 200, 100));
    $header = NSTableHeaderView::initWithFrame(new NSRect(0, 0, 200, 20));
    $table->setHeaderView($header);
    foreach (['name', 'qty'] as $id) {
        $column = NSTableColumn::initWithIdentifier($id);
        $column->setTitle(ucfirst($id));
        $column->setWidth(80.0);
        $column->setResizingMask(NSTableColumn::RESIZING_MASK_AUTORESIZING);
        $table->addTableColumn($column);
    }
    $table->setDataSource($source);
    $table->setDelegate($delegate);
    $table->setAllowsEmptySelection(true);
    $table->setUsesAlternatingRowBackgroundColors(true);
    $table->reloadData();
    $table->selectRowIndexesByExtendingSelection(NSIndexSet::indexSetWithIndex(1), false);
    pumpFor($this->app, 0.05);

    expect($table->numberOfRows())->toBe(2)
        ->and($table->selectedRow())->toBe(1)
        ->and($selected)->toBe([1])
        ->and($table->dataSource())->toBe($source)
        ->and($table->delegate())->toBe($delegate)
        ->and($table->headerView())->toBe($header)
        ->and(array_map(fn (NSTableColumn $c) => $c->identifier(), $table->tableColumns()))->toBe(['name', 'qty'])
        ->and($table->tableColumns()[0]->title())->toBe('Name')
        ->and($table->tableColumns()[0]->width())->toBe(80.0);

    $table->deselectAll(null);
    expect($table->selectedRow())->toBe(-1);

    $table->removeTableColumn($table->tableColumns()[1]);
    expect(count($table->tableColumns()))->toBe(1);
});

it('builds an index set from one index', function (): void {
    $set = NSIndexSet::indexSetWithIndex(3);

    expect($set->firstIndex())->toBe(3)
        ->and($set->count())->toBe(1);
});

it('hands PHP strings and numbers back to AppKit when the table draws', function (): void {
    $served = [];
    $source = new ObjCDelegate('NSTableViewDataSource');
    $source->on('numberOfRowsInTableView:', fn () => 3);
    $source->on('tableView:objectValueForTableColumn:row:', function (NSObject $table, NSTableColumn $column, int $row) use (&$served) {
        $served[] = $row;

        return match ($row) {
            0 => 'text',
            1 => 42,
            default => 1.5,
        };
    });
    $table = NSTableView::initWithFrame(new NSRect(0, 0, 200, 100));
    $table->addTableColumn(NSTableColumn::initWithIdentifier('v'));
    $table->setDataSource($source);
    $window = newWindow(200, 100);
    $window->setContentView($table);
    $window->makeKeyAndOrderFront(null);
    $table->reloadData();
    pumpFor($this->app, 0.2);
    $window->close();

    sort($served);
    expect(array_values(array_unique($served)))->toBe([0, 1, 2])
        ->and($table->preparedCellAtColumnRow(0, 0)->objectValue())->toBe('text')
        ->and($table->preparedCellAtColumnRow(0, 1)->objectValue())->toBe(42)
        ->and($table->preparedCellAtColumnRow(0, 2)->objectValue())->toBe(1.5);
});

it('keeps a view a delegate builds for a row alive after PHP lets go of it', function (): void {
    $source = new ObjCDelegate('NSTableViewDataSource');
    $source->on('numberOfRowsInTableView:', fn () => 2);
    $delegate = new ObjCDelegate('NSTableViewDelegate');
    $delegate->on('tableView:viewForTableColumn:row:', fn (NSObject $table, ?NSTableColumn $column, int $row) => NSTextField::labelWithString("row {$row}"));
    $table = NSTableView::initWithFrame(new NSRect(0, 0, 200, 100));
    $table->addTableColumn(NSTableColumn::initWithIdentifier('v'));
    $table->setDataSource($source);
    $table->setDelegate($delegate);
    $window = newWindow(200, 100);
    $window->setContentView($table);
    $window->makeKeyAndOrderFront(null);
    $table->reloadData();
    pumpFor($this->app, 0.2);

    expect($table->viewAtColumnRowMakeIfNecessary(0, 1, false)->stringValue())->toBe('row 1')
        ->and($table->viewAtColumnRowMakeIfNecessary(0, 0, false))->toBeInstanceOf(NSTextField::class)
        ->and([NSTableColumn::RESIZING_MASK_NONE, NSTableColumn::RESIZING_MASK_AUTORESIZING, NSTableColumn::RESIZING_MASK_USER_RESIZING])->toBe([0, 1, 2]);
    $window->close();
});

/** An outline over a(a1, a2), b, its items kept by the caller as AppKit does not retain them. */
function outlineOver(array &$items, ?ObjCDelegate $delegate = null): array
{
    $children = ['' => ['a', 'b'], 'a' => ['a1', 'a2']];
    foreach (['a', 'b', 'a1', 'a2'] as $id) {
        $items[$id] = NSString::stringWithString($id);
    }
    $source = new ObjCDelegate('NSOutlineViewDataSource');
    $source->on('outlineView:numberOfChildrenOfItem:', fn (NSObject $outline, ?NSString $item) => count($children[$item?->UTF8String() ?? ''] ?? []));
    $source->on('outlineView:child:ofItem:', fn (NSObject $outline, int $index, ?NSString $item) => $items[$children[$item?->UTF8String() ?? ''][$index]]);
    $source->on('outlineView:isItemExpandable:', fn (NSObject $outline, ?NSString $item) => isset($children[$item?->UTF8String() ?? '']));
    $source->on('outlineView:objectValueForTableColumn:byItem:', fn (NSObject $outline, ?NSTableColumn $column, ?NSString $item) => $item?->UTF8String());

    $outline = NSOutlineView::initWithFrame(new NSRect(0, 0, 200, 200));
    $column = NSTableColumn::initWithIdentifier('name');
    $outline->addTableColumn($column);
    $outline->setOutlineTableColumn($column);
    $outline->setDataSource($source);
    if (! is_null($delegate)) {
        $outline->setDelegate($delegate);
    }
    $outline->reloadData();

    return [$outline, $source, $column];
}

it('finds the outline view protocols', function (): void {
    expect((new ObjCDelegate('NSOutlineViewDataSource'))->protocolName())->toBe('NSOutlineViewDataSource')
        ->and((new ObjCDelegate('NSOutlineViewDelegate'))->protocolName())->toBe('NSOutlineViewDelegate');
});

it('expands and collapses outline items from a PHP data source and finds them by row', function (): void {
    $items = [];
    [$outline, $source, $column] = outlineOver($items);

    expect($outline)->toBeInstanceOf(NSTableView::class)
        ->and($outline->numberOfRows())->toBe(2)
        ->and($outline->outlineTableColumn()->identifier())->toBe($column->identifier())
        ->and($outline->isItemExpanded($items['a']))->toBeFalse();

    $outline->expandItem($items['a']);
    expect($outline->isItemExpanded($items['a']))->toBeTrue()
        ->and($outline->numberOfRows())->toBe(4)
        ->and($outline->itemAtRow(1))->toBeInstanceOf(NSString::class)
        ->and($outline->itemAtRow(1)->UTF8String())->toBe('a1')
        ->and($outline->rowForItem($items['a2']))->toBe(2)
        ->and($outline->itemAtRow(9))->toBeNull();

    $outline->reloadItemReloadChildren(null, true);
    expect($outline->numberOfRows())->toBe(4);

    $outline->collapseItem($items['a']);
    expect($outline->rowForItem($items['a2']))->toBe(-1)
        ->and($outline->numberOfRows())->toBe(2);

    // AppKit keeps an outline column while the view has columns: a nil one is not taken.
    $outline->setIndentationPerLevel(20.0);
    $outline->setOutlineTableColumn(null);
    expect($outline->indentationPerLevel())->toBe(20.0)
        ->and($outline->outlineTableColumn()->identifier())->toBe('name');
});

it('hands the outline delegate the expanded item in the notification user info', function (): void {
    $seen = [];
    $delegate = new ObjCDelegate('NSOutlineViewDelegate');
    $delegate->on('outlineViewItemDidExpand:', function (NSNotification $note) use (&$seen): void {
        $seen[] = [$note->name(), $note->userInfo()['NSObject'] ?? 'missing', $note->object()];
    });
    $items = [];
    [$outline, $source] = outlineOver($items, $delegate);

    $outline->expandItem($items['a']);
    expect($seen)->toBe([['NSOutlineViewItemDidExpandNotification', 'a', $outline]]);
});

it('keeps a double action and reports no clicked row without a click', function (): void {
    $table = NSTableView::initWithFrame(new NSRect(0, 0, 200, 100));
    expect($table->doubleAction())->toBeNull();

    $table->setDoubleAction('action:');
    expect($table->doubleAction())->toBe('action:')
        ->and($table->clickedRow())->toBe(-1);

    $table->scrollRowToVisible(0);
    $table->setDoubleAction(null);
    expect($table->doubleAction())->toBeNull();
});

it('makes an NSString from a PHP string and reads it back as UTF-8', function (): void {
    $string = NSString::stringWithString('ä€ tree');

    expect($string)->toBeInstanceOf(NSString::class)
        ->and($string->UTF8String())->toBe('ä€ tree')
        ->and($string->isKindOfClass('NSString'))->toBeTrue();
});

it('reads a notification without user info as null', function (): void {
    $seen = [];
    $token = NSNotificationCenter::defaultCenter()->addObserverForNameObjectQueueUsingBlock('C3TreeProbe', null, null, function (NSNotification $note) use (&$seen): void {
        $seen[] = $note->userInfo();
    });
    NSNotificationCenter::defaultCenter()->postNotificationNameObject('C3TreeProbe', null);
    NSNotificationCenter::defaultCenter()->removeObserver($token);

    expect($seen)->toBe([null]);
});
