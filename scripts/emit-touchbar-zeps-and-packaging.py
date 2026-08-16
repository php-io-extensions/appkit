#!/usr/bin/env python3
"""Write Touch Bar Zephir classes, OKF pages, and patch packaging."""

from __future__ import annotations

import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
ZEP = ROOT / "appkit" / "ns"
OKF = ROOT / ".okf" / "api"
CONFIG_JSON = ROOT / "config.json"
MAKEFILE_FRAG = ROOT / "scripts" / "Makefile.frag"
PATCH_CONFIG = ROOT / "scripts" / "patch-config-m4.py"
API_INDEX = ROOT / ".okf" / "api" / "index.md"
OKF_LOG = ROOT / ".okf" / "log.md"

MODULES = [
    ("ns-touchbaritem", "nstouchbaritem", "NSTouchBarItem", "NSTouchBarItem base item"),
    ("ns-touchbar", "nstouchbar", "NSTouchBar", "NSTouchBar customization bar"),
    ("ns-customtouchbaritem", "nscustomtouchbaritem", "NSCustomTouchBarItem", "NSCustomTouchBarItem custom view item"),
    ("ns-candidatelisttouchbaritem", "nscandidatelisttouchbaritem", "NSCandidateListTouchBarItem", "NSCandidateListTouchBarItem text candidates"),
    ("ns-colorpickertouchbaritem", "nscolorpickertouchbaritem", "NSColorPickerTouchBarItem", "NSColorPickerTouchBarItem color picker"),
    ("ns-grouptouchbaritem", "nsgrouptouchbaritem", "NSGroupTouchBarItem", "NSGroupTouchBarItem nested bar group"),
    ("ns-pickertouchbaritem", "nspickertouchbaritem", "NSPickerTouchBarItem", "NSPickerTouchBarItem segmented picker"),
    ("ns-sharingservicepickertouchbaritem", "nssharingservicepickertouchbaritem", "NSSharingServicePickerTouchBarItem", "NSSharingServicePickerTouchBarItem share picker"),
    ("ns-slidertouchbaritem", "nsslidertouchbaritem", "NSSliderTouchBarItem", "NSSliderTouchBarItem slider"),
    ("ns-steppertouchbaritem", "nssteppertouchbaritem", "NSStepperTouchBarItem", "NSStepperTouchBarItem stepper"),
    ("ns-popovertouchbaritem", "nspopovertouchbaritem", "NSPopoverTouchBarItem", "NSPopoverTouchBarItem popover host"),
    ("ns-buttontouchbaritem", "nsbuttontouchbaritem", "NSButtonTouchBarItem", "NSButtonTouchBarItem button"),
]


def okf(class_name: str, slug: str, desc: str, zep: str, header: str, rows: list[tuple[str, str]]) -> str:
    table = "\n".join(f"| `{a}` | `{b}` |" for a, b in rows)
    return f"""---
type: CoreType
title: AppKit\\\\NS\\\\{class_name}\\\\{class_name}
description: {desc}
resource: /appkit/ns/{slug}/{zep}
tags: [appkit, api, {slug}]
status: draft
generated: {{ by: cursor-agent, at: "2026-08-15T13:30:00Z" }}
---

# Schema

| Method | Maps to |
|--------|---------|
{table}

Follow-on: delegate protocols, `target`/`action`, and compression/layout option objects where not yet bound.
"""


