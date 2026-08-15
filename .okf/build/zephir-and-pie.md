---
type: Build
title: Zephir + PIE install
description: prepare-ext, install-macos*.sh, PIE, make -j1
resource: /scripts/prepare-ext.sh
tags: [appkit, build, pie]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T00:10:00Z" }
sources:
  - id: prepare
    resource: /scripts/prepare-ext.sh
    title: prepare-ext.sh
  - id: install
    resource: /install-macos.sh
    title: install-macos.sh
  - id: composer
    resource: /composer.json
    title: composer.json
---

# Maintainer generate

```bash
bash scripts/prepare-ext.sh
```

Runs `zephir generate`, syncs `src/*.{h,m}` → `ext/src/`, copies `Makefile.frag`, patches `config.m4`, runs Zephir register fixup, strips phpize junk.[^prepare]

Local `php-io-extensions-dev` may run generate. Do **not** run `install-macos*.sh` against the ship tree — Angel installs from his copy.

# Install

```bash
bash install-macos.sh
# or
bash install-macos-herd.sh
```

Darwin gate, `./configure --enable-appkit`, `make -j1`, adhoc codesign after `cp`, whitespace-safe temp staging.[^install]

# PIE

```bash
pie install php-io-extensions/appkit
```

`composer.json`: `build-path: ext`, `os-families: ["darwin"]`, `--enable-appkit`.[^composer]

[^prepare]: prepare-ext.sh
[^install]: install-macos.sh
[^composer]: composer.json
