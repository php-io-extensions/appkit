<?php

declare(strict_types=1);

/** A view-based table over $rows, its cells NSTextFields made by the delegate. */
function rowsTable(int &$rows, array &$made): array
{
    $table = NSTableView::initWithFrame(new NSRect(0.0, 0.0, 400.0, 600.0));
    $table->addTableColumn(NSTableColumn::initWithIdentifier('day'));

    $source = new ObjCDelegate('NSTableViewDataSource');
    $source->on('numberOfRowsInTableView:', function (NSTableView $t) use (&$rows): int {
        return $rows;
    });
    $delegate = new ObjCDelegate('NSTableViewDelegate');
    $delegate->on('tableView:viewForTableColumn:row:', function (NSTableView $t, ?NSTableColumn $c, int $row) use (&$made): NSView {
        $cell = $t->makeViewWithIdentifierOwner('day-cell', null) ?? NSTextField::labelWithString('');
        $cell->setIdentifier('day-cell');
        $made[] = $row;

        return $cell;
    });
    $table->setDataSource($source);
    $table->setDelegate($delegate);

    return [$table, $source, $delegate];
}

it('keeps the row height a table is given', function (): void {
    $table = NSTableView::initWithFrame(new NSRect(0.0, 0.0, 400.0, 600.0));
    $table->setRowHeight(104.0);

    expect($table->rowHeight())->toEqualWithDelta(104.0, 0.0001);
});

it('asks its delegate for a row view, and makes no view of an identifier it has none of', function (): void {
    $rows = 3;
    $made = [];
    [$table, $source, $delegate] = rowsTable($rows, $made);
    $table->reloadData();

    $view = $table->viewAtColumnRowMakeIfNecessary(0, 1, true);

    expect($table->numberOfRows())->toBe(3)
        ->and($view)->toBeInstanceOf(NSTextField::class)
        ->and($view->identifier())->toBe('day-cell')
        ->and($made)->toContain(1)
        ->and($table->makeViewWithIdentifierOwner('no-such-cell', null))->toBeNull();

    $table->setDelegate(null);
    $table->setDataSource(null);
});

it('inserts and removes rows with an animation, and reloads one row', function (): void {
    $rows = 3;
    $made = [];
    [$table, $source, $delegate] = rowsTable($rows, $made);
    $table->reloadData();

    $rows = 4;
    $table->insertRowsAtIndexesWithAnimation(NSIndexSet::indexSetWithIndex(0), NSTableView::ANIMATION_SLIDE_DOWN);
    expect($table->numberOfRows())->toBe(4);

    $rows = 3;
    $table->removeRowsAtIndexesWithAnimation(NSIndexSet::indexSetWithIndex(2), NSTableView::ANIMATION_EFFECT_FADE | NSTableView::ANIMATION_SLIDE_UP);
    expect($table->numberOfRows())->toBe(3);

    $rows = 5;
    $table->noteNumberOfRowsChanged();
    $table->reloadDataForRowIndexesColumnIndexes(NSIndexSet::indexSetWithIndex(1), NSIndexSet::indexSetWithIndex(0));
    expect($table->numberOfRows())->toBe(5)
        ->and(NSTableView::ANIMATION_EFFECT_NONE)->toBe(0);

    $table->setDelegate(null);
    $table->setDataSource(null);
});

it('finds the row that holds a view, and -1 for a view in none', function (): void {
    $rows = 3;
    $made = [];
    [$table, $source, $delegate] = rowsTable($rows, $made);
    $table->reloadData();

    $cell = $table->viewAtColumnRowMakeIfNecessary(0, 2, true);

    expect($table->rowForView($cell))->toBe(2)
        ->and($table->rowForView(NSView::initWithFrame(new NSRect(0.0, 0.0, 1.0, 1.0))))->toBe(-1);

    $table->setDelegate(null);
    $table->setDataSource(null);
});