def patch_packaging() -> None:
    m_files = [f"src/{stem}.m" for stem, *_ in MODULES]
    lo_files = [f"src/{stem}.lo" for stem, *_ in MODULES]
    zep_entries = [f"appkit/ns/{slug}/{slug}.zep.c" for _, slug, *_ in MODULES]
    build_dirs = [f'"appkit/ns/{slug}"' for _, slug, *_ in MODULES]

    cfg = json.loads(CONFIG_JSON.read_text(encoding="utf-8"))
    sources = cfg.get("extra-sources", [])
    for m in m_files:
        if m not in sources:
            sources.append(m)
    cfg["extra-sources"] = sources
    CONFIG_JSON.write_text(json.dumps(cfg, indent=4) + "\n", encoding="utf-8")

    frag = MAKEFILE_FRAG.read_text(encoding="utf-8")
    for stem, *_ in MODULES:
        rule = (
            f"$(builddir)/src/{stem}.lo: $(srcdir)/src/{stem}.m\n"
            f"\t$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) "
            f"$(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 "
            f"-c $(srcdir)/src/{stem}.m -o $@\n\n"
        )
        if f"src/{stem}.lo:" not in frag:
            frag = frag.replace("shared_objects_appkit += ", rule + "shared_objects_appkit += ", 1)
    match = re.search(r"shared_objects_appkit \+= (.+)\n", frag)
    if match:
        existing = match.group(1).split()
        for lo in lo_files:
            if lo not in existing:
                existing.append(lo)
        frag = re.sub(r"shared_objects_appkit \+= .+\n", "shared_objects_appkit += " + " ".join(existing) + "\n", frag, count=1)
    MAKEFILE_FRAG.write_text(frag, encoding="utf-8")

    patch = PATCH_CONFIG.read_text(encoding="utf-8")
    for zep in zep_entries:
        if zep not in patch:
            patch = patch.replace(" appkit/ns/nsscrubber/nsscrubber.zep.c", f" {zep} appkit/ns/nsscrubber/nsscrubber.zep.c", 1)
    for d in build_dirs:
        if d not in patch:
            patch = patch.replace(' "appkit/ns/nsscrubber" "src"; do', f' {d} "appkit/ns/nsscrubber" "src"; do', 1)
    PATCH_CONFIG.write_text(patch, encoding="utf-8")

    index = API_INDEX.read_text(encoding="utf-8")
    rows = []
    for _, slug, class_name, desc in MODULES:
        line = f"| `AppKit\\\\NS\\\\{class_name}\\\\{class_name}` | {desc.split(' ', 1)[-1]} | [{slug}.md]({slug}.md) |"
        if slug not in index:
            rows.append(line)
    if rows:
        API_INDEX.write_text(index.rstrip() + "\n" + "\n".join(rows) + "\n", encoding="utf-8")

    log = OKF_LOG.read_text(encoding="utf-8")
    entry = (
        "\n## 2026-08-15 (Touch Bar wave)\n\n"
        "* **Added**: NSTouchBar + NSTouchBarItem base and ten concrete item subclasses.\n"
        "* **API pages**: twelve new `.okf/api/nstouchbar*.md` entries.\n"
        "* **Packaging**: twelve ObjC modules + twelve Zephir classes.\n"
    )
    if "Touch Bar wave" not in log:
        OKF_LOG.write_text(log.rstrip() + entry, encoding="utf-8")


