#!/usr/bin/env python3
"""Generate remaining text-system AppKit bindings (11 types + 3 zeps + docs)."""

from __future__ import annotations

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


def okf(ns_class: str, slug: str, header: str, description: str, rows: list[tuple[str, str]]) -> str:
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


COMMON_M = r'''
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


# ---------------------------------------------------------------------------
# NSSearchField
# ---------------------------------------------------------------------------
write(ROOT / "src/ns-searchfield.h", """#ifndef PHP_APPKIT_NS_SEARCHFIELD_H
#define PHP_APPKIT_NS_SEARCHFIELD_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_searchfield_create(double x, double y, double width, double height, const char *value);
void ns_searchfield_destroy(uintptr_t field);
void ns_searchfield_set_string(uintptr_t field, const char *value);
int ns_searchfield_get_string(uintptr_t field, char *out, int out_len);
void ns_searchfield_set_recent_searches(uintptr_t field, const char **items, int count);
int ns_searchfield_recent_searches_count(uintptr_t field);
int ns_searchfield_recent_search_at(uintptr_t field, int index, char *out, int out_len);
void ns_searchfield_set_recents_autosave_name(uintptr_t field, const char *name);
int ns_searchfield_get_recents_autosave_name(uintptr_t field, char *out, int out_len);
void ns_searchfield_set_sends_whole_search_string(uintptr_t field, int flag);
int ns_searchfield_sends_whole_search_string(uintptr_t field);
void ns_searchfield_set_maximum_recents(uintptr_t field, int maximum);
int ns_searchfield_maximum_recents(uintptr_t field);
void ns_searchfield_set_sends_search_string_immediately(uintptr_t field, int flag);
int ns_searchfield_sends_search_string_immediately(uintptr_t field);
int ns_searchfield_poll_change(uintptr_t field);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SEARCHFIELD_H */
""")

write(ROOT / "src/ns-searchfield.m", """#import <AppKit/AppKit.h>
#import "ns-searchfield.h"
#import "ns-view.h"
""" + COMMON_M + """
@interface NSPhpSearchField : NSSearchField <NSSearchFieldDelegate>
@property (nonatomic, assign) int pendingChange;
@end

@implementation NSPhpSearchField
- (void)controlTextDidChange:(NSNotification *)notification
{
    (void)notification;
    self.pendingChange = 1;
}
@end

static NSSearchField *ns_searchfield_view(uintptr_t field)
{
    void *ptr = ns_view_nsview(field);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSSearchField class]] ? (NSSearchField *)view : nil;
}

uintptr_t ns_searchfield_create(double x, double y, double width, double height, const char *value)
{
    if (width <= 0) {
        width = 160;
    }
    if (height <= 0) {
        height = 24;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSPhpSearchField *field = [[NSPhpSearchField alloc] initWithFrame:rect];
        [field setDelegate:field];
        [field setStringValue:value ? [NSString stringWithUTF8String:value] : @""];
        return ns_view_wrap((__bridge void *)field);
    }
}

void ns_searchfield_destroy(uintptr_t field)
{
    ns_view_destroy(field);
}

void ns_searchfield_set_string(uintptr_t field, const char *value)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        if (obj) {
            [obj setStringValue:value ? [NSString stringWithUTF8String:value] : @""];
        }
    }
}

int ns_searchfield_get_string(uintptr_t field, char *out, int out_len)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        return obj ? ns_copy_nsstring(obj.stringValue, out, out_len) : 0;
    }
}

void ns_searchfield_set_recent_searches(uintptr_t field, const char **items, int count)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
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

int ns_searchfield_recent_searches_count(uintptr_t field)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        return obj ? (int)obj.recentSearches.count : 0;
    }
}

int ns_searchfield_recent_search_at(uintptr_t field, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        if (!obj || index < 0 || index >= (int)obj.recentSearches.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.recentSearches[(NSUInteger)index], out, out_len);
    }
}

void ns_searchfield_set_recents_autosave_name(uintptr_t field, const char *name)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        if (obj) {
            obj.recentsAutosaveName = name ? [NSString stringWithUTF8String:name] : nil;
        }
    }
}

int ns_searchfield_get_recents_autosave_name(uintptr_t field, char *out, int out_len)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        return obj ? ns_copy_nsstring(obj.recentsAutosaveName, out, out_len) : 0;
    }
}

void ns_searchfield_set_sends_whole_search_string(uintptr_t field, int flag)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        if (obj) {
            obj.sendsWholeSearchString = flag ? YES : NO;
        }
    }
}

int ns_searchfield_sends_whole_search_string(uintptr_t field)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        return obj && obj.sendsWholeSearchString ? 1 : 0;
    }
}

void ns_searchfield_set_maximum_recents(uintptr_t field, int maximum)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        if (obj) {
            obj.maximumRecents = (NSInteger)maximum;
        }
    }
}

int ns_searchfield_maximum_recents(uintptr_t field)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        return obj ? (int)obj.maximumRecents : 0;
    }
}

void ns_searchfield_set_sends_search_string_immediately(uintptr_t field, int flag)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        if (obj) {
            obj.sendsSearchStringImmediately = flag ? YES : NO;
        }
    }
}

int ns_searchfield_sends_search_string_immediately(uintptr_t field)
{
    @autoreleasepool {
        NSSearchField *obj = ns_searchfield_view(field);
        return obj && obj.sendsSearchStringImmediately ? 1 : 0;
    }
}

int ns_searchfield_poll_change(uintptr_t field)
{
    void *ptr = ns_view_nsview(field);
    if (!ptr) {
        return 0;
    }
    @autoreleasepool {
        NSView *view = (__bridge NSView *)ptr;
        if (![view isKindOfClass:[NSPhpSearchField class]]) {
            return 0;
        }
        NSPhpSearchField *typed = (NSPhpSearchField *)view;
        if (typed.pendingChange != 1) {
            return 0;
        }
        typed.pendingChange = 0;
        return 1;
    }
}
""")

write(ROOT / "appkit/ns/nssearchfield/nssearchfield.zep", zep_ns("NSSearchField", "ns-searchfield.h") + r"""
/**
 * NSSearchField — search field with recents.
 */
class NSSearchField
{
    public static function create(int x, int y, int width, int height, string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_searchfield_create((double) x, (double) y, (double) width, (double) height, Z_STRVAL(value));
        }%
        return handle;
    }

    public static function destroy(int field) -> void
    {
        %{
            ns_searchfield_destroy((uintptr_t) field);
        }%
    }

    public static function setStringValue(int field, string value) -> void
    {
        %{
            ns_searchfield_set_string((uintptr_t) field, Z_STRVAL(value));
        }%
    }

    public static function getStringValue(int field) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_searchfield_get_string((uintptr_t) field, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setRecentSearches(int field, array searches) -> void
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
            ns_searchfield_set_recent_searches((uintptr_t) field, cnames, count);
        }%
    }

    public static function getRecentSearches(int field) -> array
    {
        array out = [];
        %{
            int count = ns_searchfield_recent_searches_count((uintptr_t) field);
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_searchfield_recent_search_at((uintptr_t) field, i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        }%
        return out;
    }

    public static function setRecentsAutosaveName(int field, string name) -> void
    {
        %{
            ns_searchfield_set_recents_autosave_name((uintptr_t) field, Z_STRVAL(name));
        }%
    }

    public static function getRecentsAutosaveName(int field) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_searchfield_get_recents_autosave_name((uintptr_t) field, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setSendsWholeSearchString(int field, bool flag) -> void
    {
        %{
            ns_searchfield_set_sends_whole_search_string((uintptr_t) field, flag ? 1 : 0);
        }%
    }

    public static function sendsWholeSearchString(int field) -> bool
    {
        bool result;
        %{
            result = ns_searchfield_sends_whole_search_string((uintptr_t) field) == 1;
        }%
        return result;
    }

    public static function setMaximumRecents(int field, int maximum) -> void
    {
        %{
            ns_searchfield_set_maximum_recents((uintptr_t) field, (int) maximum);
        }%
    }

    public static function maximumRecents(int field) -> int
    {
        int value;
        %{
            value = (zend_long) ns_searchfield_maximum_recents((uintptr_t) field);
        }%
        return value;
    }

    public static function setSendsSearchStringImmediately(int field, bool flag) -> void
    {
        %{
            ns_searchfield_set_sends_search_string_immediately((uintptr_t) field, flag ? 1 : 0);
        }%
    }

    public static function sendsSearchStringImmediately(int field) -> bool
    {
        bool result;
        %{
            result = ns_searchfield_sends_search_string_immediately((uintptr_t) field) == 1;
        }%
        return result;
    }

    public static function pollChange(int field) -> bool
    {
        bool result;
        %{
            result = ns_searchfield_poll_change((uintptr_t) field) == 1;
        }%
        return result;
    }
}
""")

write(ROOT / ".okf/api/nssearchfield.md", okf(
    "NSSearchField", "nssearchfield", "ns-searchfield.h",
    "NSSearchField with recents and change polling",
    [
        ("create / destroy", "view-box NSSearchField"),
        ("setStringValue / getStringValue", "stringValue"),
        ("recentSearches / recentsAutosaveName", "recents"),
        ("sendsWholeSearchString / maximumRecents / sendsSearchStringImmediately", "search behavior"),
        ("pollChange", "one-shot delegate change flag"),
    ],
))

print("batch: searchfield done")
