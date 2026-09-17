<?php
/*
 * Slice-zero smoke test. Exercises every kind of glue the extension has:
 * app + window + view + control lifecycle, a PHP closure firing from a real
 * target/action dispatch, a notification observation, a protocol delegate
 * answering windowShouldClose:, a menu bar, the pump, and the failure paths
 * (unknown handles are nil no-ops; a PHP exception thrown inside a callback
 * propagates back out to PHP). Wave B adds a table with columns, an alert
 * (built, never run — runModal would block), a toolbar on the window, and a
 * system status item.
 *
 * Run: php -n -d extension=ext/modules/appkit.so examples/smoke.php
 *
 * Raw enum ints on purpose — constants live in jovian/appkit, not here.
 *   NSApplicationActivationPolicyRegular = 0
 *   styleMask titled|closable|miniaturizable|resizable = 1|2|4|8 = 15
 *   NSBackingStoreBuffered = 2
 */

declare(strict_types=1);

use AppKit\Bridge\Bridge;
use AppKit\GC\GCController\GCController;
use AppKit\NS\NSAlert\NSAlert;
use AppKit\NS\NSApplication\NSApplication;
use AppKit\NS\NSButton\NSButton;
use AppKit\NS\NSComboBox\NSComboBox;
use AppKit\NS\NSDateFormatter\NSDateFormatter;
use AppKit\NS\NSEvent\NSEvent;
use AppKit\NS\NSIndexSet\NSIndexSet;
use AppKit\NS\NSControl\NSControl;
use AppKit\NS\NSMenu\NSMenu;
use AppKit\NS\NSMenuItem\NSMenuItem;
use AppKit\NS\NSProgressIndicator\NSProgressIndicator;
use AppKit\NS\NSSliderCell\NSSliderCell;
use AppKit\NS\NSStatusBar\NSStatusBar;
use AppKit\NS\NSStatusItem\NSStatusItem;
use AppKit\NS\NSSwitch\NSSwitch;
use AppKit\NS\NSTableColumn\NSTableColumn;
use AppKit\NS\NSTableView\NSTableView;
use AppKit\NS\NSTabView\NSTabView;
use AppKit\NS\NSTextField\NSTextField;
use AppKit\NS\NSTextStorage\NSTextStorage;
use AppKit\NS\NSToolbar\NSToolbar;
use AppKit\NS\NSView\NSView;
use AppKit\NS\NSWindow\NSWindow;
use AppKit\QuartzCore\CALayer\CALayer;

$failures = 0;
function check(bool $ok, string $label): void
{
    global $failures;
    if ($ok) {
        echo "{$label}\n";
    } else {
        $failures++;
        fwrite(STDERR, "FAILED: {$label}\n");
    }
}

/* ---- application ---- */
$app = NSApplication::sharedApplication();
check($app !== 0, 'APP_OK');
NSApplication::setActivationPolicy($app, 0);
NSApplication::finishLaunching($app);

/* ---- window ---- */
$win = NSWindow::initWithContentRectStyleMaskBackingDefer(240.0, 240.0, 420.0, 260.0, 15, 2, false);
check($win !== 0 && Bridge::isValid($win), 'WINDOW_OK');
// The bridge registry owns the handle; AppKit must not also release on close.
NSWindow::setReleasedWhenClosed($win, false);
NSWindow::setTitle($win, 'appkit slice zero');
NSWindow::makeKeyAndOrderFront($win, 0);
$content = NSWindow::contentView($win);
check($content !== 0, 'CONTENT_VIEW_OK');

/* ---- button + NSControl/NSView setters through an untyped handle ---- */
$btn = NSButton::buttonWithTitleTargetAction('Smoke', 0, '');
check($btn !== 0, 'BUTTON_OK');
NSView::setFrame($btn, 20.0, 20.0, 140.0, 40.0);   // NSView method on an NSButton handle
NSControl::setEnabled($btn, true);                  // NSControl method on the same handle
NSButton::setBezelStyle($btn, 1);
NSView::addSubview($content, $btn);
$frame = NSView::frame($btn);
check(is_array($frame) && $frame['width'] === 140.0, 'INHERITED_SETTER_OK');

