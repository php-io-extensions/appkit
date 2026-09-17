#!/usr/bin/env php
<?php
/*
 * Negative control for the `@audit adopts <Class> <Protocol> <reason>` marker
 * in audit-headers.php. Protocol members are out of audit scope unless a class
 * declares, visibly, that it binds members of a protocol its header adopts
 * (GCController / GCDevice). This proves the audit enforces it:
 *
 *   pkg-adopts             adopted, protocol members accounted -> ADOPTS OK
 *   pkg-adopts-unadopted   protocol exists, class does not adopt -> FAIL
 *   pkg-adopts-missing     protocol defined nowhere             -> FAIL
 *
 * Prints ADOPTS_GUARD_OK only when all three hold.
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
    fwrite(STDERR, "adopts-guard: {$why}:\n{$text}\n");
    exit(1);
}

/* ---- 1. adopted: protocol members join the expected count ---- */
[$text, $code] = runAudit($scriptsDir, $fixtures, 'pkg-adopts');
if ($code !== 0) {
    bail('the audit rejected a correctly marked adopted protocol', $text);
}
if (!preg_match('/NS\\\\NSDial\s+header=5\s+bound=4\s+reserved=1\s+.*ADOPTS NSTurning\+3 OK/', $text)) {
    bail('the audit did not report NSDial as ADOPTS NSTurning+3 OK with header=5', $text);
}
if (!str_contains($text, 'AUDIT_OK')) {
    bail('the adopted fixture did not print AUDIT_OK', $text);
}

/* ---- 2. protocol the class does not adopt: refused ---- */
[$text, $code] = runAudit($scriptsDir, $fixtures, 'pkg-adopts-unadopted');
if ($code === 0 || str_contains($text, 'AUDIT_OK')) {
    bail('the audit accepted an adopts marker for a protocol the class does not adopt', $text);
}
if (!str_contains($text, 'FAIL (@audit adopts NSWidgetDelegate: the class does not adopt it in its header)')) {
    bail('the audit failed but not for the unadopted protocol', $text);
}

/* ---- 3. protocol defined nowhere: refused ---- */
[$text, $code] = runAudit($scriptsDir, $fixtures, 'pkg-adopts-missing');
if ($code === 0 || str_contains($text, 'AUDIT_OK')) {
    bail('the audit accepted an adopts marker for an undefined protocol', $text);
}
if (!str_contains($text, 'FAIL (@audit adopts NSSpinning: protocol not found in the framework headers)')) {
    bail('the audit failed but not for the missing protocol', $text);
}

echo "ADOPTS_GUARD_OK\n";
