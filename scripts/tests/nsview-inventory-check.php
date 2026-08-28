#!/usr/bin/env php
<?php
/**
 * Classify NSView.h members and compare against the live SDK count.
 * Modes:
 *   (default)               inventory slots == audit-headers expected
 *   --reserved-reasons      every reserved row is a sanctioned reason
 */

declare(strict_types=1);

$root = dirname(__DIR__, 2);
$inventoryPath = $root . '/.unlazy/sz-nsview/inventory.json';
$header = '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSView.h';
$mode = $argv[1] ?? 'slots';
$allowedReasons = ['deprecated', 'block', 'nscoder', 'nsdata', 'nserror', 'nsattributedstring', 'class'];

if (!is_file($inventoryPath)) {
    fwrite(STDERR, "inventory missing: {$inventoryPath}\n");
    exit(1);
}

$inventory = json_decode((string) file_get_contents($inventoryPath), true);
if (!is_array($inventory) || !isset($inventory['members']) || !is_array($inventory['members'])) {
    fwrite(STDERR, "inventory.json is not a member list\n");
    exit(1);
}

$cmd = escapeshellarg(PHP_BINARY) . ' ' . escapeshellarg($root . '/scripts/audit-headers.php')
    . ' --count ' . escapeshellarg($header) . ' NSView';
exec($cmd, $out, $code);
$line = implode("\n", $out);
if ($code !== 0 || !preg_match('/expected=(\d+)/', $line, $m)) {
    fwrite(STDERR, "audit-headers --count failed: {$line}\n");
    exit(1);
}
$expected = (int) $m[1];

$slots = 0;
$reservedReasons = [];
foreach ($inventory['members'] as $i => $row) {
    if (!is_array($row) || !isset($row['kind'], $row['disposition'], $row['objc'])) {
        fwrite(STDERR, "member[{$i}] missing kind/disposition/objc\n");
        exit(1);
    }
    $kind = $row['kind'];
    $disp = $row['disposition'];
    if (!in_array($disp, ['bound', 'reserved'], true)) {
        fwrite(STDERR, "member[{$i}] bad disposition {$disp}\n");
        exit(1);
    }
    if ($kind === 'method') {
        $slots += 1;
    } elseif ($kind === 'property') {
        $rw = $row['readwrite'] ?? false;
        $slots += $rw ? 2 : 1;
    } else {
        fwrite(STDERR, "member[{$i}] bad kind {$kind}\n");
        exit(1);
    }
    if ($disp === 'reserved') {
        $reason = $row['reason'] ?? '';
        $reservedReasons[] = $reason;
        if ($mode === '--reserved-reasons' && !in_array($reason, $allowedReasons, true)) {
            fwrite(STDERR, "reserved member[{$i}] reason '{$reason}' is not " . implode('|', $allowedReasons) . "\n");
            exit(1);
        }
    }
}

if ($mode === '--reserved-reasons') {
    if ($reservedReasons === []) {
        fwrite(STDERR, "inventory has no reserved members\n");
        exit(1);
    }
    echo "NSVIEW_RESERVED_REASONS_OK\n";
    exit(0);
}

if ($slots !== $expected) {
    fwrite(STDERR, "inventory slots={$slots} live expected={$expected}\n");
    exit(1);
}

echo "NSVIEW_INVENTORY_OK\n";