/* ---- click: PHP closure fired from target/action dispatch ---- */
$clicked = false;
Bridge::setAction($btn, function (int $sender) use (&$clicked, $btn): void {
    $clicked = ($sender === $btn);
});
NSControl::performClick($btn, 0);
check($clicked, 'CLICK_OK');

/* ---- notification: NSWindowDidResizeNotification ---- */
$resized = false;
$token = Bridge::observeNotification($win, 'NSWindowDidResizeNotification', function (int $object, string $name) use (&$resized, $win): void {
    $resized = ($object === $win && $name === 'NSWindowDidResizeNotification');
});
check($token !== 0, 'OBSERVE_TOKEN_OK');
NSWindow::setFrameDisplay($win, 240.0, 240.0, 500.0, 300.0, true);
check($resized, 'RESIZE_OK');
Bridge::removeObserver($token);

/* ---- delegate: windowShouldClose: returns false, window survives ---- */
$asked = false;
$delegate = Bridge::delegateNew('NSWindowDelegate');
check($delegate !== 0, 'DELEGATE_NEW_OK');
Bridge::delegateOn($delegate, 'windowShouldClose:', function () use (&$asked): bool {
    $asked = true;
    return false;
});
NSWindow::setDelegate($win, $delegate);
NSWindow::performClose($win, 0);
check($asked && NSWindow::isVisible($win), 'SHOULD_CLOSE_OK');

/* ---- menu bar ---- */
$bar = NSMenu::initWithTitle('MainMenu');
$appItem = NSMenuItem::initWithTitleActionKeyEquivalent('App', '', '');
$appMenu = NSMenu::initWithTitle('App');
NSMenuItem::setSubmenu($appItem, $appMenu);
NSMenu::addItem($bar, $appItem);
NSApplication::setMainMenu($app, $bar);
check(NSApplication::mainMenu($app) === $bar, 'MENU_OK');

/* ---- pump ---- */
$sent = Bridge::pump(0.1);
check(is_int($sent), 'PUMP_OK');

/* ---- input tap: a posted keyDown (type 10, mask 1 << 10) is recorded ---- */
Bridge::watchInput(1 << 10);
$key = NSEvent::keyEventWithTypeLocationModifierFlagsTimestampWindowNumberContextCharactersCharactersIgnoringModifiersIsARepeatKeyCode(
    10, 0.0, 0.0, 0, 0.0, NSWindow::windowNumber($win), 0, 'a', 'a', false, 0
);
NSApplication::postEventAtStart($app, $key, false);
Bridge::pump(0.05);
$drained = Bridge::drainInput();
check(is_array($drained), 'DRAIN_INPUT_OK');
check(
    count($drained) === 1
    && $drained[0]['type'] === 10
    && $drained[0]['characters'] === 'a'
    && $drained[0]['keyCode'] === 0
    && $drained[0]['windowNumber'] === NSWindow::windowNumber($win)
    && $drained[0]['locationInWindow'] === ['x' => 0.0, 'y' => 0.0],
    'INPUT_TAP_OK'
);
check(Bridge::drainInput() === [], 'DRAIN_EMPTIES_OK');

/* swallowKeysIn: a key in a listed window with no key responder is still recorded */
Bridge::swallowKeysIn([NSWindow::windowNumber($win)]);
NSApplication::postEventAtStart($app, $key, false);
Bridge::pump(0.05);
$drained = Bridge::drainInput();
check(count($drained) === 1 && $drained[0]['type'] === 10, 'SWALLOW_RECORDS_OK');
Bridge::swallowKeysIn([]);

