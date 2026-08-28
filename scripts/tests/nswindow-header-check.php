#!/usr/bin/env php
<?php
/**
 * Verify src/ns-window.h against inventory + live SDK count.
 * Modes:
 *   (default)        bound+reserved == live expected, matches inventory
 *   --prototypes     every @zep is followed by a matching ns_nswindow_* prototype
 *   --no-inherited   NSResponder.h-only selectors are absent
 */

declare(strict_types=1);

$root = dirname(__DIR__, 2);
$headerPath = $root . '/src/ns-window.h';
$inventoryPath = $root . '/.unlazy/sz-nswindow/inventory.json';
$sdk = '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSWindow.h';
$mode = $argv[1] ?? 'count';

if (!is_file($headerPath)) {
    fwrite(STDERR, "missing {$headerPath}\n");
    exit(1);
}

$src = (string) file_get_contents($headerPath);
$lines = file($headerPath, FILE_IGNORE_NEW_LINES);
if ($lines === false) {
    fwrite(STDERR, "cannot read header\n");
    exit(1);
}

$bound = 0;
$reserved = 0;
$zep = [];
foreach ($lines as $i => $line) {
    if (preg_match('#/\*\s*@zep\s+NS\\\\NSWindow\s+(\w+)\s*\(([^)]*)\)\s*->\s*(\w+)\s*\*/#', $line, $m)) {
        $bound++;
        $params = trim($m[2]) === '' ? [] : array_map('trim', explode(',', $m[2]));
        $zep[] = ['line' => $i, 'method' => $m[1], 'params' => $params, 'return' => $m[3]];
    } elseif (preg_match('#/\*\s*@reserved\s+NS\\\\NSWindow\s#', $line)) {
        $reserved++;
    }
}

if ($mode === '--no-inherited') {
    $forbidden = [
        'nextResponder', 'setNextResponder', 'mouseDown', 'mouseUp', 'keyDown',
        'keyUp', 'becomeFirstResponder', 'resignFirstResponder', 'acceptsFirstResponder',
        'interpretKeyEvents', 'doCommandBySelector',
    ];
    $hits = [];
    foreach ($zep as $z) {
        if (in_array($z['method'], $forbidden, true)) {
            $hits[] = $z['method'];
        }
    }
    if ($hits !== []) {
        fwrite(STDERR, "inherited NSResponder selectors bound: " . implode(', ', $hits) . "\n");
        exit(1);
    }
    echo "NSWINDOW_NO_INHERITED_OK\n";
    exit(0);
}

if ($mode === '--prototypes') {
    foreach ($zep as $z) {
        $proto = null;
        for ($j = $z['line'] + 1; $j < count($lines); $j++) {
            if (trim($lines[$j]) !== '') {
                $proto = $lines[$j];
                break;
            }
        }
        if ($proto === null || !preg_match('/^\s*(zend_long|double|void)\s+(ns_nswindow_[a-z0-9_]+)\s*\(([^)]*)\)\s*;/', $proto, $pm)) {
            fwrite(STDERR, "{$z['method']}: missing parseable prototype\n");
            exit(1);
        }
        $cReturn = $pm[1];
        $cParams = trim($pm[3]) === '' || trim($pm[3]) === 'void' ? [] : array_map('trim', explode(',', $pm[3]));
        $hasRv = $cParams !== [] && str_contains($cParams[0], 'return_value');
        $cArity = count($cParams) - ($hasRv ? 1 : 0);
        $expectedC = match ($z['return']) {
            'int', 'bool' => 'zend_long',
            'double' => 'double',
            default => 'void',
        };
        $needsRv = in_array($z['return'], ['string', 'array', 'var'], true);
        if ($cReturn !== $expectedC) {
            fwrite(STDERR, "{$z['method']}: C return {$cReturn} expected {$expectedC}\n");
            exit(1);
        }
        if ($needsRv !== $hasRv) {
            fwrite(STDERR, "{$z['method']}: return_value mismatch for {$z['return']}\n");
            exit(1);
        }
        if ($cArity !== count($z['params'])) {
            fwrite(STDERR, "{$z['method']}: C arity {$cArity} != zep " . count($z['params']) . "\n");
            exit(1);
        }
        if (!str_starts_with($pm[2], 'ns_nswindow_')) {
            fwrite(STDERR, "{$z['method']}: symbol {$pm[2]} is not ns_nswindow_*\n");
            exit(1);
        }
    }
    if ($zep === []) {
        fwrite(STDERR, "no @zep annotations\n");
        exit(1);
    }
    echo "NSWINDOW_PROTOTYPES_OK\n";
    exit(0);
}

$cmd = escapeshellarg(PHP_BINARY) . ' ' . escapeshellarg($root . '/scripts/audit-headers.php')
    . ' --count ' . escapeshellarg($sdk) . ' NSWindow';
exec($cmd, $out, $code);
$line = implode("\n", $out);
if ($code !== 0 || !preg_match('/expected=(\d+)/', $line, $m)) {
    fwrite(STDERR, "audit-headers --count failed: {$line}\n");
    exit(1);
}
$expected = (int) $m[1];
$total = $bound + $reserved;
if ($total !== $expected) {
    fwrite(STDERR, "header bound={$bound} reserved={$reserved} total={$total} live expected={$expected}\n");
    exit(1);
}

$inventory = json_decode((string) file_get_contents($inventoryPath), true);
$invBound = 0;
$invReserved = 0;
foreach ($inventory['members'] as $row) {
    $weight = ($row['kind'] === 'property' && ($row['readwrite'] ?? false)) ? 2 : 1;
    if ($row['disposition'] === 'reserved') {
        $invReserved += $weight;
    } else {
        $invBound += $weight;
    }
}
if ($invBound !== $bound || $invReserved !== $reserved) {
    fwrite(STDERR, "header bound={$bound} reserved={$reserved} inventory bound={$invBound} reserved={$invReserved}\n");
    exit(1);
}

echo "NSWINDOW_HEADER_OK\n";
