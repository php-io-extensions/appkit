#!/usr/bin/env python3
"""NSComboButton, NSTextFinder, NSSpellChecker, attachments, list, table, leftover zeps."""

from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def write(path: Path, content: str) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(content, encoding="utf-8")
    print(f"wrote {path.relative_to(ROOT)}")


def zep_ns(ns_class: str, header: str) -> str:
    return f"""namespace AppKit\\NS\\{ns_class};

%{{
#include "{header}"
#include <stdint.h>
}}%

"""


def okf(ns_class: str, slug: str, header: str, description: str, rows: list) -> str:
    table = "\n".join(f"| `{m}` | {maps} |" for m, maps in rows)
    return f"""---
type: CoreType
title: AppKit\\NS\\{ns_class}\\{ns_class}
description: {description}
resource: /appkit/ns/{slug}/{slug}.zep
tags: [appkit, api, {slug}]
status: draft
generated: {{ by: cursor-agent, at: "2026-08-15T12:30:00Z" }}
sources:
  - id: zep
    resource: /appkit/ns/{slug}/{slug}.zep
    title: {slug}.zep
  - id: h
    resource: /src/{header}
    title: {header}
  - id: m
    resource: /src/{header.replace('.h', '.m')}
    title: {header.replace('.h', '.m')}
---

# Schema

| Method | Maps to |
|--------|---------|
{table}
"""


COMMON = r'''
static int ns_copy_nsstring(NSString *text, char *out, int out_len)
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

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static void ns_release_handle(uintptr_t handle)
{
    if (handle) {
        CFRelease((void *)handle);
    }
}

static NSMenu *ns_menu_from_handle(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSMenu class]] ? (NSMenu *)obj : nil;
}
'''

write(ROOT / "src/ns-combobutton.h", """#ifndef PHP_APPKIT_NS_COMBOBUTTON_H
#define PHP_APPKIT_NS_COMBOBUTTON_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_COMBO_BUTTON_STYLE_SPLIT = 0,
    NS_COMBO_BUTTON_STYLE_UNIFIED = 1
} ns_combo_button_style;

uintptr_t ns_combobutton_create_with_title(double x, double y, double width, double height, const char *title, uintptr_t menu);
void ns_combobutton_destroy(uintptr_t button);
void ns_combobutton_set_title(uintptr_t button, const char *title);
int ns_combobutton_get_title(uintptr_t button, char *out, int out_len);
void ns_combobutton_set_image(uintptr_t button, uintptr_t image);
void ns_combobutton_set_menu(uintptr_t button, uintptr_t menu);
uintptr_t ns_combobutton_get_menu(uintptr_t button);
void ns_combobutton_set_style(uintptr_t button, int style);
int ns_combobutton_get_style(uintptr_t button);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_COMBOBUTTON_H */
""")