/* flagsChanged (type 12, mask 1 << 12): keyCode 56 (left shift) recorded, characters not read */
Bridge::watchInput(1 << 12);
$flags = NSEvent::keyEventWithTypeLocationModifierFlagsTimestampWindowNumberContextCharactersCharactersIgnoringModifiersIsARepeatKeyCode(
    12, 0.0, 0.0, 1 << 17, 0.0, NSWindow::windowNumber($win), 0, '', '', false, 56
);
check($flags !== 0, 'FLAGS_EVENT_OK');
NSApplication::postEventAtStart($app, $flags, false);
Bridge::pump(0.05);
$drained = Bridge::drainInput();
check(
    count($drained) === 1
    && $drained[0]['type'] === 12
    && $drained[0]['keyCode'] === 56
    && $drained[0]['characters'] === ''
    && $drained[0]['isARepeat'] === false
    && ($drained[0]['modifierFlags'] & (1 << 17)) !== 0,
    'FLAGS_CHANGED_KEYCODE_OK'
);
Bridge::release($flags);
/* isDirectionInvertedFromDevice is scrollWheel-only; a scroll event cannot be
   posted through a bound path, so assert the key exists and reads false here */
check(
    array_key_exists('isDirectionInvertedFromDevice', $drained[0])
    && $drained[0]['isDirectionInvertedFromDevice'] === false,
    'SCROLL_INVERTED_KEY_OK'
);

/* mouseDown (type 1) reads button/click, not deltas; mouseMoved (type 5) reads
   deltas, not button/click */
Bridge::watchInput((1 << 1) | (1 << 5));
$down = NSEvent::mouseEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberClickCountPressure(
    1, 12.0, 34.0, 0, 0.0, NSWindow::windowNumber($win), 0, 0, 2, 1.0
);
$moved = NSEvent::mouseEventWithTypeLocationModifierFlagsTimestampWindowNumberContextEventNumberClickCountPressure(
    5, 56.0, 78.0, 0, 0.0, NSWindow::windowNumber($win), 0, 0, 0, 0.0
);
NSApplication::postEventAtStart($app, $moved, false);
NSApplication::postEventAtStart($app, $down, false);
Bridge::pump(0.05);
$drained = Bridge::drainInput();
$byType = array_column($drained, null, 'type');
check(
    count($drained) === 2
    && isset($byType[1], $byType[5])
    && $byType[1]['clickCount'] === 2
    && $byType[1]['deltaX'] === 0.0
    && $byType[1]['locationInWindow'] === ['x' => 12.0, 'y' => 34.0]
    && $byType[5]['clickCount'] === 0
    && $byType[5]['buttonNumber'] === 0
    && $byType[5]['locationInWindow'] === ['x' => 56.0, 'y' => 78.0]
    && $byType[5]['isDirectionInvertedFromDevice'] === false,
    'MOUSE_FIELD_GATES_OK'
);
Bridge::release($down);
Bridge::release($moved);
Bridge::watchInput(0);
Bridge::release($key);
check(is_array(GCController::controllers()), 'GC_CONTROLLERS_OK');

/* ---- failure path: unknown handle is a nil no-op ---- */
NSView::setFrame(999999999, 0.0, 0.0, 1.0, 1.0);
check(!Bridge::isValid(999999999) && Bridge::className(999999999) === null, 'UNKNOWN_HANDLE_OK');

/* ---- failure path: PHP exception inside a callback propagates out ---- */
$boom = NSButton::buttonWithTitleTargetAction('Boom', 0, '');
Bridge::setAction($boom, function (): void {
    throw new RuntimeException('boom from callback');
});
$caught = false;
try {
    NSControl::performClick($boom, 0);
} catch (RuntimeException $e) {
    $caught = ($e->getMessage() === 'boom from callback');
}
check($caught, 'EXCEPTION_OK');

/* ---- synthesized construction: allocs the concrete class, not the ancestor ---- */
$switch = NSSwitch::initWithFrame(0.0, 0.0, 40.0, 24.0);
$tabs = NSTabView::initWithFrame(0.0, 0.0, 200.0, 120.0);
$cell = NSSliderCell::initTextCell('tick');
$storage = NSTextStorage::initWithString('hello');
$layer = CALayer::init();
check(
    Bridge::isKindOfClass($switch, 'NSSwitch')
    && Bridge::isKindOfClass($tabs, 'NSTabView')
    && Bridge::isKindOfClass($cell, 'NSSliderCell')
    && Bridge::isKindOfClass($storage, 'NSTextStorage')
    && Bridge::isKindOfClass($layer, 'CALayer'),
    'CONSTRUCT_OK'
);
Bridge::release($switch);
Bridge::release($tabs);
Bridge::release($cell);
Bridge::release($storage);
Bridge::release($layer);

