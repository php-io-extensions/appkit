#!/usr/bin/env python3
"""Emit Touch Bar Zephir + ObjC + OKF wave (12 types)."""

from __future__ import annotations

import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SRC = ROOT / "src"
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


def write(path: Path, text: str) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(text.lstrip("\n"), encoding="utf-8")
    print(f"wrote {path.relative_to(ROOT)}")


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
    print("patched config.json")

    frag = MAKEFILE_FRAG.read_text(encoding="utf-8")
    for stem, *_ in MODULES:
        rule = (
            f"$(builddir)/src/{stem}.lo: $(srcdir)/src/{stem}.m\n"
            f"\t$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) $(COMMON_FLAGS) "
            f"$(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) -DZEND_COMPILE_DL_EXT=1 "
            f"-c $(srcdir)/src/{stem}.m -o $@\n\n"
        )
        if f"src/{stem}.lo:" not in frag:
            frag = frag.replace(
                "shared_objects_appkit += ",
                rule + "shared_objects_appkit += ",
                1,
            )
    match = re.search(r"shared_objects_appkit \+= (.+)\n", frag)
    if match:
        existing = match.group(1).split()
        for lo in lo_files:
            if lo not in existing:
                existing.append(lo)
        frag = re.sub(
            r"shared_objects_appkit \+= .+\n",
            "shared_objects_appkit += " + " ".join(existing) + "\n",
            frag,
            count=1,
        )
    MAKEFILE_FRAG.write_text(frag, encoding="utf-8")
    print("patched Makefile.frag")

    patch = PATCH_CONFIG.read_text(encoding="utf-8")
    for zep in zep_entries:
        if zep not in patch:
            patch = patch.replace(
                " appkit/ns/nsscrubber/nsscrubber.zep.c",
                f" {zep} appkit/ns/nsscrubber/nsscrubber.zep.c",
                1,
            )
    for d in build_dirs:
        if d not in patch:
            patch = patch.replace(
                ' "appkit/ns/nsscrubber" "src"; do',
                f' {d} "appkit/ns/nsscrubber" "src"; do',
                1,
            )
    PATCH_CONFIG.write_text(patch, encoding="utf-8")
    print("patched patch-config-m4.py")

    index = API_INDEX.read_text(encoding="utf-8")
    rows = []
    for _, slug, class_name, desc in MODULES:
        line = f"| `AppKit\\\\NS\\\\{class_name}\\\\{class_name}` | {desc.split(' ', 1)[-1]} | [{slug}.md]({slug}.md) |"
        if slug not in index:
            rows.append(line)
    if rows:
        index = index.rstrip() + "\n" + "\n".join(rows) + "\n"
        API_INDEX.write_text(index, encoding="utf-8")
        print("patched api/index.md")

    log = OKF_LOG.read_text(encoding="utf-8")
    entry = (
        "\n## 2026-08-15 (Touch Bar wave)\n\n"
        "* **Added**: NSTouchBar + NSTouchBarItem base and ten concrete item subclasses "
        "(custom, candidate list, color picker, group, picker, sharing, slider, stepper, popover, button).\n"
        "* **API pages**: twelve new `.okf/api/nstouchbar*.md` entries.\n"
        "* **Packaging**: twelve ObjC modules + twelve Zephir classes in config/Makefile/patch-config.\n"
    )
    if "Touch Bar wave" not in log:
        OKF_LOG.write_text(log.rstrip() + entry, encoding="utf-8")
        print("patched .okf/log.md")


def emit_objc() -> None:
    write(SRC / "ns-touchbaritem.h", TOUCHBARITEM_H)
    write(SRC / "ns-touchbaritem.m", TOUCHBARITEM_M)
    write(SRC / "ns-touchbar.h", TOUCHBAR_H)
    write(SRC / "ns-touchbar.m", TOUCHBAR_M)
    write(SRC / "ns-customtouchbaritem.h", CUSTOM_H)
    write(SRC / "ns-customtouchbaritem.m", CUSTOM_M)
    write(SRC / "ns-candidatelisttouchbaritem.h", CANDIDATE_H)
    write(SRC / "ns-candidatelisttouchbaritem.m", CANDIDATE_M)
    write(SRC / "ns-colorpickertouchbaritem.h", COLORPICKER_H)
    write(SRC / "ns-colorpickertouchbaritem.m", COLORPICKER_M)
    write(SRC / "ns-grouptouchbaritem.h", GROUP_H)
    write(SRC / "ns-grouptouchbaritem.m", GROUP_M)
    write(SRC / "ns-pickertouchbaritem.h", PICKER_H)
    write(SRC / "ns-pickertouchbaritem.m", PICKER_M)
    write(SRC / "ns-sharingservicepickertouchbaritem.h", SHARING_H)
    write(SRC / "ns-sharingservicepickertouchbaritem.m", SHARING_M)
    write(SRC / "ns-slidertouchbaritem.h", SLIDER_H)
    write(SRC / "ns-slidertouchbaritem.m", SLIDER_M)
    write(SRC / "ns-steppertouchbaritem.h", STEPPER_H)
    write(SRC / "ns-steppertouchbaritem.m", STEPPER_M)
    write(SRC / "ns-popovertouchbaritem.h", POPOVER_H)
    write(SRC / "ns-popovertouchbaritem.m", POPOVER_M)
    write(SRC / "ns-buttontouchbaritem.h", BUTTON_H)
    write(SRC / "ns-buttontouchbaritem.m", BUTTON_M)


