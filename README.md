# php-appkit

[![PHP](https://img.shields.io/badge/php-%E2%89%A5%208.2-777bb4?logo=php&logoColor=white)](https://www.php.net)
[![AppKit](https://img.shields.io/badge/AppKit-macOS%20only-black)](https://developer.apple.com/documentation/appkit)
[![Built with Zephir](https://img.shields.io/badge/built%20with-Zephir-ff6a00)](https://zephir-lang.com/)
[![Platform](https://img.shields.io/badge/platform-macOS-lightgrey)](#requirements)
[![License: MIT](https://img.shields.io/badge/license-MIT-green)](#license)

> PHP extension for Apple AppKit — built with [Zephir](https://zephir-lang.com/), installable via [PHP PIE](https://github.com/php/pie).

`appkit` is a **standalone macOS-only** binding to AppKit.framework. It is not
Metal, not a widget-kit abstraction, and not GameController. Each Zephir call
maps to one C ABI entry → one ObjC call. Opaque native handles are PHP `int`
values (`0` = null/failure).

PHP API is namespaced under `AppKit\NS\…` (Apple type names), e.g.
`AppKit\NS\NSWindow\NSWindow`.

Metal drawing / `CAMetalLayer` present lives in sibling
[`php-io-extensions/metal`](../metal). Hybrid demos load both extensions and
pass borrowed layer/view pointers across the `.so` boundary — never a shared C
box struct.

---

## Requirements

| Component            | Minimum version | Notes                                      |
| -------------------- | --------------- | ------------------------------------------ |
| PHP                  | 8.2             | ZTS and NTS                                |
| OS                   | macOS           | arm64 + x86_64 (PIE `os-families: darwin`) |
| Frameworks           | system          | Foundation, AppKit, CoreGraphics           |
| Compiler             | Apple Clang     | Objective-C ARC                            |
| `php-dev` / `phpize` | matches PHP     | Required for non-PIE builds                |

---

## Installation

### Via PHP PIE (recommended)

```bash
pie install php-io-extensions/appkit
```

macOS only — configure fails on other platforms.

### Platform installer

```bash
bash install-macos.sh
```

Laravel Herd:

```bash
bash install-macos-herd.sh
```

> Angel installs from a Finder copy so the ship tree's `ext/` stays Packagist-clean.
> Do not run `install-macos*.sh` against the ship tree.

### Manual build (maintainers)

```bash
bash scripts/prepare-ext.sh
cd ext && phpize && ./configure --enable-appkit && make -j1
php -n -d extension=modules/appkit.so --ri appkit
```

`scripts/prepare-ext.sh` regenerates Zephir C, syncs `src/` into `ext/src/`,
patches `config.m4`, installs `Makefile.frag` for `.m` sources, and strips
phpize junk so the committed `ext/` tree stays PIE-ready.

> Use `make -j1` (or the installer). Parallel make is fine for `.c` objects; the
> ObjC fragment is conservative.

---

## Quick start

```php
use AppKit\NS\NSApplication\NSApplication;
use AppKit\NS\NSWindow\NSWindow;
use AppKit\NS\NSView\NSView;
use AppKit\NS\NSButton\NSButton;
use AppKit\NS\NSMenu\NSMenu;

NSApplication::init();
NSMenu::installDefault('My App');

$window = NSWindow::create('AppKit', 800, 600);
$content = NSWindow::contentView($window);
$button = NSButton::create(20, 20, 120, 32);
NSButton::setTitle($button, 'Click');
NSView::addSubview($content, $button);
NSWindow::center($window);
NSWindow::show($window);

while (!NSWindow::shouldClose($window) && NSApplication::poll()) {
    if (NSButton::pollClick($button)) {
        // …
    }
}

NSButton::destroy($button);
NSWindow::destroy($window);
```

Demo (once examples land):

```bash
php -d extension=./ext/modules/appkit.so examples/proof_appkit.php
```

---

## API surface (0.1)

Scaffold target: AppKit types under `AppKit\NS\*`. C ABI prefix `ns_*`,
headers `src/ns-*.h`, ObjC `src/ns-*.m`. No PHP class constants — use backed
PHP Enums with FULLY UPPERCASE cases outside the extension.

| Area | Role |
| ---- | ---- |
| `NSApplication` | init / poll / quit |
| `NSWindow` / `NSView` | window + view tree |
| Widgets | `NSButton`, fields, layout, dialogs, chrome, … |
| Input | `NSEvent` / CoreGraphics keyboard+mouse (not GameController) |

---

## License

MIT — see [LICENSE](LICENSE).
