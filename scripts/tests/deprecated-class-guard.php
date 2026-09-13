#!/usr/bin/env php
<?php
/*
 * Negative control for the deprecation exemption in audit-headers.php.
 *
 * The house rule reserves deprecated members. A class the SDK deprecates in
 * its entirety (NSOpenGLPixelFormat, NSOpenGLContext, NSOpenGLView) is the
 * sanctioned exception: it is bound in full under a visible
 * `@audit deprecated-class <Class> <reason>` marker. This proves the audit
 * enforces that in all three directions:
 *
 *   pkg                       marked + deprecated  -> DEPRECATED-CLASS OK
 *   pkg-deprecated-unmarked   deprecated, no marker -> FAIL
 *   pkg-misplaced-marker      marked, not deprecated -> FAIL
 *
 * Prints DEPRECATED_CLASS_GUARD_OK only when all three hold.
 */

declare(strict_types=1);

$scriptsDir = dirname(__DIR__);
$fixtures = __DIR__ . '/fixtures/audit';

/** @return array{0: string, 1: int} */
function runAudit(string $scriptsDir, string $fixtures, string $pkg): array
{
    $cmd = sprintf(
        '%s %s %s --frameworks %s 2>&1',
        escapeshellarg(PHP_BINARY),
        escapeshellarg($scriptsDir . '/audit-headers.php'),
        escapeshellarg($fixtures . '/' . $pkg),
        escapeshellarg($fixtures . '/Frameworks')
    );
    $output = [];
    exec($cmd, $output, $exitCode);

    return [implode("\n", $output), $exitCode];
}

function bail(string $why, string $text): never
{
    fwrite(STDERR, "deprecated-class-guard: {$why}:\n{$text}\n");
    exit(1);
}

/* ---- 1. marked + deprecated: accepted, and visibly marked in the report ---- */
[$text, $code] = runAudit($scriptsDir, $fixtures, 'pkg');
if ($code !== 0) {
    bail('the audit rejected a correctly marked deprecated class', $text);
}
if (!preg_match('/NS\\\\NSRelic\s+header=4\s+bound=4\s+reserved=0\s+construct=0\s+deprecated=0\s+DEPRECATED-CLASS OK \(deprecated in its entirety/', $text)) {
    bail('the audit did not report NSRelic as DEPRECATED-CLASS OK with its reason', $text);
}
if (!str_contains($text, 'AUDIT_OK')) {
    bail('the marked fixture did not print AUDIT_OK', $text);
}

/* ---- 2. deprecated, unmarked: refused ---- */
[$text, $code] = runAudit($scriptsDir, $fixtures, 'pkg-deprecated-unmarked');
if ($code === 0) {
    bail('the audit accepted a wholly deprecated class bound without a marker (exit 0)', $text);
}
if (!str_contains($text, 'FAIL (deprecated class bound without an @audit deprecated-class marker)')) {
    bail('the audit failed but not for the missing marker', $text);
}
if (str_contains($text, 'AUDIT_OK')) {
    bail('the audit printed AUDIT_OK despite failing', $text);
}

/* ---- 3. marker on a live class: refused, so the exemption cannot spread ---- */
[$text, $code] = runAudit($scriptsDir, $fixtures, 'pkg-misplaced-marker');
if ($code === 0) {
    bail('the audit accepted a deprecated-class marker on a live class (exit 0)', $text);
}
if (!str_contains($text, 'FAIL (@audit deprecated-class marker on a class the SDK does not deprecate)')) {
    bail('the audit failed but not for the misplaced marker', $text);
}
if (str_contains($text, 'AUDIT_OK')) {
    bail('the audit printed AUDIT_OK despite failing', $text);
}

echo "DEPRECATED_CLASS_GUARD_OK\n";