def emit_okf() -> None:
    pages = [
        ("NSTouchBarItem", "nstouchbaritem", "NSTouchBarItem base item", [("create / wrap / destroy / nsTouchBarItem", "retain ownership"), ("getIdentifier", "identifier"), ("setVisibilityPriority / getVisibilityPriority", "visibilityPriority"), ("getCustomizationLabel", "customizationLabel"), ("isVisible", "visible"), ("getView", "view via NSView handle")]),
        ("NSTouchBar", "nstouchbar", "NSTouchBar customization bar", [("create / wrap / destroy / nsTouchBar", "retain ownership"), ("setDefaultItemIdentifiers / getDefaultItemIdentifiers", "defaultItemIdentifiers"), ("setTemplateItems", "templateItems NSSet"), ("itemForIdentifier", "itemForIdentifier:"), ("assignToResponder / touchBarFromResponder", "NSResponder.touchBar"), ("setAutomaticCustomizeTouchBarMenuItemEnabled", "NSTouchBar.automaticCustomizeTouchBarMenuItemEnabled")]),
        ("NSCustomTouchBarItem", "nscustomtouchbaritem", "NSCustomTouchBarItem custom view item", [("create / wrap / destroy", "initWithIdentifier:"), ("setView / getView", "view"), ("setCustomizationLabel / getCustomizationLabel", "customizationLabel")]),
        ("NSCandidateListTouchBarItem", "nscandidatelisttouchbaritem", "NSCandidateListTouchBarItem text candidates", [("create / wrap / destroy", "initWithIdentifier:"), ("setCandidates / getCandidates", "setCandidates:forSelectedRange:inString:"), ("setCollapsed / isCollapsed", "collapsed")]),
        ("NSColorPickerTouchBarItem", "nscolorpickertouchbaritem", "NSColorPickerTouchBarItem color picker", [("colorPicker / textColorPicker / strokeColorPicker", "factory methods"), ("setColor / getColor", "color"), ("pollAction", "action poll")]),
        ("NSGroupTouchBarItem", "nsgrouptouchbaritem", "NSGroupTouchBarItem nested bar group", [("groupItem / alertStyleGroupItem", "groupItemWithIdentifier:items:"), ("setGroupTouchBar / getGroupTouchBar", "groupTouchBar")]),
        ("NSPickerTouchBarItem", "nspickertouchbaritem", "NSPickerTouchBarItem segmented picker", [("pickerWithLabels", "pickerTouchBarItemWithIdentifier:"), ("setSelectedIndex / getSelectedIndex", "selectedIndex"), ("pollAction", "action poll")]),
        ("NSSharingServicePickerTouchBarItem", "nssharingservicepickertouchbaritem", "NSSharingServicePickerTouchBarItem share picker", [("create / wrap / destroy", "initWithIdentifier:"), ("setShareStrings / pollShareRequest", "delegate items")]),
        ("NSSliderTouchBarItem", "nsslidertouchbaritem", "NSSliderTouchBarItem slider", [("create / wrap / destroy", "initWithIdentifier:"), ("setDoubleValue / getDoubleValue", "doubleValue"), ("pollAction", "action poll")]),
        ("NSStepperTouchBarItem", "nssteppertouchbaritem", "NSStepperTouchBarItem stepper", [("stepperWithFormatter", "stepperTouchBarItemWithIdentifier:formatter:"), ("setValue / getValue", "value"), ("pollAction", "action poll")]),
        ("NSPopoverTouchBarItem", "nspopovertouchbaritem", "NSPopoverTouchBarItem popover host", [("create / wrap / destroy", "initWithIdentifier:"), ("setPopoverTouchBar / getPopoverTouchBar", "popoverTouchBar"), ("showPopover / dismissPopover", "showPopover: / dismissPopover:")]),
        ("NSButtonTouchBarItem", "nsbuttontouchbaritem", "NSButtonTouchBarItem button", [("buttonWithTitle / buttonWithImage", "buttonTouchBarItemWithIdentifier:"), ("setTitle / getTitle", "title"), ("pollAction", "action poll")]),
    ]
    for class_name, slug, desc, rows in pages:
        (OKF / f"{slug}.md").write_text(okf(class_name, slug, desc, f"{slug}.zep", f"ns-{slug.replace('ns', '', 1) if slug.startswith('ns') else slug}.h", rows), encoding="utf-8")


# --- Zephir bodies ---

def z(ns, inc, doc):
    return f"""namespace AppKit\\NS\\{ns};

%{{
#include "{inc}"
#include <stdint.h>
}}%

/** {doc} */
class {ns}
{{
"""

def end():
    return "}\n"

def wrap_fn(cfn, ptr):
    return f"""    public static function wrap(int {ptr}) -> int
    {{
        int handle;
        %{{ handle = (zend_long) {cfn}((void *)(uintptr_t) {ptr}); }}%
        return handle;
    }}
"""

def destroy_fn(cfn, arg):
    return f"""    public static function destroy(int {arg}) -> void
    {{
        %{{ {cfn}((uintptr_t) {arg}); }}%
    }}
"""

def ns_fn(cfn, php, arg):
    return f"""    public static function {php}(int {arg}) -> int
    {{
        int ptr;
        %{{ ptr = (zend_long)(uintptr_t) {cfn}((uintptr_t) {arg}); }}%
        return ptr;
    }}
"""