def emit_zephir() -> None:
    write(ZEP / "nstouchbaritem" / "nstouchbaritem.zep", ZEP_TOUCHBARITEM)
    write(ZEP / "nstouchbar" / "nstouchbar.zep", ZEP_TOUCHBAR)
    write(ZEP / "nscustomtouchbaritem" / "nscustomtouchbaritem.zep", ZEP_CUSTOM)
    write(ZEP / "nscandidatelisttouchbaritem" / "nscandidatelisttouchbaritem.zep", ZEP_CANDIDATE)
    write(ZEP / "nscolorpickertouchbaritem" / "nscolorpickertouchbaritem.zep", ZEP_COLORPICKER)
    write(ZEP / "nsgrouptouchbaritem" / "nsgrouptouchbaritem.zep", ZEP_GROUP)
    write(ZEP / "nspickertouchbaritem" / "nspickertouchbaritem.zep", ZEP_PICKER)
    write(ZEP / "nssharingservicepickertouchbaritem" / "nssharingservicepickertouchbaritem.zep", ZEP_SHARING)
    write(ZEP / "nsslidertouchbaritem" / "nsslidertouchbaritem.zep", ZEP_SLIDER)
    write(ZEP / "nssteppertouchbaritem" / "nssteppertouchbaritem.zep", ZEP_STEPPER)
    write(ZEP / "nspopovertouchbaritem" / "nspopovertouchbaritem.zep", ZEP_POPOVER)
    write(ZEP / "nsbuttontouchbaritem" / "nsbuttontouchbaritem.zep", ZEP_BUTTON)