/* ---- wave B: table view with columns ---- */
$table = NSTableView::initWithFrame(0.0, 0.0, 300.0, 150.0);
$colA = NSTableColumn::initWithIdentifier('alpha');
NSTableColumn::setTitle($colA, 'Alpha');
$colB = NSTableColumn::initWithIdentifier('beta');
NSTableView::addTableColumn($table, $colA);
NSTableView::addTableColumn($table, $colB);
check(
    NSTableView::numberOfColumns($table) === 2
    && NSTableColumn::title($colA) === 'Alpha'
    && NSTableView::columnWithIdentifier($table, 'beta') === 1,
    'TABLE_OK'
);

/* ---- wave B: alert built but not run (runModal would block) ---- */
$alert = NSAlert::init();
NSAlert::setMessageText($alert, 'smoke alert');
check(
    Bridge::isKindOfClass($alert, 'NSAlert')
    && NSAlert::messageText($alert) === 'smoke alert',
    'ALERT_OK'
);

/* ---- wave B: toolbar attached to the window ---- */
$toolbar = NSToolbar::initWithIdentifier('smoke-toolbar');
NSWindow::setToolbar($win, $toolbar);
check(
    NSWindow::toolbar($win) === $toolbar
    && NSToolbar::identifier($toolbar) === 'smoke-toolbar',
    'TOOLBAR_OK'
);
NSWindow::setToolbar($win, 0);

/* ---- wave B: status item in the system status bar ---- */
$statusBar = NSStatusBar::systemStatusBar();
$statusItem = NSStatusBar::statusItemWithLength($statusBar, -1.0);  // NSVariableStatusItemLength
check(
    Bridge::isKindOfClass($statusItem, 'NSStatusItem')
    && NSStatusItem::button($statusItem) !== 0,
    'STATUS_ITEM_OK'
);
NSStatusBar::removeStatusItem($statusBar, $statusItem);

/* ---- data source: PHP answers protocol selectors through the Bridge ---- */
// View-based NSTableView: numberOfRowsInTableView: (int return) from the data
// source, tableView:viewForTableColumn:row: (object-handle return) from the
// delegate, materialized synchronously by viewAtColumnRowMakeIfNecessary.
$dsTable = NSTableView::initWithFrame(0.0, 0.0, 300.0, 150.0);
$dsCol = NSTableColumn::initWithIdentifier('ds');
NSTableView::addTableColumn($dsTable, $dsCol);
NSView::addSubview($content, $dsTable);

$rowsAsked = 0;
$tableSource = Bridge::delegateNew('NSTableViewDataSource');
Bridge::delegateOn($tableSource, 'numberOfRowsInTableView:', function (int $table) use (&$rowsAsked, $dsTable): int {
    $rowsAsked += ($table === $dsTable) ? 1 : 0;
    return 3;
});
NSTableView::setDataSource($dsTable, $tableSource);

$madeLabels = [];
$tableDelegate = Bridge::delegateNew('NSTableViewDelegate');
Bridge::delegateOn($tableDelegate, 'tableView:viewForTableColumn:row:', function (int $table, int $column, int $row) use (&$madeLabels): int {
    $label = NSTextField::labelWithString("row-{$row}");
    $madeLabels[$row] = $label;
    return $label;
});
NSTableView::setDelegate($dsTable, $tableDelegate);
NSTableView::reloadData($dsTable);

