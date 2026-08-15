#!/usr/bin/env python3
"""NSSearchFieldCell + NSTokenField + NSTokenFieldCell."""

from pathlib import Path
import importlib.util

ROOT = Path(__file__).resolve().parents[1]
spec = importlib.util.spec_from_file_location("rem", ROOT / "scripts" / "gen-text-binds-remaining.py")
# avoid importing remaining (it writes on import). Duplicate helpers:

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

write(ROOT / "src/ns-searchfieldcell.h", """#ifndef PHP_APPKIT_NS_SEARCHFIELDCELL_H
#define PHP_APPKIT_NS_SEARCHFIELDCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_searchfieldcell_create_text(const char *string);
uintptr_t ns_searchfieldcell_wrap(void *cell);
void ns_searchfieldcell_destroy(uintptr_t cell);
void *ns_searchfieldcell_nssearchfieldcell(uintptr_t cell);

void ns_searchfieldcell_set_title(uintptr_t cell, const char *title);
int ns_searchfieldcell_get_title(uintptr_t cell, char *out, int out_len);
void ns_searchfieldcell_set_string(uintptr_t cell, const char *value);
int ns_searchfieldcell_get_string(uintptr_t cell, char *out, int out_len);
void ns_searchfieldcell_set_placeholder_string(uintptr_t cell, const char *placeholder);
int ns_searchfieldcell_get_placeholder_string(uintptr_t cell, char *out, int out_len);

void ns_searchfieldcell_set_recent_searches(uintptr_t cell, const char **items, int count);
int ns_searchfieldcell_recent_searches_count(uintptr_t cell);
int ns_searchfieldcell_recent_search_at(uintptr_t cell, int index, char *out, int out_len);
void ns_searchfieldcell_set_recents_autosave_name(uintptr_t cell, const char *name);
int ns_searchfieldcell_get_recents_autosave_name(uintptr_t cell, char *out, int out_len);
void ns_searchfieldcell_set_sends_whole_search_string(uintptr_t cell, int flag);
int ns_searchfieldcell_sends_whole_search_string(uintptr_t cell);
void ns_searchfieldcell_set_maximum_recents(uintptr_t cell, int maximum);
int ns_searchfieldcell_maximum_recents(uintptr_t cell);
void ns_searchfieldcell_set_sends_search_string_immediately(uintptr_t cell, int flag);
int ns_searchfieldcell_sends_search_string_immediately(uintptr_t cell);

uintptr_t ns_searchfieldcell_search_button_cell(uintptr_t cell);
uintptr_t ns_searchfieldcell_cancel_button_cell(uintptr_t cell);
void ns_searchfieldcell_reset_search_button_cell(uintptr_t cell);
void ns_searchfieldcell_reset_cancel_button_cell(uintptr_t cell);
void ns_searchfieldcell_set_search_menu_template(uintptr_t cell, uintptr_t menu);
uintptr_t ns_searchfieldcell_search_menu_template(uintptr_t cell);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SEARCHFIELDCELL_H */
""")