def string_get(php, cfn, args):
    return f"""    public static function {php}({args}) -> string
    {{
        %{{ char buf[4096]; buf[0] = '\\0'; if ({cfn}) {{ RETURN_STRING(buf); }} RETURN_EMPTY_STRING(); }}%
        return "";
    }}
"""

ARRAY_FROM_C = """            zval *entry;
            const char *cstrings[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(%s), entry) {
                if (count >= 256) { break; }
                convert_to_string(entry);
                cstrings[count++] = Z_STRVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
"""

ZEP_TOUCHBARITEM = z("NSTouchBarItem", "ns-touchbaritem.h", "NSTouchBarItem base item") + f"""    public static function create(string identifier) -> int
    {{ int handle; %{{ handle = (zend_long) ns_touchbaritem_create(Z_STRVAL(identifier)); }}% return handle; }}
{wrap_fn('ns_touchbaritem_wrap', 'nsTouchBarItemPtr')}
{destroy_fn('ns_touchbaritem_destroy', 'item')}
{ns_fn('ns_touchbaritem_nstouchbaritem', 'nsTouchBarItem', 'item')}
{string_get('getIdentifier', 'ns_touchbaritem_get_identifier((uintptr_t) item, buf, (int) sizeof(buf))', 'int item')}
    public static function setVisibilityPriority(int item, double priority) -> void
    {{ %{{ ns_touchbaritem_set_visibility_priority((uintptr_t) item, (float) priority); }}% }}
    public static function getVisibilityPriority(int item) -> double
    {{ double value; %{{ value = (double) ns_touchbaritem_get_visibility_priority((uintptr_t) item); }}% return value; }}
{string_get('getCustomizationLabel', 'ns_touchbaritem_get_customization_label((uintptr_t) item, buf, (int) sizeof(buf))', 'int item')}
    public static function isVisible(int item) -> bool
    {{ bool r; %{{ r = ns_touchbaritem_is_visible((uintptr_t) item) == 1; }}% return r; }}
    public static function getView(int item) -> int
    {{ int h; %{{ h = (zend_long) ns_touchbaritem_get_view((uintptr_t) item); }}% return h; }}
""" + end()

ZEP_TOUCHBAR = z("NSTouchBar", "ns-touchbar.h", "NSTouchBar customization bar") + """    public static function create() -> int
    { int handle; %{ handle = (zend_long) ns_touchbar_create(); }% return handle; }
""" + wrap_fn('ns_touchbar_wrap', 'nsTouchBarPtr') + destroy_fn('ns_touchbar_destroy', 'bar') + ns_fn('ns_touchbar_nstouchbar', 'nsTouchBar', 'bar') + """
    public static function setCustomizationIdentifier(int bar, string identifier) -> void
    { %{ ns_touchbar_set_customization_identifier((uintptr_t) bar, Z_STRVAL(identifier)); }% }
""" + string_get('getCustomizationIdentifier', 'ns_touchbar_get_customization_identifier((uintptr_t) bar, buf, (int) sizeof(buf))', 'int bar') + """
    public static function setDefaultItemIdentifiers(int bar, array identifiers) -> void
    { %{
""" + ARRAY_FROM_C % 'identifiers' + """        ns_touchbar_set_default_item_identifiers((uintptr_t) bar, cstrings, count);
    }% }
    public static function getDefaultItemIdentifiers(int bar) -> array
    { array out = []; %{
        int count = ns_touchbar_default_item_identifiers_count((uintptr_t) bar);
        int i; char buf[4096];
        for (i = 0; i < count; i++) { buf[0] = '\\0'; if (ns_touchbar_default_item_identifier_at((uintptr_t) bar, i, buf, (int) sizeof(buf))) add_next_index_string(&out, buf); }
    }% return out; }
    public static function setTemplateItems(int bar, array items) -> void
    { %{
        zval *entry; uintptr_t handles[256]; int count = 0;
        ZEND_HASH_FOREACH_VAL(Z_ARRVAL(items), entry) {
            if (count >= 256) break;
            convert_to_long(entry);
            handles[count++] = (uintptr_t) Z_LVAL_P(entry);
        } ZEND_HASH_FOREACH_END();
        ns_touchbar_set_template_items((uintptr_t) bar, handles, count);
    }% }
    public static function getItemIdentifiers(int bar) -> array
    { array out = []; %{
        int count = ns_touchbar_item_identifiers_count((uintptr_t) bar); int i; char buf[4096];
        for (i = 0; i < count; i++) { buf[0] = '\\0'; if (ns_touchbar_item_identifier_at((uintptr_t) bar, i, buf, (int) sizeof(buf))) add_next_index_string(&out, buf); }
    }% return out; }
    public static function itemForIdentifier(int bar, string identifier) -> int
    { int h; %{ h = (zend_long) ns_touchbar_item_for_identifier((uintptr_t) bar, Z_STRVAL(identifier)); }% return h; }
    public static function isVisible(int bar) -> bool
    { bool r; %{ r = ns_touchbar_is_visible((uintptr_t) bar) == 1; }% return r; }
    public static function assignToResponder(int bar, int responder) -> void
    { %{ ns_touchbar_assign_to_responder((uintptr_t) bar, (uintptr_t) responder); }% }
    public static function touchBarFromResponder(int responder) -> int
    { int h; %{ h = (zend_long) ns_touchbar_from_responder((uintptr_t) responder); }% return h; }
    public static function setAutomaticCustomizeTouchBarMenuItemEnabled(bool enabled) -> void
    { %{ ns_touchbar_set_automatic_customize_menu_item_enabled(enabled ? 1 : 0); }% }
    public static function isAutomaticCustomizeTouchBarMenuItemEnabled() -> bool
    { bool r; %{ r = ns_touchbar_is_automatic_customize_menu_item_enabled() == 1; }% return r; }
""" + end()

