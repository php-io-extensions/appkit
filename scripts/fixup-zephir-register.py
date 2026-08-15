#!/usr/bin/env python3
"""Fix Zephir 0.19 ZEPHIR_REGISTER_CLASS issues for AppKit\\NS\\* classes.

1. Zephir 0.19 truncates nested segment NS → N in the namespace token.
2. Do NOT gtk-style-prefix the register shortname with appkit_ — Zephir already
   emits symbols as appkit_ns_* and ZEPHIR_REGISTER_CLASS macro prepends
   lower_ns (appkit). Prefixed shortnames become appkit_appkit_ns_*_ce and fail
   to compile (unlike Gtk\\GTK\\* where the CE is intentionally gtk_gtk_*).
"""

from __future__ import annotations

import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
EXT = ROOT / "ext"

# Zephir 0.19 drops the last char of nested segments (NS → N).
# Expand FIXES as more AppKit\\NS\\* classes are generated.
FIXES = {
    "AppKit\\N\\NSApplication\\NSApplication": "AppKit\\NS\\NSApplication\\NSApplication",
    "AppKit\\N\\NSWindow\\NSWindow": "AppKit\\NS\\NSWindow\\NSWindow",
    "AppKit\\N\\NSView\\NSView": "AppKit\\NS\\NSView\\NSView",
    "AppKit\\N\\NSMenu\\NSMenu": "AppKit\\NS\\NSMenu\\NSMenu",
    "AppKit\\N\\NSMenuItem\\NSMenuItem": "AppKit\\NS\\NSMenuItem\\NSMenuItem",
    "AppKit\\N\\NSButton\\NSButton": "AppKit\\NS\\NSButton\\NSButton",
    "AppKit\\N\\NSEvent\\NSEvent": "AppKit\\NS\\NSEvent\\NSEvent",
    "AppKit\\N": "AppKit\\NS",
}


def fix_file(path: Path) -> int:
    text = path.read_text(encoding="utf-8")
    original = text
    for bad, good in sorted(FIXES.items(), key=lambda item: len(item[0]), reverse=True):
        text = text.replace(bad, good)
    text = re.sub(r"\bAppKit_N_", "AppKit_NS_", text)
    # Undo mistaken appkit_ prefix on the 4th ZEPHIR_REGISTER_CLASS arg.
    # Correct form matches metal: ZEPHIR_REGISTER_CLASS(..., appkit, ns_..., appkit_ns_..._method_entry, ...)
    # Wrong form (gtk copy-paste): ..., appkit, appkit_ns_..., appkit_ns_..._method_entry, ...
    text = re.sub(
        r"(ZEPHIR_REGISTER_CLASS\([^,]+,\s*[^,]+,\s*appkit,\s*)appkit_(ns_[a-z0-9_]+)(\s*,)",
        r"\1\2\3",
        text,
    )
    if text != original:
        path.write_text(text, encoding="utf-8")
        return 1
    return 0


def main() -> None:
    if not EXT.exists():
        raise SystemExit("ext/ missing — run zephir generate first")
    changed = 0
    for path in EXT.rglob("*.c"):
        changed += fix_file(path)
    for path in EXT.rglob("*.h"):
        changed += fix_file(path)
    print(f"fixup-zephir-register: touched {changed} files")


if __name__ == "__main__":
    main()
