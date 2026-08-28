#!/usr/bin/env php
<?php
/*
 * Parser oracle for audit-headers.php: the fixture SDK header has a known
 * exact composition; --count must report it precisely. Also runs a control
 * for a class absent from the header (must count zero — proves we are not
 * counting globally or leaking @protocol/other-interface members).
 * Prints HEADER_PARSE_OK only when every assertion passes.
 */

declare(strict_types=1);

$scriptsDir = dirname(__DIR__);
$header = __DIR__ . '/fixtures/audit/Frameworks/AppKit.framework/Headers/NSWidget.h';

function runCount(string $scriptsDir, string $header, string $class): array
{
    $cmd = sprintf(
        '%s %s --count %s %s 2>&1',
        escapeshellarg(PHP_BINARY),
        escapeshellarg($scriptsDir . '/audit-headers.php'),
        escapeshellarg($header),
        escapeshellarg($class)
    );
    exec($cmd, $output, $exitCode);

    return [implode("\n", $output), $exitCode];
}

[$text, $code] = runCount($scriptsDir, $header, 'NSWidget');
$expected = 'NSWidget methods=6 properties_rw=2 properties_ro=2 expected=12';
if ($code !== 0 || trim($text) !== $expected) {
    fwrite(STDERR, "NSWidget count mismatch (exit {$code}):\n  got:      " . trim($text) . "\n  expected: {$expected}\n");
    exit(1);
}

[$text, $code] = runCount($scriptsDir, $header, 'NSAbsent');
$expected = 'NSAbsent methods=0 properties_rw=0 properties_ro=0 expected=0';
if ($code !== 0 || trim($text) !== $expected) {
    fwrite(STDERR, "absent-class control failed (exit {$code}):\n  got:      " . trim($text) . "\n  expected: {$expected}\n");
    exit(1);
}

echo "HEADER_PARSE_OK\n";
