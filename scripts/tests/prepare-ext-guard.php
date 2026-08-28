#!/usr/bin/env php
<?php
/*
 * Positive and negative controls for scripts/prepare-ext.sh.
 *
 * Positive: a stub zephir writes a Zephir-shaped config.m4 (two .m extra
 * sources, PHP_EVAL_LIBLINE(-framework …), no PHP_ADD_MAKEFILE_FRAGMENT).
 * prepare-ext must stage src/, write one libtool rule per .m, apply every
 * config.m4 patch, and print PREPARE_EXT_OK.
 *
 * Negative: the same stub writes a config.m4 with no -framework line at all.
 * prepare-ext must exit non-zero (patch verification fails closed).
 *
 * Prints PREPARE_EXT_GUARD_OK only when both scenarios behave.
 */

declare(strict_types=1);

$scriptsDir = dirname(__DIR__);
$fixtureM4 = __DIR__ . '/fixtures/prepare-ext/config.m4';
$prepare = $scriptsDir . '/prepare-ext.sh';
$failures = [];

function rrmdir(string $dir): void
{
    if (!is_dir($dir)) {
        return;
    }
    $it = new RecursiveIteratorIterator(
        new RecursiveDirectoryIterator($dir, FilesystemIterator::SKIP_DOTS),
        RecursiveIteratorIterator::CHILD_FIRST
    );
    foreach ($it as $file) {
        $file->isDir() ? rmdir($file->getPathname()) : unlink($file->getPathname());
    }
    rmdir($dir);
}

function writeTree(string $tmp, string $m4Source): void
{
    mkdir("{$tmp}/src", 0755, true);
    file_put_contents("{$tmp}/src/ns-value.h", "/* marshalling */\n");
    file_put_contents("{$tmp}/src/ns-bridge.h", "/* bridge */\n");
    file_put_contents("{$tmp}/src/ns-bridge.m", "/* bridge impl */\n");
    file_put_contents("{$tmp}/src/ns-extra.m", "/* extra impl */\n");
    file_put_contents("{$tmp}/config.json", json_encode([
        'namespace' => 'appkit',
        'name' => 'appkit',
        'extra-sources' => ['src/ns-bridge.m', 'src/ns-extra.m'],
        'extra-libs' => '-framework Foundation -framework AppKit -framework QuartzCore',
        'extra-cflags' => '-fobjc-arc -Wno-deprecated-declarations',
    ], JSON_PRETTY_PRINT | JSON_UNESCAPED_SLASHES) . "\n");

    $stub = <<<'SH'
#!/bin/bash
set -euo pipefail
if [ "${1:-}" != "generate" ]; then
    echo "stub-zephir: expected generate" >&2
    exit 1
fi
mkdir -p ext
cp "$STUB_M4" ext/config.m4
SH;
    file_put_contents("{$tmp}/stub-zephir", $stub);
    chmod("{$tmp}/stub-zephir", 0755);
    file_put_contents("{$tmp}/generated.m4", $m4Source);
}

function runPrepare(string $tmp): array
{
    $cmd = sprintf(
        'STUB_M4=%s APPKIT_ROOT=%s ZEPHIR_BIN=%s bash %s 2>&1',
        escapeshellarg($tmp . '/generated.m4'),
        escapeshellarg($tmp),
        escapeshellarg($tmp . '/stub-zephir'),
        escapeshellarg($GLOBALS['prepare'])
    );
    $output = [];
    exec($cmd, $output, $code);

    return ['code' => $code, 'text' => implode("\n", $output)];
}

function assertContains(string $haystack, string $needle, string $label, array &$failures): void
{
    if (!str_contains($haystack, $needle)) {
        $failures[] = "{$label}: missing " . json_encode($needle);
    }
}

function assertNotContains(string $haystack, string $needle, string $label, array &$failures): void
{
    if (str_contains($haystack, $needle)) {
        $failures[] = "{$label}: unexpectedly contains " . json_encode($needle);
    }
}

if (!is_file($prepare) || !is_file($fixtureM4)) {
    fwrite(STDERR, "prepare-ext-guard: missing prepare-ext.sh or fixture config.m4\n");
    exit(1);
}

$good = sys_get_temp_dir() . '/appkit-prepare-ext-good-' . getmypid();
$bad = sys_get_temp_dir() . '/appkit-prepare-ext-bad-' . getmypid();
rrmdir($good);
rrmdir($bad);