# Write remaining zeps more compactly by reading patterns
ZEP_CUSTOM = z("NSCustomTouchBarItem", "ns-customtouchbaritem.h", "NSCustomTouchBarItem") + """    public static function create(string identifier) -> int { int h; %{ h = (zend_long) ns_customtouchbaritem_create(Z_STRVAL(identifier)); }% return h; }
""" + wrap_fn('ns_customtouchbaritem_wrap', 'ptr') + destroy_fn('ns_customtouchbaritem_destroy', 'item') + ns_fn('ns_customtouchbaritem_nscustomtouchbaritem', 'nsCustomTouchBarItem', 'item') + """
    public static function setView(int item, int view) -> void { %{ ns_customtouchbaritem_set_view((uintptr_t) item, (uintptr_t) view); }% }
    public static function getView(int item) -> int { int h; %{ h = (zend_long) ns_customtouchbaritem_get_view((uintptr_t) item); }% return h; }
    public static function setCustomizationLabel(int item, string label) -> void { %{ ns_customtouchbaritem_set_customization_label((uintptr_t) item, Z_STRVAL(label)); }% }
""" + string_get('getCustomizationLabel', 'ns_customtouchbaritem_get_customization_label((uintptr_t) item, buf, (int) sizeof(buf))', 'int item') + end()

ZEP_CANDIDATE = z("NSCandidateListTouchBarItem", "ns-candidatelisttouchbaritem.h", "NSCandidateListTouchBarItem") + """    public static function create(string identifier) -> int { int h; %{ h = (zend_long) ns_candidatelisttouchbaritem_create(Z_STRVAL(identifier)); }% return h; }
""" + wrap_fn('ns_candidatelisttouchbaritem_wrap', 'ptr') + destroy_fn('ns_candidatelisttouchbaritem_destroy', 'item') + ns_fn('ns_candidatelisttouchbaritem_nscandidatelisttouchbaritem', 'nsCandidateListTouchBarItem', 'item') + """
    public static function setCollapsed(int item, bool flag) -> void { %{ ns_candidatelisttouchbaritem_set_collapsed((uintptr_t) item, flag ? 1 : 0); }% }
    public static function isCollapsed(int item) -> bool { bool r; %{ r = ns_candidatelisttouchbaritem_is_collapsed((uintptr_t) item) == 1; }% return r; }
    public static function setCandidates(int item, array candidates) -> void { %{
""" + ARRAY_FROM_C % 'candidates' + """        ns_candidatelisttouchbaritem_set_candidates((uintptr_t) item, cstrings, count);
    }% }
    public static function getCandidates(int item) -> array { array out = []; %{
        int count = ns_candidatelisttouchbaritem_candidates_count((uintptr_t) item); int i; char buf[4096];
        for (i = 0; i < count; i++) { buf[0] = '\\0'; if (ns_candidatelisttouchbaritem_candidate_at((uintptr_t) item, i, buf, (int) sizeof(buf))) add_next_index_string(&out, buf); }
    }% return out; }
""" + end()

