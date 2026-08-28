#!/usr/bin/env php
<?php
/*
 * Negative control for audit-headers.php: the pkg-drift fixture binds one
 * member fewer than its SDK header declares. The audit must exit non-zero,
 * name the failing class, and never print AUDIT_OK.
 * Prints AUDIT_GUARD_OK only when the audit failed exactly as required.
 */

declare(strict_types=1);

$scriptsDir = dirname(__DIR__);
$fixtures = __DIR__ . '/fixtures/audit';

$cmd = sprintf(
    '%s %s %s --frameworks %s 2>&1',
    escapeshellarg(PHP_BINARY),
    escapeshellarg($scriptsDir . '/audit-headers.php'),
    escapeshellarg($fixtures . '/pkg-drift'),
    escapeshellarg($fixtures . '/Frameworks')
);
exec($cmd, $output, $exitCode);
$text = implode("\n", $output);

if ($exitCode === 0) {
    fwrite(STDERR, "audit accepted an under-bound class (exit 0):\n{$text}\n");
    exit(1);
}
if (!preg_match('/NS\\\\NSWidget\s+header=12\s+bound=3\s+reserved=8\s+construct=0\s+FAIL/', $text)) {
    fwrite(STDERR, "audit failed but did not report NSWidget 12 vs 3+8 FAIL:\n{$text}\n");
    exit(1);
}
if (str_contains($text, 'AUDIT_OK')) {
    fwrite(STDERR, "audit printed AUDIT_OK despite failing:\n{$text}\n");
    exit(1);
}

echo "AUDIT_GUARD_OK\n";
