<?php

declare(strict_types=1);

/*
 * The support list: every method and property accessor that the SDK's AppKit headers declare,
 * marked bound when a stub declares the PHP method its naming rule gives (selector parts joined).
 *
 *   php84 scripts/support.php           writes SUPPORT.md and the README badge
 *   php84 scripts/support.php --check   exits 1 when either differs (the date is not compared)
 *
 * The headers are read through clang's AST dump of #import <AppKit/AppKit.h>. A member is an ObjC
 * method, or the getter and (readwrite) setter of a property, of a class or of a category on any
 * class, declared in an AppKit.framework header and not deprecated or unavailable on macOS.
 * Protocol methods are not members: the app implements them, reached through ObjCDelegate.
 */

const SUPPORT_LABEL = 'AppKit API';
const SUPPORT_FRAMEWORK = '/AppKit.framework/Headers/';

/**
 * @return array<string, list<string>> class => sorted keys, -[Class sel] / +[Class sel]
 */
function support_counted(string $astFile): array
{
    $counted = [];
    foreach (support_owners($astFile) as $owner) {
        if ($owner['class'] === null || $owner['deprecated']) {
            continue;
        }
        $hidden = [];
        foreach ($owner['properties'] as $property) {
            if ($property['deprecated']) {
                $hidden[$property['getter']] = true;
                $hidden[$property['setter']] = true;
            }
        }
        foreach ($owner['methods'] as $method) {
            if (! $method['appkit'] || $method['deprecated'] || isset($hidden[$method['selector']])) {
                continue;
            }
            $counted[$owner['class']][] = "{$method['sign']}[{$owner['class']} {$method['selector']}]";
        }
    }
    foreach ($counted as &$keys) {
        $keys = array_values(array_unique($keys));
        sort($keys, SORT_STRING);
    }
    unset($keys);
    ksort($counted, SORT_STRING);

    return $counted;
}

/** @return array<string, string> class => superclass, from the interfaces' `super` lines */
function support_parents(string $astFile): array
{
    $parents = [];
    foreach (support_owners($astFile) as $owner) {
        if ($owner['class'] !== null && $owner['super'] !== null) {
            $parents[$owner['class']] = $owner['super'];
        }
    }
    ksort($parents, SORT_STRING);

    return $parents;
}

/**
 * The top-level interfaces, categories and protocols of a text AST dump, each with its methods and
 * properties. A location without a path is in the file last printed with one, as clang prints them.
 * @return list<array{class: ?string, super: ?string, deprecated: bool, methods: list<array{sign: string, selector: string, appkit: bool, deprecated: bool}>, properties: list<array{getter: string, setter: string, deprecated: bool}>}>
 */
function support_owners(string $astFile): array
{
    $owners = [];
    $owner = null;
    $item = null; // the method or property the deeper lines belong to: ['methods'|'properties', index]
    $file = '';
    $handle = fopen($astFile, 'r');
    if ($handle === false) {
        throw new RuntimeException("Cannot read {$astFile}.");
    }
    while (($line = fgets($handle)) !== false) {
        $line = rtrim($line, "\n");
        if (preg_match('#<(/[^:<>]+):\d+:\d+#', $line, $m) === 1) {
            $file = $m[1];
        }
        if (preg_match('/^[|`]-(\w+)/', $line, $m) === 1) {
            if ($owner !== null) {
                $owners[] = $owner;
            }
            $owner = null;
            $item = null;
            $name = preg_match('/ (\w+)$/', $line, $n) === 1 ? $n[1] : null;
            $owner = match ($m[1]) {
                'ObjCInterfaceDecl' => ['class' => $name, 'super' => null, 'deprecated' => false, 'methods' => [], 'properties' => []],
                'ObjCCategoryDecl' => ['class' => '?', 'super' => null, 'deprecated' => false, 'methods' => [], 'properties' => []],
                default => null,
            };
            continue;
        }
        if ($owner === null) {
            continue;
        }
        if (preg_match('/^[| ] [|`]-(.*)$/', $line, $m) === 1) {
            $item = null;
            $body = $m[1];
            if (preg_match("/^super ObjCInterface 0x[0-9a-f]+ '(\\w+)'/", $body, $s) === 1) {
                $owner['super'] = $s[1];
            } elseif (preg_match("/^ObjCInterface 0x[0-9a-f]+ '(\\w+)'/", $body, $s) === 1 && $owner['class'] === '?') {
                $owner['class'] = $s[1];
            } elseif (preg_match("/^ObjCMethodDecl .*? ([-+]) ([\\w:]+) '/", $body, $s) === 1) {
                $owner['methods'][] = ['sign' => $s[1], 'selector' => $s[2], 'appkit' => str_contains($file, SUPPORT_FRAMEWORK), 'deprecated' => false];
                $item = ['methods', count($owner['methods']) - 1];
            } elseif (preg_match("/^ObjCPropertyDecl .*? col:\\d+ (\\w+) '/", $body, $s) === 1) {
                $owner['properties'][] = ['getter' => $s[1], 'setter' => 'set' . ucfirst($s[1]) . ':', 'deprecated' => false];
                $item = ['properties', count($owner['properties']) - 1];
            } elseif (support_unavailable($body)) {
                $owner['deprecated'] = true;
            }
            continue;
        }
        if ($item !== null && preg_match('/^[| ] [| ] [|`]-(.*)$/', $line, $m) === 1) {
            $body = $m[1];
            if (support_unavailable($body)) {
                $owner[$item[0]][$item[1]]['deprecated'] = true;
            } elseif ($item[0] === 'properties' && preg_match("/^(getter|setter) ObjCMethod 0x[0-9a-f]+ '([\\w:]+)'/", $body, $s) === 1) {
                $owner['properties'][$item[1]][$s[1]] = $s[2];
            }
        }
    }
    fclose($handle);
    if ($owner !== null) {
        $owners[] = $owner;
    }

    return $owners;
}