def emit_okf() -> None:
    write(OKF / "nstouchbaritem.md", okf("NSTouchBarItem", "nstouchbaritem", "NSTouchBarItem base item", "nstouchbaritem.zep", "ns-touchbaritem.h", [
        ("create / wrap / destroy / nsTouchBarItem", "retain ownership"),
        ("getIdentifier", "identifier"),
        ("setVisibilityPriority / getVisibilityPriority", "visibilityPriority"),
        ("getCustomizationLabel", "customizationLabel"),
        ("isVisible", "visible"),
        ("getView", "view via NSView handle"),
    ]))
    write(OKF / "nstouchbar.md", okf("NSTouchBar", "nstouchbar", "NSTouchBar customization bar", "nstouchbar.zep", "ns-touchbar.h", [
        ("create / wrap / destroy / nsTouchBar", "retain ownership"),
        ("setCustomizationIdentifier / getCustomizationIdentifier", "customizationIdentifier"),
        ("setDefaultItemIdentifiers / getDefaultItemIdentifiers", "defaultItemIdentifiers"),
        ("setCustomizationAllowedItemIdentifiers / getCustomizationAllowedItemIdentifiers", "customizationAllowedItemIdentifiers"),
        ("setCustomizationRequiredItemIdentifiers / getCustomizationRequiredItemIdentifiers", "customizationRequiredItemIdentifiers"),
        ("setPrincipalItemIdentifier / getPrincipalItemIdentifier", "principalItemIdentifier"),
        ("setEscapeKeyReplacementItemIdentifier / getEscapeKeyReplacementItemIdentifier", "escapeKeyReplacementItemIdentifier"),
        ("setTemplateItems", "templateItems NSSet"),
        ("getItemIdentifiers", "itemIdentifiers"),
        ("itemForIdentifier", "itemForIdentifier:"),
        ("isVisible", "visible"),
        ("assignToResponder / touchBarFromResponder", "NSResponder.touchBar"),
        ("setAutomaticCustomizeTouchBarMenuItemEnabled / isAutomaticCustomizeTouchBarMenuItemEnabled", "NSTouchBar.automaticCustomizeTouchBarMenuItemEnabled"),
    ]))
    write(OKF / "nscustomtouchbaritem.md", okf("NSCustomTouchBarItem", "nscustomtouchbaritem", "NSCustomTouchBarItem custom view item", "nscustomtouchbaritem.zep", "ns-customtouchbaritem.h", [
        ("create / wrap / destroy / nsCustomTouchBarItem", "initWithIdentifier:"),
        ("setView / getView", "view"),
        ("setCustomizationLabel / getCustomizationLabel", "customizationLabel"),
    ]))
    write(OKF / "nscandidatelisttouchbaritem.md", okf("NSCandidateListTouchBarItem", "nscandidatelisttouchbaritem", "NSCandidateListTouchBarItem text candidates", "nscandidatelisttouchbaritem.zep", "ns-candidatelisttouchbaritem.h", [
        ("create / wrap / destroy / nsCandidateListTouchBarItem", "initWithIdentifier:"),
        ("setCollapsed / isCollapsed", "collapsed"),
        ("setAllowsCollapsing / allowsCollapsing", "allowsCollapsing"),
        ("isCandidateListVisible", "candidateListVisible"),
        ("updateWithInsertionPointVisibility", "updateWithInsertionPointVisibility:"),
        ("setAllowsTextInputContextCandidates / allowsTextInputContextCandidates", "allowsTextInputContextCandidates"),
        ("setCandidates / getCandidates", "setCandidates:forSelectedRange:inString:"),
        ("setCustomizationLabel / getCustomizationLabel", "customizationLabel"),
    ]))
    write(OKF / "nscolorpickertouchbaritem.md", okf("NSColorPickerTouchBarItem", "nscolorpickertouchbaritem", "NSColorPickerTouchBarItem color picker", "nscolorpickertouchbaritem.zep", "ns-colorpickertouchbaritem.h", [
        ("colorPicker / textColorPicker / strokeColorPicker / colorPickerWithButtonImage", "factory methods"),
        ("setColor / getColor", "color via NSColor handle"),
        ("setShowsAlpha / showsAlpha", "showsAlpha"),
        ("setEnabled / isEnabled", "enabled"),
        ("setCustomizationLabel / getCustomizationLabel", "customizationLabel"),
        ("pollAction", "action one-shot poll"),
    ]))
    write(OKF / "nsgrouptouchbaritem.md", okf("NSGroupTouchBarItem", "nsgrouptouchbaritem", "NSGroupTouchBarItem nested bar group", "nsgrouptouchbaritem.zep", "ns-grouptouchbaritem.h", [
        ("groupItem / alertStyleGroupItem", "groupItemWithIdentifier:items:"),
        ("wrap / destroy / nsGroupTouchBarItem", "ownership"),
        ("setGroupTouchBar / getGroupTouchBar", "groupTouchBar"),
        ("setCustomizationLabel / getCustomizationLabel", "customizationLabel"),
        ("setPrefersEqualWidths / prefersEqualWidths", "prefersEqualWidths"),
        ("setPreferredItemWidth / getPreferredItemWidth", "preferredItemWidth"),
        ("setGroupUserInterfaceLayoutDirection / getGroupUserInterfaceLayoutDirection", "groupUserInterfaceLayoutDirection"),
    ]))
    write(OKF / "nspickertouchbaritem.md", okf("NSPickerTouchBarItem", "nspickertouchbaritem", "NSPickerTouchBarItem segmented picker", "nspickertouchbaritem.zep", "ns-pickertouchbaritem.h", [
        ("pickerWithLabels / pickerWithImages", "pickerTouchBarItemWithIdentifier:"),
        ("setControlRepresentation / getControlRepresentation", "controlRepresentation"),
        ("setCollapsedRepresentationLabel / getCollapsedRepresentationLabel", "collapsedRepresentationLabel"),
        ("setSelectedIndex / getSelectedIndex", "selectedIndex"),
        ("setSelectionMode / getSelectionMode", "selectionMode"),
        ("getNumberOfOptions", "numberOfOptions"),
        ("setLabelAtIndex / labelAtIndex", "setLabel:atIndex:"),
        ("setEnabled / isEnabled", "enabled"),
        ("pollAction", "action one-shot poll"),
    ]))
    write(OKF / "nssharingservicepickertouchbaritem.md", okf("NSSharingServicePickerTouchBarItem", "nssharingservicepickertouchbaritem", "NSSharingServicePickerTouchBarItem share picker", "nssharingservicepickertouchbaritem.zep", "ns-sharingservicepickertouchbaritem.h", [
        ("create / wrap / destroy / nsSharingServicePickerTouchBarItem", "initWithIdentifier:"),
        ("setEnabled / isEnabled", "enabled"),
        ("setButtonTitle / getButtonTitle", "buttonTitle"),
        ("setButtonImage", "buttonImage via NSImage handle"),
        ("setShareStrings / getShareStrings / pollShareRequest", "delegate itemsForSharingServicePickerTouchBarItem:"),
    ]))
    write(OKF / "nsslidertouchbaritem.md", okf("NSSliderTouchBarItem", "nsslidertouchbaritem", "NSSliderTouchBarItem slider", "nsslidertouchbaritem.zep", "ns-slidertouchbaritem.h", [
        ("create / wrap / destroy / nsSliderTouchBarItem", "initWithIdentifier:"),
        ("setDoubleValue / getDoubleValue", "doubleValue"),
        ("setLabel / getLabel", "label"),
        ("setMinimumSliderWidth / getMinimumSliderWidth", "minimumSliderWidth"),
        ("setMaximumSliderWidth / getMaximumSliderWidth", "maximumSliderWidth"),
        ("setCustomizationLabel / getCustomizationLabel", "customizationLabel"),
        ("pollAction", "action one-shot poll"),
    ]))
    write(OKF / "nssteppertouchbaritem.md", okf("NSStepperTouchBarItem", "nssteppertouchbaritem", "NSStepperTouchBarItem stepper", "nssteppertouchbaritem.zep", "ns-steppertouchbaritem.h", [
        ("stepperWithFormatter / stepperWithDrawingHandler", "factory methods"),
        ("wrap / destroy / nsStepperTouchBarItem", "ownership"),
        ("setMaxValue / getMaxValue", "maxValue"),
        ("setMinValue / getMinValue", "minValue"),
        ("setIncrement / getIncrement", "increment"),
        ("setValue / getValue", "value"),
        ("setCustomizationLabel / getCustomizationLabel", "customizationLabel"),
        ("pollAction", "action one-shot poll"),
    ]))
    write(OKF / "nspopovertouchbaritem.md", okf("NSPopoverTouchBarItem", "nspopovertouchbaritem", "NSPopoverTouchBarItem popover host", "nspopovertouchbaritem.zep", "ns-popovertouchbaritem.h", [
        ("create / wrap / destroy / nsPopoverTouchBarItem", "initWithIdentifier:"),
        ("setPopoverTouchBar / getPopoverTouchBar", "popoverTouchBar"),
        ("setPressAndHoldTouchBar / getPressAndHoldTouchBar", "pressAndHoldTouchBar"),
        ("setCustomizationLabel / getCustomizationLabel", "customizationLabel"),
        ("setCollapsedRepresentationLabel / getCollapsedRepresentationLabel", "collapsedRepresentationLabel"),
        ("setCollapsedRepresentationImage", "collapsedRepresentationImage"),
        ("setShowsCloseButton / showsCloseButton", "showsCloseButton"),
        ("showPopover / dismissPopover", "showPopover: / dismissPopover:"),
    ]))
    write(OKF / "nsbuttontouchbaritem.md", okf("NSButtonTouchBarItem", "nsbuttontouchbaritem", "NSButtonTouchBarItem button", "nsbuttontouchbaritem.zep", "ns-buttontouchbaritem.h", [
        ("buttonWithTitle / buttonWithImage / buttonWithTitleAndImage", "buttonTouchBarItemWithIdentifier:"),
        ("wrap / destroy / nsButtonTouchBarItem", "ownership"),
        ("setTitle / getTitle", "title"),
        ("setImage", "image via NSImage handle"),
        ("setBezelColor", "bezelColor via NSColor handle"),
        ("setEnabled / isEnabled", "enabled"),
        ("setCustomizationLabel / getCustomizationLabel", "customizationLabel"),
        ("pollAction", "action one-shot poll"),
    ]))


