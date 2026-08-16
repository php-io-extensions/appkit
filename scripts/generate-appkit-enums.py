#!/usr/bin/env python3
"""Generate backed PHP enums from AppKit NS_ENUM / NS_OPTIONS into microscrap/appkit.

Enums are userland Composer classes, not part of ext-appkit. Existing hand-owned
files in microscrap/appkit/src/Enums are never overwritten.
"""

from __future__ import annotations

import os
import re
from pathlib import Path

SDK = Path(
    "/Library/Developer/CommandLineTools/SDKs/MacOSX15.4.sdk"
    "/System/Library/Frameworks/AppKit.framework/Headers"
)
MICROSCRAP = Path(
    os.environ.get(
        "MICROSCRAP_APPKIT",
        "/Users/angelgonzalez/Development/PHP/metal-dev/microscrap/appkit",
    )
)
OUT_DIR = MICROSCRAP / "src" / "Enums"

ENUM_RE = re.compile(
    r"typedef\s+NS_(?:ENUM|OPTIONS)\s*\(\s*([^,]+)\s*,\s*(\w+)\s*\)\s*\{(.*?)\}\s*"
    r"(?:[A-Z_][A-Z0-9_]*(?:\((?:[^()]|\([^()]*\))*\))?\s*)*;",
    re.S,
)
CASE_RE = re.compile(
    r"(NS\w+)\s*(?:API_[A-Z_]+(?:\([^;]*?\))?)?\s*(?:=\s*([^,]+))?\s*,",
    re.S,
)
COMMENT_RE = re.compile(r"/\*.*?\*/|//.*?$", re.S | re.M)


def php_class_name(enum_name: str) -> str:
    if enum_name.startswith("NS"):
        return enum_name[2:]
    return enum_name


def already_owned(php_class: str, out_dir: Path) -> bool:
    dest = out_dir / f"{php_class}.php"
    if dest.exists():
        text = dest.read_text(encoding="utf-8")
        if "Pass `::CASE->value`" not in text:
            return True
        return False
    for suffix, singular in (
        ("Options", "Option"),
        ("Actions", "Action"),
        ("Traits", "Trait"),
    ):
        if php_class.endswith(suffix):
            alt = php_class[: -len(suffix)] + singular
            alt_path = out_dir / f"{alt}.php"
            if alt_path.exists() and "Pass `::CASE->value`" not in alt_path.read_text(
                encoding="utf-8"
            ):
                return True
    return False


def to_case_name(enum_name: str, raw: str) -> str:
    name = raw
    if name.startswith(enum_name):
        name = name[len(enum_name) :]
    if name.startswith("NS"):
        name = name[2:]
    if not name:
        name = raw
    out: list[str] = []
    for i, ch in enumerate(name):
        prev = name[i - 1] if i else ""
        if ch.isupper() and i:
            nxt = name[i + 1] if i + 1 < len(name) else ""
            if prev.islower() or prev.isdigit() or (prev.isupper() and nxt.islower()):
                out.append("_")
        elif ch.isdigit() and i and prev.isalpha():
            out.append("_")
        out.append(ch)
    case = "".join(out).upper().strip("_")
    case = re.sub(r"_+", "_", case)
    if case and case[0].isdigit():
        case = "N_" + case
    return case or "UNSPECIFIED"


def parse_value(raw: str | None, auto: int, aliases: dict[str, int]) -> tuple[str, int]:
    if raw is None:
        return str(auto), auto + 1
    expr = COMMENT_RE.sub("", raw)
    expr = re.sub(r"API_[A-Z_]+(?:\([^)]*\))?", "", expr)
    expr = re.sub(r"\s+", " ", expr).strip()
    if re.fullmatch(r"-?\d+", expr):
        val = int(expr)
        return str(val), val + 1
    shift = re.fullmatch(r"1\s*<<\s*(\d+)", expr)
    if shift:
        val = 1 << int(shift.group(1))
        return str(val), auto + 1
    hexm = re.fullmatch(r"0x[0-9A-Fa-f]+UL?", expr, re.I)
    if hexm:
        val = int(re.split(r"[Uu]", expr)[0], 16)
        return str(val), auto + 1
    if expr in aliases:
        return str(aliases[expr]), auto + 1
    return str(auto), auto + 1


def php_enum(apple_name: str, php_class: str, backing: str, cases: list[tuple[str, str]]) -> str:
    lines = [
        "<?php",
        "",
        "namespace Microscrap\\Bindings\\AppKit\\Enums;",
        "",
        f"/** AppKit `{apple_name}` ({backing}). Pass `::CASE->value` into ns_* ints. */",
        f"enum {php_class}: int",
        "{",
    ]
    seen: set[str] = set()
    seen_values: set[str] = set()
    for case, value in cases:
        if case in seen or value in seen_values:
            continue
        seen.add(case)
        seen_values.add(value)
        lines.append(f"    case {case} = {value};")
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


def main() -> None:
    if not SDK.is_dir():
        raise SystemExit(f"missing SDK headers: {SDK}")
    if not OUT_DIR.is_dir():
        raise SystemExit(f"missing microscrap enums dir: {OUT_DIR}")

    enums: list[tuple[str, str, str, list[tuple[str, str]]]] = []
    for header in sorted(SDK.glob("*.h")):
        text = COMMENT_RE.sub("", header.read_text(errors="ignore"))
        for match in ENUM_RE.finditer(text):
            backing, name, body = match.group(1).strip(), match.group(2), match.group(3)
            auto = 0
            aliases: dict[str, int] = {}
            cases: list[tuple[str, str]] = []
            body = re.sub(
                r"API_[A-Z_]+(?:\((?:[^()]|\([^()]*\))*\))?",
                "",
                body,
            )
            body_norm = body.strip()
            if not body_norm.endswith(","):
                body_norm += ","
            for cm in CASE_RE.finditer(body_norm):
                raw = cm.group(1)
                if raw in {"NS_ENUM", "NS_OPTIONS"} or raw == name:
                    continue
                value, auto = parse_value(cm.group(2), auto, aliases)
                try:
                    aliases[raw] = int(value)
                except ValueError:
                    pass
                cases.append((to_case_name(name, raw), value))
            if cases:
                enums.append((name, php_class_name(name), backing, cases))

    written = 0
    skipped = 0
    for apple_name, php_class, backing, cases in enums:
        dest = OUT_DIR / f"{php_class}.php"
        if already_owned(php_class, OUT_DIR):
            skipped += 1
            continue
        dest.write_text(php_enum(apple_name, php_class, backing, cases), encoding="utf-8")
        written += 1

    print(f"wrote {written} enums to {OUT_DIR} (skipped {skipped} existing)")


if __name__ == "__main__":
    main()