/** An attribute line that takes a declaration away on macOS: deprecated, obsoleted or unavailable. */
function support_unavailable(string $body): bool
{
    if (str_starts_with($body, 'DeprecatedAttr') || str_starts_with($body, 'UnavailableAttr')) {
        return true;
    }
    if (preg_match('/^AvailabilityAttr .*? macos (\S+) (\S+) (\S+)( Unavailable)?/', $body, $m) !== 1) {
        return false;
    }

    return $m[2] !== '0' || $m[3] !== '0' || isset($m[4]) && $m[4] !== '';
}

/**
 * A member as its binding: -[NSTabView insertTabViewItem:atIndex:] => ['NSTabView', 'insertTabViewItemAtIndex'].
 * @return array{string, string}
 */
function support_php_name(string $class, string $key): array
{
    preg_match('/^[-+]\[\w+ ([\w:]+)\]$/', $key, $m);
    $parts = array_values(array_filter(explode(':', $m[1]), 'strlen'));

    return [$class, $parts[0] . implode('', array_map('ucfirst', array_slice($parts, 1)))];
}

/**
 * The PHP classes and functions the stubs declare.
 * @return array<string, array<string, true>> PHP class ('' for functions) => method names
 */
function support_bound(string $stubDir): array
{
    $bound = [];
    foreach (glob(rtrim($stubDir, '/') . '/*.stub.php') ?: [] as $file) {
        foreach (support_declared(file_get_contents($file)) as $class => $methods) {
            foreach ($methods as $method) {
                $bound[$class][$method] = true;
            }
        }
    }

    return $bound;
}

/**
 * The classes (with their namespace) and public methods, and the free functions, of one stub.
 * @return array<string, list<string>>
 */