ZEP_COLORPICKER = z("NSColorPickerTouchBarItem", "ns-colorpickertouchbaritem.h", "NSColorPickerTouchBarItem") + """
    public static function colorPicker(string identifier) -> int { int h; %{ h = (zend_long) ns_colorpickertouchbaritem_color_picker(Z_STRVAL(identifier)); }% return h; }
    public static function textColorPicker(string identifier) -> int { int h; %{ h = (zend_long) ns_colorpickertouchbaritem_text_color_picker(Z_STRVAL(identifier)); }% return h; }
    public static function strokeColorPicker(string identifier) -> int { int h; %{ h = (zend_long) ns_colorpickertouchbaritem_stroke_color_picker(Z_STRVAL(identifier)); }% return h; }
    public static function colorPickerWithButtonImage(string identifier, int image) -> int { int h; %{ h = (zend_long) ns_colorpickertouchbaritem_color_picker_with_button_image(Z_STRVAL(identifier), (uintptr_t) image); }% return h; }
""" + wrap_fn('ns_colorpickertouchbaritem_wrap', 'ptr') + destroy_fn('ns_colorpickertouchbaritem_destroy', 'item') + ns_fn('ns_colorpickertouchbaritem_nscolorpickertouchbaritem', 'nsColorPickerTouchBarItem', 'item') + """
    public static function setColor(int item, int color) -> void { %{ ns_colorpickertouchbaritem_set_color((uintptr_t) item, (uintptr_t) color); }% }
    public static function getColor(int item) -> int { int h; %{ h = (zend_long) ns_colorpickertouchbaritem_get_color((uintptr_t) item); }% return h; }
    public static function pollAction(int item) -> bool { bool r; %{ r = ns_colorpickertouchbaritem_poll_action((uintptr_t) item) == 1; }% return r; }
""" + end()

ZEP_GROUP = z("NSGroupTouchBarItem", "ns-grouptouchbaritem.h", "NSGroupTouchBarItem") + """
    public static function groupItem(string identifier, array items) -> int { int h; %{
        zval *entry; uintptr_t handles[256]; int count = 0;
        ZEND_HASH_FOREACH_VAL(Z_ARRVAL(items), entry) { if (count >= 256) break; convert_to_long(entry); handles[count++] = (uintptr_t) Z_LVAL_P(entry); } ZEND_HASH_FOREACH_END();
        h = (zend_long) ns_grouptouchbaritem_group_item(Z_STRVAL(identifier), handles, count);
    }% return h; }
    public static function alertStyleGroupItem(string identifier) -> int { int h; %{ h = (zend_long) ns_grouptouchbaritem_alert_style_group_item(Z_STRVAL(identifier)); }% return h; }
""" + wrap_fn('ns_grouptouchbaritem_wrap', 'ptr') + destroy_fn('ns_grouptouchbaritem_destroy', 'item') + ns_fn('ns_grouptouchbaritem_nsgrouptouchbaritem', 'nsGroupTouchBarItem', 'item') + """
    public static function setGroupTouchBar(int item, int bar) -> void { %{ ns_grouptouchbaritem_set_group_touchbar((uintptr_t) item, (uintptr_t) bar); }% }
    public static function getGroupTouchBar(int item) -> int { int h; %{ h = (zend_long) ns_grouptouchbaritem_get_group_touchbar((uintptr_t) item); }% return h; }
""" + end()

