#!/usr/bin/env bash
#
# Slice-zero build oracle: run the whole pipeline from generated sources to a
# loadable extension. Prints BUILD_LOAD_OK only when every stage succeeds and
# the freshly built .so loads with all nine classes present.

set -Eeuo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
cd "$ROOT_DIR"

php scripts/gen-zep.php > /dev/null
php scripts/check-parity.php | grep -q PARITY_OK
bash scripts/prepare-ext.sh > /dev/null

cd ext
phpize > /dev/null
./configure --enable-appkit > /dev/null
make -j8 > /dev/null 2>&1

SO="$ROOT_DIR/ext/modules/appkit.so"
[ -f "$SO" ] || { echo "no appkit.so produced" >&2; exit 1; }

php -n -d "extension=${SO}" -r '
    $classes = [
        "AppKit\\Bridge\\Bridge",
        "AppKit\\NS\\NSApplication\\NSApplication",
        "AppKit\\NS\\NSButton\\NSButton",
        "AppKit\\NS\\NSControl\\NSControl",
        "AppKit\\NS\\NSMenu\\NSMenu",
        "AppKit\\NS\\NSMenuItem\\NSMenuItem",
        "AppKit\\NS\\NSResponder\\NSResponder",
        "AppKit\\NS\\NSView\\NSView",
        "AppKit\\NS\\NSWindow\\NSWindow",
    ];
    if (!extension_loaded("appkit")) { fwrite(STDERR, "appkit not loaded\n"); exit(1); }
    foreach ($classes as $c) {
        if (!class_exists($c)) { fwrite(STDERR, "missing {$c}\n"); exit(1); }
    }
    echo "BUILD_LOAD_OK\n";
'