write(ROOT / "src/ns-combobutton.m", """#import <AppKit/AppKit.h>
#import "ns-combobutton.h"
#import "ns-view.h"
#import "ns-image.h"
""" + COMMON + """
static NSComboButton *ns_combobutton_view(uintptr_t button)
{
    void *ptr = ns_view_nsview(button);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSComboButton class]] ? (NSComboButton *)view : nil;
}

uintptr_t ns_combobutton_create_with_title(double x, double y, double width, double height, const char *title, uintptr_t menu)
{
    if (width <= 0) {
        width = 120;
    }
    if (height <= 0) {
        height = 24;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSComboButton *button = [[NSComboButton alloc] initWithFrame:rect];
        button.title = title ? [NSString stringWithUTF8String:title] : @"";
        button.menu = ns_menu_from_handle(menu);
        return ns_view_wrap((__bridge void *)button);
    }
}

void ns_combobutton_destroy(uintptr_t button)
{
    ns_view_destroy(button);
}

void ns_combobutton_set_title(uintptr_t button, const char *title)
{
    @autoreleasepool {
        NSComboButton *obj = ns_combobutton_view(button);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_combobutton_get_title(uintptr_t button, char *out, int out_len)
{
    @autoreleasepool {
        NSComboButton *obj = ns_combobutton_view(button);
        return obj ? ns_copy_nsstring(obj.title, out, out_len) : 0;
    }
}

void ns_combobutton_set_image(uintptr_t button, uintptr_t image)
{
    @autoreleasepool {
        NSComboButton *obj = ns_combobutton_view(button);
        if (obj) {
            obj.image = (__bridge NSImage *)ns_image_nsimage(image);
        }
    }
}

void ns_combobutton_set_menu(uintptr_t button, uintptr_t menu)
{
    @autoreleasepool {
        NSComboButton *obj = ns_combobutton_view(button);
        if (obj) {
            obj.menu = ns_menu_from_handle(menu);
        }
    }
}

uintptr_t ns_combobutton_get_menu(uintptr_t button)
{
    @autoreleasepool {
        NSComboButton *obj = ns_combobutton_view(button);
        return obj && obj.menu ? ns_retain_obj(obj.menu) : 0;
    }
}

void ns_combobutton_set_style(uintptr_t button, int style)
{
    @autoreleasepool {
        NSComboButton *obj = ns_combobutton_view(button);
        if (obj) {
            obj.style = (NSComboButtonStyle)style;
        }
    }
}

int ns_combobutton_get_style(uintptr_t button)
{
    @autoreleasepool {
        NSComboButton *obj = ns_combobutton_view(button);
        return obj ? (int)obj.style : 0;
    }
}
""")

write(ROOT / "appkit/ns/nscombobutton/nscombobutton.zep", zep_ns("NSComboButton", "ns-combobutton.h") + r"""
/**
 * NSComboButton — button with an attached menu.
 */
class NSComboButton
{
    public static function createWithTitle(int x, int y, int width, int height, string title = "", int menuHandle = 0) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_combobutton_create_with_title((double) x, (double) y, (double) width, (double) height, Z_STRVAL(title), (uintptr_t) menuHandle);
        }%
        return handle;
    }

    public static function destroy(int button) -> void
    {
        %{
            ns_combobutton_destroy((uintptr_t) button);
        }%
    }

    public static function setTitle(int button, string title) -> void
    {
        %{
            ns_combobutton_set_title((uintptr_t) button, Z_STRVAL(title));
        }%
    }

    public static function getTitle(int button) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_combobutton_get_title((uintptr_t) button, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setImage(int button, int imageHandle) -> void
    {
        %{
            ns_combobutton_set_image((uintptr_t) button, (uintptr_t) imageHandle);
        }%
    }

    public static function setMenu(int button, int menuHandle) -> void
    {
        %{
            ns_combobutton_set_menu((uintptr_t) button, (uintptr_t) menuHandle);
        }%
    }

    public static function getMenu(int button) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_combobutton_get_menu((uintptr_t) button);
        }%
        return handle;
    }

    public static function setStyle(int button, int style) -> void
    {
        %{
            ns_combobutton_set_style((uintptr_t) button, (int) style);
        }%
    }

    public static function getStyle(int button) -> int
    {
        int value;
        %{
            value = (zend_long) ns_combobutton_get_style((uintptr_t) button);
        }%
        return value;
    }
}
""")

write(ROOT / ".okf/api/nscombobutton.md", okf(
    "NSComboButton", "nscombobutton", "ns-combobutton.h",
    "NSComboButton title + menu control",
    [
        ("createWithTitle / destroy", "view-box NSComboButton"),
        ("setTitle / getTitle", "title"),
        ("setImage", "NSImage handle"),
        ("setMenu / getMenu", "NSMenu handle"),
        ("setStyle / getStyle", "NSComboButtonStyle (0 split, 1 unified)"),
    ],
))