function support_declared(string $source): array
{
    $tokens = token_get_all($source);
    $out = [];
    $namespace = '';
    $braced = false;
    $depth = 0;
    $class = null;
    $classDepth = -1;
    $next = static function (int $i) use ($tokens): int {
        for ($i++; $i < count($tokens); $i++) {
            if (! is_array($tokens[$i]) || ! in_array($tokens[$i][0], [T_WHITESPACE, T_COMMENT, T_DOC_COMMENT], true)) {
                return $i;
            }
        }

        return $i;
    };
    for ($i = 0, $n = count($tokens); $i < $n; $i++) {
        $token = $tokens[$i];
        if ($token === '{' || (is_array($token) && in_array($token[0], [T_CURLY_OPEN, T_DOLLAR_OPEN_CURLY_BRACES], true))) {
            $depth++;
            continue;
        }
        if ($token === '}') {
            if ($depth === 0 && $braced) {
                $braced = false;
                $namespace = '';
                continue;
            }
            $depth--;
            if ($class !== null && $depth === $classDepth) {
                $class = null;
            }
            continue;
        }
        if (! is_array($token)) {
            continue;
        }
        if ($token[0] === T_NAMESPACE) {
            $j = $next($i);
            $namespace = $tokens[$j] === '{' ? '' : $tokens[$j][1];
            $k = $tokens[$j] === '{' ? $j : $next($j);
            if ($tokens[$k] === '{') {
                $braced = true;
                $i = $k;
            }
            continue;
        }
        if (in_array($token[0], [T_CLASS, T_INTERFACE, T_TRAIT, T_ENUM], true)) {
            $j = $next($i);
            if (is_array($tokens[$j]) && $tokens[$j][0] === T_STRING) {
                $class = ltrim("{$namespace}\\{$tokens[$j][1]}", '\\');
                $classDepth = $depth;
                $out[$class] ??= [];
                for ($i = $j; $tokens[$i] !== '{'; $i++) {
                }
                $depth++;
            }
            continue;
        }
        if ($token[0] === T_FUNCTION) {
            $j = $next($i);
            // A method name may be a keyword (`new`); a closure has `(` here.
            if (! is_array($tokens[$j]) || preg_match('/^\w+$/', $tokens[$j][1]) !== 1) {
                continue;
            }
            if ($class === null) {
                $out[''][] = ltrim("{$namespace}\\{$tokens[$j][1]}", '\\');
            } elseif ($depth === $classDepth + 1 && ! support_hidden($tokens, $i)) {
                $out[$class][] = $tokens[$j][1];
            }
        }
    }

    return array_map(static fn (array $methods): array => array_values(array_unique($methods)), $out);
}

/** A private or protected method: the modifiers before `function`. */
function support_hidden(array $tokens, int $i): bool
{
    for ($k = $i - 1; $k >= 0; $k--) {
        $t = $tokens[$k];
        if (is_array($t) && in_array($t[0], [T_WHITESPACE, T_COMMENT, T_DOC_COMMENT, T_STATIC, T_ABSTRACT, T_FINAL, T_PUBLIC], true)) {
            continue;
        }

        return is_array($t) && in_array($t[0], [T_PRIVATE, T_PROTECTED], true);
    }

    return false;
}

/**
 * @param array<string, list<string>> $counted
 * @param array<string, array<string, true>> $bound
 * @param array<string, string> $parents class => superclass, for a method a stub declares on a subclass
 */
function support_render(array $counted, array $bound, string $library, string $date, array $parents = []): string
{
    // class => lowercased PHP method => key: PHP method names are case-insensitive.
    $byMethod = [];
    foreach ($counted as $class => $keys) {
        foreach ($keys as $key) {
            $byMethod[$class][strtolower(support_php_name($class, $key)[1])] = $key;
        }
    }
    $boundKeys = [];
    $outside = [];
    foreach ($bound as $class => $methods) {
        foreach (array_keys($methods) as $method) {
            $found = null;
            for ($owner = $class, $seen = 0; $class !== '' && $owner !== null && $seen < 32; $owner = $parents[$owner] ?? null, $seen++) {
                if (isset($byMethod[$owner][strtolower($method)])) {
                    $found = $byMethod[$owner][strtolower($method)];
                    break;
                }
            }
            if ($found === null) {
                $outside[] = '- `' . ($class === '' ? $method : "{$class}::{$method}") . '`';
            } else {
                $boundKeys[$found] = true;
            }
        }
    }
    sort($outside, SORT_STRING);

    $sections = [];
    $hits = 0;
    $total = 0;
    foreach ($counted as $class => $keys) {
        $lines = [];
        $classHits = 0;
        foreach ($keys as $key) {
            $isBound = isset($boundKeys[$key]);
            $classHits += $isBound ? 1 : 0;
            $lines[] = '- [' . ($isBound ? 'x' : ' ') . "] `{$key}`";
        }
        $hits += $classHits;
        $total += count($keys);
        $sections[] = "## {$class} ({$classHits} / " . count($keys) . ")\n\n" . implode("\n", $lines) . "\n";
    }

    return '# ' . SUPPORT_LABEL . " support\n\n"
        . support_summary($library, $hits, $total, $date) . "\n\n"
        . "Generated by `php84 scripts/support.php` from the SDK's AppKit headers and `stubs/`. One line per member: `[x]` bound, `[ ]` not bound.\n\n"
        . implode("\n", $sections)
        . "\n## Bound outside the measured library\n\n"
        . "Bindings of other frameworks (Foundation, Core Foundation, Core Graphics, QuartzCore, AVKit, IOKit, GameController, OpenGL), of deprecated members, and the extension's own glue; none of them is counted.\n\n"
        . (count($outside) === 0 ? "None.\n" : implode("\n", $outside) . "\n");
}