write(ROOT / "src/ns-searchfieldcell.m", """#import <AppKit/AppKit.h>
#import "ns-searchfieldcell.h"
""" + COMMON + """
static NSSearchFieldCell *ns_searchfieldcell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSSearchFieldCell class]] ? (NSSearchFieldCell *)obj : nil;
}

uintptr_t ns_searchfieldcell_create_text(const char *string)
{
    @autoreleasepool {
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        return ns_retain_obj([[NSSearchFieldCell alloc] initTextCell:title]);
    }
}

uintptr_t ns_searchfieldcell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSSearchFieldCell *obj = (__bridge NSSearchFieldCell *)cell;
        return [obj isKindOfClass:[NSSearchFieldCell class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_searchfieldcell_destroy(uintptr_t cell)
{
    ns_release_handle(cell);
}

void *ns_searchfieldcell_nssearchfieldcell(uintptr_t cell)
{
    NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_searchfieldcell_set_title(uintptr_t cell, const char *title)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_searchfieldcell_get_title(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj ? ns_copy_nsstring(obj.title, out, out_len) : 0;
    }
}

void ns_searchfieldcell_set_string(uintptr_t cell, const char *value)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (obj) {
            obj.stringValue = value ? [NSString stringWithUTF8String:value] : @"";
        }
    }
}

int ns_searchfieldcell_get_string(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj ? ns_copy_nsstring(obj.stringValue, out, out_len) : 0;
    }
}

void ns_searchfieldcell_set_placeholder_string(uintptr_t cell, const char *placeholder)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (obj) {
            obj.placeholderString = placeholder ? [NSString stringWithUTF8String:placeholder] : nil;
        }
    }
}

int ns_searchfieldcell_get_placeholder_string(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj ? ns_copy_nsstring(obj.placeholderString, out, out_len) : 0;
    }
}

void ns_searchfieldcell_set_recent_searches(uintptr_t cell, const char **items, int count)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (!obj) {
            return;
        }
        NSMutableArray<NSString *> *list = [NSMutableArray array];
        int i;
        for (i = 0; i < count; i++) {
            if (items && items[i]) {
                [list addObject:[NSString stringWithUTF8String:items[i]]];
            }
        }
        obj.recentSearches = list;
    }
}

int ns_searchfieldcell_recent_searches_count(uintptr_t cell)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj ? (int)obj.recentSearches.count : 0;
    }
}

int ns_searchfieldcell_recent_search_at(uintptr_t cell, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (!obj || index < 0 || index >= (int)obj.recentSearches.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.recentSearches[(NSUInteger)index], out, out_len);
    }
}

void ns_searchfieldcell_set_recents_autosave_name(uintptr_t cell, const char *name)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (obj) {
            obj.recentsAutosaveName = name ? [NSString stringWithUTF8String:name] : nil;
        }
    }
}

int ns_searchfieldcell_get_recents_autosave_name(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj ? ns_copy_nsstring(obj.recentsAutosaveName, out, out_len) : 0;
    }
}

void ns_searchfieldcell_set_sends_whole_search_string(uintptr_t cell, int flag)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (obj) {
            obj.sendsWholeSearchString = flag ? YES : NO;
        }
    }
}

int ns_searchfieldcell_sends_whole_search_string(uintptr_t cell)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj && obj.sendsWholeSearchString ? 1 : 0;
    }
}

void ns_searchfieldcell_set_maximum_recents(uintptr_t cell, int maximum)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (obj) {
            obj.maximumRecents = (NSInteger)maximum;
        }
    }
}

int ns_searchfieldcell_maximum_recents(uintptr_t cell)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj ? (int)obj.maximumRecents : 0;
    }
}

void ns_searchfieldcell_set_sends_search_string_immediately(uintptr_t cell, int flag)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (obj) {
            obj.sendsSearchStringImmediately = flag ? YES : NO;
        }
    }
}

int ns_searchfieldcell_sends_search_string_immediately(uintptr_t cell)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj && obj.sendsSearchStringImmediately ? 1 : 0;
    }
}

uintptr_t ns_searchfieldcell_search_button_cell(uintptr_t cell)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj && obj.searchButtonCell ? ns_retain_obj(obj.searchButtonCell) : 0;
    }
}

uintptr_t ns_searchfieldcell_cancel_button_cell(uintptr_t cell)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj && obj.cancelButtonCell ? ns_retain_obj(obj.cancelButtonCell) : 0;
    }
}

void ns_searchfieldcell_reset_search_button_cell(uintptr_t cell)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (obj) {
            [obj resetSearchButtonCell];
        }
    }
}

void ns_searchfieldcell_reset_cancel_button_cell(uintptr_t cell)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (obj) {
            [obj resetCancelButtonCell];
        }
    }
}

void ns_searchfieldcell_set_search_menu_template(uintptr_t cell, uintptr_t menu)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        if (obj) {
            obj.searchMenuTemplate = ns_menu_from_handle(menu);
        }
    }
}

uintptr_t ns_searchfieldcell_search_menu_template(uintptr_t cell)
{
    @autoreleasepool {
        NSSearchFieldCell *obj = ns_searchfieldcell_from(cell);
        return obj && obj.searchMenuTemplate ? ns_retain_obj(obj.searchMenuTemplate) : 0;
    }
}
""")

