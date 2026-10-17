<?php

declare(strict_types=1);

if (! extension_loaded('appkit')) {
    throw new RuntimeException('The appkit extension is not loaded; run pest with -d extension=/path/to/appkit.so');
}

function applicationDefined(int $data1 = 0, int $data2 = 0): NSEvent
{
    return NSEvent::otherEventWithTypeLocationModifierFlagsTimestampWindowNumberContextSubtypeData1Data2(
        NSEventType::APPLICATION_DEFINED, new NSPoint(0.0, 0.0), 0, 0.0, 0, null, 0, $data1, $data2,
    );
}

/** Drop every queued application-defined event so each test starts from an empty queue. */
function drainApplicationDefined(NSApplication $app): void
{
    while ($app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::APPLICATION_DEFINED, NSDate::distantPast(), NSDefaultRunLoopMode, true)) {
    }
}

function newWindow(int $width = 320, int $height = 200): NSWindow
{
    $window = NSWindow::initWithContentRectStyleMaskBackingDefer(
        new NSRect(0.0, 0.0, $width, $height),
        NSWindowStyleMask::TITLED->value | NSWindowStyleMask::CLOSABLE->value | NSWindowStyleMask::MINIATURIZABLE->value | NSWindowStyleMask::RESIZABLE->value,
        NSBackingStoreType::BUFFERED,
        false,
    );
    // The PHP object holds its own reference: AppKit must not release the window again on close.
    $window->setReleasedWhenClosed(false);

    return $window;
}

/** Dispatch whatever AppKit has queued for up to $seconds. */
function pumpFor(NSApplication $app, float $seconds): void
{
    $until = microtime(true) + $seconds;
    while (microtime(true) < $until) {
        if ($event = $app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::ANY, NSDate::dateWithTimeIntervalSinceNow(0.01), NSDefaultRunLoopMode, true)) {
            $app->sendEvent($event);
        }
    }
}

/** Dispatch AppKit events until $until() holds or $seconds pass; true when it held. */
function pumpUntil(NSApplication $app, callable $until, float $seconds): bool
{
    $limit = microtime(true) + $seconds;
    while (! $until()) {
        if (microtime(true) >= $limit) {
            return false;
        }
        if ($event = $app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::ANY, NSDate::dateWithTimeIntervalSinceNow(0.01), NSDefaultRunLoopMode, true)) {
            $app->sendEvent($event);
        }
    }

    return true;
}

/** macOS signal numbers a kept refusal's probe dies by. */
const PROBE_SIGTRAP = 5;
const PROBE_SIGABRT = 6;
const PROBE_SIGSEGV = 11;

/**
 * Skips a tests/Probes test unless the loaded ext-appkit is a probe build (--enable-appkit-probes),
 * the only build where env APPKIT_PROBE_OFF turns a kept refusal off.
 */
function requireProbeBuild(): void
{
    if (! defined('APPKIT_PROBES')) {
        test()->markTestSkipped('ext-appkit is not a probe build (configure --enable-appkit-probes): APPKIT_PROBES is undefined');
    }
}

/** The probe build's appkit.so: env APPKIT_PROBE_EXT, else the loaded PHP's extension_dir. */
function probeExtension(string $name): string
{
    $given = getenv($name === 'appkit' ? 'APPKIT_PROBE_EXT' : 'APPKIT_PROBE_'.strtoupper($name));

    return is_string($given) && $given !== '' ? $given : ini_get('extension_dir').'/'.$name.'.so';
}

/**
 * Runs $code in a child of this PHP with only the probe build loaded (and ext-parallel when
 * $parallel), after a prelude that defines newWindow() and pump() and, unless $app is false,
 * starts an accessory NSApplication first. $siteOff names the kept site APPKIT_PROBE_OFF turns
 * off, null keeps every site. $gmalloc runs the child under libgmalloc with Zend's allocator off,
 * so a native over-read of PHP memory faults at the guard page.
 *
 * @return array{signal: ?int, exit: ?int, stdout: string, stderr: string}
 */