$cellView = NSTableView::viewAtColumnRowMakeIfNecessary($dsTable, 0, 1, true);
check(
    NSTableView::numberOfRows($dsTable) === 3
    && $rowsAsked > 0
    && $cellView !== 0
    && $cellView === ($madeLabels[1] ?? -1)
    && Bridge::isKindOfClass($cellView, 'NSTextField'),
    'DATASOURCE_OK'
);

// Cell-value data source: NSComboBox asks PHP for an object value; the PHP
// string must come back as a real NSString readable through the combo box.
$combo = NSComboBox::initWithFrame(0.0, 0.0, 120.0, 24.0);
NSComboBox::setUsesDataSource($combo, true);
$comboSource = Bridge::delegateNew('NSComboBoxDataSource');
Bridge::delegateOn($comboSource, 'numberOfItemsInComboBox:', function (int $box): int {
    return 2;
});
Bridge::delegateOn($comboSource, 'comboBox:objectValueForItemAtIndex:', function (int $box, int $index): string {
    return "item-{$index}";
});
NSComboBox::setDataSource($combo, $comboSource);
// Selecting makes AppKit fetch the value from the data source and display it;
// stringValue reading back "item-1" proves the PHP string crossed as NSString.
NSComboBox::selectItemAtIndex($combo, 1);
check(
    NSComboBox::numberOfItems($combo) === 2
    && NSComboBox::indexOfSelectedItem($combo) === 1
    && NSControl::stringValue($combo) === 'item-1',
    'VALUE_RETURN_OK'
);

NSTableView::setDataSource($dsTable, 0);
NSTableView::setDelegate($dsTable, 0);
NSComboBox::setDataSource($combo, 0);
foreach ([$dsTable, $dsCol, $tableSource, $tableDelegate, $combo, $comboSource] as $h) {
    Bridge::release($h);
}
foreach ($madeLabels as $h) {
    Bridge::release($h);
}

/* ---- five setters round-tripping through their getters, one per type ---- */
NSWindow::setTitle($win, 'round trip');                 // string
NSControl::setEnabled($btn, false);                     // bool
NSButton::setBezelStyle($btn, 2);                       // int
NSTableColumn::setWidth($colA, 137.5);                  // double
$progress = NSProgressIndicator::initWithFrame(0.0, 0.0, 80.0, 20.0);
NSProgressIndicator::setDoubleValue($progress, 42.0);   // double on a synthesized ctor
check(
    NSWindow::title($win) === 'round trip'
    && NSControl::isEnabled($btn) === false
    && NSButton::bezelStyle($btn) === 2
    && NSTableColumn::width($colA) === 137.5
    && NSProgressIndicator::doubleValue($progress) === 42.0,
    'ROUNDTRIP_OK'
);
NSControl::setEnabled($btn, true);

/* ---- Foundation date formatter + index set (datepicker / table twins) ---- */
$fmt = NSDateFormatter::init();
NSDateFormatter::setDateFormat($fmt, 'yyyy-MM-dd');
$parsed = NSDateFormatter::dateFromString($fmt, '2026-09-12');
$back = NSDateFormatter::stringFromDate($fmt, $parsed);
check(
    $fmt !== 0
    && $parsed !== 0
    && $back === '2026-09-12',
    'DATEFORMATTER_OK'
);
$idx = NSIndexSet::indexSetWithIndex(2);
check(
    $idx !== 0
    && NSIndexSet::containsIndex($idx, 2) === true
    && NSIndexSet::containsIndex($idx, 1) === false,
    'INDEXSET_OK'
);
Bridge::release($fmt);
Bridge::release($parsed);
Bridge::release($idx);

Bridge::release($colA);
Bridge::release($colB);
Bridge::release($table);
Bridge::release($alert);
Bridge::release($toolbar);
Bridge::release($statusItem);
Bridge::release($progress);

/* ---- teardown ---- */
NSWindow::setDelegate($win, 0);
NSWindow::close($win);
Bridge::release($btn);
Bridge::release($boom);
Bridge::release($win);

if ($failures > 0) {
    fwrite(STDERR, "SMOKE_FAILED ({$failures})\n");
    exit(1);
}
echo "SMOKE_OK\n";