write(ROOT / "src/ns-textfinder.h", """#ifndef PHP_APPKIT_NS_TEXTFINDER_H
#define PHP_APPKIT_NS_TEXTFINDER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_TEXTFINDER_ACTION_SHOW_FIND_INTERFACE = 1,
    NS_TEXTFINDER_ACTION_NEXT_MATCH = 2,
    NS_TEXTFINDER_ACTION_PREVIOUS_MATCH = 3,
    NS_TEXTFINDER_ACTION_REPLACE_ALL = 4,
    NS_TEXTFINDER_ACTION_REPLACE = 5,
    NS_TEXTFINDER_ACTION_REPLACE_AND_FIND = 6,
    NS_TEXTFINDER_ACTION_SET_SEARCH_STRING = 7,
    NS_TEXTFINDER_ACTION_REPLACE_ALL_IN_SELECTION = 8,
    NS_TEXTFINDER_ACTION_SELECT_ALL = 9,
    NS_TEXTFINDER_ACTION_SELECT_ALL_IN_SELECTION = 10,
    NS_TEXTFINDER_ACTION_HIDE_FIND_INTERFACE = 11,
    NS_TEXTFINDER_ACTION_SHOW_REPLACE_INTERFACE = 12,
    NS_TEXTFINDER_ACTION_HIDE_REPLACE_INTERFACE = 13
} ns_textfinder_action;

uintptr_t ns_textfinder_create(void);
uintptr_t ns_textfinder_wrap(void *finder);
void ns_textfinder_destroy(uintptr_t finder);
void *ns_textfinder_nstextfinder(uintptr_t finder);

void ns_textfinder_perform_action(uintptr_t finder, int action);
int ns_textfinder_validate_action(uintptr_t finder, int action);
void ns_textfinder_set_incremental_searching_enabled(uintptr_t finder, int flag);
int ns_textfinder_incremental_searching_enabled(uintptr_t finder);
void ns_textfinder_set_find_indicator_needs_update(uintptr_t finder, int flag);
int ns_textfinder_find_indicator_needs_update(uintptr_t finder);
void ns_textfinder_cancel_find_indicator(uintptr_t finder);
void ns_textfinder_note_client_string_will_change(uintptr_t finder);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTFINDER_H */
""")

write(ROOT / "src/ns-textfinder.m", """#import <AppKit/AppKit.h>
#import "ns-textfinder.h"
""" + COMMON + """
static NSTextFinder *ns_textfinder_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextFinder class]] ? (NSTextFinder *)obj : nil;
}

uintptr_t ns_textfinder_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSTextFinder alloc] init]);
    }
}

uintptr_t ns_textfinder_wrap(void *finder)
{
    if (!finder) {
        return 0;
    }
    @autoreleasepool {
        NSTextFinder *obj = (__bridge NSTextFinder *)finder;
        return [obj isKindOfClass:[NSTextFinder class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textfinder_destroy(uintptr_t finder)
{
    ns_release_handle(finder);
}

void *ns_textfinder_nstextfinder(uintptr_t finder)
{
    NSTextFinder *obj = ns_textfinder_from(finder);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_textfinder_perform_action(uintptr_t finder, int action)
{
    @autoreleasepool {
        NSTextFinder *obj = ns_textfinder_from(finder);
        if (obj) {
            [obj performAction:(NSTextFinderAction)action];
        }
    }
}

int ns_textfinder_validate_action(uintptr_t finder, int action)
{
    @autoreleasepool {
        NSTextFinder *obj = ns_textfinder_from(finder);
        return obj && [obj validateAction:(NSTextFinderAction)action] ? 1 : 0;
    }
}

void ns_textfinder_set_incremental_searching_enabled(uintptr_t finder, int flag)
{
    @autoreleasepool {
        NSTextFinder *obj = ns_textfinder_from(finder);
        if (obj) {
            obj.incrementalSearchingEnabled = flag ? YES : NO;
        }
    }
}

int ns_textfinder_incremental_searching_enabled(uintptr_t finder)
{
    @autoreleasepool {
        NSTextFinder *obj = ns_textfinder_from(finder);
        return obj && obj.incrementalSearchingEnabled ? 1 : 0;
    }
}

void ns_textfinder_set_find_indicator_needs_update(uintptr_t finder, int flag)
{
    @autoreleasepool {
        NSTextFinder *obj = ns_textfinder_from(finder);
        if (obj) {
            obj.findIndicatorNeedsUpdate = flag ? YES : NO;
        }
    }
}

int ns_textfinder_find_indicator_needs_update(uintptr_t finder)
{
    @autoreleasepool {
        NSTextFinder *obj = ns_textfinder_from(finder);
        return obj && obj.findIndicatorNeedsUpdate ? 1 : 0;
    }
}

void ns_textfinder_cancel_find_indicator(uintptr_t finder)
{
    @autoreleasepool {
        NSTextFinder *obj = ns_textfinder_from(finder);
        if (obj) {
            [obj cancelFindIndicator];
        }
    }
}

void ns_textfinder_note_client_string_will_change(uintptr_t finder)
{
    @autoreleasepool {
        NSTextFinder *obj = ns_textfinder_from(finder);
        if (obj) {
            [obj noteClientStringWillChange];
        }
    }
}
""")

