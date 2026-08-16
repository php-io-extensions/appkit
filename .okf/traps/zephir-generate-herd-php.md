---
type: Trap
title: Zephir generate segfaults under Herd PHP ini
description: php loads appkit/uart from ini; zephir generate must use php -n plus zephir_parser
resource: /scripts/prepare-ext.sh
tags: [appkit, trap, zephir]
status: draft
generated: { by: cursor-agent, at: "2026-08-15T16:00:00Z" }
sources:
  - id: prepare
    resource: /scripts/prepare-ext.sh
    title: prepare-ext.sh
---

# Trap

Herd PHP 8.4 `php.ini` loads `appkit.so` / missing `uart.so`. Invoking `zephir generate` with that CLI **segfaults**.

`scripts/prepare-ext.sh` runs `php -n -d extension=/path/to/zephir_parser.so zephir generate`.

Zephir C blocks close with `}%` not `%}`. Parameter name `object` is reserved.