write(ROOT / "appkit/ns/nssearchfieldcell/nssearchfieldcell.zep", zep_ns("NSSearchFieldCell", "ns-searchfieldcell.h") + r"""
/**
 * NSSearchFieldCell — cell used by NSSearchField.
 */
class NSSearchFieldCell
{
    public static function createText(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_searchfieldcell_create_text(Z_STRVAL(value));
        }%
        return handle;
    }

    public static function wrap(int nsSearchFieldCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_searchfieldcell_wrap((void *)(uintptr_t) nsSearchFieldCellPtr);
        }%
        return handle;
    }

    public static function destroy(int cell) -> void
    {
        %{
            ns_searchfieldcell_destroy((uintptr_t) cell);
        }%
    }

    public static function nsSearchFieldCell(int cell) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_searchfieldcell_nssearchfieldcell((uintptr_t) cell);
        }%
        return ptr;
    }

    public static function setTitle(int cell, string title) -> void
    {
        %{
            ns_searchfieldcell_set_title((uintptr_t) cell, Z_STRVAL(title));
        }%
    }

    public static function getTitle(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_searchfieldcell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setStringValue(int cell, string value) -> void
    {
        %{
            ns_searchfieldcell_set_string((uintptr_t) cell, Z_STRVAL(value));
        }%
    }

    public static function getStringValue(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_searchfieldcell_get_string((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setPlaceholderString(int cell, string placeholder) -> void
    {
        %{
            ns_searchfieldcell_set_placeholder_string((uintptr_t) cell, Z_STRVAL(placeholder));
        }%
    }

    public static function getPlaceholderString(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_searchfieldcell_get_placeholder_string((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setRecentSearches(int cell, array searches) -> void
    {
        %{
            zval *item;
            const char *cnames[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(searches), item) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(item);
                cnames[count++] = Z_STRVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            ns_searchfieldcell_set_recent_searches((uintptr_t) cell, cnames, count);
        }%
    }

    public static function getRecentSearches(int cell) -> array
    {
        array out = [];
        %{
            int count = ns_searchfieldcell_recent_searches_count((uintptr_t) cell);
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_searchfieldcell_recent_search_at((uintptr_t) cell, i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        }%
        return out;
    }

    public static function setRecentsAutosaveName(int cell, string name) -> void
    {
        %{
            ns_searchfieldcell_set_recents_autosave_name((uintptr_t) cell, Z_STRVAL(name));
        }%
    }

    public static function getRecentsAutosaveName(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_searchfieldcell_get_recents_autosave_name((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setSendsWholeSearchString(int cell, bool flag) -> void
    {
        %{
            ns_searchfieldcell_set_sends_whole_search_string((uintptr_t) cell, flag ? 1 : 0);
        }%
    }

    public static function sendsWholeSearchString(int cell) -> bool
    {
        bool result;
        %{
            result = ns_searchfieldcell_sends_whole_search_string((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function setMaximumRecents(int cell, int maximum) -> void
    {
        %{
            ns_searchfieldcell_set_maximum_recents((uintptr_t) cell, (int) maximum);
        }%
    }

    public static function maximumRecents(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_searchfieldcell_maximum_recents((uintptr_t) cell);
        }%
        return value;
    }

    public static function setSendsSearchStringImmediately(int cell, bool flag) -> void
    {
        %{
            ns_searchfieldcell_set_sends_search_string_immediately((uintptr_t) cell, flag ? 1 : 0);
        }%
    }

    public static function sendsSearchStringImmediately(int cell) -> bool
    {
        bool result;
        %{
            result = ns_searchfieldcell_sends_search_string_immediately((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function searchButtonCell(int cell) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_searchfieldcell_search_button_cell((uintptr_t) cell);
        }%
        return handle;
    }

    public static function cancelButtonCell(int cell) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_searchfieldcell_cancel_button_cell((uintptr_t) cell);
        }%
        return handle;
    }

    public static function resetSearchButtonCell(int cell) -> void
    {
        %{
            ns_searchfieldcell_reset_search_button_cell((uintptr_t) cell);
        }%
    }

    public static function resetCancelButtonCell(int cell) -> void
    {
        %{
            ns_searchfieldcell_reset_cancel_button_cell((uintptr_t) cell);
        }%
    }

    public static function setSearchMenuTemplate(int cell, int menu) -> void
    {
        %{
            ns_searchfieldcell_set_search_menu_template((uintptr_t) cell, (uintptr_t) menu);
        }%
    }

    public static function searchMenuTemplate(int cell) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_searchfieldcell_search_menu_template((uintptr_t) cell);
        }%
        return handle;
    }
}
""")

