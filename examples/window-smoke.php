<?php

declare(strict_types=1);

/*
 * A window with a menu bar, on a real window server:
 *
 *   php examples/window-smoke.php [--hold=SECONDS]
 *
 * 1. a titled, closable, resizable window comes up and becomes key
 * 2. a two-folder main menu is installed: App (About, Quit) and View (Show Grid toggle)
 * 3. performing Show Grid runs the PHP target and flips its checkmark
 * 4. performClose: asks the delegate (windowShouldClose:), then windowWillClose: fires and the window is gone
 *
 * --hold leaves the window and menu bar up that long before step 4, to click around in.
 * Prints SMOKE_OK when every step held.
 */

$hold = 0.0;
foreach (array_slice($argv, 1) as $arg) {
    if (str_starts_with($arg, '--hold=')) {
        $hold = (float) substr($arg, 7);
    }
}

function check(bool $ok, string $what): void
{
    printf("%s %s\n", $ok ? 'ok  ' : 'FAIL', $what);
    if (! $ok) {
        exit(1);
    }
}

function pump(NSApplication $app, float $seconds): void
{
    $until = microtime(true) + $seconds;
    do {
        while ($event = $app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::ANY, NSDate::dateWithTimeIntervalSinceNow(0.01), NSDefaultRunLoopMode, true)) {
            $app->sendEvent($event);
        }
        $app->updateWindows();
    } while (microtime(true) < $until);
}

$app = NSApplication::sharedApplication();
$app->finishLaunching();
$app->setActivationPolicy(NSApplicationActivationPolicy::REGULAR);
$app->activate();

// 1. window
$log = [];
$window = NSWindow::initWithContentRectStyleMaskBackingDefer(
    new NSRect(0, 0, 480, 320),
    NSWindowStyleMask::TITLED->value | NSWindowStyleMask::CLOSABLE->value | NSWindowStyleMask::MINIATURIZABLE->value | NSWindowStyleMask::RESIZABLE->value,
    NSBackingStoreType::BUFFERED,
    false,
);
$window->setReleasedWhenClosed(false);
$window->setTitle('ext-appkit window smoke');
$window->center();

$delegate = new ObjCDelegate('NSWindowDelegate');
$delegate->on('windowDidBecomeKey:', function () use (&$log): void { $log[] = 'key'; });
$delegate->on('windowShouldClose:', function () use (&$log): bool { $log[] = 'should-close'; return true; });
$delegate->on('windowWillClose:', function () use (&$log): void { $log[] = 'will-close'; });
$window->setDelegate($delegate);

$window->makeKeyAndOrderFront(null);
pump($app, 0.3);
check($window->isVisible() && $window->isKeyWindow() && in_array('key', $log, true), 'window is up and key');

// 2. menu bar
$targets = [];
$item = function (string $title, string $key, callable $handler) use (&$targets): NSMenuItem {
    $item = NSMenuItem::initWithTitleActionKeyEquivalent($title, ObjCTarget::ACTION, $key);
    $targets[] = $target = new ObjCTarget($handler);
    $item->setTarget($target);

    return $item;
};
$folder = function (string $title, array $items): NSMenuItem {
    $slot = NSMenuItem::initWithTitleActionKeyEquivalent($title, null, '');
    $menu = NSMenu::initWithTitle($title);
    $menu->setAutoenablesItems(false);
    foreach ($items as $item) {
        $menu->addItem($item);
    }
    $slot->setSubmenu($menu);

    return $slot;
};

$about = $item('About', '', fn () => $app->orderFrontStandardAboutPanelWithOptions(['ApplicationName' => 'Window Smoke', 'Version' => '0.10.0']));
$quit = $item('Quit', 'q', fn () => $log[] = 'quit');
$grid = $item('Show Grid', 'g', function (NSMenuItem $sender) use (&$log): void {
    $on = $sender->state() !== NSControlStateValue::ON;
    $sender->setState($on ? NSControlStateValue::ON : NSControlStateValue::OFF);
    $log[] = 'grid:' . ($on ? 'on' : 'off');
});

$main = NSMenu::initWithTitle('MainMenu');
$main->addItem($folder('App', [$about, NSMenuItem::separatorItem(), $quit]));
$main->addItem($viewSlot = $folder('View', [$grid]));
$app->setMainMenu($main);
check($app->mainMenu() === $main && $main->numberOfItems() === 2, 'main menu installed: App, View');

// 3. toggle through the menu
$viewSlot->submenu()->performActionForItemAtIndex(0);
check($grid->state() === NSControlStateValue::ON && in_array('grid:on', $log, true), 'Show Grid ran its PHP target and is checked');

if ($hold > 0) {
    echo "holding for {$hold}s: try the menu bar\n";
    pump($app, $hold);
}

// 4. close
$window->performClose(null);
pump($app, 0.1);
check(! $window->isVisible(), 'performClose: closed the window');
check(in_array('should-close', $log, true) && in_array('will-close', $log, true), 'the delegate heard windowShouldClose: and windowWillClose:');

echo "SMOKE_OK\n";
