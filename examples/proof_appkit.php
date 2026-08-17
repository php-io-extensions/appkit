<?php

declare(strict_types=1);

/**
 * AppKit-only proof: NSApplication + NSWindow + NSView + NSMenu.
 *
 *   php -d extension=./ext/modules/appkit.so examples/proof_appkit.php
 */

use AppKit\NS\NSApplication\NSApplication;
use AppKit\NS\NSMenu\NSMenu;
use AppKit\NS\NSView\NSView;
use AppKit\NS\NSWindow\NSWindow;

if (!extension_loaded('appkit')) {
    fwrite(STDERR, "appkit extension not loaded\n");
    exit(1);
}

NSApplication::init();
NSApplication::resetQuit();

NSMenu::installDefault('AppKit Demo');
NSMenu::enableAbout(true);
NSMenu::addItem('Demo', 'Quit Demo', 'q', 'quit');

$window = NSWindow::create('php-io-extensions/appkit', 640, 400);
if ($window === 0) {
    fwrite(STDERR, "failed to create window\n");
    exit(1);
}

$content = NSWindow::contentView($window);
if ($content === 0) {
    fwrite(STDERR, "failed to get content view\n");
    exit(1);
}

$child = NSView::create(20, 20, 200, 100);
if ($child === 0) {
    fwrite(STDERR, "failed to create view\n");
    exit(1);
}
NSView::addSubview($content, $child);

NSWindow::center($window);
NSWindow::show($window);

echo "AppKit shared: " . NSApplication::shared() . PHP_EOL;
echo "Close the window or use Demo → Quit Demo (Cmd+Q) to exit.\n";
echo "php → About AppKit Demo polls action id 'about' (no panel from C).\n";

$maxFrames = getenv('APPKIT_DEMO_MAX_FRAMES');
$maxFrames = $maxFrames === false || $maxFrames === '' ? null : max(1, (int) $maxFrames);

$frame = 0;
while (!NSWindow::shouldClose($window) && !NSApplication::shouldQuit()) {
    NSApplication::poll();

    $action = NSMenu::pollAction();
    if ($action === 'about') {
        echo "about action polled\n";
    }
    if ($action === 'quit') {
        break;
    }

    $frame++;
    if (!is_null($maxFrames) && $frame >= $maxFrames) {
        break;
    }
    usleep(16_000);
}

NSView::destroy($child);
NSWindow::destroy($window);

echo "demo exited cleanly\n";