write(ROOT / ".okf/api/nssearchfieldcell.md", okf(
    "NSSearchFieldCell", "nssearchfieldcell", "ns-searchfieldcell.h",
    "NSSearchFieldCell used by NSSearchField",
    [
        ("createText / wrap / destroy / nsSearchFieldCell", "ownership (initTextCell:)"),
        ("title / stringValue / placeholderString", "text"),
        ("recentSearches / recentsAutosaveName", "recents"),
        ("sendsWholeSearchString / maximumRecents / sendsSearchStringImmediately", "search behavior"),
        ("searchButtonCell / cancelButtonCell / reset*", "button cells"),
        ("searchMenuTemplate", "recents menu"),
    ],
))

# Token field
write(ROOT / "src/ns-tokenfield.h", """#ifndef PHP_APPKIT_NS_TOKENFIELD_H
#define PHP_APPKIT_NS_TOKENFIELD_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_TOKEN_STYLE_DEFAULT = 0,
    NS_TOKEN_STYLE_NONE = 1,
    NS_TOKEN_STYLE_ROUNDED = 2,
    NS_TOKEN_STYLE_SQUARED = 3,
    NS_TOKEN_STYLE_PLAIN_SQUARED = 4
} ns_token_style;

uintptr_t ns_tokenfield_create(double x, double y, double width, double height, const char *value);
void ns_tokenfield_destroy(uintptr_t field);
void ns_tokenfield_set_string(uintptr_t field, const char *value);
int ns_tokenfield_get_string(uintptr_t field, char *out, int out_len);
void ns_tokenfield_set_token_style(uintptr_t field, int style);
int ns_tokenfield_get_token_style(uintptr_t field);
void ns_tokenfield_set_completion_delay(uintptr_t field, double delay);
double ns_tokenfield_get_completion_delay(uintptr_t field);
double ns_tokenfield_default_completion_delay(void);
int ns_tokenfield_poll_change(uintptr_t field);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TOKENFIELD_H */
""")

