---
type: Trap
title: Copied appkit.so SIGKILL (Code Signature Invalid)
description: sudo cp of a linker-signed adhoc .so breaks the seal; dyld kills PHP.
tags: [appkit, trap, codesign, herd]
status: draft
generated: { by: cursor-agent/grok-4.5, at: "2026-08-15T00:10:00Z" }
---

# Trap

After `cp` into Herd's extension dir, `php -m` dies with SIGKILL. Crash report: `CODESIGNING` / `Invalid Page`.

# Why

The just-built `.so` is linker-signed adhoc. Copying it invalidates that seal. Herd's signed `php84` then refuses the page.

# Fix

After install:

```bash
xattr -cr /path/to/appkit.so
codesign --force --sign - /path/to/appkit.so
```

`install-macos.sh` does this after `cp`.
