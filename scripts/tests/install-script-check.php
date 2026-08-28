#!/usr/bin/env php
<?php
/*
 * Structural check of install-macos.sh / install-macos-herd.sh against the
 * toolchain spec. Does not compile or load the extension.
 *
 * install-macos.sh must run prepare-ext, phpize, configure --enable-appkit,
 * make, cp, xattr -cr, codesign --force --sign -, write 30-appkit.ini, and
 * verify with php -m plus php --ri appkit (version 0.9.0).
 *
 * install-macos-herd.sh must only put Herd's PHP first on PATH and exec
 * install-macos.sh — it must not duplicate the build.
 *
 * Prints INSTALL_SCRIPT_OK only when every assertion passes.
 */

declare(strict_types=1);

$root = dirname(__DIR__, 2);
$install = $root . '/install-macos.sh';
$herd = $root . '/install-macos-herd.sh';
$failures = [];

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

if (!is_file($install) || !is_file($herd)) {
    fwrite(STDERR, "install-script-check: missing install-macos.sh or install-macos-herd.sh\n");
    exit(1);
}

$macos = (string) file_get_contents($install);
$herdSrc = (string) file_get_contents($herd);

assertContains($macos, 'scripts/prepare-ext.sh', 'install-macos', $failures);
assertContains($macos, 'phpize', 'install-macos', $failures);
assertContains($macos, '--enable-appkit', 'install-macos', $failures);
assertContains($macos, 'make ', 'install-macos', $failures);
assertContains($macos, 'xattr -cr', 'install-macos', $failures);
assertContains($macos, 'codesign --force --sign -', 'install-macos', $failures);
assertContains($macos, '30-${EXTENSION_NAME}.ini', 'install-macos', $failures);
assertContains($macos, 'php -m', 'install-macos', $failures);
assertContains($macos, '--ri appkit', 'install-macos', $failures);
assertContains($macos, '0.9.0', 'install-macos', $failures);

assertNotContains($macos, 'python3', 'install-macos', $failures);
assertNotContains($macos, 'proof_appkit.php', 'install-macos', $failures);

assertContains($herdSrc, 'herd which-php', 'install-macos-herd', $failures);
assertContains($herdSrc, 'export PATH=', 'install-macos-herd', $failures);
assertContains($herdSrc, 'exec bash "${SCRIPT_DIR}/install-macos.sh"', 'install-macos-herd', $failures);
assertNotContains($herdSrc, 'phpize', 'install-macos-herd', $failures);
assertNotContains($herdSrc, 'prepare-ext.sh', 'install-macos-herd', $failures);
assertNotContains($herdSrc, 'codesign', 'install-macos-herd', $failures);
assertNotContains($herdSrc, 'make ', 'install-macos-herd', $failures);

foreach ([$install, $herd] as $script) {
    if (!is_executable($script)) {
        $failures[] = basename($script) . ' is not executable';
    }
}

$prepare = $root . '/scripts/prepare-ext.sh';
if (!is_file($prepare)) {
    $failures[] = 'scripts/prepare-ext.sh is missing';
} elseif (!is_executable($prepare)) {
    $failures[] = 'scripts/prepare-ext.sh is not executable';
}

if ($failures !== []) {
    foreach ($failures as $f) {
        fwrite(STDERR, "install-script-check: {$f}\n");
    }
    exit(1);
}

echo "INSTALL_SCRIPT_OK\n";