ZEP_PICKER = z("NSPickerTouchBarItem", "ns-pickertouchbaritem.h", "NSPickerTouchBarItem") + """
    public static function pickerWithLabels(string identifier, array labels, int selectionMode) -> int { int h; %{
""" + ARRAY_FROM_C % 'labels' + """        h = (zend_long) ns_pickertouchbaritem_picker_with_labels(Z_STRVAL(identifier), cstrings, count, (int) selectionMode);
    }% return h; }
""" + wrap_fn('ns_pickertouchbaritem_wrap', 'ptr') + destroy_fn('ns_pickertouchbaritem_destroy', 'item') + ns_fn('ns_pickertouchbaritem_nspickertouchbaritem', 'nsPickerTouchBarItem', 'item') + """
    public static function setSelectedIndex(int item, int index) -> void { %{ ns_pickertouchbaritem_set_selected_index((uintptr_t) item, (int) index); }% }
    public static function getSelectedIndex(int item) -> int { int v; %{ v = (zend_long) ns_pickertouchbaritem_get_selected_index((uintptr_t) item); }% return v; }
    public static function pollAction(int item) -> bool { bool r; %{ r = ns_pickertouchbaritem_poll_action((uintptr_t) item) == 1; }% return r; }
""" + end()

ZEP_SHARING = z("NSSharingServicePickerTouchBarItem", "ns-sharingservicepickertouchbaritem.h", "NSSharingServicePickerTouchBarItem") + """
    public static function create(string identifier) -> int { int h; %{ h = (zend_long) ns_sharingservicepickertouchbaritem_create(Z_STRVAL(identifier)); }% return h; }
""" + wrap_fn('ns_sharingservicepickertouchbaritem_wrap', 'ptr') + destroy_fn('ns_sharingservicepickertouchbaritem_destroy', 'item') + ns_fn('ns_sharingservicepickertouchbaritem_nssharingservicepickertouchbaritem', 'nsSharingServicePickerTouchBarItem', 'item') + """
    public static function setShareStrings(int item, array strings) -> void { %{
""" + ARRAY_FROM_C % 'strings' + """        ns_sharingservicepickertouchbaritem_set_share_strings((uintptr_t) item, cstrings, count);
    }% }
    public static function pollShareRequest(int item) -> bool { bool r; %{ r = ns_sharingservicepickertouchbaritem_poll_share_request((uintptr_t) item) == 1; }% return r; }
""" + end()

ZEP_SLIDER = z("NSSliderTouchBarItem", "ns-slidertouchbaritem.h", "NSSliderTouchBarItem") + """
    public static function create(string identifier) -> int { int h; %{ h = (zend_long) ns_slidertouchbaritem_create(Z_STRVAL(identifier)); }% return h; }
""" + wrap_fn('ns_slidertouchbaritem_wrap', 'ptr') + destroy_fn('ns_slidertouchbaritem_destroy', 'item') + ns_fn('ns_slidertouchbaritem_nsslidertouchbaritem', 'nsSliderTouchBarItem', 'item') + """
    public static function setDoubleValue(int item, double value) -> void { %{ ns_slidertouchbaritem_set_double_value((uintptr_t) item, value); }% }
    public static function getDoubleValue(int item) -> double { double v; %{ v = ns_slidertouchbaritem_get_double_value((uintptr_t) item); }% return v; }
    public static function pollAction(int item) -> bool { bool r; %{ r = ns_slidertouchbaritem_poll_action((uintptr_t) item) == 1; }% return r; }
""" + end()