write(ROOT / "src/ns-tokenfield.m", """#import <AppKit/AppKit.h>
#import "ns-tokenfield.h"
#import "ns-view.h"
""" + COMMON + """
@interface NSPhpTokenField : NSTokenField <NSTokenFieldDelegate>
@property (nonatomic, assign) int pendingChange;
@end

@implementation NSPhpTokenField
- (void)controlTextDidChange:(NSNotification *)notification
{
    (void)notification;
    self.pendingChange = 1;
}
@end

static NSTokenField *ns_tokenfield_view(uintptr_t field)
{
    void *ptr = ns_view_nsview(field);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSTokenField class]] ? (NSTokenField *)view : nil;
}

uintptr_t ns_tokenfield_create(double x, double y, double width, double height, const char *value)
{
    if (width <= 0) {
        width = 160;
    }
    if (height <= 0) {
        height = 24;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSPhpTokenField *field = [[NSPhpTokenField alloc] initWithFrame:rect];
        [field setDelegate:field];
        [field setStringValue:value ? [NSString stringWithUTF8String:value] : @""];
        return ns_view_wrap((__bridge void *)field);
    }
}

void ns_tokenfield_destroy(uintptr_t field)
{
    ns_view_destroy(field);
}

void ns_tokenfield_set_string(uintptr_t field, const char *value)
{
    @autoreleasepool {
        NSTokenField *obj = ns_tokenfield_view(field);
        if (obj) {
            [obj setStringValue:value ? [NSString stringWithUTF8String:value] : @""];
        }
    }
}

int ns_tokenfield_get_string(uintptr_t field, char *out, int out_len)
{
    @autoreleasepool {
        NSTokenField *obj = ns_tokenfield_view(field);
        return obj ? ns_copy_nsstring(obj.stringValue, out, out_len) : 0;
    }
}

void ns_tokenfield_set_token_style(uintptr_t field, int style)
{
    @autoreleasepool {
        NSTokenField *obj = ns_tokenfield_view(field);
        if (obj) {
            obj.tokenStyle = (NSTokenStyle)style;
        }
    }
}

int ns_tokenfield_get_token_style(uintptr_t field)
{
    @autoreleasepool {
        NSTokenField *obj = ns_tokenfield_view(field);
        return obj ? (int)obj.tokenStyle : 0;
    }
}

void ns_tokenfield_set_completion_delay(uintptr_t field, double delay)
{
    @autoreleasepool {
        NSTokenField *obj = ns_tokenfield_view(field);
        if (obj) {
            obj.completionDelay = delay;
        }
    }
}

double ns_tokenfield_get_completion_delay(uintptr_t field)
{
    @autoreleasepool {
        NSTokenField *obj = ns_tokenfield_view(field);
        return obj ? obj.completionDelay : 0.0;
    }
}

double ns_tokenfield_default_completion_delay(void)
{
    return [NSTokenField defaultCompletionDelay];
}

int ns_tokenfield_poll_change(uintptr_t field)
{
    void *ptr = ns_view_nsview(field);
    if (!ptr) {
        return 0;
    }
    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpTokenField class]]) {
            return 0;
        }
        NSPhpTokenField *typed = (NSPhpTokenField *)view;
        if (typed.pendingChange != 1) {
            return 0;
        }
        typed.pendingChange = 0;
        return 1;
    }
}
""")

write(ROOT / "appkit/ns/nstokenfield/nstokenfield.zep", zep_ns("NSTokenField", "ns-tokenfield.h") + r"""
/**
 * NSTokenField — tokenizing text field.
 */
class NSTokenField
{
    public static function create(int x, int y, int width, int height, string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tokenfield_create((double) x, (double) y, (double) width, (double) height, Z_STRVAL(value));
        }%
        return handle;
    }

    public static function destroy(int field) -> void
    {
        %{
            ns_tokenfield_destroy((uintptr_t) field);
        }%
    }

    public static function setStringValue(int field, string value) -> void
    {
        %{
            ns_tokenfield_set_string((uintptr_t) field, Z_STRVAL(value));
        }%
    }

    public static function getStringValue(int field) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_tokenfield_get_string((uintptr_t) field, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setTokenStyle(int field, int style) -> void
    {
        %{
            ns_tokenfield_set_token_style((uintptr_t) field, (int) style);
        }%
    }

    public static function getTokenStyle(int field) -> int
    {
        int value;
        %{
            value = (zend_long) ns_tokenfield_get_token_style((uintptr_t) field);
        }%
        return value;
    }

    public static function setCompletionDelay(int field, float delay) -> void
    {
        %{
            ns_tokenfield_set_completion_delay((uintptr_t) field, (double) delay);
        }%
    }

    public static function getCompletionDelay(int field) -> float
    {
        double value;
        %{
            value = ns_tokenfield_get_completion_delay((uintptr_t) field);
        }%
        return (float) value;
    }

    public static function defaultCompletionDelay() -> float
    {
        double value;
        %{
            value = ns_tokenfield_default_completion_delay();
        }%
        return (float) value;
    }

    public static function pollChange(int field) -> bool
    {
        bool result;
        %{
            result = ns_tokenfield_poll_change((uintptr_t) field) == 1;
        }%
        return result;
    }
}
""")

