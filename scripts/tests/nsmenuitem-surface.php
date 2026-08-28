#!/usr/bin/env php
<?php
/**
 * End-to-end NSMenuItem C-surface checks.
 * Modes:
 *   (default)         bound+reserved == live SDK count; every @zep has a .m body
 *   --composite       each ns_nsmenuitem_* body has at most one message send
 *                     (alloc+init excepted on init bindings)
 *   --extra-sources   config.json lists src/ns-menuitem.m
 *   --no-nsphp        no NSPhp interface/class in ns-menuitem.{h,m}
 */

declare(strict_types=1);

$root = dirname(__DIR__, 2);
$mode = $argv[1] ?? 'surface';
$hPath = $root . '/src/ns-menuitem.h';
$mPath = $root . '/src/ns-menuitem.m';
$sdk = '/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks/AppKit.framework/Headers/NSMenuItem.h';

function fail(string $msg): never
{
    fwrite(STDERR, $msg . "\n");
    exit(1);
}

if ($mode === '--extra-sources') {
    $config = json_decode((string) file_get_contents($root . '/config.json'), true);
    $listed = $config['extra-sources'] ?? [];
    if (!in_array('src/ns-menuitem.m', $listed, true)) {
        fail('config.json extra-sources does not list src/ns-menuitem.m');
    }
    echo "NSMENUITEM_EXTRA_SOURCES_OK\n";
    exit(0);
}

if ($mode === '--no-nsphp') {
    foreach ([$hPath, $mPath] as $path) {
        if (!is_file($path)) {
            fail("missing {$path}");
        }
        $src = (string) file_get_contents($path);
        if (preg_match('/@interface\s+NSPhp\w*|\bNSPhp[A-Z]\w*/', $src)) {
            fail("NSPhp symbol in {$path}");
        }
    }
    echo "NSMENUITEM_NO_NSPHP_OK\n";
    exit(0);
}

$parity = file_get_contents($root . '/scripts/check-parity.php');
if ($parity === false) {
    fail('cannot read check-parity.php');
}
$lib = preg_replace('/\/\/ ---- main ----.*$/s', '', $parity);
$tmp = sys_get_temp_dir() . '/nsmenuitem-parity-lib.php';
file_put_contents($tmp, $lib);
require $tmp;

if ($mode === '--composite') {
    if (!is_file($mPath)) {
        fail("missing {$mPath}");
    }
    $bodies = findFunctionBodies((string) file_get_contents($mPath));
    if ($bodies === []) {
        fail('no function bodies in ns-menuitem.m');
    }
    $hLines = file($hPath, FILE_IGNORE_NEW_LINES) ?: [];
    $symbolIsInit = [];
    foreach ($hLines as $i => $line) {
        if (!preg_match('#/\*\s*@zep\s+NS\\\\NSMenuItem\s+(\w+)\s*\(#', $line, $mm)) {
            continue;
        }
        $method = $mm[1];
        $proto = null;
        for ($j = $i + 1; $j < count($hLines); $j++) {
            if (trim($hLines[$j]) !== '') {
                $proto = $hLines[$j];
                break;
            }
        }
        if ($proto !== null && preg_match('/\b(ns_nsmenuitem_[a-z0-9_]+)\s*\(/', $proto, $pm)) {
            $symbolIsInit[$pm[1]] = isInitMethod($method);
        }
    }
    foreach ($bodies as $symbol => $body) {
        if (!str_starts_with($symbol, 'ns_nsmenuitem_')) {
            continue;
        }
        $sends = collectMessageSends($body);
        if (count($sends) <= 1) {
            continue;
        }
        if (($symbolIsInit[$symbol] ?? false) && isAllocInitOnly($sends)) {
            continue;
        }
        fail("{$symbol} sends [" . implode(', ', $sends) . ']');
    }
    echo "NSMENUITEM_COMPOSITE_OK\n";
    exit(0);
}

if (!is_file($hPath) || !is_file($mPath)) {
    fail('ns-menuitem.{h,m} missing');
}

$h = (string) file_get_contents($hPath);
$bound = preg_match_all('#/\*\s*@zep\s+NS\\\\NSMenuItem\s+#', $h);
$reserved = preg_match_all('#/\*\s*@reserved\s+NS\\\\NSMenuItem\s+#', $h);

$cmd = escapeshellarg(PHP_BINARY) . ' ' . escapeshellarg($root . '/scripts/audit-headers.php')
    . ' --count ' . escapeshellarg($sdk) . ' NSMenuItem';
exec($cmd, $out, $code);
$line = implode("\n", $out);
if ($code !== 0 || !preg_match('/expected=(\d+)/', $line, $m)) {
    fail("audit-headers --count failed: {$line}");
}
$expected = (int) $m[1];
if (($bound + $reserved) !== $expected) {
    fail("bound={$bound} reserved={$reserved} total=" . ($bound + $reserved) . " live expected={$expected}");
}

$symbols = [];
foreach (file($hPath, FILE_IGNORE_NEW_LINES) ?: [] as $i => $line) {
    if (!preg_match('#/\*\s*@zep\s+NS\\\\NSMenuItem\s+#', $line)) {
        continue;
    }
    $lines = file($hPath, FILE_IGNORE_NEW_LINES);
    $proto = null;
    for ($j = $i + 1; $j < count($lines); $j++) {
        if (trim($lines[$j]) !== '') {
            $proto = $lines[$j];
            break;
        }
    }
    if ($proto === null || !preg_match('/\b(ns_nsmenuitem_[a-z0-9_]+)\s*\(/', $proto, $pm)) {
        fail('zep without ns_nsmenuitem_* prototype near line ' . ($i + 1));
    }
    $symbols[] = $pm[1];
}

$bodies = findFunctionBodies((string) file_get_contents($mPath));
foreach ($symbols as $symbol) {
    if (!isset($bodies[$symbol])) {
        fail("{$symbol}: @zep has no function definition");
    }
}

$config = json_decode((string) file_get_contents($root . '/config.json'), true);
if (!in_array('src/ns-menuitem.m', $config['extra-sources'] ?? [], true)) {
    fail('config.json extra-sources does not list src/ns-menuitem.m');
}

echo "NSMENUITEM_SURFACE_OK\n";
