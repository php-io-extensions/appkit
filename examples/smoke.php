<?php

declare(strict_types=1);

/*
 * End-to-end check of the bridge bindings on a real window server:
 *
 *   php examples/smoke.php [--hold=SECONDS]
 *
 * 1. connect      sharedApplication + finishLaunching + REGULAR + activate: the Dock shows the icon
 * 2. pump         drain what AppKit queued since launch, sendEvent: each one
 * 3. budget       nextEvent with an untilDate and nothing queued returns nil at the budget
 * 4. post wake    an application-defined event ends a far-future wait at once
 * 5. fd wake      a pipe written by a child process ends the wait through CFFileDescriptor
 * 6. nested wake  the same, through a kqueue whose own fd is the one in the run loop
 * 7. run/stop     AppKit's own loop runs until a callout stops it
 * 8. disconnect   PROHIBITED: the Dock drops the icon
 *
 * --hold keeps the icon up (pumping) that long after step 1, for a screenshot.
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

function dock_type(): ?string
{
    $pid = getmypid();
    foreach (explode("\n", (string) shell_exec('lsappinfo list 2>/dev/null')) as $line) {
        if (preg_match('/pid = ' . $pid . '\b.*?type="([^"]+)"/', $line, $m)) {
            return $m[1];
        }
    }

    return null;
}

/** @return int events dispatched */
function drain(NSApplication $app): int
{
    $n = 0;
    while ($event = $app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::ANY, NSDate::distantPast(), NSDefaultRunLoopMode, true)) {
        $app->sendEvent($event);
        $n++;
    }
    $app->updateWindows();

    return $n;
}

function wake_event(int $d1): NSEvent
{
    return NSEvent::otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2(
        NSEventType::APPLICATION_DEFINED, new NSPoint(0, 0), 0, 0.0, 0, null, 0, $d1, 0,
    );
}

/** A child that sleeps, writes one byte to its stdout pipe, and reports when it wrote. */
function delayed_writer(float $delay): array
{
    $proc = proc_open(
        [PHP_BINARY, '-n', '-r', sprintf('usleep(%d); fwrite(STDOUT, "x"); fflush(STDOUT); fwrite(STDERR, (string) microtime(true));', (int) ($delay * 1e6))],
        [1 => ['pipe', 'w'], 2 => ['pipe', 'w']],
        $pipes,
    );

    return [$proc, $pipes[1], $pipes[2]];
}

$app = NSApplication::sharedApplication();

// 1. connect
$app->finishLaunching();
check($app->setActivationPolicy(NSApplicationActivationPolicy::REGULAR), 'setActivationPolicy(REGULAR)');
$app->activate();
drain($app);
usleep(300_000);
drain($app);
check($app->activationPolicy() === NSApplicationActivationPolicy::REGULAR, 'activationPolicy() reads back REGULAR');
check(dock_type() === 'Foreground', 'lsappinfo: type="Foreground" (Dock icon up), pid ' . getmypid());

if ($hold > 0) {
    echo "holding the icon for {$hold}s\n";
    $until = microtime(true) + $hold;
    while (microtime(true) < $until) {
        if ($e = $app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::ANY, NSDate::dateWithTimeIntervalSinceNow(0.05), NSDefaultRunLoopMode, true)) {
            $app->sendEvent($e);
        }
    }
}

// 2. pump
$pumped = drain($app);
check(true, "pump drained {$pumped} queued event(s)");

// 3. budget
$t = hrtime(true);
$none = $app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::APPLICATION_DEFINED, NSDate::dateWithTimeIntervalSinceNow(0.05), NSDefaultRunLoopMode, true);
$ms = (hrtime(true) - $t) / 1e6;
check($none === null && $ms >= 45 && $ms < 80, sprintf('50ms budget, nothing queued: nil after %.1fms', $ms));

// 4. post wake
$app->postEventAtStart(wake_event(4), false);
$t = hrtime(true);
$e = $app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::APPLICATION_DEFINED, NSDate::distantFuture(), NSDefaultRunLoopMode, true);
$ms = (hrtime(true) - $t) / 1e6;
check($e instanceof NSEvent && $e->type() === NSEventType::APPLICATION_DEFINED && $e->data1() === 4 && $ms < 5, sprintf('posted event ended a distantFuture wait in %.2fms', $ms));