write(ROOT / "appkit/ns/nstextfinder/nstextfinder.zep", zep_ns("NSTextFinder", "ns-textfinder.h") + r"""
/**
 * NSTextFinder — find / replace controller.
 */
class NSTextFinder
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textfinder_create();
        }%
        return handle;
    }

    public static function wrap(int nsTextFinderPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textfinder_wrap((void *)(uintptr_t) nsTextFinderPtr);
        }%
        return handle;
    }

    public static function destroy(int finder) -> void
    {
        %{
            ns_textfinder_destroy((uintptr_t) finder);
        }%
    }

    public static function performAction(int finder, int action) -> void
    {
        %{
            ns_textfinder_perform_action((uintptr_t) finder, (int) action);
        }%
    }

    public static function validateAction(int finder, int action) -> bool
    {
        bool result;
        %{
            result = ns_textfinder_validate_action((uintptr_t) finder, (int) action) == 1;
        }%
        return result;
    }

    public static function setIncrementalSearchingEnabled(int finder, bool flag) -> void
    {
        %{
            ns_textfinder_set_incremental_searching_enabled((uintptr_t) finder, flag ? 1 : 0);
        }%
    }

    public static function incrementalSearchingEnabled(int finder) -> bool
    {
        bool result;
        %{
            result = ns_textfinder_incremental_searching_enabled((uintptr_t) finder) == 1;
        }%
        return result;
    }

    public static function setFindIndicatorNeedsUpdate(int finder, bool flag) -> void
    {
        %{
            ns_textfinder_set_find_indicator_needs_update((uintptr_t) finder, flag ? 1 : 0);
        }%
    }

    public static function findIndicatorNeedsUpdate(int finder) -> bool
    {
        bool result;
        %{
            result = ns_textfinder_find_indicator_needs_update((uintptr_t) finder) == 1;
        }%
        return result;
    }

    public static function cancelFindIndicator(int finder) -> void
    {
        %{
            ns_textfinder_cancel_find_indicator((uintptr_t) finder);
        }%
    }

    public static function noteClientStringWillChange(int finder) -> void
    {
        %{
            ns_textfinder_note_client_string_will_change((uintptr_t) finder);
        }%
    }
}
""")

write(ROOT / ".okf/api/nstextfinder.md", okf(
    "NSTextFinder", "nstextfinder", "ns-textfinder.h",
    "NSTextFinder find/replace controller",
    [
        ("create / wrap / destroy", "ownership"),
        ("performAction / validateAction", "NSTextFinderAction int enum"),
        ("incrementalSearchingEnabled", "incremental search"),
        ("findIndicatorNeedsUpdate / cancelFindIndicator", "find indicator"),
        ("noteClientStringWillChange", "client string mutation"),
    ],
))

print("combo + finder done")