try {
    writeTree($good, (string) file_get_contents($fixtureM4));
    $result = runPrepare($good);

    if ($result['code'] !== 0) {
        $failures[] = "good tree: prepare-ext exited {$result['code']}:\n{$result['text']}";
    }
    if (!str_contains($result['text'], 'PREPARE_EXT_OK')) {
        $failures[] = "good tree: missing PREPARE_EXT_OK\n{$result['text']}";
    }
    if (!str_contains($result['text'], 'PATCHES_OK')) {
        $failures[] = "good tree: missing PATCHES_OK\n{$result['text']}";
    }

    $m4 = is_file("{$good}/ext/config.m4") ? (string) file_get_contents("{$good}/ext/config.m4") : '';
    $frag = is_file("{$good}/ext/Makefile.frag") ? (string) file_get_contents("{$good}/ext/Makefile.frag") : '';

    if ($m4 === '') {
        $failures[] = 'good tree: ext/config.m4 was not written';
    }
    if ($frag === '') {
        $failures[] = 'good tree: ext/Makefile.frag was not written';
    }

    if (preg_match('/^[ \t]*appkit_sources="([^"]*)"/m', $m4, $srcMatch)) {
        if (preg_match('/\.m\b/', $srcMatch[1])) {
            $failures[] = 'good tree: appkit_sources still lists a .m file';
        }
        if (!str_contains($srcMatch[1], 'appkit/bridge/bridge.zep.c')) {
            $failures[] = 'good tree: stripped a .zep.c along with the .m files';
        }
    } else {
        $failures[] = 'good tree: appkit_sources assignment missing after patch';
    }

    assertContains($m4, 'src/ns-bridge.lo', 'good tree shared_objects', $failures);
    assertContains($m4, 'src/ns-extra.lo', 'good tree shared_objects', $failures);
    assertContains($m4, 'PHP_ADD_BUILD_DIR([$ext_builddir/src])', 'good tree build-dir', $failures);
    if (!preg_match('/^[ \t]*PHP_ADD_MAKEFILE_FRAGMENT\b/m', $m4)) {
        $failures[] = 'good tree: PHP_ADD_MAKEFILE_FRAGMENT missing';
    }
    assertNotContains($m4, 'PHP_EVAL_LIBLINE(-framework', 'good tree eval-libline', $failures);
    assertContains(
        $m4,
        'APPKIT_SHARED_LIBADD="$APPKIT_SHARED_LIBADD -framework Foundation -framework AppKit -framework QuartzCore"',
        'good tree libadd',
        $failures
    );

    assertContains($frag, 'src/ns-bridge.lo:', 'good tree Makefile.frag', $failures);
    assertContains($frag, 'src/ns-extra.lo:', 'good tree Makefile.frag', $failures);
    if (!preg_match('/^\t\$\(LIBTOOL\)/m', $frag)) {
        $failures[] = 'good tree: Makefile.frag is missing a tab-indented libtool recipe';
    }

    if (!is_file("{$good}/ext/src/ns-bridge.m") || !is_file("{$good}/ext/src/ns-value.h")) {
        $failures[] = 'good tree: src/ was not staged into ext/src/';
    }

    $emptyLibs = preg_replace(
        '/if ! test "x-framework.*?fi\n/s',
        "if ! test \"x\" = \"x\"; then\n\t\tPHP_EVAL_LIBLINE(, APPKIT_SHARED_LIBADD)\n\tfi\n",
        (string) file_get_contents($fixtureM4)
    );
    if (!is_string($emptyLibs) || str_contains($emptyLibs, '-framework')) {
        $failures[] = 'negative fixture still contains -framework after rewrite';
    } else {
        writeTree($bad, $emptyLibs);
        $badResult = runPrepare($bad);
        if ($badResult['code'] === 0) {
            $failures[] = "negative tree: prepare-ext accepted a config.m4 with no -framework flags:\n{$badResult['text']}";
        }
        if (str_contains($badResult['text'], 'PREPARE_EXT_OK')) {
            $failures[] = 'negative tree: printed PREPARE_EXT_OK';
        }
        if (!str_contains($badResult['text'], 'patch-config-m4:')) {
            $failures[] = "negative tree: expected patch-config-m4 diagnostic:\n{$badResult['text']}";
        }
    }
} finally {
    rrmdir($good);
    rrmdir($bad);
}

if ($failures !== []) {
    foreach ($failures as $f) {
        fwrite(STDERR, "prepare-ext-guard: {$f}\n");
    }
    exit(1);
}

echo "PREPARE_EXT_GUARD_OK\n";