write(ROOT / ".okf/api/nstokenfield.md", okf(
    "NSTokenField", "nstokenfield", "ns-tokenfield.h",
    "NSTokenField tokenizing text field",
    [
        ("create / destroy", "view-box NSTokenField"),
        ("setStringValue / getStringValue", "stringValue"),
        ("tokenStyle", "NSTokenStyle int enum"),
        ("completionDelay / defaultCompletionDelay", "completion timing"),
        ("pollChange", "one-shot delegate change flag"),
    ],
))

write(ROOT / "src/ns-tokenfieldcell.h", """#ifndef PHP_APPKIT_NS_TOKENFIELDCELL_H
#define PHP_APPKIT_NS_TOKENFIELDCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_tokenfieldcell_create_text(const char *string);
uintptr_t ns_tokenfieldcell_wrap(void *cell);
void ns_tokenfieldcell_destroy(uintptr_t cell);
void *ns_tokenfieldcell_nstokenfieldcell(uintptr_t cell);

void ns_tokenfieldcell_set_string(uintptr_t cell, const char *value);
int ns_tokenfieldcell_get_string(uintptr_t cell, char *out, int out_len);
void ns_tokenfieldcell_set_token_style(uintptr_t cell, int style);
int ns_tokenfieldcell_get_token_style(uintptr_t cell);
void ns_tokenfieldcell_set_completion_delay(uintptr_t cell, double delay);
double ns_tokenfieldcell_get_completion_delay(uintptr_t cell);
double ns_tokenfieldcell_default_completion_delay(void);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TOKENFIELDCELL_H */
""")

write(ROOT / "src/ns-tokenfieldcell.m", """#import <AppKit/AppKit.h>
#import "ns-tokenfieldcell.h"
""" + COMMON + """
static NSTokenFieldCell *ns_tokenfieldcell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTokenFieldCell class]] ? (NSTokenFieldCell *)obj : nil;
}

uintptr_t ns_tokenfieldcell_create_text(const char *string)
{
    @autoreleasepool {
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        return ns_retain_obj([[NSTokenFieldCell alloc] initTextCell:title]);
    }
}

uintptr_t ns_tokenfieldcell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSTokenFieldCell *obj = (__bridge NSTokenFieldCell *)cell;
        return [obj isKindOfClass:[NSTokenFieldCell class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_tokenfieldcell_destroy(uintptr_t cell)
{
    ns_release_handle(cell);
}

void *ns_tokenfieldcell_nstokenfieldcell(uintptr_t cell)
{
    NSTokenFieldCell *obj = ns_tokenfieldcell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_tokenfieldcell_set_string(uintptr_t cell, const char *value)
{
    @autoreleasepool {
        NSTokenFieldCell *obj = ns_tokenfieldcell_from(cell);
        if (obj) {
            obj.stringValue = value ? [NSString stringWithUTF8String:value] : @"";
        }
    }
}

int ns_tokenfieldcell_get_string(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSTokenFieldCell *obj = ns_tokenfieldcell_from(cell);
        return obj ? ns_copy_nsstring(obj.stringValue, out, out_len) : 0;
    }
}

void ns_tokenfieldcell_set_token_style(uintptr_t cell, int style)
{
    @autoreleasepool {
        NSTokenFieldCell *obj = ns_tokenfieldcell_from(cell);
        if (obj) {
            obj.tokenStyle = (NSTokenStyle)style;
        }
    }
}

int ns_tokenfieldcell_get_token_style(uintptr_t cell)
{
    @autoreleasepool {
        NSTokenFieldCell *obj = ns_tokenfieldcell_from(cell);
        return obj ? (int)obj.tokenStyle : 0;
    }
}

void ns_tokenfieldcell_set_completion_delay(uintptr_t cell, double delay)
{
    @autoreleasepool {
        NSTokenFieldCell *obj = ns_tokenfieldcell_from(cell);
        if (obj) {
            obj.completionDelay = delay;
        }
    }
}

double ns_tokenfieldcell_get_completion_delay(uintptr_t cell)
{
    @autoreleasepool {
        NSTokenFieldCell *obj = ns_tokenfieldcell_from(cell);
        return obj ? obj.completionDelay : 0.0;
    }
}

double ns_tokenfieldcell_default_completion_delay(void)
{
    return [NSTokenFieldCell defaultCompletionDelay];
}
""")

