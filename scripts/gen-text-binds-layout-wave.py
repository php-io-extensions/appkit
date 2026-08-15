#!/usr/bin/env python3
"""Generate TextKit layout wave bindings (15 types)."""

from __future__ import annotations

import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]

NEW_SOURCES = [
    "src/ns-textblock.m",
    "src/ns-paragraphstyle.m",
    "src/ns-typesetter.m",
    "src/ns-atstypesetter.m",
    "src/ns-glyphgenerator.m",
    "src/ns-textlayoutmanager.m",
    "src/ns-textcontentmanager.m",
    "src/ns-textcontentstorage.m",
    "src/ns-textlayoutfragment.m",
    "src/ns-textlinefragment.m",
    "src/ns-textelement.m",
    "src/ns-textparagraph.m",
    "src/ns-textselection.m",
    "src/ns-textviewportlayoutcontroller.m",
    "src/ns-adaptiveimageglyph.m",
]

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

static NSColor *ns_color_from_handle(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSColor class]] ? (NSColor *)obj : nil;
}
'''


def write(path: Path, content: str) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(content, encoding="utf-8")
    print(f"wrote {path.relative_to(ROOT)}")


def zep_ns(ns_class: str, header: str, doc: str) -> str:
    return f"""namespace AppKit\\NS\\{ns_class};

%{{
#include "{header}"
#include <stdint.h>
}}%


/**
 * {doc}
 */
class {ns_class}
"""


def okf(ns_class: str, slug: str, header: str, description: str, rows: list[tuple[str, str]], extra: str = "") -> str:
    table = "\n".join(f"| `{m}` | {maps} |" for m, maps in rows)
    body = extra + "\n" if extra else ""
    return f"""---
type: CoreType
title: AppKit\\NS\\{ns_class}\\{ns_class}
description: {description}
resource: /appkit/ns/{slug}/{slug}.zep
tags: [appkit, api, {slug}, textkit]
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
{body}"""


# ---------------------------------------------------------------------------
# NSTextBlock
# ---------------------------------------------------------------------------
write(ROOT / "src/ns-textblock.h", """#ifndef PHP_APPKIT_NS_TEXTBLOCK_H
#define PHP_APPKIT_NS_TEXTBLOCK_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_TEXTBLOCK_DIMENSION_WIDTH = 0,
    NS_TEXTBLOCK_DIMENSION_MINIMUM_WIDTH = 1,
    NS_TEXTBLOCK_DIMENSION_MAXIMUM_WIDTH = 2,
    NS_TEXTBLOCK_DIMENSION_HEIGHT = 4,
    NS_TEXTBLOCK_DIMENSION_MINIMUM_HEIGHT = 5,
    NS_TEXTBLOCK_DIMENSION_MAXIMUM_HEIGHT = 6
} ns_textblock_dimension;

typedef enum {
    NS_TEXTBLOCK_LAYER_PADDING = -1,
    NS_TEXTBLOCK_LAYER_BORDER = 0,
    NS_TEXTBLOCK_LAYER_MARGIN = 1
} ns_textblock_layer;

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

uintptr_t ns_textblock_create(void);
uintptr_t ns_textblock_wrap(void *block);
void ns_textblock_destroy(uintptr_t block);
void *ns_textblock_nstextblock(uintptr_t block);

void ns_textblock_set_value(uintptr_t block, double val, int type, int dimension);
double ns_textblock_value_for_dimension(uintptr_t block, int dimension);
int ns_textblock_value_type_for_dimension(uintptr_t block, int dimension);
void ns_textblock_set_content_width(uintptr_t block, double width, int type);
double ns_textblock_content_width(uintptr_t block);
int ns_textblock_content_width_value_type(uintptr_t block);
void ns_textblock_set_width(uintptr_t block, double val, int type, int layer, int edge);
double ns_textblock_width_for_layer(uintptr_t block, int layer, int edge);
int ns_textblock_width_value_type_for_layer(uintptr_t block, int layer, int edge);
void ns_textblock_set_vertical_alignment(uintptr_t block, int alignment);
int ns_textblock_get_vertical_alignment(uintptr_t block);
void ns_textblock_set_background_color(uintptr_t block, uintptr_t color);
uintptr_t ns_textblock_background_color(uintptr_t block);
void ns_textblock_set_border_color(uintptr_t block, uintptr_t color, int edge);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTBLOCK_H */
""")

write(ROOT / "src/ns-textblock.m", """#import <AppKit/AppKit.h>
#import "ns-textblock.h"
""" + COMMON_M + """
static NSTextBlock *ns_textblock_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextBlock class]] ? (NSTextBlock *)obj : nil;
}

uintptr_t ns_textblock_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSTextBlock alloc] init]);
    }
}

uintptr_t ns_textblock_wrap(void *block)
{
    if (!block) {
        return 0;
    }
    @autoreleasepool {
        NSTextBlock *obj = (__bridge NSTextBlock *)block;
        return [obj isKindOfClass:[NSTextBlock class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textblock_destroy(uintptr_t block)
{
    ns_release_handle(block);
}

void *ns_textblock_nstextblock(uintptr_t block)
{
    NSTextBlock *obj = ns_textblock_from(block);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_textblock_set_value(uintptr_t block, double val, int type, int dimension)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        if (obj) {
            [obj setValue:(CGFloat)val type:(NSTextBlockValueType)type forDimension:(NSTextBlockDimension)dimension];
        }
    }
}

double ns_textblock_value_for_dimension(uintptr_t block, int dimension)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        return obj ? (double)[obj valueForDimension:(NSTextBlockDimension)dimension] : 0.0;
    }
}

int ns_textblock_value_type_for_dimension(uintptr_t block, int dimension)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        return obj ? (int)[obj valueTypeForDimension:(NSTextBlockDimension)dimension] : 0;
    }
}

void ns_textblock_set_content_width(uintptr_t block, double width, int type)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        if (obj) {
            [obj setContentWidth:(CGFloat)width type:(NSTextBlockValueType)type];
        }
    }
}

double ns_textblock_content_width(uintptr_t block)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        return obj ? (double)obj.contentWidth : 0.0;
    }
}

int ns_textblock_content_width_value_type(uintptr_t block)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        return obj ? (int)obj.contentWidthValueType : 0;
    }
}

void ns_textblock_set_width(uintptr_t block, double val, int type, int layer, int edge)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        if (!obj) {
            return;
        }
        if (edge < 0) {
            [obj setWidth:(CGFloat)val type:(NSTextBlockValueType)type forLayer:(NSTextBlockLayer)layer];
        } else {
            [obj setWidth:(CGFloat)val type:(NSTextBlockValueType)type forLayer:(NSTextBlockLayer)layer edge:(NSRectEdge)edge];
        }
    }
}

double ns_textblock_width_for_layer(uintptr_t block, int layer, int edge)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        return obj ? (double)[obj widthForLayer:(NSTextBlockLayer)layer edge:(NSRectEdge)edge] : 0.0;
    }
}

int ns_textblock_width_value_type_for_layer(uintptr_t block, int layer, int edge)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        return obj ? (int)[obj widthValueTypeForLayer:(NSTextBlockLayer)layer edge:(NSRectEdge)edge] : 0;
    }
}

void ns_textblock_set_vertical_alignment(uintptr_t block, int alignment)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        if (obj) {
            obj.verticalAlignment = (NSTextBlockVerticalAlignment)alignment;
        }
    }
}

int ns_textblock_get_vertical_alignment(uintptr_t block)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        return obj ? (int)obj.verticalAlignment : 0;
    }
}

void ns_textblock_set_background_color(uintptr_t block, uintptr_t color)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        if (obj) {
            obj.backgroundColor = ns_color_from_handle(color);
        }
    }
}

uintptr_t ns_textblock_background_color(uintptr_t block)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        return obj && obj.backgroundColor ? ns_retain_obj(obj.backgroundColor) : 0;
    }
}

void ns_textblock_set_border_color(uintptr_t block, uintptr_t color, int edge)
{
    @autoreleasepool {
        NSTextBlock *obj = ns_textblock_from(block);
        if (!obj) {
            return;
        }
        NSColor *c = ns_color_from_handle(color);
        if (edge < 0) {
            [obj setBorderColor:c];
        } else {
            [obj setBorderColor:c forEdge:(NSRectEdge)edge];
        }
    }
}
""")

write(ROOT / "appkit/ns/nstextblock/nstextblock.zep", zep_ns("NSTextBlock", "ns-textblock.h", "NSTextBlock — base text block layout object.") + """
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textblock_create();
        }%
        return handle;
    }

    public static function wrap(int nsTextBlockPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textblock_wrap((void *)(uintptr_t) nsTextBlockPtr);
        }%
        return handle;
    }

    public static function destroy(int block) -> void
    {
        %{
            ns_textblock_destroy((uintptr_t) block);
        }%
    }

    public static function setContentWidth(int block, float width, int valueType) -> void
    {
        %{
            ns_textblock_set_content_width((uintptr_t) block, (double) width, (int) valueType);
        }%
    }

    public static function getContentWidth(int block) -> float
    {
        double value;
        %{
            value = ns_textblock_content_width((uintptr_t) block);
        }%
        return (float) value;
    }

    public static function setVerticalAlignment(int block, int alignment) -> void
    {
        %{
            ns_textblock_set_vertical_alignment((uintptr_t) block, (int) alignment);
        }%
    }

    public static function getVerticalAlignment(int block) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textblock_get_vertical_alignment((uintptr_t) block);
        }%
        return value;
    }

    public static function setBackgroundColor(int block, int colorHandle) -> void
    {
        %{
            ns_textblock_set_background_color((uintptr_t) block, (uintptr_t) colorHandle);
        }%
    }

    public static function setValue(int block, float val, int valueType, int dimension) -> void
    {
        %{
            ns_textblock_set_value((uintptr_t) block, (double) val, (int) valueType, (int) dimension);
        }%
    }

    public static function getValue(int block, int dimension) -> float
    {
        double value;
        %{
            value = ns_textblock_value_for_dimension((uintptr_t) block, (int) dimension);
        }%
        return (float) value;
    }

    public static function setLayerWidth(int block, float val, int valueType, int layer, int edge = -1) -> void
    {
        %{
            ns_textblock_set_width((uintptr_t) block, (double) val, (int) valueType, (int) layer, (int) edge);
        }%
    }
}
""")

write(ROOT / ".okf/api/nstextblock.md", okf(
    "NSTextBlock", "nstextblock", "ns-textblock.h",
    "NSTextBlock base class for text block layout (NSTextTableBlock/NSTextTable subclass this).",
    [
        ("create / wrap / destroy", "ownership"),
        ("setContentWidth / getContentWidth", "content width + NSTextBlockValueType"),
        ("setValue / getValue", "dimension sizing"),
        ("setLayerWidth", "padding/border/margin per edge"),
        ("setVerticalAlignment / getVerticalAlignment", "NSTextBlockVerticalAlignment"),
        ("setBackgroundColor", "NSColor handle"),
    ],
))

print("textblock done")

# ---------------------------------------------------------------------------
# NSParagraphStyle + NSMutableParagraphStyle (same zep)
# ---------------------------------------------------------------------------
write(ROOT / "src/ns-paragraphstyle.h", """#ifndef PHP_APPKIT_NS_PARAGRAPHSTYLE_H
#define PHP_APPKIT_NS_PARAGRAPHSTYLE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_PARAGRAPH_LINE_BREAK_BY_WORD_WRAPPING = 0,
    NS_PARAGRAPH_LINE_BREAK_BY_CHAR_WRAPPING = 1,
    NS_PARAGRAPH_LINE_BREAK_BY_CLIPPING = 2,
    NS_PARAGRAPH_LINE_BREAK_BY_TRUNCATING_HEAD = 3,
    NS_PARAGRAPH_LINE_BREAK_BY_TRUNCATING_TAIL = 4,
    NS_PARAGRAPH_LINE_BREAK_BY_TRUNCATING_MIDDLE = 5
} ns_paragraph_line_break_mode;

typedef enum {
    NS_PARAGRAPH_LINE_BREAK_STRATEGY_NONE = 0,
    NS_PARAGRAPH_LINE_BREAK_STRATEGY_PUSH_OUT = 1,
    NS_PARAGRAPH_LINE_BREAK_STRATEGY_HANGUL_WORD_PRIORITY = 2,
    NS_PARAGRAPH_LINE_BREAK_STRATEGY_STANDARD = 65535
} ns_paragraph_line_break_strategy;

uintptr_t ns_paragraphstyle_default(void);
uintptr_t ns_paragraphstyle_create(void);
uintptr_t ns_paragraphstyle_wrap(void *style);
void ns_paragraphstyle_destroy(uintptr_t style);
void *ns_paragraphstyle_nsparagraphstyle(uintptr_t style);

double ns_paragraphstyle_line_spacing(uintptr_t style);
double ns_paragraphstyle_paragraph_spacing(uintptr_t style);
double ns_paragraphstyle_head_indent(uintptr_t style);
double ns_paragraphstyle_tail_indent(uintptr_t style);
double ns_paragraphstyle_first_line_head_indent(uintptr_t style);
double ns_paragraphstyle_minimum_line_height(uintptr_t style);
double ns_paragraphstyle_maximum_line_height(uintptr_t style);
int ns_paragraphstyle_line_break_mode(uintptr_t style);
int ns_paragraphstyle_base_writing_direction(uintptr_t style);
double ns_paragraphstyle_line_height_multiple(uintptr_t style);
double ns_paragraphstyle_paragraph_spacing_before(uintptr_t style);
float ns_paragraphstyle_hyphenation_factor(uintptr_t style);
int ns_paragraphstyle_uses_default_hyphenation(uintptr_t style);
double ns_paragraphstyle_default_tab_interval(uintptr_t style);
int ns_paragraphstyle_allows_default_tightening_for_truncation(uintptr_t style);
int ns_paragraphstyle_line_break_strategy(uintptr_t style);
int ns_paragraphstyle_alignment(uintptr_t style);

void ns_paragraphstyle_set_line_spacing(uintptr_t style, double value);
void ns_paragraphstyle_set_paragraph_spacing(uintptr_t style, double value);
void ns_paragraphstyle_set_head_indent(uintptr_t style, double value);
void ns_paragraphstyle_set_tail_indent(uintptr_t style, double value);
void ns_paragraphstyle_set_first_line_head_indent(uintptr_t style, double value);
void ns_paragraphstyle_set_minimum_line_height(uintptr_t style, double value);
void ns_paragraphstyle_set_maximum_line_height(uintptr_t style, double value);
void ns_paragraphstyle_set_line_break_mode(uintptr_t style, int mode);
void ns_paragraphstyle_set_base_writing_direction(uintptr_t style, int direction);
void ns_paragraphstyle_set_line_height_multiple(uintptr_t style, double value);
void ns_paragraphstyle_set_paragraph_spacing_before(uintptr_t style, double value);
void ns_paragraphstyle_set_hyphenation_factor(uintptr_t style, float value);
void ns_paragraphstyle_set_uses_default_hyphenation(uintptr_t style, int flag);
void ns_paragraphstyle_set_default_tab_interval(uintptr_t style, double value);
void ns_paragraphstyle_set_allows_default_tightening_for_truncation(uintptr_t style, int flag);
void ns_paragraphstyle_set_line_break_strategy(uintptr_t style, int strategy);
void ns_paragraphstyle_set_alignment(uintptr_t style, int alignment);
void ns_paragraphstyle_set_paragraph_style(uintptr_t style, uintptr_t source);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_PARAGRAPHSTYLE_H */
""")

write(ROOT / "src/ns-paragraphstyle.m", """#import <AppKit/AppKit.h>
#import "ns-paragraphstyle.h"
""" + COMMON_M + """
static NSParagraphStyle *ns_paragraphstyle_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSParagraphStyle class]] ? (NSParagraphStyle *)obj : nil;
}

static NSMutableParagraphStyle *ns_mutable_paragraphstyle(uintptr_t handle)
{
    NSParagraphStyle *obj = ns_paragraphstyle_from(handle);
    return [obj isKindOfClass:[NSMutableParagraphStyle class]] ? (NSMutableParagraphStyle *)obj : nil;
}

uintptr_t ns_paragraphstyle_default(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSParagraphStyle defaultParagraphStyle]);
    }
}

uintptr_t ns_paragraphstyle_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSMutableParagraphStyle alloc] init]);
    }
}

uintptr_t ns_paragraphstyle_wrap(void *style)
{
    if (!style) {
        return 0;
    }
    @autoreleasepool {
        NSParagraphStyle *obj = (__bridge NSParagraphStyle *)style;
        return [obj isKindOfClass:[NSParagraphStyle class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_paragraphstyle_destroy(uintptr_t style)
{
    ns_release_handle(style);
}

void *ns_paragraphstyle_nsparagraphstyle(uintptr_t style)
{
    NSParagraphStyle *obj = ns_paragraphstyle_from(style);
    return obj ? (__bridge void *)obj : NULL;
}

double ns_paragraphstyle_line_spacing(uintptr_t style)
{
    @autoreleasepool {
        NSParagraphStyle *obj = ns_paragraphstyle_from(style);
        return obj ? (double)obj.lineSpacing : 0.0;
    }
}

double ns_paragraphstyle_paragraph_spacing(uintptr_t style)
{
    @autoreleasepool {
        NSParagraphStyle *obj = ns_paragraphstyle_from(style);
        return obj ? (double)obj.paragraphSpacing : 0.0;
    }
}

double ns_paragraphstyle_head_indent(uintptr_t style)
{
    @autoreleasepool {
        NSParagraphStyle *obj = ns_paragraphstyle_from(style);
        return obj ? (double)obj.headIndent : 0.0;
    }
}

double ns_paragraphstyle_tail_indent(uintptr_t style)
{
    @autoreleasepool {
        NSParagraphStyle *obj = ns_paragraphstyle_from(style);
        return obj ? (double)obj.tailIndent : 0.0;
    }
}

double ns_paragraphstyle_first_line_head_indent(uintptr_t style)
{
    @autoreleasepool {
        NSParagraphStyle *obj = ns_paragraphstyle_from(style);
        return obj ? (double)obj.firstLineHeadIndent : 0.0;
    }
}

double ns_paragraphstyle_minimum_line_height(uintptr_t style)
{
    @autoreleasepool {
        NSParagraphStyle *obj = ns_paragraphstyle_from(style);
        return obj ? (double)obj.minimumLineHeight : 0.0;
    }
}

double ns_paragraphstyle_maximum_line_height(uintptr_t style)
{
    @autoreleasepool {
        NSParagraphStyle *obj = ns_paragraphstyle_from(style);
        return obj ? (double)obj.maximumLineHeight : 0.0;
    }
}

int ns_paragraphstyle_line_break_mode(uintptr_t style)
{
    @autoreleasepool {
        NSParagraphStyle *obj = ns_paragraphstyle_from(style);
        return obj ? (int)obj.lineBreakMode : 0;
    }
}

int ns_paragraphstyle_base_writing_direction(uintptr_t style)
{
    @autoreleasepool {
        NSParagraphStyle *obj = ns_paragraphstyle_from(style);
        return obj ? (int)obj.baseWritingDirection : 0;
    }
}

double ns_paragraphstyle_line_height_multiple(uintptr_t style)
{
    @autoreleasepool {
        NSParagraphStyle *obj = ns_paragraphstyle_from(style);
        return obj ? (double)obj.lineHeightMultiple : 0.0;
    }
}

double ns_paragraphstyle_paragraph_spacing_before(uintptr_t style)
{
    @autoreleasepool {
        NSParagraphStyle *obj = ns_paragraphstyle_from(style);
        return obj ? (double)obj.paragraphSpacingBefore : 0.0;
    }
}

float ns_paragraphstyle_hyphenation_factor(uintptr_t style)
{
    @autoreleasepool {
        NSParagraphStyle *obj = ns_paragraphstyle_from(style);
        return obj ? obj.hyphenationFactor : 0.0f;
    }
}

int ns_paragraphstyle_uses_default_hyphenation(uintptr_t style)
{
    @autoreleasepool {
        NSParagraphStyle *obj = ns_paragraphstyle_from(style);
        return obj && obj.usesDefaultHyphenation ? 1 : 0;
    }
}

double ns_paragraphstyle_default_tab_interval(uintptr_t style)
{
    @autoreleasepool {
        NSParagraphStyle *obj = ns_paragraphstyle_from(style);
        return obj ? (double)obj.defaultTabInterval : 0.0;
    }
}

int ns_paragraphstyle_allows_default_tightening_for_truncation(uintptr_t style)
{
    @autoreleasepool {
        NSParagraphStyle *obj = ns_paragraphstyle_from(style);
        return obj && obj.allowsDefaultTighteningForTruncation ? 1 : 0;
    }
}

int ns_paragraphstyle_line_break_strategy(uintptr_t style)
{
    @autoreleasepool {
        NSParagraphStyle *obj = ns_paragraphstyle_from(style);
        return obj ? (int)obj.lineBreakStrategy : 0;
    }
}

int ns_paragraphstyle_alignment(uintptr_t style)
{
    @autoreleasepool {
        NSParagraphStyle *obj = ns_paragraphstyle_from(style);
        return obj ? (int)obj.alignment : 0;
    }
}

void ns_paragraphstyle_set_line_spacing(uintptr_t style, double value)
{
    @autoreleasepool {
        NSMutableParagraphStyle *obj = ns_mutable_paragraphstyle(style);
        if (obj) {
            obj.lineSpacing = (CGFloat)value;
        }
    }
}

void ns_paragraphstyle_set_paragraph_spacing(uintptr_t style, double value)
{
    @autoreleasepool {
        NSMutableParagraphStyle *obj = ns_mutable_paragraphstyle(style);
        if (obj) {
            obj.paragraphSpacing = (CGFloat)value;
        }
    }
}

void ns_paragraphstyle_set_head_indent(uintptr_t style, double value)
{
    @autoreleasepool {
        NSMutableParagraphStyle *obj = ns_mutable_paragraphstyle(style);
        if (obj) {
            obj.headIndent = (CGFloat)value;
        }
    }
}

void ns_paragraphstyle_set_tail_indent(uintptr_t style, double value)
{
    @autoreleasepool {
        NSMutableParagraphStyle *obj = ns_mutable_paragraphstyle(style);
        if (obj) {
            obj.tailIndent = (CGFloat)value;
        }
    }
}

void ns_paragraphstyle_set_first_line_head_indent(uintptr_t style, double value)
{
    @autoreleasepool {
        NSMutableParagraphStyle *obj = ns_mutable_paragraphstyle(style);
        if (obj) {
            obj.firstLineHeadIndent = (CGFloat)value;
        }
    }
}

void ns_paragraphstyle_set_minimum_line_height(uintptr_t style, double value)
{
    @autoreleasepool {
        NSMutableParagraphStyle *obj = ns_mutable_paragraphstyle(style);
        if (obj) {
            obj.minimumLineHeight = (CGFloat)value;
        }
    }
}

void ns_paragraphstyle_set_maximum_line_height(uintptr_t style, double value)
{
    @autoreleasepool {
        NSMutableParagraphStyle *obj = ns_mutable_paragraphstyle(style);
        if (obj) {
            obj.maximumLineHeight = (CGFloat)value;
        }
    }
}

void ns_paragraphstyle_set_line_break_mode(uintptr_t style, int mode)
{
    @autoreleasepool {
        NSMutableParagraphStyle *obj = ns_mutable_paragraphstyle(style);
        if (obj) {
            obj.lineBreakMode = (NSLineBreakMode)mode;
        }
    }
}

void ns_paragraphstyle_set_base_writing_direction(uintptr_t style, int direction)
{
    @autoreleasepool {
        NSMutableParagraphStyle *obj = ns_mutable_paragraphstyle(style);
        if (obj) {
            obj.baseWritingDirection = (NSWritingDirection)direction;
        }
    }
}

void ns_paragraphstyle_set_line_height_multiple(uintptr_t style, double value)
{
    @autoreleasepool {
        NSMutableParagraphStyle *obj = ns_mutable_paragraphstyle(style);
        if (obj) {
            obj.lineHeightMultiple = (CGFloat)value;
        }
    }
}

void ns_paragraphstyle_set_paragraph_spacing_before(uintptr_t style, double value)
{
    @autoreleasepool {
        NSMutableParagraphStyle *obj = ns_mutable_paragraphstyle(style);
        if (obj) {
            obj.paragraphSpacingBefore = (CGFloat)value;
        }
    }
}

void ns_paragraphstyle_set_hyphenation_factor(uintptr_t style, float value)
{
    @autoreleasepool {
        NSMutableParagraphStyle *obj = ns_mutable_paragraphstyle(style);
        if (obj) {
            obj.hyphenationFactor = value;
        }
    }
}

void ns_paragraphstyle_set_uses_default_hyphenation(uintptr_t style, int flag)
{
    @autoreleasepool {
        NSMutableParagraphStyle *obj = ns_mutable_paragraphstyle(style);
        if (obj) {
            obj.usesDefaultHyphenation = flag ? YES : NO;
        }
    }
}

void ns_paragraphstyle_set_default_tab_interval(uintptr_t style, double value)
{
    @autoreleasepool {
        NSMutableParagraphStyle *obj = ns_mutable_paragraphstyle(style);
        if (obj) {
            obj.defaultTabInterval = (CGFloat)value;
        }
    }
}

void ns_paragraphstyle_set_allows_default_tightening_for_truncation(uintptr_t style, int flag)
{
    @autoreleasepool {
        NSMutableParagraphStyle *obj = ns_mutable_paragraphstyle(style);
        if (obj) {
            obj.allowsDefaultTighteningForTruncation = flag ? YES : NO;
        }
    }
}

void ns_paragraphstyle_set_line_break_strategy(uintptr_t style, int strategy)
{
    @autoreleasepool {
        NSMutableParagraphStyle *obj = ns_mutable_paragraphstyle(style);
        if (obj) {
            obj.lineBreakStrategy = (NSLineBreakStrategy)strategy;
        }
    }
}

void ns_paragraphstyle_set_alignment(uintptr_t style, int alignment)
{
    @autoreleasepool {
        NSMutableParagraphStyle *obj = ns_mutable_paragraphstyle(style);
        if (obj) {
            obj.alignment = (NSTextAlignment)alignment;
        }
    }
}

void ns_paragraphstyle_set_paragraph_style(uintptr_t style, uintptr_t source)
{
    @autoreleasepool {
        NSMutableParagraphStyle *obj = ns_mutable_paragraphstyle(style);
        NSParagraphStyle *src = ns_paragraphstyle_from(source);
        if (obj && src) {
            [obj setParagraphStyle:src];
        }
    }
}
""")

write(ROOT / "appkit/ns/nsparagraphstyle/nsparagraphstyle.zep", zep_ns("NSParagraphStyle", "ns-paragraphstyle.h", "NSParagraphStyle / NSMutableParagraphStyle — paragraph attributes.") + """
{
    public static function defaultParagraphStyle() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_paragraphstyle_default();
        }%
        return handle;
    }

    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_paragraphstyle_create();
        }%
        return handle;
    }

    public static function wrap(int nsParagraphStylePtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_paragraphstyle_wrap((void *)(uintptr_t) nsParagraphStylePtr);
        }%
        return handle;
    }

    public static function destroy(int style) -> void
    {
        %{
            ns_paragraphstyle_destroy((uintptr_t) style);
        }%
    }

    public static function getLineSpacing(int style) -> float
    {
        double value;
        %{
            value = ns_paragraphstyle_line_spacing((uintptr_t) style);
        }%
        return (float) value;
    }

    public static function setLineSpacing(int style, float value) -> void
    {
        %{
            ns_paragraphstyle_set_line_spacing((uintptr_t) style, (double) value);
        }%
    }

    public static function getLineBreakMode(int style) -> int
    {
        int value;
        %{
            value = (zend_long) ns_paragraphstyle_line_break_mode((uintptr_t) style);
        }%
        return value;
    }

    public static function setLineBreakMode(int style, int mode) -> void
    {
        %{
            ns_paragraphstyle_set_line_break_mode((uintptr_t) style, (int) mode);
        }%
    }

    public static function getAlignment(int style) -> int
    {
        int value;
        %{
            value = (zend_long) ns_paragraphstyle_alignment((uintptr_t) style);
        }%
        return value;
    }

    public static function setAlignment(int style, int alignment) -> void
    {
        %{
            ns_paragraphstyle_set_alignment((uintptr_t) style, (int) alignment);
        }%
    }

    public static function setParagraphStyle(int style, int sourceStyle) -> void
    {
        %{
            ns_paragraphstyle_set_paragraph_style((uintptr_t) style, (uintptr_t) sourceStyle);
        }%
    }

    public static function setHeadIndent(int style, float value) -> void
    {
        %{
            ns_paragraphstyle_set_head_indent((uintptr_t) style, (double) value);
        }%
    }

    public static function getHeadIndent(int style) -> float
    {
        double value;
        %{
            value = ns_paragraphstyle_head_indent((uintptr_t) style);
        }%
        return (float) value;
    }

    public static function setHyphenationFactor(int style, float value) -> void
    {
        %{
            ns_paragraphstyle_set_hyphenation_factor((uintptr_t) style, (float) value);
        }%
    }

    public static function getHyphenationFactor(int style) -> float
    {
        float value;
        %{
            value = ns_paragraphstyle_hyphenation_factor((uintptr_t) style);
        }%
        return value;
    }
}
""")

write(ROOT / ".okf/api/nsparagraphstyle.md", okf(
    "NSParagraphStyle", "nsparagraphstyle", "ns-paragraphstyle.h",
    "NSParagraphStyle immutable reads; NSMutableParagraphStyle mutation via create() and setters on the same class.",
    [
        ("defaultParagraphStyle / create / wrap / destroy", "ownership"),
        ("getLineSpacing / setLineSpacing", "lineSpacing"),
        ("getLineBreakMode / setLineBreakMode", "NSLineBreakMode"),
        ("getAlignment / setAlignment", "NSTextAlignment"),
        ("getHeadIndent / setHeadIndent", "headIndent"),
        ("getHyphenationFactor / setHyphenationFactor", "hyphenationFactor"),
        ("setParagraphStyle", "copy from another style handle"),
    ],
    extra="NSMutableParagraphStyle setters require a handle from `create()`.",
))

print("paragraphstyle done")

# ---------------------------------------------------------------------------
# NSTypesetter
# ---------------------------------------------------------------------------
write(ROOT / "src/ns-typesetter.h", """#ifndef PHP_APPKIT_NS_TYPESETTER_H
#define PHP_APPKIT_NS_TYPESETTER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_TYPESETTER_BEHAVIOR_LATEST = -1,
    NS_TYPESETTER_BEHAVIOR_ORIGINAL = 0,
    NS_TYPESETTER_BEHAVIOR_10_2_WITH_COMPATIBILITY = 1,
    NS_TYPESETTER_BEHAVIOR_10_2 = 2,
    NS_TYPESETTER_BEHAVIOR_10_3 = 3,
    NS_TYPESETTER_BEHAVIOR_10_4 = 4
} ns_typesetter_behavior;

uintptr_t ns_typesetter_shared_system_typesetter(void);
uintptr_t ns_typesetter_shared_system_typesetter_for_behavior(int behavior);
int ns_typesetter_default_typesetter_behavior(void);
uintptr_t ns_typesetter_wrap(void *typesetter);
void ns_typesetter_destroy(uintptr_t typesetter);
void *ns_typesetter_nstypesetter(uintptr_t typesetter);

int ns_typesetter_uses_font_leading(uintptr_t typesetter);
void ns_typesetter_set_uses_font_leading(uintptr_t typesetter, int flag);
int ns_typesetter_typesetter_behavior(uintptr_t typesetter);
void ns_typesetter_set_typesetter_behavior(uintptr_t typesetter, int behavior);
float ns_typesetter_hyphenation_factor(uintptr_t typesetter);
void ns_typesetter_set_hyphenation_factor(uintptr_t typesetter, float factor);
double ns_typesetter_line_fragment_padding(uintptr_t typesetter);
void ns_typesetter_set_line_fragment_padding(uintptr_t typesetter, double padding);
int ns_typesetter_bidi_processing_enabled(uintptr_t typesetter);
void ns_typesetter_set_bidi_processing_enabled(uintptr_t typesetter, int flag);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TYPESETTER_H */
""")

write(ROOT / "src/ns-typesetter.m", """#import <AppKit/AppKit.h>
#import "ns-typesetter.h"
""" + COMMON_M + """
static NSTypesetter *ns_typesetter_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTypesetter class]] ? (NSTypesetter *)obj : nil;
}

uintptr_t ns_typesetter_shared_system_typesetter(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSTypesetter sharedSystemTypesetter]);
    }
}

uintptr_t ns_typesetter_shared_system_typesetter_for_behavior(int behavior)
{
    @autoreleasepool {
        return ns_retain_obj([NSTypesetter sharedSystemTypesetterForBehavior:(NSTypesetterBehavior)behavior]);
    }
}

int ns_typesetter_default_typesetter_behavior(void)
{
    @autoreleasepool {
        return (int)[NSTypesetter defaultTypesetterBehavior];
    }
}

uintptr_t ns_typesetter_wrap(void *typesetter)
{
    if (!typesetter) {
        return 0;
    }
    @autoreleasepool {
        NSTypesetter *obj = (__bridge NSTypesetter *)typesetter;
        return [obj isKindOfClass:[NSTypesetter class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_typesetter_destroy(uintptr_t typesetter)
{
    ns_release_handle(typesetter);
}

void *ns_typesetter_nstypesetter(uintptr_t typesetter)
{
    NSTypesetter *obj = ns_typesetter_from(typesetter);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_typesetter_uses_font_leading(uintptr_t typesetter)
{
    @autoreleasepool {
        NSTypesetter *obj = ns_typesetter_from(typesetter);
        return obj && obj.usesFontLeading ? 1 : 0;
    }
}

void ns_typesetter_set_uses_font_leading(uintptr_t typesetter, int flag)
{
    @autoreleasepool {
        NSTypesetter *obj = ns_typesetter_from(typesetter);
        if (obj) {
            obj.usesFontLeading = flag ? YES : NO;
        }
    }
}

int ns_typesetter_typesetter_behavior(uintptr_t typesetter)
{
    @autoreleasepool {
        NSTypesetter *obj = ns_typesetter_from(typesetter);
        return obj ? (int)obj.typesetterBehavior : 0;
    }
}

void ns_typesetter_set_typesetter_behavior(uintptr_t typesetter, int behavior)
{
    @autoreleasepool {
        NSTypesetter *obj = ns_typesetter_from(typesetter);
        if (obj) {
            obj.typesetterBehavior = (NSTypesetterBehavior)behavior;
        }
    }
}

float ns_typesetter_hyphenation_factor(uintptr_t typesetter)
{
    @autoreleasepool {
        NSTypesetter *obj = ns_typesetter_from(typesetter);
        return obj ? obj.hyphenationFactor : 0.0f;
    }
}

void ns_typesetter_set_hyphenation_factor(uintptr_t typesetter, float factor)
{
    @autoreleasepool {
        NSTypesetter *obj = ns_typesetter_from(typesetter);
        if (obj) {
            obj.hyphenationFactor = factor;
        }
    }
}

double ns_typesetter_line_fragment_padding(uintptr_t typesetter)
{
    @autoreleasepool {
        NSTypesetter *obj = ns_typesetter_from(typesetter);
        return obj ? (double)obj.lineFragmentPadding : 0.0;
    }
}

void ns_typesetter_set_line_fragment_padding(uintptr_t typesetter, double padding)
{
    @autoreleasepool {
        NSTypesetter *obj = ns_typesetter_from(typesetter);
        if (obj) {
            obj.lineFragmentPadding = (CGFloat)padding;
        }
    }
}

int ns_typesetter_bidi_processing_enabled(uintptr_t typesetter)
{
    @autoreleasepool {
        NSTypesetter *obj = ns_typesetter_from(typesetter);
        return obj && obj.bidiProcessingEnabled ? 1 : 0;
    }
}

void ns_typesetter_set_bidi_processing_enabled(uintptr_t typesetter, int flag)
{
    @autoreleasepool {
        NSTypesetter *obj = ns_typesetter_from(typesetter);
        if (obj) {
            obj.bidiProcessingEnabled = flag ? YES : NO;
        }
    }
}
""")

write(ROOT / "appkit/ns/nstypesetter/nstypesetter.zep", zep_ns("NSTypesetter", "ns-typesetter.h", "NSTypesetter — shared system typesetter.") + """
{
    public static function sharedSystemTypesetter() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_typesetter_shared_system_typesetter();
        }%
        return handle;
    }

    public static function sharedSystemTypesetterForBehavior(int behavior) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_typesetter_shared_system_typesetter_for_behavior((int) behavior);
        }%
        return handle;
    }

    public static function defaultTypesetterBehavior() -> int
    {
        int value;
        %{
            value = (zend_long) ns_typesetter_default_typesetter_behavior();
        }%
        return value;
    }

    public static function wrap(int nsTypesetterPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_typesetter_wrap((void *)(uintptr_t) nsTypesetterPtr);
        }%
        return handle;
    }

    public static function destroy(int typesetter) -> void
    {
        %{
            ns_typesetter_destroy((uintptr_t) typesetter);
        }%
    }

    public static function usesFontLeading(int typesetter) -> bool
    {
        bool result;
        %{
            result = ns_typesetter_uses_font_leading((uintptr_t) typesetter) == 1;
        }%
        return result;
    }

    public static function setUsesFontLeading(int typesetter, bool flag) -> void
    {
        %{
            ns_typesetter_set_uses_font_leading((uintptr_t) typesetter, flag ? 1 : 0);
        }%
    }

    public static function getTypesetterBehavior(int typesetter) -> int
    {
        int value;
        %{
            value = (zend_long) ns_typesetter_typesetter_behavior((uintptr_t) typesetter);
        }%
        return value;
    }

    public static function setTypesetterBehavior(int typesetter, int behavior) -> void
    {
        %{
            ns_typesetter_set_typesetter_behavior((uintptr_t) typesetter, (int) behavior);
        }%
    }

    public static function getHyphenationFactor(int typesetter) -> float
    {
        float value;
        %{
            value = ns_typesetter_hyphenation_factor((uintptr_t) typesetter);
        }%
        return value;
    }

    public static function setHyphenationFactor(int typesetter, float factor) -> void
    {
        %{
            ns_typesetter_set_hyphenation_factor((uintptr_t) typesetter, (float) factor);
        }%
    }

    public static function getLineFragmentPadding(int typesetter) -> float
    {
        double value;
        %{
            value = ns_typesetter_line_fragment_padding((uintptr_t) typesetter);
        }%
        return (float) value;
    }

    public static function setLineFragmentPadding(int typesetter, float padding) -> void
    {
        %{
            ns_typesetter_set_line_fragment_padding((uintptr_t) typesetter, (double) padding);
        }%
    }

    public static function bidiProcessingEnabled(int typesetter) -> bool
    {
        bool result;
        %{
            result = ns_typesetter_bidi_processing_enabled((uintptr_t) typesetter) == 1;
        }%
        return result;
    }

    public static function setBidiProcessingEnabled(int typesetter, bool flag) -> void
    {
        %{
            ns_typesetter_set_bidi_processing_enabled((uintptr_t) typesetter, flag ? 1 : 0);
        }%
    }
}
""")

write(ROOT / ".okf/api/nstypesetter.md", okf(
    "NSTypesetter", "nstypesetter", "ns-typesetter.h",
    "NSTypesetter shared system typesetter; property get/set on a shared-instance handle.",
    [
        ("sharedSystemTypesetter / sharedSystemTypesetterForBehavior / wrap / destroy", "ownership"),
        ("defaultTypesetterBehavior", "NSTypesetterBehavior class default"),
        ("usesFontLeading / setUsesFontLeading", "usesFontLeading"),
        ("getTypesetterBehavior / setTypesetterBehavior", "NSTypesetterBehavior"),
        ("getHyphenationFactor / setHyphenationFactor", "hyphenationFactor"),
        ("getLineFragmentPadding / setLineFragmentPadding", "lineFragmentPadding"),
        ("bidiProcessingEnabled / setBidiProcessingEnabled", "bidiProcessingEnabled"),
    ],
))

print("typesetter done")

# ---------------------------------------------------------------------------
# NSATSTypesetter
# ---------------------------------------------------------------------------
write(ROOT / "src/ns-atstypesetter.h", """#ifndef PHP_APPKIT_NS_ATSTYPESETTER_H
#define PHP_APPKIT_NS_ATSTYPESETTER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_atstypesetter_shared_typesetter(void);
uintptr_t ns_atstypesetter_wrap(void *typesetter);
void ns_atstypesetter_destroy(uintptr_t typesetter);
void *ns_atstypesetter_nsatstypesetter(uintptr_t typesetter);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_ATSTYPESETTER_H */
""")

write(ROOT / "src/ns-atstypesetter.m", """#import <AppKit/AppKit.h>
#import "ns-atstypesetter.h"
""" + COMMON_M + """
static NSATSTypesetter *ns_atstypesetter_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSATSTypesetter class]] ? (NSATSTypesetter *)obj : nil;
}

uintptr_t ns_atstypesetter_shared_typesetter(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSATSTypesetter sharedTypesetter]);
    }
}

uintptr_t ns_atstypesetter_wrap(void *typesetter)
{
    if (!typesetter) {
        return 0;
    }
    @autoreleasepool {
        NSATSTypesetter *obj = (__bridge NSATSTypesetter *)typesetter;
        return [obj isKindOfClass:[NSATSTypesetter class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_atstypesetter_destroy(uintptr_t typesetter)
{
    ns_release_handle(typesetter);
}

void *ns_atstypesetter_nsatstypesetter(uintptr_t typesetter)
{
    NSATSTypesetter *obj = ns_atstypesetter_from(typesetter);
    return obj ? (__bridge void *)obj : NULL;
}
""")

write(ROOT / "appkit/ns/nsatstypesetter/nsatstypesetter.zep", zep_ns("NSATSTypesetter", "ns-atstypesetter.h", "NSATSTypesetter — ATS shared typesetter.") + """
{
    public static function sharedTypesetter() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_atstypesetter_shared_typesetter();
        }%
        return handle;
    }

    public static function wrap(int nsATSTypesetterPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_atstypesetter_wrap((void *)(uintptr_t) nsATSTypesetterPtr);
        }%
        return handle;
    }

    public static function destroy(int typesetter) -> void
    {
        %{
            ns_atstypesetter_destroy((uintptr_t) typesetter);
        }%
    }
}
""")

write(ROOT / ".okf/api/nsatstypesetter.md", okf(
    "NSATSTypesetter", "nsatstypesetter", "ns-atstypesetter.h",
    "NSATSTypesetter shared ATS typesetter (NSTypesetter subclass).",
    [
        ("sharedTypesetter / wrap / destroy", "ownership"),
    ],
))

print("atstypesetter done")

# ---------------------------------------------------------------------------
# NSGlyphGenerator
# ---------------------------------------------------------------------------
write(ROOT / "src/ns-glyphgenerator.h", """#ifndef PHP_APPKIT_NS_GLYPHGENERATOR_H
#define PHP_APPKIT_NS_GLYPHGENERATOR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_glyphgenerator_shared_glyph_generator(void);
uintptr_t ns_glyphgenerator_wrap(void *generator);
void ns_glyphgenerator_destroy(uintptr_t generator);
void *ns_glyphgenerator_nsglyphgenerator(uintptr_t generator);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_GLYPHGENERATOR_H */
""")

write(ROOT / "src/ns-glyphgenerator.m", """#import <AppKit/AppKit.h>
#import "ns-glyphgenerator.h"
""" + COMMON_M + """
static NSGlyphGenerator *ns_glyphgenerator_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSGlyphGenerator class]] ? (NSGlyphGenerator *)obj : nil;
}

uintptr_t ns_glyphgenerator_shared_glyph_generator(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSGlyphGenerator sharedGlyphGenerator]);
    }
}

uintptr_t ns_glyphgenerator_wrap(void *generator)
{
    if (!generator) {
        return 0;
    }
    @autoreleasepool {
        NSGlyphGenerator *obj = (__bridge NSGlyphGenerator *)generator;
        return [obj isKindOfClass:[NSGlyphGenerator class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_glyphgenerator_destroy(uintptr_t generator)
{
    ns_release_handle(generator);
}

void *ns_glyphgenerator_nsglyphgenerator(uintptr_t generator)
{
    NSGlyphGenerator *obj = ns_glyphgenerator_from(generator);
    return obj ? (__bridge void *)obj : NULL;
}
""")

write(ROOT / "appkit/ns/nsglyphgenerator/nsglyphgenerator.zep", zep_ns("NSGlyphGenerator", "ns-glyphgenerator.h", "NSGlyphGenerator — shared glyph generator (deprecated).") + """
{
    public static function sharedGlyphGenerator() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_glyphgenerator_shared_glyph_generator();
        }%
        return handle;
    }

    public static function wrap(int nsGlyphGeneratorPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_glyphgenerator_wrap((void *)(uintptr_t) nsGlyphGeneratorPtr);
        }%
        return handle;
    }

    public static function destroy(int generator) -> void
    {
        %{
            ns_glyphgenerator_destroy((uintptr_t) generator);
        }%
    }
}
""")

write(ROOT / ".okf/api/nsglyphgenerator.md", okf(
    "NSGlyphGenerator", "nsglyphgenerator", "ns-glyphgenerator.h",
    "NSGlyphGenerator shared glyph generator. Deprecated by Apple; prefer TextKit 2 layout.",
    [
        ("sharedGlyphGenerator / wrap / destroy", "ownership"),
    ],
    extra="NSGlyphGenerator is deprecated. Prefer NSTextLayoutManager / NSTextLayoutFragment.",
))

print("glyphgenerator done")

# ---------------------------------------------------------------------------
# NSTextLayoutManager
# ---------------------------------------------------------------------------
write(ROOT / "src/ns-textlayoutmanager.h", """#ifndef PHP_APPKIT_NS_TEXTLAYOUTMANAGER_H
#define PHP_APPKIT_NS_TEXTLAYOUTMANAGER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textlayoutmanager_create(void);
uintptr_t ns_textlayoutmanager_wrap(void *manager);
void ns_textlayoutmanager_destroy(uintptr_t manager);
void *ns_textlayoutmanager_nstextlayoutmanager(uintptr_t manager);

int ns_textlayoutmanager_uses_font_leading(uintptr_t manager);
void ns_textlayoutmanager_set_uses_font_leading(uintptr_t manager, int flag);
int ns_textlayoutmanager_limits_layout_for_suspicious_contents(uintptr_t manager);
void ns_textlayoutmanager_set_limits_layout_for_suspicious_contents(uintptr_t manager, int flag);
int ns_textlayoutmanager_uses_hyphenation(uintptr_t manager);
void ns_textlayoutmanager_set_uses_hyphenation(uintptr_t manager, int flag);

void ns_textlayoutmanager_replace_text_content_manager(uintptr_t manager, uintptr_t content_manager);
void ns_textlayoutmanager_set_text_container(uintptr_t manager, uintptr_t container);
uintptr_t ns_textlayoutmanager_get_text_container(uintptr_t manager);
void ns_textlayoutmanager_usage_bounds_for_text_container(uintptr_t manager, double *x, double *y, double *w, double *h);
uintptr_t ns_textlayoutmanager_text_viewport_layout_controller(uintptr_t manager);
void ns_textlayoutmanager_ensure_layout_for_bounds(uintptr_t manager, double x, double y, double w, double h);
void ns_textlayoutmanager_invalidate_layout_for_range(uintptr_t manager, uintptr_t ns_text_range_ptr);
uintptr_t ns_textlayoutmanager_text_layout_fragment_for_position(uintptr_t manager, double x, double y);
int ns_textlayoutmanager_text_selections_count(uintptr_t manager);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTLAYOUTMANAGER_H */
""")

write(ROOT / "src/ns-textlayoutmanager.m", """#import <AppKit/AppKit.h>
#import "ns-textlayoutmanager.h"
#import "ns-textcontentmanager.h"
#import "ns-textcontainer.h"
""" + COMMON_M + """
static NSTextLayoutManager *ns_textlayoutmanager_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextLayoutManager class]] ? (NSTextLayoutManager *)obj : nil;
}

uintptr_t ns_textlayoutmanager_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSTextLayoutManager alloc] init]);
    }
}

uintptr_t ns_textlayoutmanager_wrap(void *manager)
{
    if (!manager) {
        return 0;
    }
    @autoreleasepool {
        NSTextLayoutManager *obj = (__bridge NSTextLayoutManager *)manager;
        return [obj isKindOfClass:[NSTextLayoutManager class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textlayoutmanager_destroy(uintptr_t manager)
{
    ns_release_handle(manager);
}

void *ns_textlayoutmanager_nstextlayoutmanager(uintptr_t manager)
{
    NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_textlayoutmanager_uses_font_leading(uintptr_t manager)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        return obj && obj.usesFontLeading ? 1 : 0;
    }
}

void ns_textlayoutmanager_set_uses_font_leading(uintptr_t manager, int flag)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        if (obj) {
            obj.usesFontLeading = flag ? YES : NO;
        }
    }
}

int ns_textlayoutmanager_limits_layout_for_suspicious_contents(uintptr_t manager)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        return obj && obj.limitsLayoutForSuspiciousContents ? 1 : 0;
    }
}

void ns_textlayoutmanager_set_limits_layout_for_suspicious_contents(uintptr_t manager, int flag)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        if (obj) {
            obj.limitsLayoutForSuspiciousContents = flag ? YES : NO;
        }
    }
}

int ns_textlayoutmanager_uses_hyphenation(uintptr_t manager)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        return obj && obj.usesHyphenation ? 1 : 0;
    }
}

void ns_textlayoutmanager_set_uses_hyphenation(uintptr_t manager, int flag)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        if (obj) {
            obj.usesHyphenation = flag ? YES : NO;
        }
    }
}

void ns_textlayoutmanager_replace_text_content_manager(uintptr_t manager, uintptr_t content_manager)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        NSTextContentManager *cm = (__bridge NSTextContentManager *)ns_textcontentmanager_nstextcontentmanager(content_manager);
        if (obj && cm) {
            [obj replaceTextContentManager:cm];
        }
    }
}

void ns_textlayoutmanager_set_text_container(uintptr_t manager, uintptr_t container)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        NSTextContainer *tc = (__bridge NSTextContainer *)ns_textcontainer_nstextcontainer(container);
        if (obj) {
            obj.textContainer = tc;
        }
    }
}

uintptr_t ns_textlayoutmanager_get_text_container(uintptr_t manager)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        return obj && obj.textContainer ? ns_textcontainer_wrap((__bridge void *)obj.textContainer) : 0;
    }
}

void ns_textlayoutmanager_usage_bounds_for_text_container(uintptr_t manager, double *x, double *y, double *w, double *h)
{
    if (x) {
        *x = 0.0;
    }
    if (y) {
        *y = 0.0;
    }
    if (w) {
        *w = 0.0;
    }
    if (h) {
        *h = 0.0;
    }
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        if (!obj) {
            return;
        }
        CGRect bounds = obj.usageBoundsForTextContainer;
        if (x) {
            *x = (double)bounds.origin.x;
        }
        if (y) {
            *y = (double)bounds.origin.y;
        }
        if (w) {
            *w = (double)bounds.size.width;
        }
        if (h) {
            *h = (double)bounds.size.height;
        }
    }
}

uintptr_t ns_textlayoutmanager_text_viewport_layout_controller(uintptr_t manager)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        return obj && obj.textViewportLayoutController ? ns_retain_obj(obj.textViewportLayoutController) : 0;
    }
}

void ns_textlayoutmanager_ensure_layout_for_bounds(uintptr_t manager, double x, double y, double w, double h)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        if (obj) {
            [obj ensureLayoutForBounds:CGRectMake((CGFloat)x, (CGFloat)y, (CGFloat)w, (CGFloat)h)];
        }
    }
}

void ns_textlayoutmanager_invalidate_layout_for_range(uintptr_t manager, uintptr_t ns_text_range_ptr)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        NSTextRange *range = ns_text_range_ptr ? (__bridge NSTextRange *)(void *)ns_text_range_ptr : nil;
        if (obj && range) {
            [obj invalidateLayoutForRange:range];
        }
    }
}

uintptr_t ns_textlayoutmanager_text_layout_fragment_for_position(uintptr_t manager, double x, double y)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        if (!obj) {
            return 0;
        }
        NSTextLayoutFragment *fragment = [obj textLayoutFragmentForPosition:CGPointMake((CGFloat)x, (CGFloat)y)];
        return ns_retain_obj(fragment);
    }
}

int ns_textlayoutmanager_text_selections_count(uintptr_t manager)
{
    @autoreleasepool {
        NSTextLayoutManager *obj = ns_textlayoutmanager_from(manager);
        return obj ? (int)obj.textSelections.count : 0;
    }
}
""")

write(ROOT / "appkit/ns/nstextlayoutmanager/nstextlayoutmanager.zep", zep_ns("NSTextLayoutManager", "ns-textlayoutmanager.h", "NSTextLayoutManager — TextKit 2 layout manager.") + """
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textlayoutmanager_create();
        }%
        return handle;
    }

    public static function wrap(int nsTextLayoutManagerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textlayoutmanager_wrap((void *)(uintptr_t) nsTextLayoutManagerPtr);
        }%
        return handle;
    }

    public static function destroy(int manager) -> void
    {
        %{
            ns_textlayoutmanager_destroy((uintptr_t) manager);
        }%
    }

    public static function usesFontLeading(int manager) -> bool
    {
        bool result;
        %{
            result = ns_textlayoutmanager_uses_font_leading((uintptr_t) manager) == 1;
        }%
        return result;
    }

    public static function setUsesFontLeading(int manager, bool flag) -> void
    {
        %{
            ns_textlayoutmanager_set_uses_font_leading((uintptr_t) manager, flag ? 1 : 0);
        }%
    }

    public static function limitsLayoutForSuspiciousContents(int manager) -> bool
    {
        bool result;
        %{
            result = ns_textlayoutmanager_limits_layout_for_suspicious_contents((uintptr_t) manager) == 1;
        }%
        return result;
    }

    public static function setLimitsLayoutForSuspiciousContents(int manager, bool flag) -> void
    {
        %{
            ns_textlayoutmanager_set_limits_layout_for_suspicious_contents((uintptr_t) manager, flag ? 1 : 0);
        }%
    }

    public static function usesHyphenation(int manager) -> bool
    {
        bool result;
        %{
            result = ns_textlayoutmanager_uses_hyphenation((uintptr_t) manager) == 1;
        }%
        return result;
    }

    public static function setUsesHyphenation(int manager, bool flag) -> void
    {
        %{
            ns_textlayoutmanager_set_uses_hyphenation((uintptr_t) manager, flag ? 1 : 0);
        }%
    }

    public static function replaceTextContentManager(int manager, int contentManager) -> void
    {
        %{
            ns_textlayoutmanager_replace_text_content_manager((uintptr_t) manager, (uintptr_t) contentManager);
        }%
    }

    public static function setTextContainer(int manager, int container) -> void
    {
        %{
            ns_textlayoutmanager_set_text_container((uintptr_t) manager, (uintptr_t) container);
        }%
    }

    public static function getTextContainer(int manager) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textlayoutmanager_get_text_container((uintptr_t) manager);
        }%
        return handle;
    }

    /**
     * @return array [x, y, w, h]
     */
    public static function usageBoundsForTextContainer(int manager) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_textlayoutmanager_usage_bounds_for_text_container((uintptr_t) manager, &x, &y, &w, &h);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        }%
        return out;
    }

    public static function textViewportLayoutController(int manager) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textlayoutmanager_text_viewport_layout_controller((uintptr_t) manager);
        }%
        return handle;
    }

    public static function ensureLayoutForBounds(int manager, float x, float y, float w, float h) -> void
    {
        %{
            ns_textlayoutmanager_ensure_layout_for_bounds((uintptr_t) manager, (double) x, (double) y, (double) w, (double) h);
        }%
    }

    public static function invalidateLayoutForRange(int manager, int nsTextRangePtr) -> void
    {
        %{
            ns_textlayoutmanager_invalidate_layout_for_range((uintptr_t) manager, (uintptr_t) nsTextRangePtr);
        }%
    }

    public static function textLayoutFragmentForPosition(int manager, float x, float y) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textlayoutmanager_text_layout_fragment_for_position((uintptr_t) manager, (double) x, (double) y);
        }%
        return handle;
    }

    public static function textSelectionsCount(int manager) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textlayoutmanager_text_selections_count((uintptr_t) manager);
        }%
        return value;
    }
}
""")

write(ROOT / ".okf/api/nstextlayoutmanager.md", okf(
    "NSTextLayoutManager", "nstextlayoutmanager", "ns-textlayoutmanager.h",
    "NSTextLayoutManager TextKit 2 layout: containers, fragments, viewport controller.",
    [
        ("create / wrap / destroy", "ownership"),
        ("usesFontLeading / limitsLayoutForSuspiciousContents / usesHyphenation", "layout flags"),
        ("replaceTextContentManager", "NSTextContentManager handle"),
        ("setTextContainer / getTextContainer", "NSTextContainer handle"),
        ("usageBoundsForTextContainer", "CGRect via out params / [x,y,w,h]"),
        ("textViewportLayoutController", "retained NSTextViewportLayoutController handle"),
        ("ensureLayoutForBounds", "ensureLayoutForBounds:"),
        ("invalidateLayoutForRange", "borrowed NSTextRange*"),
        ("textLayoutFragmentForPosition", "retained NSTextLayoutFragment handle"),
        ("textSelectionsCount", "textSelections.count"),
    ],
))

print("textlayoutmanager done")

# ---------------------------------------------------------------------------
# NSTextContentManager
# ---------------------------------------------------------------------------
write(ROOT / "src/ns-textcontentmanager.h", """#ifndef PHP_APPKIT_NS_TEXTCONTENTMANAGER_H
#define PHP_APPKIT_NS_TEXTCONTENTMANAGER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textcontentmanager_create(void);
uintptr_t ns_textcontentmanager_wrap(void *manager);
void ns_textcontentmanager_destroy(uintptr_t manager);
void *ns_textcontentmanager_nstextcontentmanager(uintptr_t manager);

void ns_textcontentmanager_add_text_layout_manager(uintptr_t manager, uintptr_t layout_manager);
void ns_textcontentmanager_remove_text_layout_manager(uintptr_t manager, uintptr_t layout_manager);
int ns_textcontentmanager_text_layout_managers_count(uintptr_t manager);
int ns_textcontentmanager_has_editing_transaction(uintptr_t manager);
int ns_textcontentmanager_automatically_synchronizes_text_layout_managers(uintptr_t manager);
void ns_textcontentmanager_set_automatically_synchronizes_text_layout_managers(uintptr_t manager, int flag);
int ns_textcontentmanager_automatically_synchronizes_to_backing_store(uintptr_t manager);
void ns_textcontentmanager_set_automatically_synchronizes_to_backing_store(uintptr_t manager, int flag);
uintptr_t ns_textcontentmanager_document_range_ptr(uintptr_t manager);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTCONTENTMANAGER_H */
""")

write(ROOT / "src/ns-textcontentmanager.m", """#import <AppKit/AppKit.h>
#import "ns-textcontentmanager.h"
#import "ns-textlayoutmanager.h"
""" + COMMON_M + """
static NSTextContentManager *ns_textcontentmanager_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextContentManager class]] ? (NSTextContentManager *)obj : nil;
}

uintptr_t ns_textcontentmanager_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSTextContentManager alloc] init]);
    }
}

uintptr_t ns_textcontentmanager_wrap(void *manager)
{
    if (!manager) {
        return 0;
    }
    @autoreleasepool {
        NSTextContentManager *obj = (__bridge NSTextContentManager *)manager;
        return [obj isKindOfClass:[NSTextContentManager class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textcontentmanager_destroy(uintptr_t manager)
{
    ns_release_handle(manager);
}

void *ns_textcontentmanager_nstextcontentmanager(uintptr_t manager)
{
    NSTextContentManager *obj = ns_textcontentmanager_from(manager);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_textcontentmanager_add_text_layout_manager(uintptr_t manager, uintptr_t layout_manager)
{
    @autoreleasepool {
        NSTextContentManager *obj = ns_textcontentmanager_from(manager);
        NSTextLayoutManager *lm = (__bridge NSTextLayoutManager *)ns_textlayoutmanager_nstextlayoutmanager(layout_manager);
        if (obj && lm) {
            [obj addTextLayoutManager:lm];
        }
    }
}

void ns_textcontentmanager_remove_text_layout_manager(uintptr_t manager, uintptr_t layout_manager)
{
    @autoreleasepool {
        NSTextContentManager *obj = ns_textcontentmanager_from(manager);
        NSTextLayoutManager *lm = (__bridge NSTextLayoutManager *)ns_textlayoutmanager_nstextlayoutmanager(layout_manager);
        if (obj && lm) {
            [obj removeTextLayoutManager:lm];
        }
    }
}

int ns_textcontentmanager_text_layout_managers_count(uintptr_t manager)
{
    @autoreleasepool {
        NSTextContentManager *obj = ns_textcontentmanager_from(manager);
        return obj ? (int)obj.textLayoutManagers.count : 0;
    }
}

int ns_textcontentmanager_has_editing_transaction(uintptr_t manager)
{
    @autoreleasepool {
        NSTextContentManager *obj = ns_textcontentmanager_from(manager);
        return obj && obj.hasEditingTransaction ? 1 : 0;
    }
}

int ns_textcontentmanager_automatically_synchronizes_text_layout_managers(uintptr_t manager)
{
    @autoreleasepool {
        NSTextContentManager *obj = ns_textcontentmanager_from(manager);
        return obj && obj.automaticallySynchronizesTextLayoutManagers ? 1 : 0;
    }
}

void ns_textcontentmanager_set_automatically_synchronizes_text_layout_managers(uintptr_t manager, int flag)
{
    @autoreleasepool {
        NSTextContentManager *obj = ns_textcontentmanager_from(manager);
        if (obj) {
            obj.automaticallySynchronizesTextLayoutManagers = flag ? YES : NO;
        }
    }
}

int ns_textcontentmanager_automatically_synchronizes_to_backing_store(uintptr_t manager)
{
    @autoreleasepool {
        NSTextContentManager *obj = ns_textcontentmanager_from(manager);
        return obj && obj.automaticallySynchronizesToBackingStore ? 1 : 0;
    }
}

void ns_textcontentmanager_set_automatically_synchronizes_to_backing_store(uintptr_t manager, int flag)
{
    @autoreleasepool {
        NSTextContentManager *obj = ns_textcontentmanager_from(manager);
        if (obj) {
            obj.automaticallySynchronizesToBackingStore = flag ? YES : NO;
        }
    }
}

uintptr_t ns_textcontentmanager_document_range_ptr(uintptr_t manager)
{
    @autoreleasepool {
        NSTextContentManager *obj = ns_textcontentmanager_from(manager);
        return obj && obj.documentRange ? (uintptr_t)(__bridge void *)obj.documentRange : 0;
    }
}
""")

write(ROOT / "appkit/ns/nstextcontentmanager/nstextcontentmanager.zep", zep_ns("NSTextContentManager", "ns-textcontentmanager.h", "NSTextContentManager — TextKit 2 content owner.") + """
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textcontentmanager_create();
        }%
        return handle;
    }

    public static function wrap(int nsTextContentManagerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textcontentmanager_wrap((void *)(uintptr_t) nsTextContentManagerPtr);
        }%
        return handle;
    }

    public static function destroy(int manager) -> void
    {
        %{
            ns_textcontentmanager_destroy((uintptr_t) manager);
        }%
    }

    public static function addTextLayoutManager(int manager, int layoutManager) -> void
    {
        %{
            ns_textcontentmanager_add_text_layout_manager((uintptr_t) manager, (uintptr_t) layoutManager);
        }%
    }

    public static function removeTextLayoutManager(int manager, int layoutManager) -> void
    {
        %{
            ns_textcontentmanager_remove_text_layout_manager((uintptr_t) manager, (uintptr_t) layoutManager);
        }%
    }

    public static function textLayoutManagersCount(int manager) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textcontentmanager_text_layout_managers_count((uintptr_t) manager);
        }%
        return value;
    }

    public static function hasEditingTransaction(int manager) -> bool
    {
        bool result;
        %{
            result = ns_textcontentmanager_has_editing_transaction((uintptr_t) manager) == 1;
        }%
        return result;
    }

    public static function automaticallySynchronizesTextLayoutManagers(int manager) -> bool
    {
        bool result;
        %{
            result = ns_textcontentmanager_automatically_synchronizes_text_layout_managers((uintptr_t) manager) == 1;
        }%
        return result;
    }

    public static function setAutomaticallySynchronizesTextLayoutManagers(int manager, bool flag) -> void
    {
        %{
            ns_textcontentmanager_set_automatically_synchronizes_text_layout_managers((uintptr_t) manager, flag ? 1 : 0);
        }%
    }

    public static function automaticallySynchronizesToBackingStore(int manager) -> bool
    {
        bool result;
        %{
            result = ns_textcontentmanager_automatically_synchronizes_to_backing_store((uintptr_t) manager) == 1;
        }%
        return result;
    }

    public static function setAutomaticallySynchronizesToBackingStore(int manager, bool flag) -> void
    {
        %{
            ns_textcontentmanager_set_automatically_synchronizes_to_backing_store((uintptr_t) manager, flag ? 1 : 0);
        }%
    }

    public static function documentRangePtr(int manager) -> int
    {
        int ptr;
        %{
            ptr = (zend_long) ns_textcontentmanager_document_range_ptr((uintptr_t) manager);
        }%
        return ptr;
    }
}
""")

write(ROOT / ".okf/api/nstextcontentmanager.md", okf(
    "NSTextContentManager", "nstextcontentmanager", "ns-textcontentmanager.h",
    "NSTextContentManager owns TextKit 2 layout managers and the document range.",
    [
        ("create / wrap / destroy", "ownership"),
        ("addTextLayoutManager / removeTextLayoutManager", "NSTextLayoutManager handle"),
        ("textLayoutManagersCount / hasEditingTransaction", "graph / editing"),
        ("automaticallySynchronizesTextLayoutManagers get/set", "sync to layout managers"),
        ("automaticallySynchronizesToBackingStore get/set", "sync to backing store"),
        ("documentRangePtr", "borrowed native NSTextRange* (do not destroy)"),
    ],
))

print("textcontentmanager done")

# ---------------------------------------------------------------------------
# NSTextContentStorage
# ---------------------------------------------------------------------------
write(ROOT / "src/ns-textcontentstorage.h", """#ifndef PHP_APPKIT_NS_TEXTCONTENTSTORAGE_H
#define PHP_APPKIT_NS_TEXTCONTENTSTORAGE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textcontentstorage_create(void);
uintptr_t ns_textcontentstorage_wrap(void *storage);
void ns_textcontentstorage_destroy(uintptr_t storage);
void *ns_textcontentstorage_nstextcontentstorage(uintptr_t storage);

int ns_textcontentstorage_get_attributed_string(uintptr_t storage, char *out, int out_len);
void ns_textcontentstorage_set_attributed_string(uintptr_t storage, const char *string);
uintptr_t ns_textcontentstorage_text_element_for_attributed_string(uintptr_t storage, const char *string);
int ns_textcontentstorage_attributed_string_for_text_element(uintptr_t storage, uintptr_t element, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTCONTENTSTORAGE_H */
""")

write(ROOT / "src/ns-textcontentstorage.m", """#import <AppKit/AppKit.h>
#import "ns-textcontentstorage.h"
#import "ns-textelement.h"
""" + COMMON_M + """
static NSTextContentStorage *ns_textcontentstorage_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextContentStorage class]] ? (NSTextContentStorage *)obj : nil;
}

uintptr_t ns_textcontentstorage_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSTextContentStorage alloc] init]);
    }
}

uintptr_t ns_textcontentstorage_wrap(void *storage)
{
    if (!storage) {
        return 0;
    }
    @autoreleasepool {
        NSTextContentStorage *obj = (__bridge NSTextContentStorage *)storage;
        return [obj isKindOfClass:[NSTextContentStorage class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textcontentstorage_destroy(uintptr_t storage)
{
    ns_release_handle(storage);
}

void *ns_textcontentstorage_nstextcontentstorage(uintptr_t storage)
{
    NSTextContentStorage *obj = ns_textcontentstorage_from(storage);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_textcontentstorage_get_attributed_string(uintptr_t storage, char *out, int out_len)
{
    @autoreleasepool {
        NSTextContentStorage *obj = ns_textcontentstorage_from(storage);
        return ns_copy_nsstring(obj.attributedString.string, out, out_len);
    }
}

void ns_textcontentstorage_set_attributed_string(uintptr_t storage, const char *string)
{
    @autoreleasepool {
        NSTextContentStorage *obj = ns_textcontentstorage_from(storage);
        if (obj) {
            NSString *text = string ? [NSString stringWithUTF8String:string] : @"";
            obj.attributedString = [[NSAttributedString alloc] initWithString:text];
        }
    }
}

uintptr_t ns_textcontentstorage_text_element_for_attributed_string(uintptr_t storage, const char *string)
{
    @autoreleasepool {
        NSTextContentStorage *obj = ns_textcontentstorage_from(storage);
        if (!obj) {
            return 0;
        }
        NSString *text = string ? [NSString stringWithUTF8String:string] : @"";
        NSAttributedString *as = [[NSAttributedString alloc] initWithString:text];
        return ns_retain_obj([obj textElementForAttributedString:as]);
    }
}

int ns_textcontentstorage_attributed_string_for_text_element(uintptr_t storage, uintptr_t element, char *out, int out_len)
{
    @autoreleasepool {
        NSTextContentStorage *obj = ns_textcontentstorage_from(storage);
        NSTextElement *el = (__bridge NSTextElement *)ns_textelement_nstextelement(element);
        if (!obj || !el) {
            return ns_copy_nsstring(nil, out, out_len);
        }
        return ns_copy_nsstring([obj attributedStringForTextElement:el].string, out, out_len);
    }
}
""")

write(ROOT / "appkit/ns/nstextcontentstorage/nstextcontentstorage.zep", zep_ns("NSTextContentStorage", "ns-textcontentstorage.h", "NSTextContentStorage — attributed-string backed content.") + """
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textcontentstorage_create();
        }%
        return handle;
    }

    public static function wrap(int nsTextContentStoragePtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textcontentstorage_wrap((void *)(uintptr_t) nsTextContentStoragePtr);
        }%
        return handle;
    }

    public static function destroy(int storage) -> void
    {
        %{
            ns_textcontentstorage_destroy((uintptr_t) storage);
        }%
    }

    public static function getAttributedString(int storage) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\\0';
            if (ns_textcontentstorage_get_attributed_string((uintptr_t) storage, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setAttributedString(int storage, string value) -> void
    {
        %{
            ns_textcontentstorage_set_attributed_string((uintptr_t) storage, Z_STRVAL(value));
        }%
    }

    public static function textElementForAttributedString(int storage, string value) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textcontentstorage_text_element_for_attributed_string((uintptr_t) storage, Z_STRVAL(value));
        }%
        return handle;
    }

    public static function attributedStringForTextElement(int storage, int element) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\\0';
            if (ns_textcontentstorage_attributed_string_for_text_element((uintptr_t) storage, (uintptr_t) element, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}
""")

write(ROOT / ".okf/api/nstextcontentstorage.md", okf(
    "NSTextContentStorage", "nstextcontentstorage", "ns-textcontentstorage.h",
    "NSTextContentStorage attributed-string backing store for TextKit 2.",
    [
        ("create / wrap / destroy", "ownership"),
        ("getAttributedString / setAttributedString", "plain string of attributedString"),
        ("textElementForAttributedString", "retained NSTextElement handle"),
        ("attributedStringForTextElement", "plain string for element handle"),
    ],
))

print("textcontentstorage done")

# ---------------------------------------------------------------------------
# NSTextLayoutFragment
# ---------------------------------------------------------------------------
write(ROOT / "src/ns-textlayoutfragment.h", """#ifndef PHP_APPKIT_NS_TEXTLAYOUTFRAGMENT_H
#define PHP_APPKIT_NS_TEXTLAYOUTFRAGMENT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_TEXTLAYOUTFRAGMENT_STATE_NONE = 0,
    NS_TEXTLAYOUTFRAGMENT_STATE_ESTIMATED_USAGE_BOUNDS = 1,
    NS_TEXTLAYOUTFRAGMENT_STATE_CALCULATED_USAGE_BOUNDS = 2,
    NS_TEXTLAYOUTFRAGMENT_STATE_LAYOUT_AVAILABLE = 3
} ns_textlayoutfragment_state;

uintptr_t ns_textlayoutfragment_wrap(void *fragment);
void ns_textlayoutfragment_destroy(uintptr_t fragment);
void *ns_textlayoutfragment_nstextlayoutfragment(uintptr_t fragment);

int ns_textlayoutfragment_get_state(uintptr_t fragment);
void ns_textlayoutfragment_layout_fragment_frame(uintptr_t fragment, double *x, double *y, double *w, double *h);
void ns_textlayoutfragment_rendering_surface_bounds(uintptr_t fragment, double *x, double *y, double *w, double *h);
int ns_textlayoutfragment_text_line_fragments_count(uintptr_t fragment);
void ns_textlayoutfragment_invalidate_layout(uintptr_t fragment);
double ns_textlayoutfragment_leading_padding(uintptr_t fragment);
double ns_textlayoutfragment_trailing_padding(uintptr_t fragment);
double ns_textlayoutfragment_top_margin(uintptr_t fragment);
double ns_textlayoutfragment_bottom_margin(uintptr_t fragment);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTLAYOUTFRAGMENT_H */
""")

write(ROOT / "src/ns-textlayoutfragment.m", """#import <AppKit/AppKit.h>
#import "ns-textlayoutfragment.h"
""" + COMMON_M + """
static NSTextLayoutFragment *ns_textlayoutfragment_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextLayoutFragment class]] ? (NSTextLayoutFragment *)obj : nil;
}

static void ns_copy_cgrect(CGRect rect, double *x, double *y, double *w, double *h)
{
    if (x) {
        *x = (double)rect.origin.x;
    }
    if (y) {
        *y = (double)rect.origin.y;
    }
    if (w) {
        *w = (double)rect.size.width;
    }
    if (h) {
        *h = (double)rect.size.height;
    }
}

uintptr_t ns_textlayoutfragment_wrap(void *fragment)
{
    if (!fragment) {
        return 0;
    }
    @autoreleasepool {
        NSTextLayoutFragment *obj = (__bridge NSTextLayoutFragment *)fragment;
        return [obj isKindOfClass:[NSTextLayoutFragment class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textlayoutfragment_destroy(uintptr_t fragment)
{
    ns_release_handle(fragment);
}

void *ns_textlayoutfragment_nstextlayoutfragment(uintptr_t fragment)
{
    NSTextLayoutFragment *obj = ns_textlayoutfragment_from(fragment);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_textlayoutfragment_get_state(uintptr_t fragment)
{
    @autoreleasepool {
        NSTextLayoutFragment *obj = ns_textlayoutfragment_from(fragment);
        return obj ? (int)obj.state : 0;
    }
}

void ns_textlayoutfragment_layout_fragment_frame(uintptr_t fragment, double *x, double *y, double *w, double *h)
{
    @autoreleasepool {
        NSTextLayoutFragment *obj = ns_textlayoutfragment_from(fragment);
        ns_copy_cgrect(obj ? obj.layoutFragmentFrame : CGRectZero, x, y, w, h);
    }
}

void ns_textlayoutfragment_rendering_surface_bounds(uintptr_t fragment, double *x, double *y, double *w, double *h)
{
    @autoreleasepool {
        NSTextLayoutFragment *obj = ns_textlayoutfragment_from(fragment);
        ns_copy_cgrect(obj ? obj.renderingSurfaceBounds : CGRectZero, x, y, w, h);
    }
}

int ns_textlayoutfragment_text_line_fragments_count(uintptr_t fragment)
{
    @autoreleasepool {
        NSTextLayoutFragment *obj = ns_textlayoutfragment_from(fragment);
        return obj ? (int)obj.textLineFragments.count : 0;
    }
}

void ns_textlayoutfragment_invalidate_layout(uintptr_t fragment)
{
    @autoreleasepool {
        NSTextLayoutFragment *obj = ns_textlayoutfragment_from(fragment);
        if (obj) {
            [obj invalidateLayout];
        }
    }
}

double ns_textlayoutfragment_leading_padding(uintptr_t fragment)
{
    @autoreleasepool {
        NSTextLayoutFragment *obj = ns_textlayoutfragment_from(fragment);
        return obj ? (double)obj.leadingPadding : 0.0;
    }
}

double ns_textlayoutfragment_trailing_padding(uintptr_t fragment)
{
    @autoreleasepool {
        NSTextLayoutFragment *obj = ns_textlayoutfragment_from(fragment);
        return obj ? (double)obj.trailingPadding : 0.0;
    }
}

double ns_textlayoutfragment_top_margin(uintptr_t fragment)
{
    @autoreleasepool {
        NSTextLayoutFragment *obj = ns_textlayoutfragment_from(fragment);
        return obj ? (double)obj.topMargin : 0.0;
    }
}

double ns_textlayoutfragment_bottom_margin(uintptr_t fragment)
{
    @autoreleasepool {
        NSTextLayoutFragment *obj = ns_textlayoutfragment_from(fragment);
        return obj ? (double)obj.bottomMargin : 0.0;
    }
}
""")

write(ROOT / "appkit/ns/nstextlayoutfragment/nstextlayoutfragment.zep", zep_ns("NSTextLayoutFragment", "ns-textlayoutfragment.h", "NSTextLayoutFragment — laid-out text fragment.") + """
{
    public static function wrap(int nsTextLayoutFragmentPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textlayoutfragment_wrap((void *)(uintptr_t) nsTextLayoutFragmentPtr);
        }%
        return handle;
    }

    public static function destroy(int fragment) -> void
    {
        %{
            ns_textlayoutfragment_destroy((uintptr_t) fragment);
        }%
    }

    public static function state(int fragment) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textlayoutfragment_get_state((uintptr_t) fragment);
        }%
        return value;
    }

    /**
     * @return array [x, y, w, h]
     */
    public static function layoutFragmentFrame(int fragment) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_textlayoutfragment_layout_fragment_frame((uintptr_t) fragment, &x, &y, &w, &h);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        }%
        return out;
    }

    /**
     * @return array [x, y, w, h]
     */
    public static function renderingSurfaceBounds(int fragment) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_textlayoutfragment_rendering_surface_bounds((uintptr_t) fragment, &x, &y, &w, &h);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        }%
        return out;
    }

    public static function textLineFragmentsCount(int fragment) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textlayoutfragment_text_line_fragments_count((uintptr_t) fragment);
        }%
        return value;
    }

    public static function invalidateLayout(int fragment) -> void
    {
        %{
            ns_textlayoutfragment_invalidate_layout((uintptr_t) fragment);
        }%
    }

    public static function leadingPadding(int fragment) -> float
    {
        double value;
        %{
            value = ns_textlayoutfragment_leading_padding((uintptr_t) fragment);
        }%
        return (float) value;
    }

    public static function trailingPadding(int fragment) -> float
    {
        double value;
        %{
            value = ns_textlayoutfragment_trailing_padding((uintptr_t) fragment);
        }%
        return (float) value;
    }

    public static function topMargin(int fragment) -> float
    {
        double value;
        %{
            value = ns_textlayoutfragment_top_margin((uintptr_t) fragment);
        }%
        return (float) value;
    }

    public static function bottomMargin(int fragment) -> float
    {
        double value;
        %{
            value = ns_textlayoutfragment_bottom_margin((uintptr_t) fragment);
        }%
        return (float) value;
    }
}
""")

write(ROOT / ".okf/api/nstextlayoutfragment.md", okf(
    "NSTextLayoutFragment", "nstextlayoutfragment", "ns-textlayoutfragment.h",
    "NSTextLayoutFragment frame, state, line fragments, and padding.",
    [
        ("wrap / destroy", "ownership (from layout manager)"),
        ("state", "NSTextLayoutFragmentState"),
        ("layoutFragmentFrame / renderingSurfaceBounds", "CGRect arrays [x,y,w,h]"),
        ("textLineFragmentsCount / invalidateLayout", "lines / relayout"),
        ("leadingPadding / trailingPadding / topMargin / bottomMargin", "insets"),
    ],
))

print("textlayoutfragment done")

# ---------------------------------------------------------------------------
# NSTextLineFragment
# ---------------------------------------------------------------------------
write(ROOT / "src/ns-textlinefragment.h", """#ifndef PHP_APPKIT_NS_TEXTLINEFRAGMENT_H
#define PHP_APPKIT_NS_TEXTLINEFRAGMENT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textlinefragment_create_with_string(const char *string, int location, int length);
uintptr_t ns_textlinefragment_wrap(void *fragment);
void ns_textlinefragment_destroy(uintptr_t fragment);
void *ns_textlinefragment_nstextlinefragment(uintptr_t fragment);

void ns_textlinefragment_character_range(uintptr_t fragment, int *location, int *length);
void ns_textlinefragment_typographic_bounds(uintptr_t fragment, double *x, double *y, double *w, double *h);
void ns_textlinefragment_glyph_origin(uintptr_t fragment, double *x, double *y);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTLINEFRAGMENT_H */
""")

write(ROOT / "src/ns-textlinefragment.m", """#import <AppKit/AppKit.h>
#import "ns-textlinefragment.h"
""" + COMMON_M + """
static NSTextLineFragment *ns_textlinefragment_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextLineFragment class]] ? (NSTextLineFragment *)obj : nil;
}

uintptr_t ns_textlinefragment_create_with_string(const char *string, int location, int length)
{
    @autoreleasepool {
        NSString *text = string ? [NSString stringWithUTF8String:string] : @"";
        NSAttributedString *as = [[NSAttributedString alloc] initWithString:text];
        NSRange range = NSMakeRange((NSUInteger)MAX(location, 0), (NSUInteger)MAX(length, 0));
        if (NSMaxRange(range) > as.length) {
            range = NSMakeRange(0, as.length);
        }
        return ns_retain_obj([[NSTextLineFragment alloc] initWithAttributedString:as range:range]);
    }
}

uintptr_t ns_textlinefragment_wrap(void *fragment)
{
    if (!fragment) {
        return 0;
    }
    @autoreleasepool {
        NSTextLineFragment *obj = (__bridge NSTextLineFragment *)fragment;
        return [obj isKindOfClass:[NSTextLineFragment class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textlinefragment_destroy(uintptr_t fragment)
{
    ns_release_handle(fragment);
}

void *ns_textlinefragment_nstextlinefragment(uintptr_t fragment)
{
    NSTextLineFragment *obj = ns_textlinefragment_from(fragment);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_textlinefragment_character_range(uintptr_t fragment, int *location, int *length)
{
    if (location) {
        *location = 0;
    }
    if (length) {
        *length = 0;
    }
    @autoreleasepool {
        NSTextLineFragment *obj = ns_textlinefragment_from(fragment);
        if (!obj) {
            return;
        }
        NSRange range = obj.characterRange;
        if (location) {
            *location = (int)range.location;
        }
        if (length) {
            *length = (int)range.length;
        }
    }
}

void ns_textlinefragment_typographic_bounds(uintptr_t fragment, double *x, double *y, double *w, double *h)
{
    @autoreleasepool {
        NSTextLineFragment *obj = ns_textlinefragment_from(fragment);
        CGRect bounds = obj ? obj.typographicBounds : CGRectZero;
        if (x) {
            *x = (double)bounds.origin.x;
        }
        if (y) {
            *y = (double)bounds.origin.y;
        }
        if (w) {
            *w = (double)bounds.size.width;
        }
        if (h) {
            *h = (double)bounds.size.height;
        }
    }
}

void ns_textlinefragment_glyph_origin(uintptr_t fragment, double *x, double *y)
{
    if (x) {
        *x = 0.0;
    }
    if (y) {
        *y = 0.0;
    }
    @autoreleasepool {
        NSTextLineFragment *obj = ns_textlinefragment_from(fragment);
        if (!obj) {
            return;
        }
        CGPoint origin = obj.glyphOrigin;
        if (x) {
            *x = (double)origin.x;
        }
        if (y) {
            *y = (double)origin.y;
        }
    }
}
""")

write(ROOT / "appkit/ns/nstextlinefragment/nstextlinefragment.zep", zep_ns("NSTextLineFragment", "ns-textlinefragment.h", "NSTextLineFragment — single laid-out line.") + """
{
    public static function createWithString(string value, int location, int length) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textlinefragment_create_with_string(Z_STRVAL(value), (int) location, (int) length);
        }%
        return handle;
    }

    public static function wrap(int nsTextLineFragmentPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textlinefragment_wrap((void *)(uintptr_t) nsTextLineFragmentPtr);
        }%
        return handle;
    }

    public static function destroy(int fragment) -> void
    {
        %{
            ns_textlinefragment_destroy((uintptr_t) fragment);
        }%
    }

    /**
     * @return array [location, length]
     */
    public static function characterRange(int fragment) -> array
    {
        array out = [];
        %{
            int location = 0, length = 0;
            ns_textlinefragment_character_range((uintptr_t) fragment, &location, &length);
            add_next_index_long(&out, location);
            add_next_index_long(&out, length);
        }%
        return out;
    }

    /**
     * @return array [x, y, w, h]
     */
    public static function typographicBounds(int fragment) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_textlinefragment_typographic_bounds((uintptr_t) fragment, &x, &y, &w, &h);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        }%
        return out;
    }

    /**
     * @return array [x, y]
     */
    public static function glyphOrigin(int fragment) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0;
            ns_textlinefragment_glyph_origin((uintptr_t) fragment, &x, &y);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
        }%
        return out;
    }
}
""")

write(ROOT / ".okf/api/nstextlinefragment.md", okf(
    "NSTextLineFragment", "nstextlinefragment", "ns-textlinefragment.h",
    "NSTextLineFragment character range, typographic bounds, and glyph origin.",
    [
        ("createWithString / wrap / destroy", "ownership"),
        ("characterRange", "[location, length]"),
        ("typographicBounds", "[x, y, w, h]"),
        ("glyphOrigin", "[x, y]"),
    ],
))

print("textlinefragment done")

# ---------------------------------------------------------------------------
# NSTextElement
# ---------------------------------------------------------------------------
write(ROOT / "src/ns-textelement.h", """#ifndef PHP_APPKIT_NS_TEXTELEMENT_H
#define PHP_APPKIT_NS_TEXTELEMENT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textelement_wrap(void *element);
void ns_textelement_destroy(uintptr_t element);
void *ns_textelement_nstextelement(uintptr_t element);

int ns_textelement_is_represented_element(uintptr_t element);
int ns_textelement_child_elements_count(uintptr_t element);
uintptr_t ns_textelement_element_range_ptr(uintptr_t element);
uintptr_t ns_textelement_text_content_manager(uintptr_t element);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTELEMENT_H */
""")

write(ROOT / "src/ns-textelement.m", """#import <AppKit/AppKit.h>
#import "ns-textelement.h"
#import "ns-textcontentmanager.h"
""" + COMMON_M + """
static NSTextElement *ns_textelement_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextElement class]] ? (NSTextElement *)obj : nil;
}

uintptr_t ns_textelement_wrap(void *element)
{
    if (!element) {
        return 0;
    }
    @autoreleasepool {
        NSTextElement *obj = (__bridge NSTextElement *)element;
        return [obj isKindOfClass:[NSTextElement class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textelement_destroy(uintptr_t element)
{
    ns_release_handle(element);
}

void *ns_textelement_nstextelement(uintptr_t element)
{
    NSTextElement *obj = ns_textelement_from(element);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_textelement_is_represented_element(uintptr_t element)
{
    @autoreleasepool {
        NSTextElement *obj = ns_textelement_from(element);
        return obj && obj.isRepresentedElement ? 1 : 0;
    }
}

int ns_textelement_child_elements_count(uintptr_t element)
{
    @autoreleasepool {
        NSTextElement *obj = ns_textelement_from(element);
        return obj ? (int)obj.childElements.count : 0;
    }
}

uintptr_t ns_textelement_element_range_ptr(uintptr_t element)
{
    @autoreleasepool {
        NSTextElement *obj = ns_textelement_from(element);
        return obj && obj.elementRange ? (uintptr_t)(__bridge void *)obj.elementRange : 0;
    }
}

uintptr_t ns_textelement_text_content_manager(uintptr_t element)
{
    @autoreleasepool {
        NSTextElement *obj = ns_textelement_from(element);
        return obj && obj.textContentManager ? ns_textcontentmanager_wrap((__bridge void *)obj.textContentManager) : 0;
    }
}
""")

write(ROOT / "appkit/ns/nstextelement/nstextelement.zep", zep_ns("NSTextElement", "ns-textelement.h", "NSTextElement — TextKit 2 content element.") + """
{
    public static function wrap(int nsTextElementPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textelement_wrap((void *)(uintptr_t) nsTextElementPtr);
        }%
        return handle;
    }

    public static function destroy(int element) -> void
    {
        %{
            ns_textelement_destroy((uintptr_t) element);
        }%
    }

    public static function isRepresentedElement(int element) -> bool
    {
        bool result;
        %{
            result = ns_textelement_is_represented_element((uintptr_t) element) == 1;
        }%
        return result;
    }

    public static function childElementsCount(int element) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textelement_child_elements_count((uintptr_t) element);
        }%
        return value;
    }

    public static function elementRangePtr(int element) -> int
    {
        int ptr;
        %{
            ptr = (zend_long) ns_textelement_element_range_ptr((uintptr_t) element);
        }%
        return ptr;
    }

    public static function textContentManager(int element) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textelement_text_content_manager((uintptr_t) element);
        }%
        return handle;
    }
}
""")

write(ROOT / ".okf/api/nstextelement.md", okf(
    "NSTextElement", "nstextelement", "ns-textelement.h",
    "NSTextElement represented flag, children, borrowed range, content manager handle.",
    [
        ("wrap / destroy", "ownership"),
        ("isRepresentedElement / childElementsCount", "graph"),
        ("elementRangePtr", "borrowed native NSTextRange*"),
        ("textContentManager", "retained NSTextContentManager handle"),
    ],
))

print("textelement done")

# ---------------------------------------------------------------------------
# NSTextParagraph
# ---------------------------------------------------------------------------
write(ROOT / "src/ns-textparagraph.h", """#ifndef PHP_APPKIT_NS_TEXTPARAGRAPH_H
#define PHP_APPKIT_NS_TEXTPARAGRAPH_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textparagraph_create(const char *string);
uintptr_t ns_textparagraph_wrap(void *paragraph);
void ns_textparagraph_destroy(uintptr_t paragraph);
void *ns_textparagraph_nstextparagraph(uintptr_t paragraph);

int ns_textparagraph_get_attributed_string(uintptr_t paragraph, char *out, int out_len);
uintptr_t ns_textparagraph_paragraph_content_range_ptr(uintptr_t paragraph);
uintptr_t ns_textparagraph_paragraph_separator_range_ptr(uintptr_t paragraph);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTPARAGRAPH_H */
""")

write(ROOT / "src/ns-textparagraph.m", """#import <AppKit/AppKit.h>
#import "ns-textparagraph.h"
""" + COMMON_M + """
static NSTextParagraph *ns_textparagraph_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextParagraph class]] ? (NSTextParagraph *)obj : nil;
}

uintptr_t ns_textparagraph_create(const char *string)
{
    @autoreleasepool {
        NSString *text = string ? [NSString stringWithUTF8String:string] : @"";
        NSAttributedString *as = [[NSAttributedString alloc] initWithString:text];
        return ns_retain_obj([[NSTextParagraph alloc] initWithAttributedString:as]);
    }
}

uintptr_t ns_textparagraph_wrap(void *paragraph)
{
    if (!paragraph) {
        return 0;
    }
    @autoreleasepool {
        NSTextParagraph *obj = (__bridge NSTextParagraph *)paragraph;
        return [obj isKindOfClass:[NSTextParagraph class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textparagraph_destroy(uintptr_t paragraph)
{
    ns_release_handle(paragraph);
}

void *ns_textparagraph_nstextparagraph(uintptr_t paragraph)
{
    NSTextParagraph *obj = ns_textparagraph_from(paragraph);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_textparagraph_get_attributed_string(uintptr_t paragraph, char *out, int out_len)
{
    @autoreleasepool {
        NSTextParagraph *obj = ns_textparagraph_from(paragraph);
        return ns_copy_nsstring(obj.attributedString.string, out, out_len);
    }
}

uintptr_t ns_textparagraph_paragraph_content_range_ptr(uintptr_t paragraph)
{
    @autoreleasepool {
        NSTextParagraph *obj = ns_textparagraph_from(paragraph);
        return obj && obj.paragraphContentRange ? (uintptr_t)(__bridge void *)obj.paragraphContentRange : 0;
    }
}

uintptr_t ns_textparagraph_paragraph_separator_range_ptr(uintptr_t paragraph)
{
    @autoreleasepool {
        NSTextParagraph *obj = ns_textparagraph_from(paragraph);
        return obj && obj.paragraphSeparatorRange ? (uintptr_t)(__bridge void *)obj.paragraphSeparatorRange : 0;
    }
}
""")

write(ROOT / "appkit/ns/nstextparagraph/nstextparagraph.zep", zep_ns("NSTextParagraph", "ns-textparagraph.h", "NSTextParagraph — paragraph text element.") + """
{
    public static function create(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textparagraph_create(Z_STRVAL(value));
        }%
        return handle;
    }

    public static function wrap(int nsTextParagraphPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textparagraph_wrap((void *)(uintptr_t) nsTextParagraphPtr);
        }%
        return handle;
    }

    public static function destroy(int paragraph) -> void
    {
        %{
            ns_textparagraph_destroy((uintptr_t) paragraph);
        }%
    }

    public static function getAttributedString(int paragraph) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\\0';
            if (ns_textparagraph_get_attributed_string((uintptr_t) paragraph, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function paragraphContentRangePtr(int paragraph) -> int
    {
        int ptr;
        %{
            ptr = (zend_long) ns_textparagraph_paragraph_content_range_ptr((uintptr_t) paragraph);
        }%
        return ptr;
    }

    public static function paragraphSeparatorRangePtr(int paragraph) -> int
    {
        int ptr;
        %{
            ptr = (zend_long) ns_textparagraph_paragraph_separator_range_ptr((uintptr_t) paragraph);
        }%
        return ptr;
    }
}
""")

write(ROOT / ".okf/api/nstextparagraph.md", okf(
    "NSTextParagraph", "nstextparagraph", "ns-textparagraph.h",
    "NSTextParagraph attributed string and borrowed content/separator ranges.",
    [
        ("create / wrap / destroy", "ownership"),
        ("getAttributedString", "plain string of attributedString"),
        ("paragraphContentRangePtr / paragraphSeparatorRangePtr", "borrowed NSTextRange*"),
    ],
))

print("textparagraph done")

# ---------------------------------------------------------------------------
# NSTextSelection
# ---------------------------------------------------------------------------
write(ROOT / "src/ns-textselection.h", """#ifndef PHP_APPKIT_NS_TEXTSELECTION_H
#define PHP_APPKIT_NS_TEXTSELECTION_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_TEXTSELECTION_AFFINITY_UPSTREAM = 0,
    NS_TEXTSELECTION_AFFINITY_DOWNSTREAM = 1
} ns_textselection_affinity;

typedef enum {
    NS_TEXTSELECTION_GRANULARITY_CHARACTER = 0,
    NS_TEXTSELECTION_GRANULARITY_WORD = 1,
    NS_TEXTSELECTION_GRANULARITY_SENTENCE = 2,
    NS_TEXTSELECTION_GRANULARITY_PARAGRAPH = 3,
    NS_TEXTSELECTION_GRANULARITY_LINE = 4,
    NS_TEXTSELECTION_GRANULARITY_DOCUMENT = 5
} ns_textselection_granularity;

uintptr_t ns_textselection_create_with_location(uintptr_t ns_text_location_ptr, int affinity);
uintptr_t ns_textselection_wrap(void *selection);
void ns_textselection_destroy(uintptr_t selection);
void *ns_textselection_nstextselection(uintptr_t selection);

int ns_textselection_get_granularity(uintptr_t selection);
int ns_textselection_get_affinity(uintptr_t selection);
int ns_textselection_is_transient(uintptr_t selection);
int ns_textselection_text_ranges_count(uintptr_t selection);
double ns_textselection_anchor_position_offset(uintptr_t selection);
void ns_textselection_set_anchor_position_offset(uintptr_t selection, double offset);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTSELECTION_H */
""")

write(ROOT / "src/ns-textselection.m", """#import <AppKit/AppKit.h>
#import "ns-textselection.h"
""" + COMMON_M + """
static NSTextSelection *ns_textselection_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextSelection class]] ? (NSTextSelection *)obj : nil;
}

uintptr_t ns_textselection_create_with_location(uintptr_t ns_text_location_ptr, int affinity)
{
    @autoreleasepool {
        id<NSTextLocation> location = ns_text_location_ptr ? (__bridge id<NSTextLocation>)(void *)ns_text_location_ptr : nil;
        if (!location) {
            return 0;
        }
        return ns_retain_obj([[NSTextSelection alloc] initWithLocation:location affinity:(NSTextSelectionAffinity)affinity]);
    }
}

uintptr_t ns_textselection_wrap(void *selection)
{
    if (!selection) {
        return 0;
    }
    @autoreleasepool {
        NSTextSelection *obj = (__bridge NSTextSelection *)selection;
        return [obj isKindOfClass:[NSTextSelection class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textselection_destroy(uintptr_t selection)
{
    ns_release_handle(selection);
}

void *ns_textselection_nstextselection(uintptr_t selection)
{
    NSTextSelection *obj = ns_textselection_from(selection);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_textselection_get_granularity(uintptr_t selection)
{
    @autoreleasepool {
        NSTextSelection *obj = ns_textselection_from(selection);
        return obj ? (int)obj.granularity : 0;
    }
}

int ns_textselection_get_affinity(uintptr_t selection)
{
    @autoreleasepool {
        NSTextSelection *obj = ns_textselection_from(selection);
        return obj ? (int)obj.affinity : 0;
    }
}

int ns_textselection_is_transient(uintptr_t selection)
{
    @autoreleasepool {
        NSTextSelection *obj = ns_textselection_from(selection);
        return obj && obj.isTransient ? 1 : 0;
    }
}

int ns_textselection_text_ranges_count(uintptr_t selection)
{
    @autoreleasepool {
        NSTextSelection *obj = ns_textselection_from(selection);
        return obj ? (int)obj.textRanges.count : 0;
    }
}

double ns_textselection_anchor_position_offset(uintptr_t selection)
{
    @autoreleasepool {
        NSTextSelection *obj = ns_textselection_from(selection);
        return obj ? (double)obj.anchorPositionOffset : 0.0;
    }
}

void ns_textselection_set_anchor_position_offset(uintptr_t selection, double offset)
{
    @autoreleasepool {
        NSTextSelection *obj = ns_textselection_from(selection);
        if (obj) {
            obj.anchorPositionOffset = (CGFloat)offset;
        }
    }
}
""")

write(ROOT / "appkit/ns/nstextselection/nstextselection.zep", zep_ns("NSTextSelection", "ns-textselection.h", "NSTextSelection — TextKit 2 selection.") + """
{
    public static function createWithLocation(int nsTextLocationPtr, int affinity) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textselection_create_with_location((uintptr_t) nsTextLocationPtr, (int) affinity);
        }%
        return handle;
    }

    public static function wrap(int nsTextSelectionPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textselection_wrap((void *)(uintptr_t) nsTextSelectionPtr);
        }%
        return handle;
    }

    public static function destroy(int selection) -> void
    {
        %{
            ns_textselection_destroy((uintptr_t) selection);
        }%
    }

    public static function granularity(int selection) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textselection_get_granularity((uintptr_t) selection);
        }%
        return value;
    }

    public static function affinity(int selection) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textselection_get_affinity((uintptr_t) selection);
        }%
        return value;
    }

    public static function isTransient(int selection) -> bool
    {
        bool result;
        %{
            result = ns_textselection_is_transient((uintptr_t) selection) == 1;
        }%
        return result;
    }

    public static function textRangesCount(int selection) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textselection_text_ranges_count((uintptr_t) selection);
        }%
        return value;
    }

    public static function getAnchorPositionOffset(int selection) -> float
    {
        double value;
        %{
            value = ns_textselection_anchor_position_offset((uintptr_t) selection);
        }%
        return (float) value;
    }

    public static function setAnchorPositionOffset(int selection, float offset) -> void
    {
        %{
            ns_textselection_set_anchor_position_offset((uintptr_t) selection, (double) offset);
        }%
    }
}
""")

write(ROOT / ".okf/api/nstextselection.md", okf(
    "NSTextSelection", "nstextselection", "ns-textselection.h",
    "NSTextSelection created from a borrowed NSTextLocation* plus affinity.",
    [
        ("createWithLocation / wrap / destroy", "ownership"),
        ("granularity / affinity / isTransient", "selection traits"),
        ("textRangesCount", "textRanges.count"),
        ("getAnchorPositionOffset / setAnchorPositionOffset", "anchorPositionOffset"),
    ],
))

print("textselection done")

# ---------------------------------------------------------------------------
# NSTextViewportLayoutController
# ---------------------------------------------------------------------------
write(ROOT / "src/ns-textviewportlayoutcontroller.h", """#ifndef PHP_APPKIT_NS_TEXTVIEWPORTLAYOUTCONTROLLER_H
#define PHP_APPKIT_NS_TEXTVIEWPORTLAYOUTCONTROLLER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textviewportlayoutcontroller_wrap(void *controller);
void ns_textviewportlayoutcontroller_destroy(uintptr_t controller);
void *ns_textviewportlayoutcontroller_nstextviewportlayoutcontroller(uintptr_t controller);

void ns_textviewportlayoutcontroller_viewport_bounds(uintptr_t controller, double *x, double *y, double *w, double *h);
void ns_textviewportlayoutcontroller_layout_viewport(uintptr_t controller);
void ns_textviewportlayoutcontroller_adjust_viewport_by_vertical_offset(uintptr_t controller, double offset);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTVIEWPORTLAYOUTCONTROLLER_H */
""")

write(ROOT / "src/ns-textviewportlayoutcontroller.m", """#import <AppKit/AppKit.h>
#import "ns-textviewportlayoutcontroller.h"
""" + COMMON_M + """
static NSTextViewportLayoutController *ns_textviewportlayoutcontroller_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextViewportLayoutController class]] ? (NSTextViewportLayoutController *)obj : nil;
}

uintptr_t ns_textviewportlayoutcontroller_wrap(void *controller)
{
    if (!controller) {
        return 0;
    }
    @autoreleasepool {
        NSTextViewportLayoutController *obj = (__bridge NSTextViewportLayoutController *)controller;
        return [obj isKindOfClass:[NSTextViewportLayoutController class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textviewportlayoutcontroller_destroy(uintptr_t controller)
{
    ns_release_handle(controller);
}

void *ns_textviewportlayoutcontroller_nstextviewportlayoutcontroller(uintptr_t controller)
{
    NSTextViewportLayoutController *obj = ns_textviewportlayoutcontroller_from(controller);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_textviewportlayoutcontroller_viewport_bounds(uintptr_t controller, double *x, double *y, double *w, double *h)
{
    @autoreleasepool {
        NSTextViewportLayoutController *obj = ns_textviewportlayoutcontroller_from(controller);
        CGRect bounds = obj ? obj.viewportBounds : CGRectZero;
        if (x) {
            *x = (double)bounds.origin.x;
        }
        if (y) {
            *y = (double)bounds.origin.y;
        }
        if (w) {
            *w = (double)bounds.size.width;
        }
        if (h) {
            *h = (double)bounds.size.height;
        }
    }
}

void ns_textviewportlayoutcontroller_layout_viewport(uintptr_t controller)
{
    @autoreleasepool {
        NSTextViewportLayoutController *obj = ns_textviewportlayoutcontroller_from(controller);
        if (obj) {
            [obj layoutViewport];
        }
    }
}

void ns_textviewportlayoutcontroller_adjust_viewport_by_vertical_offset(uintptr_t controller, double offset)
{
    @autoreleasepool {
        NSTextViewportLayoutController *obj = ns_textviewportlayoutcontroller_from(controller);
        if (obj) {
            [obj adjustViewportByVerticalOffset:(CGFloat)offset];
        }
    }
}
""")

write(ROOT / "appkit/ns/nstextviewportlayoutcontroller/nstextviewportlayoutcontroller.zep", zep_ns("NSTextViewportLayoutController", "ns-textviewportlayoutcontroller.h", "NSTextViewportLayoutController — viewport layout from a layout manager.") + """
{
    public static function wrap(int nsTextViewportLayoutControllerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textviewportlayoutcontroller_wrap((void *)(uintptr_t) nsTextViewportLayoutControllerPtr);
        }%
        return handle;
    }

    public static function destroy(int controller) -> void
    {
        %{
            ns_textviewportlayoutcontroller_destroy((uintptr_t) controller);
        }%
    }

    /**
     * @return array [x, y, w, h]
     */
    public static function viewportBounds(int controller) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_textviewportlayoutcontroller_viewport_bounds((uintptr_t) controller, &x, &y, &w, &h);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        }%
        return out;
    }

    public static function layoutViewport(int controller) -> void
    {
        %{
            ns_textviewportlayoutcontroller_layout_viewport((uintptr_t) controller);
        }%
    }

    public static function adjustViewportByVerticalOffset(int controller, float offset) -> void
    {
        %{
            ns_textviewportlayoutcontroller_adjust_viewport_by_vertical_offset((uintptr_t) controller, (double) offset);
        }%
    }
}
""")

write(ROOT / ".okf/api/nstextviewportlayoutcontroller.md", okf(
    "NSTextViewportLayoutController", "nstextviewportlayoutcontroller", "ns-textviewportlayoutcontroller.h",
    "NSTextViewportLayoutController wrap from NSTextLayoutManager.textViewportLayoutController; destroy releases the retain.",
    [
        ("wrap / destroy", "ownership (retained wrap)"),
        ("viewportBounds", "[x, y, w, h]"),
        ("layoutViewport / adjustViewportByVerticalOffset", "viewport layout"),
    ],
))

print("textviewportlayoutcontroller done")

# ---------------------------------------------------------------------------
# NSAdaptiveImageGlyph
# ---------------------------------------------------------------------------
write(ROOT / "src/ns-adaptiveimageglyph.h", """#ifndef PHP_APPKIT_NS_ADAPTIVEIMAGEGLYPH_H
#define PHP_APPKIT_NS_ADAPTIVEIMAGEGLYPH_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_adaptiveimageglyph_create_with_image_content(const char *data, size_t length);
uintptr_t ns_adaptiveimageglyph_wrap(void *glyph);
void ns_adaptiveimageglyph_destroy(uintptr_t glyph);
void *ns_adaptiveimageglyph_nsadaptiveimageglyph(uintptr_t glyph);

int ns_adaptiveimageglyph_content_identifier(uintptr_t glyph, char *out, int out_len);
int ns_adaptiveimageglyph_content_description(uintptr_t glyph, char *out, int out_len);
int ns_adaptiveimageglyph_content_type_identifier(uintptr_t glyph, char *out, int out_len);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_ADAPTIVEIMAGEGLYPH_H */
""")

write(ROOT / "src/ns-adaptiveimageglyph.m", """#import <AppKit/AppKit.h>
#import <UniformTypeIdentifiers/UniformTypeIdentifiers.h>
#import "ns-adaptiveimageglyph.h"
""" + COMMON_M + """
static NSAdaptiveImageGlyph *ns_adaptiveimageglyph_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSAdaptiveImageGlyph class]] ? (NSAdaptiveImageGlyph *)obj : nil;
}

uintptr_t ns_adaptiveimageglyph_create_with_image_content(const char *data, size_t length)
{
    @autoreleasepool {
        NSData *payload = (data && length > 0) ? [NSData dataWithBytes:data length:length] : [NSData data];
        return ns_retain_obj([[NSAdaptiveImageGlyph alloc] initWithImageContent:payload]);
    }
}

uintptr_t ns_adaptiveimageglyph_wrap(void *glyph)
{
    if (!glyph) {
        return 0;
    }
    @autoreleasepool {
        NSAdaptiveImageGlyph *obj = (__bridge NSAdaptiveImageGlyph *)glyph;
        return [obj isKindOfClass:[NSAdaptiveImageGlyph class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_adaptiveimageglyph_destroy(uintptr_t glyph)
{
    ns_release_handle(glyph);
}

void *ns_adaptiveimageglyph_nsadaptiveimageglyph(uintptr_t glyph)
{
    NSAdaptiveImageGlyph *obj = ns_adaptiveimageglyph_from(glyph);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_adaptiveimageglyph_content_identifier(uintptr_t glyph, char *out, int out_len)
{
    @autoreleasepool {
        NSAdaptiveImageGlyph *obj = ns_adaptiveimageglyph_from(glyph);
        return ns_copy_nsstring(obj.contentIdentifier, out, out_len);
    }
}

int ns_adaptiveimageglyph_content_description(uintptr_t glyph, char *out, int out_len)
{
    @autoreleasepool {
        NSAdaptiveImageGlyph *obj = ns_adaptiveimageglyph_from(glyph);
        return ns_copy_nsstring(obj.contentDescription, out, out_len);
    }
}

int ns_adaptiveimageglyph_content_type_identifier(uintptr_t glyph, char *out, int out_len)
{
    @autoreleasepool {
        NSString *identifier = [NSAdaptiveImageGlyph contentType].identifier;
        return ns_copy_nsstring(identifier, out, out_len);
    }
}
""")

write(ROOT / "appkit/ns/nsadaptiveimageglyph/nsadaptiveimageglyph.zep", zep_ns("NSAdaptiveImageGlyph", "ns-adaptiveimageglyph.h", "NSAdaptiveImageGlyph — adaptive image glyph (Genmoji).") + """
{
    public static function createWithImageContent(string data) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_adaptiveimageglyph_create_with_image_content(Z_STRVAL(data), (size_t) Z_STRLEN(data));
        }%
        return handle;
    }

    public static function wrap(int nsAdaptiveImageGlyphPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_adaptiveimageglyph_wrap((void *)(uintptr_t) nsAdaptiveImageGlyphPtr);
        }%
        return handle;
    }

    public static function destroy(int glyph) -> void
    {
        %{
            ns_adaptiveimageglyph_destroy((uintptr_t) glyph);
        }%
    }

    public static function contentIdentifier(int glyph) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\\0';
            if (ns_adaptiveimageglyph_content_identifier((uintptr_t) glyph, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function contentDescription(int glyph) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\\0';
            if (ns_adaptiveimageglyph_content_description((uintptr_t) glyph, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function contentTypeIdentifier(int glyph) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\\0';
            if (ns_adaptiveimageglyph_content_type_identifier((uintptr_t) glyph, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }
}
""")

write(ROOT / ".okf/api/nsadaptiveimageglyph.md", okf(
    "NSAdaptiveImageGlyph", "nsadaptiveimageglyph", "ns-adaptiveimageglyph.h",
    "NSAdaptiveImageGlyph created from image-content bytes; identifier / description / UTI.",
    [
        ("createWithImageContent / wrap / destroy", "ownership"),
        ("contentIdentifier / contentDescription / contentTypeIdentifier", "metadata strings"),
    ],
))

print("adaptiveimageglyph done")

# ---------------------------------------------------------------------------
# Patch config.json, Makefile.frag, .okf/api/index.md
# ---------------------------------------------------------------------------
INDEX_ROWS = [
    ("AppKit\\\\NS\\\\NSTextBlock\\\\NSTextBlock", "text block layout base", "nstextblock.md"),
    ("AppKit\\\\NS\\\\NSParagraphStyle\\\\NSParagraphStyle", "paragraph style (+ mutable)", "nsparagraphstyle.md"),
    ("AppKit\\\\NS\\\\NSTypesetter\\\\NSTypesetter", "shared system typesetter", "nstypesetter.md"),
    ("AppKit\\\\NS\\\\NSATSTypesetter\\\\NSATSTypesetter", "ATS shared typesetter", "nsatstypesetter.md"),
    ("AppKit\\\\NS\\\\NSGlyphGenerator\\\\NSGlyphGenerator", "shared glyph generator (deprecated)", "nsglyphgenerator.md"),
    ("AppKit\\\\NS\\\\NSTextLayoutManager\\\\NSTextLayoutManager", "TextKit 2 layout manager", "nstextlayoutmanager.md"),
    ("AppKit\\\\NS\\\\NSTextContentManager\\\\NSTextContentManager", "TextKit 2 content manager", "nstextcontentmanager.md"),
    ("AppKit\\\\NS\\\\NSTextContentStorage\\\\NSTextContentStorage", "attributed-string content storage", "nstextcontentstorage.md"),
    ("AppKit\\\\NS\\\\NSTextLayoutFragment\\\\NSTextLayoutFragment", "laid-out text fragment", "nstextlayoutfragment.md"),
    ("AppKit\\\\NS\\\\NSTextLineFragment\\\\NSTextLineFragment", "laid-out line fragment", "nstextlinefragment.md"),
    ("AppKit\\\\NS\\\\NSTextElement\\\\NSTextElement", "TextKit 2 text element", "nstextelement.md"),
    ("AppKit\\\\NS\\\\NSTextParagraph\\\\NSTextParagraph", "paragraph text element", "nstextparagraph.md"),
    ("AppKit\\\\NS\\\\NSTextSelection\\\\NSTextSelection", "TextKit 2 text selection", "nstextselection.md"),
    ("AppKit\\\\NS\\\\NSTextViewportLayoutController\\\\NSTextViewportLayoutController", "viewport layout controller", "nstextviewportlayoutcontroller.md"),
    ("AppKit\\\\NS\\\\NSAdaptiveImageGlyph\\\\NSAdaptiveImageGlyph", "adaptive image glyph", "nsadaptiveimageglyph.md"),
]


def patch_config_json() -> None:
    path = ROOT / "config.json"
    data = json.loads(path.read_text(encoding="utf-8"))
    sources = data.setdefault("extra-sources", [])
    changed = False
    for src in NEW_SOURCES:
        if src not in sources:
            sources.append(src)
            changed = True
    if changed:
        path.write_text(json.dumps(data, indent=4) + "\n", encoding="utf-8")
        print("patched config.json extra-sources")
    else:
        print("config.json extra-sources already current")


def patch_makefile_frag() -> None:
    path = ROOT / "scripts/Makefile.frag"
    text = path.read_text(encoding="utf-8")
    lo_rule = (
        "$(builddir)/src/{stem}.lo: $(srcdir)/src/{stem}.m\n"
        "\t$(LIBTOOL) --tag=CC --mode=compile $(CC) -I. -I$(srcdir) "
        "$(COMMON_FLAGS) $(CFLAGS_CLEAN) $(EXTRA_CFLAGS) $(NS_OBJC_CFLAGS) "
        "-DZEND_COMPILE_DL_EXT=1 -c $(srcdir)/src/{stem}.m -o $@\n"
    )
    added_rules = []
    for src in NEW_SOURCES:
        stem = Path(src).stem
        marker = f"$(builddir)/src/{stem}.lo:"
        if marker not in text:
            added_rules.append(lo_rule.format(stem=stem))
    if added_rules:
        insert = "\n" + "\n".join(added_rules) + "\n"
        needle = "shared_objects_appkit +="
        idx = text.find(needle)
        if idx == -1:
            text = text.rstrip() + insert + "\n"
        else:
            text = text[:idx] + insert + text[idx:]
    lo_names = [f"src/{Path(src).stem}.lo" for src in NEW_SOURCES]
    match = re.search(r"^(shared_objects_appkit \+= .+)$", text, re.M)
    if match:
        line = match.group(1)
        missing = [name for name in lo_names if name not in line]
        if missing:
            text = text[: match.start(1)] + line.rstrip() + " " + " ".join(missing) + text[match.end(1) :]
            print("patched scripts/Makefile.frag shared_objects + .lo rules")
        elif added_rules:
            print("patched scripts/Makefile.frag .lo rules")
        else:
            print("scripts/Makefile.frag already current")
    else:
        print("warning: shared_objects_appkit line not found")
    path.write_text(text, encoding="utf-8")


def patch_okf_index() -> None:
    path = ROOT / ".okf/api/index.md"
    text = path.read_text(encoding="utf-8")
    added = []
    for class_name, role, slug in INDEX_ROWS:
        row = f"| `{class_name}` | {role} | [{slug}]({slug}) |"
        if slug not in text:
            added.append(row)
    if not added:
        print(".okf/api/index.md already current")
        return
    # Insert before the trailing convention sentence if present.
    marker = "\nZephir path convention:"
    block = "\n".join(added) + "\n"
    if marker in text:
        text = text.replace(marker, "\n" + block + marker, 1)
    else:
        text = text.rstrip() + "\n" + block
    path.write_text(text, encoding="utf-8")
    print(f"patched .okf/api/index.md ({len(added)} rows)")


patch_config_json()
patch_makefile_frag()
patch_okf_index()
print("layout wave patches done")
