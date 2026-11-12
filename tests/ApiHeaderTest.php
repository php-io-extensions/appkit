<?php

declare(strict_types=1);

it('installs the headers an extension built on appkit includes', function () {
    $include = trim((string) shell_exec(escapeshellarg(dirname(PHP_BINARY).'/php-config').' --include-dir'));

    foreach (['php_appkit.h', 'php_appkit_api.h', 'src/runtime.h', 'src/controls.h'] as $header) {
        expect(is_file("$include/ext/appkit/$header"))->toBeTrue("$include/ext/appkit/$header");
    }
});