write(ROOT / "appkit/ns/nstokenfieldcell/nstokenfieldcell.zep", zep_ns("NSTokenFieldCell", "ns-tokenfieldcell.h") + r"""
/**
 * NSTokenFieldCell — cell used by NSTokenField.
 */
class NSTokenFieldCell
{
    public static function createText(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tokenfieldcell_create_text(Z_STRVAL(value));
        }%
        return handle;
    }

    public static function wrap(int nsTokenFieldCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_tokenfieldcell_wrap((void *)(uintptr_t) nsTokenFieldCellPtr);
        }%
        return handle;
    }

    public static function destroy(int cell) -> void
    {
        %{
            ns_tokenfieldcell_destroy((uintptr_t) cell);
        }%
    }

    public static function nsTokenFieldCell(int cell) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_tokenfieldcell_nstokenfieldcell((uintptr_t) cell);
        }%
        return ptr;
    }

    public static function setStringValue(int cell, string value) -> void
    {
        %{
            ns_tokenfieldcell_set_string((uintptr_t) cell, Z_STRVAL(value));
        }%
    }

    public static function getStringValue(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_tokenfieldcell_get_string((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setTokenStyle(int cell, int style) -> void
    {
        %{
            ns_tokenfieldcell_set_token_style((uintptr_t) cell, (int) style);
        }%
    }

    public static function getTokenStyle(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_tokenfieldcell_get_token_style((uintptr_t) cell);
        }%
        return value;
    }

    public static function setCompletionDelay(int cell, float delay) -> void
    {
        %{
            ns_tokenfieldcell_set_completion_delay((uintptr_t) cell, (double) delay);
        }%
    }

    public static function getCompletionDelay(int cell) -> float
    {
        double value;
        %{
            value = ns_tokenfieldcell_get_completion_delay((uintptr_t) cell);
        }%
        return (float) value;
    }

    public static function defaultCompletionDelay() -> float
    {
        double value;
        %{
            value = ns_tokenfieldcell_default_completion_delay();
        }%
        return (float) value;
    }
}
""")

write(ROOT / ".okf/api/nstokenfieldcell.md", okf(
    "NSTokenFieldCell", "nstokenfieldcell", "ns-tokenfieldcell.h",
    "NSTokenFieldCell used by NSTokenField",
    [
        ("createText / wrap / destroy / nsTokenFieldCell", "ownership"),
        ("setStringValue / getStringValue", "stringValue"),
        ("tokenStyle", "NSTokenStyle int enum"),
        ("completionDelay / defaultCompletionDelay", "completion timing"),
    ],
))

print("cells + tokenfield done")