# --- ObjC / Zephir bodies loaded from companion strings below ---

TOUCHBARITEM_H = r'''#ifndef PHP_APPKIT_NS_TOUCHBARITEM_H
#define PHP_APPKIT_NS_TOUCHBARITEM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_touchbaritem_create(const char *identifier);
uintptr_t ns_touchbaritem_wrap(void *item);
void ns_touchbaritem_destroy(uintptr_t item);
void *ns_touchbaritem_nstouchbaritem(uintptr_t item);

int ns_touchbaritem_get_identifier(uintptr_t item, char *out, int out_len);
void ns_touchbaritem_set_visibility_priority(uintptr_t item, float priority);
float ns_touchbaritem_get_visibility_priority(uintptr_t item);
int ns_touchbaritem_get_customization_label(uintptr_t item, char *out, int out_len);
int ns_touchbaritem_is_visible(uintptr_t item);
uintptr_t ns_touchbaritem_get_view(uintptr_t item);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TOUCHBARITEM_H */
'''

TOUCHBARITEM_M = r'''#import <AppKit/AppKit.h>
#import "ns-touchbaritem.h"
#import "ns-view.h"

int ns_copy_nsstring(NSString *text, char *out, int out_len)
{
    if (!out || out_len <= 0) {
        return 0;
    }
    if (!text) {
        out[0] = '\0';
        return 1;
    }
    return [text getCString:out maxLength:(NSUInteger)out_len encoding:NSUTF8StringEncoding] ? 1 : 0;
}

uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

NSTouchBarItem *ns_touchbaritem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTouchBarItem class]] ? (NSTouchBarItem *)obj : nil;
}

NSArray<NSString *> *ns_strings_from_c(const char **items, int count)
{
    NSMutableArray<NSString *> *arr = [NSMutableArray arrayWithCapacity:(NSUInteger)count];
    int i;
    for (i = 0; i < count; i++) {
        if (items && items[i]) {
            [arr addObject:[NSString stringWithUTF8String:items[i]]];
        }
    }
    return [arr copy];
}

uintptr_t ns_touchbaritem_create(const char *identifier)
{
    @autoreleasepool {
        if (@available(macOS 10.12.2, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.item";
            return ns_retain_obj([[NSTouchBarItem alloc] initWithIdentifier:ident]);
        }
        return 0;
    }
}

uintptr_t ns_touchbaritem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSTouchBarItem *obj = (__bridge NSTouchBarItem *)item;
        return [obj isKindOfClass:[NSTouchBarItem class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_touchbaritem_destroy(uintptr_t item)
{
    if (item) {
        CFRelease((void *)item);
    }
}

void *ns_touchbaritem_nstouchbaritem(uintptr_t item)
{
    NSTouchBarItem *obj = ns_touchbaritem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_touchbaritem_get_identifier(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSTouchBarItem *obj = ns_touchbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.identifier, out, out_len) : 0;
    }
}

void ns_touchbaritem_set_visibility_priority(uintptr_t item, float priority)
{
    @autoreleasepool {
        NSTouchBarItem *obj = ns_touchbaritem_from(item);
        if (obj) {
            obj.visibilityPriority = priority;
        }
    }
}

float ns_touchbaritem_get_visibility_priority(uintptr_t item)
{
    @autoreleasepool {
        NSTouchBarItem *obj = ns_touchbaritem_from(item);
        return obj ? obj.visibilityPriority : 0.0f;
    }
}

int ns_touchbaritem_get_customization_label(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSTouchBarItem *obj = ns_touchbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.customizationLabel, out, out_len) : 0;
    }
}

int ns_touchbaritem_is_visible(uintptr_t item)
{
    @autoreleasepool {
        NSTouchBarItem *obj = ns_touchbaritem_from(item);
        return obj && obj.visible ? 1 : 0;
    }
}

uintptr_t ns_touchbaritem_get_view(uintptr_t item)
{
    @autoreleasepool {
        NSTouchBarItem *obj = ns_touchbaritem_from(item);
        return obj && obj.view ? ns_view_wrap((__bridge void *)obj.view) : 0;
    }
}
'''