// 5. fd wake: the callout posts the event that ends nextEvent's wait, the technique GLFW's glfwPostEmptyEvent uses.
$fdWake = function (NSApplication $app, mixed $fd, int $d1): array {
    $state = new stdClass();
    $state->fired = 0;
    $cf = CFFileDescriptor::create($fd, false, function (CFFileDescriptor $f, int $types) use ($app, $d1, $state): void {
        $state->fired++;
        $app->postEventAtStart(wake_event($d1), false);
    });
    $cf->enableCallBacks(kCFFileDescriptorReadCallBack);
    $source = $cf->createRunLoopSource(0);
    CFRunLoop::getMain()->addSource($source, kCFRunLoopCommonModes);

    return [$cf, $source, $state];
};

[$proc, $out, $err] = delayed_writer(0.2);
[$cf, $source, $state] = $fdWake($app, $out, 5);
$t = hrtime(true);
$e = $app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::APPLICATION_DEFINED, NSDate::dateWithTimeIntervalSinceNow(2.0), NSDefaultRunLoopMode, true);
$woke = microtime(true);
$waited = (hrtime(true) - $t) / 1e6;
$wrote = (float) stream_get_contents($err);
fread($out, 1);
proc_close($proc);
$latency = ($woke - $wrote) * 1e3;
check($e instanceof NSEvent && $e->data1() === 5 && $state->fired === 1, sprintf('pipe fd ended a 2s wait after %.1fms, %.2fms after the child wrote', $waited, $latency));
check($latency < 5, 'fd wake latency under 5ms');
CFRunLoop::getMain()->removeSource($source, kCFRunLoopCommonModes);
$cf->invalidate();

// 6. nested wake: kqueue watches the pipe, the run loop watches the kqueue.
if (extension_loaded('kqueue')) {
    [$proc, $out, $err] = delayed_writer(0.2);
    $kq = kqueue();
    $kev = new kevent();
    EV_SET($kev, $out, EVFILT_READ, EV_ADD, 0, 0, 0);
    $none = null;
    check(kevent($kq, [$kev], 1, $none, 0, null) === 0, 'kqueue registered the pipe');

    [$cf, $source, $state] = $fdWake($app, $kq, 6);
    $t = hrtime(true);
    $e = $app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::APPLICATION_DEFINED, NSDate::dateWithTimeIntervalSinceNow(2.0), NSDefaultRunLoopMode, true);
    $woke = microtime(true);
    $waited = (hrtime(true) - $t) / 1e6;
    $wrote = (float) stream_get_contents($err);

    $events = [];
    $n = kevent($kq, [], 0, $events, 4, new timespec());
    fread($out, 1);
    proc_close($proc);
    $latency = ($woke - $wrote) * 1e3;
    check($e instanceof NSEvent && $e->data1() === 6 && $state->fired === 1, sprintf('kqueue fd ended a 2s wait after %.1fms, %.2fms after the child wrote', $waited, $latency));
    check($n === 1 && $latency < 5, 'the glance after the wake reads the pipe event off the kqueue');
    CFRunLoop::getMain()->removeSource($source, kCFRunLoopCommonModes);
    $cf->invalidate();
} else {
    echo "skip nested wake: ext-kqueue not loaded\n";
}

// 7. run/stop: AppKit's own loop, stopped from a callout. stop: takes effect after the next event, so post one.
[$proc, $out, $err] = delayed_writer(0.1);
$ran = false;
$cf = CFFileDescriptor::create($out, false, function () use ($app, &$ran): void {
    $ran = true;
    $app->stop(null);
    $app->postEventAtStart(wake_event(7), false);
});
$cf->enableCallBacks(kCFFileDescriptorReadCallBack);
$source = $cf->createRunLoopSource(0);
CFRunLoop::getMain()->addSource($source, kCFRunLoopCommonModes);
$t = hrtime(true);
$app->run();
$ms = (hrtime(true) - $t) / 1e6;
fread($out, 1);
proc_close($proc);
check($ran && ! $app->isRunning(), sprintf('run() returned after %.1fms once the callout called stop()', $ms));
CFRunLoop::getMain()->removeSource($source, kCFRunLoopCommonModes);
$cf->invalidate();

// 8. disconnect
check($app->setActivationPolicy(NSApplicationActivationPolicy::PROHIBITED), 'setActivationPolicy(PROHIBITED)');
drain($app);
usleep(300_000);
drain($app);
$type = dock_type();
check($type !== 'Foreground', 'lsappinfo: type="' . $type . '" (Dock icon gone)');

echo "SMOKE_OK\n";