function support_summary(string $library, int $hits, int $total, string $date): string
{
    return sprintf('%s — %d / %d members bound (%.1f%%) — %s', $library, $hits, $total, $total === 0 ? 0 : 100 * $hits / $total, $date);
}

function support_badge(string $label, int $bound, int $total): string
{
    $percent = sprintf('%.1f', $total === 0 ? 0 : 100 * $bound / $total);
    $message = rawurlencode("{$percent}% ({$bound}/{$total})");
    $message = str_replace('%20', '_', $message);

    return "[![{$label}](https://img.shields.io/badge/" . str_replace(' ', '_', $label) . "-{$message}-blue?style=flat-square)](SUPPORT.md)";
}

/** Two support lists alike but for the date of their summary line. */
function support_same(string $a, string $b): bool
{
    $undated = static fn (string $s): string => preg_replace('/ — \d{4}-\d{2}-\d{2}$/m', '', $s);

    return $undated($a) === $undated($b);
}

/** The README with the badge line set: replaced where it is, else after the CI badge. */
function support_readme(string $readme, string $badge): string
{
    $lines = explode("\n", $readme);
    foreach ($lines as $i => $line) {
        if (str_starts_with($line, '[![' . SUPPORT_LABEL . ']')) {
            $lines[$i] = $badge;

            return implode("\n", $lines);
        }
    }
    foreach ($lines as $i => $line) {
        if (str_starts_with($line, '[![CI]')) {
            array_splice($lines, $i + 1, 0, [$badge]);

            return implode("\n", $lines);
        }
    }
    throw new RuntimeException('The README has no CI badge line to put the API badge after.');
}

/** @return array{int, int} bound and total, read back from a support list's summary line */
function support_totals(string $md): array
{
    preg_match('/ (\d+) \/ (\d+) members bound/', $md, $m);

    return [(int) $m[1], (int) $m[2]];
}

function support_main(array $argv): int
{
    $root = dirname(__DIR__);
    $sdk = trim((string) shell_exec('xcrun --show-sdk-path'));
    $version = trim((string) shell_exec('xcrun --show-sdk-version'));
    $source = tempnam(sys_get_temp_dir(), 'support') . '.m';
    $ast = "{$source}.ast";
    file_put_contents($source, "#import <AppKit/AppKit.h>\n");
    exec('/usr/bin/clang -x objective-c -fsyntax-only -isysroot ' . escapeshellarg($sdk) . ' -Xclang -ast-dump ' . escapeshellarg($source) . ' > ' . escapeshellarg($ast) . ' 2>/dev/null', $_, $status);
    try {
        if ($status !== 0) {
            fwrite(STDERR, "clang could not read the AppKit headers.\n");

            return 2;
        }
        $md = support_render(support_counted($ast), support_bound("{$root}/stubs"), "AppKit, macOS SDK {$version}", date('Y-m-d'), support_parents($ast));
    } finally {
        @unlink($source);
        @unlink($ast);
        @unlink(substr($source, 0, -2));
    }
    [$hits, $total] = support_totals($md);
    $readme = support_readme(file_get_contents("{$root}/README.md"), support_badge(SUPPORT_LABEL, $hits, $total));

    if (in_array('--check', $argv, true)) {
        $current = is_file("{$root}/SUPPORT.md") ? file_get_contents("{$root}/SUPPORT.md") : '';
        $same = support_same($current, $md) && $readme === file_get_contents("{$root}/README.md");
        fwrite(STDOUT, $same ? "SUPPORT.md and the badge are current.\n" : "SUPPORT.md or the badge differs: run php84 scripts/support.php.\n");

        return $same ? 0 : 1;
    }
    file_put_contents("{$root}/SUPPORT.md", $md);
    file_put_contents("{$root}/README.md", $readme);
    fwrite(STDOUT, "{$hits} / {$total}\n");

    return 0;
}

if (PHP_SAPI === 'cli' && isset($argv[0]) && realpath($argv[0]) === __FILE__) {
    exit(support_main($argv));
}