function probeRun(string $code, ?string $siteOff, bool $gmalloc = false, bool $parallel = false, bool $app = true): array
{
    $start = $app ? <<<'PHP'
    $app = NSApplication::sharedApplication();
    $app->setActivationPolicy(NSApplicationActivationPolicy::ACCESSORY);
    $app->finishLaunching();

    PHP : '';
    $prelude = <<<PHP
    <?php
    declare(strict_types=1);
    {$start}
    PHP;
    $prelude .= "\n".<<<'PHP'
    function newWindow(): NSWindow {
        $w = NSWindow::initWithContentRectStyleMaskBackingDefer(new NSRect(0.0, 0.0, 320.0, 200.0),
            NSWindowStyleMask::TITLED->value | NSWindowStyleMask::CLOSABLE->value, NSBackingStoreType::BUFFERED, false);
        $w->setReleasedWhenClosed(false);
        return $w;
    }
    function pump(float $seconds): void {
        $app = NSApplication::sharedApplication();
        $until = microtime(true) + $seconds;
        while (microtime(true) < $until) {
            if ($e = $app->nextEventMatchingMaskUntilDateInModeDequeue(NSEventMask::ANY, NSDate::dateWithTimeIntervalSinceNow(0.01), NSDefaultRunLoopMode, true)) {
                $app->sendEvent($e);
            }
        }
    }
    try {

    PHP;
    $epilogue = "\n} catch (Throwable \$t) {\n    echo 'REFUSED ', get_class(\$t), ': ', \$t->getMessage(), \"\\n\";\n}\necho \"SURVIVED\\n\";\n";

    $base = tempnam(sys_get_temp_dir(), 'appkit-probe');
    $script = $base.'.php';
    $out = tempnam(sys_get_temp_dir(), 'appkit-probe-out');
    $err = tempnam(sys_get_temp_dir(), 'appkit-probe-err');
    file_put_contents($script, $prelude.$code.$epilogue);

    $env = getenv();
    unset($env['APPKIT_PROBE_OFF'], $env['DYLD_INSERT_LIBRARIES'], $env['USE_ZEND_ALLOC']);
    $env['XDEBUG_MODE'] = 'off';
    if ($siteOff !== null) {
        $env['APPKIT_PROBE_OFF'] = $siteOff;
    }
    if ($gmalloc) {
        $env['DYLD_INSERT_LIBRARIES'] = '/usr/lib/libgmalloc.dylib';
        $env['USE_ZEND_ALLOC'] = '0';
    }

    $command = [PHP_BINARY, '-n', '-d', 'memory_limit=128M'];
    if ($parallel) {
        array_push($command, '-d', 'extension='.probeExtension('parallel'));
    }
    array_push($command, '-d', 'extension='.probeExtension('appkit'), $script);

    $process = proc_open($command, [0 => ['file', '/dev/null', 'r'], 1 => ['file', $out, 'w'], 2 => ['file', $err, 'w']], $pipes, null, $env);
    $deadline = microtime(true) + 60.0;
    do {
        $status = proc_get_status($process);
        if ($status['running'] && microtime(true) > $deadline) {
            proc_terminate($process, 9);
        }
        if ($status['running']) {
            usleep(20_000);
        }
    } while ($status['running']);
    proc_close($process);

    $result = [
        'signal' => $status['signaled'] ? $status['termsig'] : null,
        'exit' => $status['signaled'] ? null : $status['exitcode'],
        'stdout' => (string) file_get_contents($out),
        'stderr' => (string) file_get_contents($err),
    ];
    @unlink($base);
    @unlink($script);
    @unlink($out);
    @unlink($err);

    return $result;
}

/**
 * The descriptor number behind a stream, for CFFileDescriptor::create(): the /dev/fd entry
 * with the stream's inode and mode (a socket's fstat() device is -1, so the device is not compared).
 *
 * @param resource $stream
 */
function streamDescriptor($stream): int
{
    $want = fstat($stream);
    foreach (scandir('/dev/fd') as $entry) {
        // The listing's own descriptor is closed by now: file_exists() skips it without a warning.
        if (! ctype_digit($entry) || ! file_exists('/dev/fd/'.$entry)) {
            continue;
        }
        $stat = stat('/dev/fd/'.$entry);
        if ($stat !== false && $stat['ino'] === $want['ino'] && $stat['mode'] === $want['mode']) {
            return (int) $entry;
        }
    }

    throw new RuntimeException('No /dev/fd entry matches the stream');
}
