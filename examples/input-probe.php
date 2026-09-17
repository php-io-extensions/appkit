<?php
/*
 * Input probe. Opens a window, taps keys + mouse + scroll through
 * Bridge::watchInput, and for 10 s prints every drained event. Once a second
 * it prints GCController::controllers() and, for each controller with an
 * extended gamepad, whether buttonA is pressed. Type, click, scroll, or press
 * A on a connected controller while it runs.
 *
 * Run: php examples/input-probe.php
 *
 * Raw enum ints on purpose — constants live in jovian/appkit, not here.
 *   NSEventType: leftMouseDown 1, leftMouseUp 2, rightMouseDown 3,
 *   rightMouseUp 4, mouseMoved 5, leftMouseDragged 6, rightMouseDragged 7,
 *   keyDown 10, keyUp 11, flagsChanged 12, scrollWheel 22,
 *   otherMouseDown 25, otherMouseUp 26, otherMouseDragged 27
 *   mask bit = 1 << type (NSEventMaskFromType)
 */

declare(strict_types=1);

use AppKit\Bridge\Bridge;
use AppKit\GC\GCController\GCController;
use AppKit\GC\GCControllerButtonInput\GCControllerButtonInput;
use AppKit\GC\GCExtendedGamepad\GCExtendedGamepad;
use AppKit\NS\NSApplication\NSApplication;
use AppKit\NS\NSWindow\NSWindow;

const PROBE_SECONDS = 10.0;

$types = [1, 2, 3, 4, 5, 6, 7, 10, 11, 12, 22, 25, 26, 27];
$mask = 0;
foreach ($types as $type) {
    $mask |= 1 << $type;
}

$app = NSApplication::sharedApplication();
NSApplication::setActivationPolicy($app, 0);
NSApplication::finishLaunching($app);

$win = NSWindow::initWithContentRectStyleMaskBackingDefer(200.0, 200.0, 480.0, 320.0, 15, 2, false);
NSWindow::setReleasedWhenClosed($win, false);
NSWindow::setTitle($win, 'appkit input probe');
NSWindow::setAcceptsMouseMovedEvents($win, true);
NSWindow::makeKeyAndOrderFront($win, 0);
NSApplication::activate($app);

Bridge::watchInput($mask);
echo 'input-probe: window ' . NSWindow::windowNumber($win) . ', mask ' . $mask . ', ' . PROBE_SECONDS . " s\n";

$start = microtime(true);
$nextPoll = $start;
$eventCount = 0;
while (($now = microtime(true)) - $start < PROBE_SECONDS) {
    Bridge::pump(0.05);

    /** @var list<array<string, mixed>> $events */
    $events = Bridge::drainInput();
    foreach ($events as $event) {
        $eventCount++;
        echo sprintf(
            "event type=%d key=%d chars=%s repeat=%s flags=0x%x button=%d clicks=%d at=(%.1f, %.1f) d=(%.2f, %.2f) scroll=(%.2f, %.2f%s)\n",
            $event['type'],
            $event['keyCode'],
            json_encode($event['characters']),
            $event['isARepeat'] ? 'y' : 'n',
            $event['modifierFlags'],
            $event['buttonNumber'],
            $event['clickCount'],
            $event['locationInWindow']['x'],
            $event['locationInWindow']['y'],
            $event['deltaX'],
            $event['deltaY'],
            $event['scrollingDeltaX'],
            $event['scrollingDeltaY'],
            $event['hasPreciseScrollingDeltas'] ? ' precise' : ''
        );
    }

    if ($now >= $nextPoll) {
        $nextPoll += 1.0;
        /** @var list<int> $controllers */
        $controllers = GCController::controllers();
        $states = [];
        foreach ($controllers as $controller) {
            $gamepad = GCController::extendedGamepad($controller);
            $name = GCController::vendorName($controller) ?? '?';
            if ($gamepad === 0) {
                $states[] = "{$name}: no extended gamepad";
                continue;
            }
            $buttonA = GCExtendedGamepad::buttonA($gamepad);
            $states[] = $name . ': buttonA ' . (GCControllerButtonInput::isPressed($buttonA) ? 'pressed' : 'up');
        }
        echo sprintf(
            "t=%.0fs controllers=%s %s\n",
            $now - $start,
            json_encode($controllers),
            implode('; ', $states)
        );
    }
}

Bridge::watchInput(0);
NSWindow::close($win);
Bridge::release($win);
echo "input-probe: {$eventCount} event(s), done\n";
