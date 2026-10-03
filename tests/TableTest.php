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
        ->and($table->viewAtColumnRowMakeIfNecessary(0, 0, false))->toBeInstanceOf(NSTextField::class);
    $window->close();
});