# Remaining large bodies are in the second part of this file - imported at runtime
from gen_touchbar_wave_bodies import (  # noqa: E402
    TOUCHBAR_H,
    TOUCHBAR_M,
    CUSTOM_H,
    CUSTOM_M,
    CANDIDATE_H,
    CANDIDATE_M,
    COLORPICKER_H,
    COLORPICKER_M,
    GROUP_H,
    GROUP_M,
    PICKER_H,
    PICKER_M,
    SHARING_H,
    SHARING_M,
    SLIDER_H,
    SLIDER_M,
    STEPPER_H,
    STEPPER_M,
    POPOVER_H,
    POPOVER_M,
    BUTTON_H,
    BUTTON_M,
    ZEP_TOUCHBARITEM,
    ZEP_TOUCHBAR,
    ZEP_CUSTOM,
    ZEP_CANDIDATE,
    ZEP_COLORPICKER,
    ZEP_GROUP,
    ZEP_PICKER,
    ZEP_SHARING,
    ZEP_SLIDER,
    ZEP_STEPPER,
    ZEP_POPOVER,
    ZEP_BUTTON,
)


def main() -> None:
    emit_objc()
    emit_zephir()
    emit_okf()
    patch_packaging()
    print("done")


if __name__ == "__main__":
    main()
