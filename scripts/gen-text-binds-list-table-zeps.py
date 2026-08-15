#!/usr/bin/env python3
"""NSTextAttachmentCell, NSTextList, NSTextTable, leftover zeps."""

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
'''

write(ROOT / "src/ns-textattachmentcell.h", """#ifndef PHP_APPKIT_NS_TEXTATTACHMENTCELL_H
#define PHP_APPKIT_NS_TEXTATTACHMENTCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textattachmentcell_create(void);
uintptr_t ns_textattachmentcell_wrap(void *cell);
void ns_textattachmentcell_destroy(uintptr_t cell);
void *ns_textattachmentcell_nstextattachmentcell(uintptr_t cell);

void ns_textattachmentcell_set_attachment(uintptr_t cell, uintptr_t attachment);
uintptr_t ns_textattachmentcell_get_attachment(uintptr_t cell);
void ns_textattachmentcell_cell_size(uintptr_t cell, double *width, double *height);
void ns_textattachmentcell_cell_baseline_offset(uintptr_t cell, double *x, double *y);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTATTACHMENTCELL_H */
""")

write(ROOT / "src/ns-textattachmentcell.m", """#import <AppKit/AppKit.h>
#import "ns-textattachmentcell.h"
#import "ns-textattachment.h"
""" + COMMON + """
static NSTextAttachmentCell *ns_textattachmentcell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextAttachmentCell class]] ? (NSTextAttachmentCell *)obj : nil;
}

uintptr_t ns_textattachmentcell_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSTextAttachmentCell alloc] init]);
    }
}

uintptr_t ns_textattachmentcell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSTextAttachmentCell *obj = (__bridge NSTextAttachmentCell *)cell;
        return [obj isKindOfClass:[NSTextAttachmentCell class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textattachmentcell_destroy(uintptr_t cell)
{
    ns_release_handle(cell);
}

void *ns_textattachmentcell_nstextattachmentcell(uintptr_t cell)
{
    NSTextAttachmentCell *obj = ns_textattachmentcell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_textattachmentcell_set_attachment(uintptr_t cell, uintptr_t attachment)
{
    @autoreleasepool {
        NSTextAttachmentCell *obj = ns_textattachmentcell_from(cell);
        NSTextAttachment *att = (__bridge NSTextAttachment *)ns_textattachment_nstextattachment(attachment);
        if (obj) {
            obj.attachment = att;
        }
    }
}

uintptr_t ns_textattachmentcell_get_attachment(uintptr_t cell)
{
    @autoreleasepool {
        NSTextAttachmentCell *obj = ns_textattachmentcell_from(cell);
        return obj && obj.attachment ? ns_textattachment_wrap((__bridge void *)obj.attachment) : 0;
    }
}

void ns_textattachmentcell_cell_size(uintptr_t cell, double *width, double *height)
{
    if (width) {
        *width = 0;
    }
    if (height) {
        *height = 0;
    }
    @autoreleasepool {
        NSTextAttachmentCell *obj = ns_textattachmentcell_from(cell);
        if (!obj) {
            return;
        }
        NSSize size = [obj cellSize];
        if (width) {
            *width = size.width;
        }
        if (height) {
            *height = size.height;
        }
    }
}

void ns_textattachmentcell_cell_baseline_offset(uintptr_t cell, double *x, double *y)
{
    if (x) {
        *x = 0;
    }
    if (y) {
        *y = 0;
    }
    @autoreleasepool {
        NSTextAttachmentCell *obj = ns_textattachmentcell_from(cell);
        if (!obj) {
            return;
        }
        NSPoint point = [obj cellBaselineOffset];
        if (x) {
            *x = point.x;
        }
        if (y) {
            *y = point.y;
        }
    }
}
""")

write(ROOT / "appkit/ns/nstextattachmentcell/nstextattachmentcell.zep", zep_ns("NSTextAttachmentCell", "ns-textattachmentcell.h") + r"""
/**
 * NSTextAttachmentCell — cell drawn for an NSTextAttachment.
 */
class NSTextAttachmentCell
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textattachmentcell_create();
        }%
        return handle;
    }

    public static function wrap(int nsTextAttachmentCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textattachmentcell_wrap((void *)(uintptr_t) nsTextAttachmentCellPtr);
        }%
        return handle;
    }

    public static function destroy(int cell) -> void
    {
        %{
            ns_textattachmentcell_destroy((uintptr_t) cell);
        }%
    }

    public static function setAttachment(int cell, int attachment) -> void
    {
        %{
            ns_textattachmentcell_set_attachment((uintptr_t) cell, (uintptr_t) attachment);
        }%
    }

    public static function getAttachment(int cell) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textattachmentcell_get_attachment((uintptr_t) cell);
        }%
        return handle;
    }

    /**
     * @return array [width, height]
     */
    public static function cellSize(int cell) -> array
    {
        array out = [];
        %{
            double w = 0.0, h = 0.0;
            ns_textattachmentcell_cell_size((uintptr_t) cell, &w, &h);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        }%
        return out;
    }

    /**
     * @return array [x, y]
     */
    public static function cellBaselineOffset(int cell) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0;
            ns_textattachmentcell_cell_baseline_offset((uintptr_t) cell, &x, &y);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
        }%
        return out;
    }
}
""")

write(ROOT / ".okf/api/nstextattachmentcell.md", okf(
    "NSTextAttachmentCell", "nstextattachmentcell", "ns-textattachmentcell.h",
    "NSTextAttachmentCell drawn for an attachment",
    [
        ("create / wrap / destroy", "ownership"),
        ("setAttachment / getAttachment", "NSTextAttachment handle"),
        ("cellSize", "[width, height]"),
        ("cellBaselineOffset", "[x, y]"),
    ],
))

write(ROOT / "src/ns-textlist.h", """#ifndef PHP_APPKIT_NS_TEXTLIST_H
#define PHP_APPKIT_NS_TEXTLIST_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textlist_create(const char *marker_format, int options, int starting_item_number);
uintptr_t ns_textlist_wrap(void *list);
void ns_textlist_destroy(uintptr_t list);
void *ns_textlist_nstextlist(uintptr_t list);

int ns_textlist_marker_for_item_number(uintptr_t list, int item_number, char *out, int out_len);
int ns_textlist_is_ordered(uintptr_t list);
void ns_textlist_set_starting_item_number(uintptr_t list, int number);
int ns_textlist_get_starting_item_number(uintptr_t list);
int ns_textlist_get_marker_format(uintptr_t list, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTLIST_H */
""")

write(ROOT / "src/ns-textlist.m", """#import <AppKit/AppKit.h>
#import "ns-textlist.h"
""" + COMMON + """
static NSTextList *ns_textlist_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextList class]] ? (NSTextList *)obj : nil;
}

uintptr_t ns_textlist_create(const char *marker_format, int options, int starting_item_number)
{
    @autoreleasepool {
        NSString *format = marker_format ? [NSString stringWithUTF8String:marker_format] : @"{decimal}.";
        NSTextList *list = [[NSTextList alloc] initWithMarkerFormat:format options:(NSUInteger)options startingItemNumber:(NSInteger)starting_item_number];
        return ns_retain_obj(list);
    }
}

uintptr_t ns_textlist_wrap(void *list)
{
    if (!list) {
        return 0;
    }
    @autoreleasepool {
        NSTextList *obj = (__bridge NSTextList *)list;
        return [obj isKindOfClass:[NSTextList class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textlist_destroy(uintptr_t list)
{
    ns_release_handle(list);
}

void *ns_textlist_nstextlist(uintptr_t list)
{
    NSTextList *obj = ns_textlist_from(list);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_textlist_marker_for_item_number(uintptr_t list, int item_number, char *out, int out_len)
{
    @autoreleasepool {
        NSTextList *obj = ns_textlist_from(list);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring([obj markerForItemNumber:(NSInteger)item_number], out, out_len);
    }
}

int ns_textlist_is_ordered(uintptr_t list)
{
    @autoreleasepool {
        NSTextList *obj = ns_textlist_from(list);
        return obj && obj.isOrdered ? 1 : 0;
    }
}

void ns_textlist_set_starting_item_number(uintptr_t list, int number)
{
    @autoreleasepool {
        NSTextList *obj = ns_textlist_from(list);
        if (obj) {
            obj.startingItemNumber = (NSInteger)number;
        }
    }
}

int ns_textlist_get_starting_item_number(uintptr_t list)
{
    @autoreleasepool {
        NSTextList *obj = ns_textlist_from(list);
        return obj ? (int)obj.startingItemNumber : 0;
    }
}

int ns_textlist_get_marker_format(uintptr_t list, char *out, int out_len)
{
    @autoreleasepool {
        NSTextList *obj = ns_textlist_from(list);
        return obj ? ns_copy_nsstring(obj.markerFormat, out, out_len) : 0;
    }
}
""")

write(ROOT / "appkit/ns/nstextlist/nstextlist.zep", zep_ns("NSTextList", "ns-textlist.h") + r"""
/**
 * NSTextList — list marker format for attributed text.
 */
class NSTextList
{
    public static function create(string markerFormat, int options = 0, int startingItemNumber = 1) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textlist_create(Z_STRVAL(markerFormat), (int) options, (int) startingItemNumber);
        }%
        return handle;
    }

    public static function wrap(int nsTextListPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textlist_wrap((void *)(uintptr_t) nsTextListPtr);
        }%
        return handle;
    }

    public static function destroy(int list) -> void
    {
        %{
            ns_textlist_destroy((uintptr_t) list);
        }%
    }

    public static function markerForItemNumber(int list, int itemNumber) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_textlist_marker_for_item_number((uintptr_t) list, (int) itemNumber, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function isOrdered(int list) -> bool
    {
        bool result;
        %{
            result = ns_textlist_is_ordered((uintptr_t) list) == 1;
        }%
        return result;
    }

    public static function setStartingItemNumber(int list, int number) -> void
    {
        %{
            ns_textlist_set_starting_item_number((uintptr_t) list, (int) number);
        }%
    }

    public static function getStartingItemNumber(int list) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textlist_get_starting_item_number((uintptr_t) list);
        }%
        return value;
    }

    public static function getMarkerFormat(int list) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_textlist_get_marker_format((uintptr_t) list, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}
""")

write(ROOT / ".okf/api/nstextlist.md", okf(
    "NSTextList", "nstextlist", "ns-textlist.h",
    "NSTextList marker format for attributed text",
    [
        ("create / wrap / destroy", "ownership"),
        ("markerForItemNumber", "resolved marker string"),
        ("isOrdered", "ordered vs unordered"),
        ("startingItemNumber / markerFormat", "list identity"),
    ],
))

write(ROOT / "src/ns-texttable.h", """#ifndef PHP_APPKIT_NS_TEXTTABLE_H
#define PHP_APPKIT_NS_TEXTTABLE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_TEXTTABLE_LAYOUT_AUTOMATIC = 0,
    NS_TEXTTABLE_LAYOUT_FIXED = 1
} ns_texttable_layout_algorithm;

typedef enum {
    NS_TEXTBLOCK_VALUE_ABSOLUTE = 0,
    NS_TEXTBLOCK_VALUE_PERCENTAGE = 1
} ns_textblock_value_type;

typedef enum {
    NS_TEXTBLOCK_VERTICAL_ALIGNMENT_TOP = 0,
    NS_TEXTBLOCK_VERTICAL_ALIGNMENT_MIDDLE = 1,
    NS_TEXTBLOCK_VERTICAL_ALIGNMENT_BOTTOM = 2,
    NS_TEXTBLOCK_VERTICAL_ALIGNMENT_BASELINE = 3
} ns_textblock_vertical_alignment;

uintptr_t ns_texttable_create(void);
uintptr_t ns_texttable_wrap(void *table);
void ns_texttable_destroy(uintptr_t table);
void *ns_texttable_nstexttable(uintptr_t table);

void ns_texttable_set_number_of_columns(uintptr_t table, int columns);
int ns_texttable_get_number_of_columns(uintptr_t table);
void ns_texttable_set_layout_algorithm(uintptr_t table, int algorithm);
int ns_texttable_get_layout_algorithm(uintptr_t table);
void ns_texttable_set_collapses_borders(uintptr_t table, int flag);
int ns_texttable_collapses_borders(uintptr_t table);
void ns_texttable_set_hides_empty_cells(uintptr_t table, int flag);
int ns_texttable_hides_empty_cells(uintptr_t table);
void ns_texttable_set_content_width(uintptr_t table, double width, int type);
void ns_texttable_get_content_width(uintptr_t table, double *width, int *type);
void ns_texttable_set_vertical_alignment(uintptr_t table, int alignment);
int ns_texttable_get_vertical_alignment(uintptr_t table);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTTABLE_H */
""")

write(ROOT / "src/ns-texttable.m", """#import <AppKit/AppKit.h>
#import "ns-texttable.h"
""" + COMMON + """
static NSTextTable *ns_texttable_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextTable class]] ? (NSTextTable *)obj : nil;
}

uintptr_t ns_texttable_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSTextTable alloc] init]);
    }
}

uintptr_t ns_texttable_wrap(void *table)
{
    if (!table) {
        return 0;
    }
    @autoreleasepool {
        NSTextTable *obj = (__bridge NSTextTable *)table;
        return [obj isKindOfClass:[NSTextTable class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_texttable_destroy(uintptr_t table)
{
    ns_release_handle(table);
}

void *ns_texttable_nstexttable(uintptr_t table)
{
    NSTextTable *obj = ns_texttable_from(table);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_texttable_set_number_of_columns(uintptr_t table, int columns)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        if (obj) {
            obj.numberOfColumns = (NSUInteger)columns;
        }
    }
}

int ns_texttable_get_number_of_columns(uintptr_t table)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        return obj ? (int)obj.numberOfColumns : 0;
    }
}

void ns_texttable_set_layout_algorithm(uintptr_t table, int algorithm)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        if (obj) {
            obj.layoutAlgorithm = (NSTextTableLayoutAlgorithm)algorithm;
        }
    }
}

int ns_texttable_get_layout_algorithm(uintptr_t table)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        return obj ? (int)obj.layoutAlgorithm : 0;
    }
}

void ns_texttable_set_collapses_borders(uintptr_t table, int flag)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        if (obj) {
            obj.collapsesBorders = flag ? YES : NO;
        }
    }
}

int ns_texttable_collapses_borders(uintptr_t table)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        return obj && obj.collapsesBorders ? 1 : 0;
    }
}

void ns_texttable_set_hides_empty_cells(uintptr_t table, int flag)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        if (obj) {
            obj.hidesEmptyCells = flag ? YES : NO;
        }
    }
}

int ns_texttable_hides_empty_cells(uintptr_t table)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        return obj && obj.hidesEmptyCells ? 1 : 0;
    }
}

void ns_texttable_set_content_width(uintptr_t table, double width, int type)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        if (obj) {
            [obj setContentWidth:(CGFloat)width type:(NSTextBlockValueType)type];
        }
    }
}

void ns_texttable_get_content_width(uintptr_t table, double *width, int *type)
{
    if (width) {
        *width = 0;
    }
    if (type) {
        *type = 0;
    }
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        if (!obj) {
            return;
        }
        if (width) {
            *width = obj.contentWidth;
        }
        if (type) {
            *type = (int)obj.contentWidthValueType;
        }
    }
}

void ns_texttable_set_vertical_alignment(uintptr_t table, int alignment)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        if (obj) {
            obj.verticalAlignment = (NSTextBlockVerticalAlignment)alignment;
        }
    }
}

int ns_texttable_get_vertical_alignment(uintptr_t table)
{
    @autoreleasepool {
        NSTextTable *obj = ns_texttable_from(table);
        return obj ? (int)obj.verticalAlignment : 0;
    }
}
""")

write(ROOT / "appkit/ns/nstexttable/nstexttable.zep", zep_ns("NSTextTable", "ns-texttable.h") + r"""
/**
 * NSTextTable — table block for attributed text.
 */
class NSTextTable
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_texttable_create();
        }%
        return handle;
    }

    public static function wrap(int nsTextTablePtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_texttable_wrap((void *)(uintptr_t) nsTextTablePtr);
        }%
        return handle;
    }

    public static function destroy(int table) -> void
    {
        %{
            ns_texttable_destroy((uintptr_t) table);
        }%
    }

    public static function setNumberOfColumns(int table, int columns) -> void
    {
        %{
            ns_texttable_set_number_of_columns((uintptr_t) table, (int) columns);
        }%
    }

    public static function getNumberOfColumns(int table) -> int
    {
        int value;
        %{
            value = (zend_long) ns_texttable_get_number_of_columns((uintptr_t) table);
        }%
        return value;
    }

    public static function setLayoutAlgorithm(int table, int algorithm) -> void
    {
        %{
            ns_texttable_set_layout_algorithm((uintptr_t) table, (int) algorithm);
        }%
    }

    public static function getLayoutAlgorithm(int table) -> int
    {
        int value;
        %{
            value = (zend_long) ns_texttable_get_layout_algorithm((uintptr_t) table);
        }%
        return value;
    }

    public static function setCollapsesBorders(int table, bool flag) -> void
    {
        %{
            ns_texttable_set_collapses_borders((uintptr_t) table, flag ? 1 : 0);
        }%
    }

    public static function collapsesBorders(int table) -> bool
    {
        bool result;
        %{
            result = ns_texttable_collapses_borders((uintptr_t) table) == 1;
        }%
        return result;
    }

    public static function setHidesEmptyCells(int table, bool flag) -> void
    {
        %{
            ns_texttable_set_hides_empty_cells((uintptr_t) table, flag ? 1 : 0);
        }%
    }

    public static function hidesEmptyCells(int table) -> bool
    {
        bool result;
        %{
            result = ns_texttable_hides_empty_cells((uintptr_t) table) == 1;
        }%
        return result;
    }

    public static function setContentWidth(int table, float width, int type) -> void
    {
        %{
            ns_texttable_set_content_width((uintptr_t) table, (double) width, (int) type);
        }%
    }

    /**
     * @return array [width, type]
     */
    public static function getContentWidth(int table) -> array
    {
        array out = [];
        %{
            double width = 0.0;
            int type = 0;
            ns_texttable_get_content_width((uintptr_t) table, &width, &type);
            add_next_index_double(&out, width);
            add_next_index_long(&out, type);
        }%
        return out;
    }

    public static function setVerticalAlignment(int table, int alignment) -> void
    {
        %{
            ns_texttable_set_vertical_alignment((uintptr_t) table, (int) alignment);
        }%
    }

    public static function getVerticalAlignment(int table) -> int
    {
        int value;
        %{
            value = (zend_long) ns_texttable_get_vertical_alignment((uintptr_t) table);
        }%
        return value;
    }
}
""")

write(ROOT / ".okf/api/nstexttable.md", okf(
    "NSTextTable", "nstexttable", "ns-texttable.h",
    "NSTextTable table block for attributed text",
    [
        ("create / wrap / destroy", "ownership"),
        ("numberOfColumns", "columns"),
        ("layoutAlgorithm", "0 automatic, 1 fixed"),
        ("collapsesBorders / hidesEmptyCells", "chrome"),
        ("setContentWidth / getContentWidth", "width + NSTextBlockValueType"),
        ("verticalAlignment", "NSTextBlockVerticalAlignment"),
    ],
))

# Leftover zeps + nstextcontainer zep + okf for already-done C
write(ROOT / "appkit/ns/nstextcontainer/nstextcontainer.zep", zep_ns("NSTextContainer", "ns-textcontainer.h") + r"""
/**
 * NSTextContainer — region where text is laid out.
 */
class NSTextContainer
{
    public static function create(float width, float height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textcontainer_create((double) width, (double) height);
        }%
        return handle;
    }

    public static function wrap(int nsTextContainerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textcontainer_wrap((void *)(uintptr_t) nsTextContainerPtr);
        }%
        return handle;
    }

    public static function destroy(int container) -> void
    {
        %{
            ns_textcontainer_destroy((uintptr_t) container);
        }%
    }

    public static function nsTextContainer(int container) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_textcontainer_nstextcontainer((uintptr_t) container);
        }%
        return ptr;
    }

    public static function setSize(int container, float width, float height) -> void
    {
        %{
            ns_textcontainer_set_size((uintptr_t) container, (double) width, (double) height);
        }%
    }

    /**
     * @return array [width, height]
     */
    public static function getSize(int container) -> array
    {
        array out = [];
        %{
            double w = 0.0, h = 0.0;
            ns_textcontainer_get_size((uintptr_t) container, &w, &h);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        }%
        return out;
    }

    public static function setLineBreakMode(int container, int mode) -> void
    {
        %{
            ns_textcontainer_set_line_break_mode((uintptr_t) container, (int) mode);
        }%
    }

    public static function getLineBreakMode(int container) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textcontainer_get_line_break_mode((uintptr_t) container);
        }%
        return value;
    }

    public static function setLineFragmentPadding(int container, float padding) -> void
    {
        %{
            ns_textcontainer_set_line_fragment_padding((uintptr_t) container, (double) padding);
        }%
    }

    public static function getLineFragmentPadding(int container) -> float
    {
        double value;
        %{
            value = ns_textcontainer_get_line_fragment_padding((uintptr_t) container);
        }%
        return (float) value;
    }

    public static function setMaximumNumberOfLines(int container, int lines) -> void
    {
        %{
            ns_textcontainer_set_maximum_number_of_lines((uintptr_t) container, (int) lines);
        }%
    }

    public static function getMaximumNumberOfLines(int container) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textcontainer_get_maximum_number_of_lines((uintptr_t) container);
        }%
        return value;
    }

    public static function setWidthTracksTextView(int container, bool flag) -> void
    {
        %{
            ns_textcontainer_set_width_tracks_text_view((uintptr_t) container, flag ? 1 : 0);
        }%
    }

    public static function widthTracksTextView(int container) -> bool
    {
        bool result;
        %{
            result = ns_textcontainer_width_tracks_text_view((uintptr_t) container) == 1;
        }%
        return result;
    }

    public static function setHeightTracksTextView(int container, bool flag) -> void
    {
        %{
            ns_textcontainer_set_height_tracks_text_view((uintptr_t) container, flag ? 1 : 0);
        }%
    }

    public static function heightTracksTextView(int container) -> bool
    {
        bool result;
        %{
            result = ns_textcontainer_height_tracks_text_view((uintptr_t) container) == 1;
        }%
        return result;
    }

    public static function isSimpleRectangularTextContainer(int container) -> bool
    {
        bool result;
        %{
            result = ns_textcontainer_is_simple_rectangular((uintptr_t) container) == 1;
        }%
        return result;
    }

    public static function replaceLayoutManager(int container, int layoutManager) -> void
    {
        %{
            ns_textcontainer_replace_layout_manager((uintptr_t) container, (uintptr_t) layoutManager);
        }%
    }
}
""")

write(ROOT / ".okf/api/nstextcontainer.md", okf(
    "NSTextContainer", "nstextcontainer", "ns-textcontainer.h",
    "NSTextContainer layout region",
    [
        ("create / wrap / destroy / nsTextContainer", "ownership"),
        ("setSize / getSize", "container size"),
        ("lineBreakMode / lineFragmentPadding / maximumNumberOfLines", "layout"),
        ("widthTracksTextView / heightTracksTextView", "text view tracking"),
        ("isSimpleRectangularTextContainer / replaceLayoutManager", "geometry"),
    ],
))

write(ROOT / "appkit/ns/nslayoutmanager/nslayoutmanager.zep", zep_ns("NSLayoutManager", "ns-layoutmanager.h") + r"""
/**
 * NSLayoutManager — maps text storage into text containers.
 */
class NSLayoutManager
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutmanager_create();
        }%
        return handle;
    }

    public static function wrap(int nsLayoutManagerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutmanager_wrap((void *)(uintptr_t) nsLayoutManagerPtr);
        }%
        return handle;
    }

    public static function destroy(int manager) -> void
    {
        %{
            ns_layoutmanager_destroy((uintptr_t) manager);
        }%
    }

    public static function nsLayoutManager(int manager) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_layoutmanager_nslayoutmanager((uintptr_t) manager);
        }%
        return ptr;
    }

    public static function replaceTextStorage(int manager, int storage) -> void
    {
        %{
            ns_layoutmanager_replace_text_storage((uintptr_t) manager, (uintptr_t) storage);
        }%
    }

    public static function addTextContainer(int manager, int container) -> void
    {
        %{
            ns_layoutmanager_add_text_container((uintptr_t) manager, (uintptr_t) container);
        }%
    }

    public static function removeTextContainerAtIndex(int manager, int index) -> void
    {
        %{
            ns_layoutmanager_remove_text_container_at_index((uintptr_t) manager, (int) index);
        }%
    }

    public static function textContainersCount(int manager) -> int
    {
        int value;
        %{
            value = (zend_long) ns_layoutmanager_text_containers_count((uintptr_t) manager);
        }%
        return value;
    }

    public static function textContainerChangedGeometry(int manager, int container) -> void
    {
        %{
            ns_layoutmanager_text_container_changed_geometry((uintptr_t) manager, (uintptr_t) container);
        }%
    }

    public static function setShowsInvisibleCharacters(int manager, bool flag) -> void
    {
        %{
            ns_layoutmanager_set_shows_invisible_characters((uintptr_t) manager, flag ? 1 : 0);
        }%
    }

    public static function showsInvisibleCharacters(int manager) -> bool
    {
        bool result;
        %{
            result = ns_layoutmanager_shows_invisible_characters((uintptr_t) manager) == 1;
        }%
        return result;
    }

    public static function setShowsControlCharacters(int manager, bool flag) -> void
    {
        %{
            ns_layoutmanager_set_shows_control_characters((uintptr_t) manager, flag ? 1 : 0);
        }%
    }

    public static function showsControlCharacters(int manager) -> bool
    {
        bool result;
        %{
            result = ns_layoutmanager_shows_control_characters((uintptr_t) manager) == 1;
        }%
        return result;
    }

    public static function setUsesDefaultHyphenation(int manager, bool flag) -> void
    {
        %{
            ns_layoutmanager_set_uses_default_hyphenation((uintptr_t) manager, flag ? 1 : 0);
        }%
    }

    public static function usesDefaultHyphenation(int manager) -> bool
    {
        bool result;
        %{
            result = ns_layoutmanager_uses_default_hyphenation((uintptr_t) manager) == 1;
        }%
        return result;
    }

    public static function setDefaultFont(int manager, int font) -> void
    {
        %{
            ns_layoutmanager_set_default_font((uintptr_t) manager, (uintptr_t) font);
        }%
    }

    public static function defaultFont(int manager) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_layoutmanager_default_font((uintptr_t) manager);
        }%
        return handle;
    }
}
""")

write(ROOT / ".okf/api/nslayoutmanager.md", okf(
    "NSLayoutManager", "nslayoutmanager", "ns-layoutmanager.h",
    "NSLayoutManager maps storage into containers",
    [
        ("create / wrap / destroy / nsLayoutManager", "ownership"),
        ("replaceTextStorage / addTextContainer / removeTextContainerAtIndex", "graph"),
        ("textContainersCount / textContainerChangedGeometry", "containers"),
        ("showsInvisibleCharacters / showsControlCharacters / usesDefaultHyphenation", "display"),
        ("defaultFont", "fallback font handle"),
    ],
))

write(ROOT / "appkit/ns/nstextstorage/nstextstorage.zep", zep_ns("NSTextStorage", "ns-textstorage.h") + r"""
/**
 * NSTextStorage — mutable attributed string backing layout.
 */
class NSTextStorage
{
    public static function create(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textstorage_create(Z_STRVAL(value));
        }%
        return handle;
    }

    public static function wrap(int nsTextStoragePtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textstorage_wrap((void *)(uintptr_t) nsTextStoragePtr);
        }%
        return handle;
    }

    public static function destroy(int storage) -> void
    {
        %{
            ns_textstorage_destroy((uintptr_t) storage);
        }%
    }

    public static function nsTextStorage(int storage) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_textstorage_nstextstorage((uintptr_t) storage);
        }%
        return ptr;
    }

    public static function setString(int storage, string value) -> void
    {
        %{
            ns_textstorage_set_string((uintptr_t) storage, Z_STRVAL(value));
        }%
    }

    public static function getString(int storage) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_textstorage_get_string((uintptr_t) storage, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function addLayoutManager(int storage, int manager) -> void
    {
        %{
            ns_textstorage_add_layout_manager((uintptr_t) storage, (uintptr_t) manager);
        }%
    }

    public static function removeLayoutManager(int storage, int manager) -> void
    {
        %{
            ns_textstorage_remove_layout_manager((uintptr_t) storage, (uintptr_t) manager);
        }%
    }

    public static function layoutManagersCount(int storage) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textstorage_layout_managers_count((uintptr_t) storage);
        }%
        return value;
    }

    public static function editedMask(int storage) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textstorage_edited_mask((uintptr_t) storage);
        }%
        return value;
    }

    /**
     * @return array [location, length]
     */
    public static function getEditedRange(int storage) -> array
    {
        array out = [];
        %{
            int location = 0, length = 0;
            ns_textstorage_get_edited_range((uintptr_t) storage, &location, &length);
            add_next_index_long(&out, location);
            add_next_index_long(&out, length);
        }%
        return out;
    }

    public static function changeInLength(int storage) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textstorage_change_in_length((uintptr_t) storage);
        }%
        return value;
    }

    public static function beginEditing(int storage) -> void
    {
        %{
            ns_textstorage_begin_editing((uintptr_t) storage);
        }%
    }

    public static function endEditing(int storage) -> void
    {
        %{
            ns_textstorage_end_editing((uintptr_t) storage);
        }%
    }

    public static function processEditing(int storage) -> void
    {
        %{
            ns_textstorage_process_editing((uintptr_t) storage);
        }%
    }

    public static function setFixesAttributesLazily(int storage, bool flag) -> void
    {
        %{
            ns_textstorage_set_fixes_attributes_lazily((uintptr_t) storage, flag ? 1 : 0);
        }%
    }

    public static function fixesAttributesLazily(int storage) -> bool
    {
        bool result;
        %{
            result = ns_textstorage_fixes_attributes_lazily((uintptr_t) storage) == 1;
        }%
        return result;
    }
}
""")

write(ROOT / ".okf/api/nstextstorage.md", okf(
    "NSTextStorage", "nstextstorage", "ns-textstorage.h",
    "NSTextStorage mutable attributed string",
    [
        ("create / wrap / destroy / nsTextStorage", "ownership"),
        ("setString / getString", "plain string"),
        ("addLayoutManager / removeLayoutManager / layoutManagersCount", "managers"),
        ("editedMask / getEditedRange / changeInLength", "edit state"),
        ("beginEditing / endEditing / processEditing", "batched edits"),
        ("fixesAttributesLazily", "lazy attributes"),
    ],
))

write(ROOT / "appkit/ns/nstextinputcontext/nstextinputcontext.zep", zep_ns("NSTextInputContext", "ns-textinputcontext.h") + r"""
/**
 * NSTextInputContext — input method / marked text context.
 */
class NSTextInputContext
{
    public static function current() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textinputcontext_current();
        }%
        return handle;
    }

    public static function create(int clientPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textinputcontext_create((void *)(uintptr_t) clientPtr);
        }%
        return handle;
    }

    public static function wrap(int nsTextInputContextPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textinputcontext_wrap((void *)(uintptr_t) nsTextInputContextPtr);
        }%
        return handle;
    }

    public static function destroy(int context) -> void
    {
        %{
            ns_textinputcontext_destroy((uintptr_t) context);
        }%
    }

    public static function nsTextInputContext(int context) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_textinputcontext_nstextinputcontext((uintptr_t) context);
        }%
        return ptr;
    }

    public static function client(int context) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_textinputcontext_client((uintptr_t) context);
        }%
        return ptr;
    }

    public static function setAcceptsGlyphInfo(int context, bool flag) -> void
    {
        %{
            ns_textinputcontext_set_accepts_glyph_info((uintptr_t) context, flag ? 1 : 0);
        }%
    }

    public static function acceptsGlyphInfo(int context) -> bool
    {
        bool result;
        %{
            result = ns_textinputcontext_accepts_glyph_info((uintptr_t) context) == 1;
        }%
        return result;
    }

    public static function activate(int context) -> void
    {
        %{
            ns_textinputcontext_activate((uintptr_t) context);
        }%
    }

    public static function deactivate(int context) -> void
    {
        %{
            ns_textinputcontext_deactivate((uintptr_t) context);
        }%
    }

    public static function handleEvent(int context, int nseventPtr) -> bool
    {
        bool result;
        %{
            result = ns_textinputcontext_handle_event((uintptr_t) context, (void *)(uintptr_t) nseventPtr) == 1;
        }%
        return result;
    }

    public static function discardMarkedText(int context) -> void
    {
        %{
            ns_textinputcontext_discard_marked_text((uintptr_t) context);
        }%
    }

    public static function invalidateCharacterCoordinates(int context) -> void
    {
        %{
            ns_textinputcontext_invalidate_character_coordinates((uintptr_t) context);
        }%
    }
}
""")

write(ROOT / ".okf/api/nstextinputcontext.md", okf(
    "NSTextInputContext", "nstextinputcontext", "ns-textinputcontext.h",
    "NSTextInputContext input method context",
    [
        ("current / create / wrap / destroy", "ownership"),
        ("client / acceptsGlyphInfo", "client"),
        ("activate / deactivate / handleEvent", "IME session"),
        ("discardMarkedText / invalidateCharacterCoordinates", "marked text"),
    ],
))

print("list/table/leftover zeps done")