ZEP_STEPPER = z("NSStepperTouchBarItem", "ns-steppertouchbaritem.h", "NSStepperTouchBarItem") + """
    public static function stepperWithFormatter(string identifier) -> int { int h; %{ h = (zend_long) ns_steppertouchbaritem_stepper_with_formatter(Z_STRVAL(identifier)); }% return h; }
""" + wrap_fn('ns_steppertouchbaritem_wrap', 'ptr') + destroy_fn('ns_steppertouchbaritem_destroy', 'item') + ns_fn('ns_steppertouchbaritem_nssteppertouchbaritem', 'nsStepperTouchBarItem', 'item') + """
    public static function setValue(int item, double value) -> void { %{ ns_steppertouchbaritem_set_value((uintptr_t) item, value); }% }
    public static function getValue(int item) -> double { double v; %{ v = ns_steppertouchbaritem_get_value((uintptr_t) item); }% return v; }
    public static function pollAction(int item) -> bool { bool r; %{ r = ns_steppertouchbaritem_poll_action((uintptr_t) item) == 1; }% return r; }
""" + end()

ZEP_POPOVER = z("NSPopoverTouchBarItem", "ns-popovertouchbaritem.h", "NSPopoverTouchBarItem") + """
    public static function create(string identifier) -> int { int h; %{ h = (zend_long) ns_popovertouchbaritem_create(Z_STRVAL(identifier)); }% return h; }
""" + wrap_fn('ns_popovertouchbaritem_wrap', 'ptr') + destroy_fn('ns_popovertouchbaritem_destroy', 'item') + ns_fn('ns_popovertouchbaritem_nspopovertouchbaritem', 'nsPopoverTouchBarItem', 'item') + """
    public static function setPopoverTouchBar(int item, int bar) -> void { %{ ns_popovertouchbaritem_set_popover_touchbar((uintptr_t) item, (uintptr_t) bar); }% }
    public static function showPopover(int item) -> void { %{ ns_popovertouchbaritem_show_popover((uintptr_t) item); }% }
    public static function dismissPopover(int item) -> void { %{ ns_popovertouchbaritem_dismiss_popover((uintptr_t) item); }% }
""" + end()

ZEP_BUTTON = z("NSButtonTouchBarItem", "ns-buttontouchbaritem.h", "NSButtonTouchBarItem") + """
    public static function buttonWithTitle(string identifier, string title) -> int { int h; %{ h = (zend_long) ns_buttontouchbaritem_button_with_title(Z_STRVAL(identifier), Z_STRVAL(title)); }% return h; }
    public static function buttonWithImage(string identifier, int image) -> int { int h; %{ h = (zend_long) ns_buttontouchbaritem_button_with_image(Z_STRVAL(identifier), (uintptr_t) image); }% return h; }
""" + wrap_fn('ns_buttontouchbaritem_wrap', 'ptr') + destroy_fn('ns_buttontouchbaritem_destroy', 'item') + ns_fn('ns_buttontouchbaritem_nsbuttontouchbaritem', 'nsButtonTouchBarItem', 'item') + """
    public static function setTitle(int item, string title) -> void { %{ ns_buttontouchbaritem_set_title((uintptr_t) item, Z_STRVAL(title)); }% }
    public static function pollAction(int item) -> bool { bool r; %{ r = ns_buttontouchbaritem_poll_action((uintptr_t) item) == 1; }% return r; }
""" + end()

zeps = {
    "nstouchbaritem": ZEP_TOUCHBARITEM,
    "nstouchbar": ZEP_TOUCHBAR,
    "nscustomtouchbaritem": ZEP_CUSTOM,
    "nscandidatelisttouchbaritem": ZEP_CANDIDATE,
    "nscolorpickertouchbaritem": ZEP_COLORPICKER,
    "nsgrouptouchbaritem": ZEP_GROUP,
    "nspickertouchbaritem": ZEP_PICKER,
    "nssharingservicepickertouchbaritem": ZEP_SHARING,
    "nsslidertouchbaritem": ZEP_SLIDER,
    "nssteppertouchbaritem": ZEP_STEPPER,
    "nspopovertouchbaritem": ZEP_POPOVER,
    "nsbuttontouchbaritem": ZEP_BUTTON,
}

for slug, body in zeps.items():
    path = ZEP / slug / f"{slug}.zep"
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(body, encoding="utf-8")
    print("wrote", path.relative_to(ROOT))

emit_okf()
patch_packaging()
print("done")
