#!/usr/bin/env python3
"""NSTextInsertionIndicator, NSTextCheckingController, cell + path control wave."""

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


def okf(ns_class: str, slug: str, header: str, description: str, rows: list, note: str = "") -> str:
    table = "\n".join(f"| `{m}` | {maps} |" for m, maps in rows)
    extra = f"\n\n{note}" if note else ""
    return f"""---
type: CoreType
title: AppKit\\NS\\{ns_class}\\{ns_class}
description: {description}
resource: /appkit/ns/{slug}/{slug}.zep
tags: [appkit, api, {slug}]
status: draft
generated: {{ by: cursor-agent, at: "2026-08-15T12:00:00Z" }}
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
{table}{extra}
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

static NSColor *ns_color_from_handle(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSColor class]] ? (NSColor *)obj : nil;
}

static NSImage *ns_image_from_handle(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSImage class]] ? (NSImage *)obj : nil;
}
'''

# --- NSTextInsertionIndicator ---
write(ROOT / "src/ns-textinsertionindicator.h", """#ifndef PHP_APPKIT_NS_TEXTINSERTIONINDICATOR_H
#define PHP_APPKIT_NS_TEXTINSERTIONINDICATOR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    NS_TEXT_INSERTION_DISPLAY_AUTOMATIC = 0,
    NS_TEXT_INSERTION_DISPLAY_HIDDEN = 1,
    NS_TEXT_INSERTION_DISPLAY_VISIBLE = 2
} ns_text_insertion_display_mode;

typedef enum {
    NS_TEXT_INSERTION_AUTO_SHOW_EFFECTS_VIEW = 1,
    NS_TEXT_INSERTION_AUTO_SHOW_WHILE_TRACKING = 2
} ns_text_insertion_auto_mode_options;

uintptr_t ns_textinsertionindicator_create(double x, double y, double width, double height);
uintptr_t ns_textinsertionindicator_wrap(void *indicator);
void ns_textinsertionindicator_destroy(uintptr_t indicator);
void *ns_textinsertionindicator_nstextinsertionindicator(uintptr_t indicator);

void ns_textinsertionindicator_set_display_mode(uintptr_t indicator, int mode);
int ns_textinsertionindicator_get_display_mode(uintptr_t indicator);
void ns_textinsertionindicator_set_color(uintptr_t indicator, uintptr_t color);
uintptr_t ns_textinsertionindicator_get_color(uintptr_t indicator);
void ns_textinsertionindicator_set_automatic_mode_options(uintptr_t indicator, int options);
int ns_textinsertionindicator_get_automatic_mode_options(uintptr_t indicator);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTINSERTIONINDICATOR_H */
""")

write(ROOT / "src/ns-textinsertionindicator.m", """#import <AppKit/AppKit.h>
#import "ns-textinsertionindicator.h"
#import "ns-view.h"
#import "ns-color.h"
""" + COMMON + """
static NSTextInsertionIndicator *ns_textinsertionindicator_view(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSTextInsertionIndicator class]] ? (NSTextInsertionIndicator *)view : nil;
}

uintptr_t ns_textinsertionindicator_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 2;
    }
    if (height <= 0) {
        height = 18;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSTextInsertionIndicator *indicator = [[NSTextInsertionIndicator alloc] initWithFrame:rect];
        return ns_view_wrap((__bridge void *)indicator);
    }
}

uintptr_t ns_textinsertionindicator_wrap(void *indicator)
{
    if (!indicator) {
        return 0;
    }
    @autoreleasepool {
        NSTextInsertionIndicator *obj = (__bridge NSTextInsertionIndicator *)indicator;
        return [obj isKindOfClass:[NSTextInsertionIndicator class]] ? ns_view_wrap(indicator) : 0;
    }
}

void ns_textinsertionindicator_destroy(uintptr_t indicator)
{
    ns_view_destroy(indicator);
}

void *ns_textinsertionindicator_nstextinsertionindicator(uintptr_t indicator)
{
    NSTextInsertionIndicator *obj = ns_textinsertionindicator_view(indicator);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_textinsertionindicator_set_display_mode(uintptr_t indicator, int mode)
{
    @autoreleasepool {
        NSTextInsertionIndicator *obj = ns_textinsertionindicator_view(indicator);
        if (obj) {
            obj.displayMode = (NSTextInsertionIndicatorDisplayMode)mode;
        }
    }
}

int ns_textinsertionindicator_get_display_mode(uintptr_t indicator)
{
    @autoreleasepool {
        NSTextInsertionIndicator *obj = ns_textinsertionindicator_view(indicator);
        return obj ? (int)obj.displayMode : 0;
    }
}

void ns_textinsertionindicator_set_color(uintptr_t indicator, uintptr_t color)
{
    @autoreleasepool {
        NSTextInsertionIndicator *obj = ns_textinsertionindicator_view(indicator);
        if (obj) {
            obj.color = ns_color_from_handle(color);
        }
    }
}

uintptr_t ns_textinsertionindicator_get_color(uintptr_t indicator)
{
    @autoreleasepool {
        NSTextInsertionIndicator *obj = ns_textinsertionindicator_view(indicator);
        return obj && obj.color ? ns_retain_obj(obj.color) : 0;
    }
}

void ns_textinsertionindicator_set_automatic_mode_options(uintptr_t indicator, int options)
{
    @autoreleasepool {
        NSTextInsertionIndicator *obj = ns_textinsertionindicator_view(indicator);
        if (obj) {
            obj.automaticModeOptions = (NSTextInsertionIndicatorAutomaticModeOptions)options;
        }
    }
}

int ns_textinsertionindicator_get_automatic_mode_options(uintptr_t indicator)
{
    @autoreleasepool {
        NSTextInsertionIndicator *obj = ns_textinsertionindicator_view(indicator);
        return obj ? (int)obj.automaticModeOptions : 0;
    }
}
""")

write(ROOT / "appkit/ns/nstextinsertionindicator/nstextinsertionindicator.zep", zep_ns("NSTextInsertionIndicator", "ns-textinsertionindicator.h") + r"""
/**
 * NSTextInsertionIndicator — TextKit 2 caret indicator view (macOS 14+).
 */
class NSTextInsertionIndicator
{
    public static function create(int x, int y, int width, int height) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textinsertionindicator_create((double) x, (double) y, (double) width, (double) height);
        }%
        return handle;
    }

    public static function wrap(int nsTextInsertionIndicatorPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textinsertionindicator_wrap((void *)(uintptr_t) nsTextInsertionIndicatorPtr);
        }%
        return handle;
    }

    public static function destroy(int indicator) -> void
    {
        %{
            ns_textinsertionindicator_destroy((uintptr_t) indicator);
        }%
    }

    public static function nsTextInsertionIndicator(int indicator) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_textinsertionindicator_nstextinsertionindicator((uintptr_t) indicator);
        }%
        return ptr;
    }

    public static function setDisplayMode(int indicator, int mode) -> void
    {
        %{
            ns_textinsertionindicator_set_display_mode((uintptr_t) indicator, (int) mode);
        }%
    }

    public static function getDisplayMode(int indicator) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textinsertionindicator_get_display_mode((uintptr_t) indicator);
        }%
        return value;
    }

    public static function setColor(int indicator, int color) -> void
    {
        %{
            ns_textinsertionindicator_set_color((uintptr_t) indicator, (uintptr_t) color);
        }%
    }

    public static function getColor(int indicator) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textinsertionindicator_get_color((uintptr_t) indicator);
        }%
        return handle;
    }

    public static function setAutomaticModeOptions(int indicator, int options) -> void
    {
        %{
            ns_textinsertionindicator_set_automatic_mode_options((uintptr_t) indicator, (int) options);
        }%
    }

    public static function getAutomaticModeOptions(int indicator) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textinsertionindicator_get_automatic_mode_options((uintptr_t) indicator);
        }%
        return value;
    }
}
""")

write(ROOT / ".okf/api/nstextinsertionindicator.md", okf(
    "NSTextInsertionIndicator", "nstextinsertionindicator", "ns-textinsertionindicator.h",
    "TextKit 2 text insertion indicator view",
    [
        ("create / wrap / destroy / nsTextInsertionIndicator", "view-box ownership"),
        ("displayMode", "NSTextInsertionIndicatorDisplayMode int enum"),
        ("color", "NSColor handle"),
        ("automaticModeOptions", "NSTextInsertionIndicatorAutomaticModeOptions bitmask"),
    ],
    "Note: `effectsViewInserter` block API is not bound.",
))

# --- NSTextCheckingController ---
write(ROOT / "src/ns-textcheckingcontroller.h", """#ifndef PHP_APPKIT_NS_TEXTCHECKINGCONTROLLER_H
#define PHP_APPKIT_NS_TEXTCHECKINGCONTROLLER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textcheckingcontroller_create_with_client(void *client);
uintptr_t ns_textcheckingcontroller_wrap(void *controller);
void ns_textcheckingcontroller_destroy(uintptr_t controller);
void *ns_textcheckingcontroller_nstextcheckingcontroller(uintptr_t controller);
void *ns_textcheckingcontroller_client(uintptr_t controller);

void ns_textcheckingcontroller_invalidate(uintptr_t controller);
void ns_textcheckingcontroller_did_change_text_in_range(uintptr_t controller, int location, int length);
void ns_textcheckingcontroller_inserted_text_in_range(uintptr_t controller, int location, int length);
void ns_textcheckingcontroller_did_change_selected_range(uintptr_t controller);
void ns_textcheckingcontroller_consider_text_checking_for_range(uintptr_t controller, int location, int length);
void ns_textcheckingcontroller_check_text_in_range(uintptr_t controller, int location, int length, unsigned long long types);
void ns_textcheckingcontroller_check_text_in_selection(uintptr_t controller);
void ns_textcheckingcontroller_check_text_in_document(uintptr_t controller);
void ns_textcheckingcontroller_order_front_substitutions_panel(uintptr_t controller);
void ns_textcheckingcontroller_check_spelling(uintptr_t controller);
void ns_textcheckingcontroller_show_guess_panel(uintptr_t controller);
void ns_textcheckingcontroller_change_spelling(uintptr_t controller);
void ns_textcheckingcontroller_ignore_spelling(uintptr_t controller);
void ns_textcheckingcontroller_update_candidates(uintptr_t controller);
int ns_textcheckingcontroller_valid_annotations_count(uintptr_t controller);
int ns_textcheckingcontroller_valid_annotation_at(uintptr_t controller, int index, char *out, int out_len);
void ns_textcheckingcontroller_set_spell_checker_document_tag(uintptr_t controller, int tag);
int ns_textcheckingcontroller_get_spell_checker_document_tag(uintptr_t controller);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTCHECKINGCONTROLLER_H */
""")

write(ROOT / "src/ns-textcheckingcontroller.m", """#import <AppKit/AppKit.h>
#import "ns-textcheckingcontroller.h"
""" + COMMON + """
static NSTextCheckingController *ns_textcheckingcontroller_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextCheckingController class]] ? (NSTextCheckingController *)obj : nil;
}

uintptr_t ns_textcheckingcontroller_create_with_client(void *client)
{
    if (!client) {
        return 0;
    }
    @autoreleasepool {
        id <NSTextCheckingClient> typed = (__bridge id <NSTextCheckingClient>)client;
        return ns_retain_obj([[NSTextCheckingController alloc] initWithClient:typed]);
    }
}

uintptr_t ns_textcheckingcontroller_wrap(void *controller)
{
    if (!controller) {
        return 0;
    }
    @autoreleasepool {
        NSTextCheckingController *obj = (__bridge NSTextCheckingController *)controller;
        return [obj isKindOfClass:[NSTextCheckingController class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textcheckingcontroller_destroy(uintptr_t controller)
{
    ns_release_handle(controller);
}

void *ns_textcheckingcontroller_nstextcheckingcontroller(uintptr_t controller)
{
    NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
    return obj ? (__bridge void *)obj : NULL;
}

void *ns_textcheckingcontroller_client(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        return obj && obj.client ? (__bridge void *)obj.client : NULL;
    }
}

void ns_textcheckingcontroller_invalidate(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj invalidate];
        }
    }
}

void ns_textcheckingcontroller_did_change_text_in_range(uintptr_t controller, int location, int length)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj didChangeTextInRange:NSMakeRange((NSUInteger)location, (NSUInteger)length)];
        }
    }
}

void ns_textcheckingcontroller_inserted_text_in_range(uintptr_t controller, int location, int length)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj insertedTextInRange:NSMakeRange((NSUInteger)location, (NSUInteger)length)];
        }
    }
}

void ns_textcheckingcontroller_did_change_selected_range(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj didChangeSelectedRange];
        }
    }
}

void ns_textcheckingcontroller_consider_text_checking_for_range(uintptr_t controller, int location, int length)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj considerTextCheckingForRange:NSMakeRange((NSUInteger)location, (NSUInteger)length)];
        }
    }
}

void ns_textcheckingcontroller_check_text_in_range(uintptr_t controller, int location, int length, unsigned long long types)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj checkTextInRange:NSMakeRange((NSUInteger)location, (NSUInteger)length) types:(NSTextCheckingTypes)types options:nil];
        }
    }
}

void ns_textcheckingcontroller_check_text_in_selection(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj checkTextInSelection:nil];
        }
    }
}

void ns_textcheckingcontroller_check_text_in_document(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj checkTextInDocument:nil];
        }
    }
}

void ns_textcheckingcontroller_order_front_substitutions_panel(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj orderFrontSubstitutionsPanel:nil];
        }
    }
}

void ns_textcheckingcontroller_check_spelling(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj checkSpelling:nil];
        }
    }
}

void ns_textcheckingcontroller_show_guess_panel(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj showGuessPanel:nil];
        }
    }
}

void ns_textcheckingcontroller_change_spelling(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj changeSpelling:nil];
        }
    }
}

void ns_textcheckingcontroller_ignore_spelling(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj ignoreSpelling:nil];
        }
    }
}

void ns_textcheckingcontroller_update_candidates(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            [obj updateCandidates];
        }
    }
}

int ns_textcheckingcontroller_valid_annotations_count(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        return obj ? (int)obj.validAnnotations.count : 0;
    }
}

int ns_textcheckingcontroller_valid_annotation_at(uintptr_t controller, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (!obj || index < 0 || index >= (int)obj.validAnnotations.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.validAnnotations[(NSUInteger)index], out, out_len);
    }
}

void ns_textcheckingcontroller_set_spell_checker_document_tag(uintptr_t controller, int tag)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        if (obj) {
            obj.spellCheckerDocumentTag = (NSInteger)tag;
        }
    }
}

int ns_textcheckingcontroller_get_spell_checker_document_tag(uintptr_t controller)
{
    @autoreleasepool {
        NSTextCheckingController *obj = ns_textcheckingcontroller_from(controller);
        return obj ? (int)obj.spellCheckerDocumentTag : 0;
    }
}
""")

write(ROOT / "appkit/ns/nstextcheckingcontroller/nstextcheckingcontroller.zep", zep_ns("NSTextCheckingController", "ns-textcheckingcontroller.h") + r"""
/**
 * NSTextCheckingController — coordinates spell/link checking for a text client.
 */
class NSTextCheckingController
{
    public static function createWithClient(int clientPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textcheckingcontroller_create_with_client((void *)(uintptr_t) clientPtr);
        }%
        return handle;
    }

    public static function wrap(int nsTextCheckingControllerPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textcheckingcontroller_wrap((void *)(uintptr_t) nsTextCheckingControllerPtr);
        }%
        return handle;
    }

    public static function destroy(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_destroy((uintptr_t) controller);
        }%
    }

    public static function nsTextCheckingController(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_textcheckingcontroller_nstextcheckingcontroller((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function client(int controller) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_textcheckingcontroller_client((uintptr_t) controller);
        }%
        return ptr;
    }

    public static function invalidate(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_invalidate((uintptr_t) controller);
        }%
    }

    public static function didChangeTextInRange(int controller, int location, int length) -> void
    {
        %{
            ns_textcheckingcontroller_did_change_text_in_range((uintptr_t) controller, (int) location, (int) length);
        }%
    }

    public static function insertedTextInRange(int controller, int location, int length) -> void
    {
        %{
            ns_textcheckingcontroller_inserted_text_in_range((uintptr_t) controller, (int) location, (int) length);
        }%
    }

    public static function didChangeSelectedRange(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_did_change_selected_range((uintptr_t) controller);
        }%
    }

    public static function considerTextCheckingForRange(int controller, int location, int length) -> void
    {
        %{
            ns_textcheckingcontroller_consider_text_checking_for_range((uintptr_t) controller, (int) location, (int) length);
        }%
    }

    public static function checkTextInRange(int controller, int location, int length, int types) -> void
    {
        %{
            ns_textcheckingcontroller_check_text_in_range((uintptr_t) controller, (int) location, (int) length, (unsigned long long) types);
        }%
    }

    public static function checkTextInSelection(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_check_text_in_selection((uintptr_t) controller);
        }%
    }

    public static function checkTextInDocument(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_check_text_in_document((uintptr_t) controller);
        }%
    }

    public static function orderFrontSubstitutionsPanel(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_order_front_substitutions_panel((uintptr_t) controller);
        }%
    }

    public static function checkSpelling(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_check_spelling((uintptr_t) controller);
        }%
    }

    public static function showGuessPanel(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_show_guess_panel((uintptr_t) controller);
        }%
    }

    public static function changeSpelling(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_change_spelling((uintptr_t) controller);
        }%
    }

    public static function ignoreSpelling(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_ignore_spelling((uintptr_t) controller);
        }%
    }

    public static function updateCandidates(int controller) -> void
    {
        %{
            ns_textcheckingcontroller_update_candidates((uintptr_t) controller);
        }%
    }

    public static function getValidAnnotations(int controller) -> array
    {
        array out = [];
        %{
            int count = ns_textcheckingcontroller_valid_annotations_count((uintptr_t) controller);
            int i;
            for (i = 0; i < count; i++) {
                char buf[4096];
                buf[0] = '\0';
                if (ns_textcheckingcontroller_valid_annotation_at((uintptr_t) controller, i, buf, (int) sizeof(buf))) {
                    add_next_index_string(&out, buf);
                }
            }
        }%
        return out;
    }

    public static function setSpellCheckerDocumentTag(int controller, int tag) -> void
    {
        %{
            ns_textcheckingcontroller_set_spell_checker_document_tag((uintptr_t) controller, (int) tag);
        }%
    }

    public static function getSpellCheckerDocumentTag(int controller) -> int
    {
        int value;
        %{
            value = (zend_long) ns_textcheckingcontroller_get_spell_checker_document_tag((uintptr_t) controller);
        }%
        return value;
    }
}
""")

write(ROOT / ".okf/api/nstextcheckingcontroller.md", okf(
    "NSTextCheckingController", "nstextcheckingcontroller", "ns-textcheckingcontroller.h",
    "Spell/link checking controller for NSTextCheckingClient adopters",
    [
        ("createWithClient / wrap / destroy", "ownership (initWithClient:)"),
        ("client", "borrowed NSTextCheckingClient*"),
        ("invalidate / didChange* / insertedTextInRange", "text lifecycle hooks"),
        ("checkTextInRange / considerTextCheckingForRange", "checking"),
        ("checkTextInSelection / checkTextInDocument / checkSpelling / …", "menu actions"),
        ("validAnnotations / spellCheckerDocumentTag", "metadata"),
    ],
    "Note: `menuAtIndex:clickedOnSelection:effectiveRange:` and options dictionaries are not bound.",
))

# --- NSButtonCell ---
ACTION_CELL_BASE_H = """
void ns_{slug}_set_title(uintptr_t cell, const char *title);
int ns_{slug}_get_title(uintptr_t cell, char *out, int out_len);
void ns_{slug}_set_state(uintptr_t cell, int state);
int ns_{slug}_get_state(uintptr_t cell);
void ns_{slug}_set_enabled(uintptr_t cell, int enabled);
int ns_{slug}_is_enabled(uintptr_t cell);
void ns_{slug}_set_tag(uintptr_t cell, int tag);
int ns_{slug}_get_tag(uintptr_t cell);
"""

ACTION_CELL_BASE_M = """
void ns_{slug}_set_title(uintptr_t cell, const char *title)
{{
    @autoreleasepool {{
        {objc_class} *obj = ns_{slug}_from(cell);
        if (obj) {{
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }}
    }}
}}

int ns_{slug}_get_title(uintptr_t cell, char *out, int out_len)
{{
    @autoreleasepool {{
        {objc_class} *obj = ns_{slug}_from(cell);
        return obj ? ns_copy_nsstring(obj.title, out, out_len) : 0;
    }}
}}

void ns_{slug}_set_state(uintptr_t cell, int state)
{{
    @autoreleasepool {{
        {objc_class} *obj = ns_{slug}_from(cell);
        if (obj) {{
            obj.state = (NSControlStateValue)state;
        }}
    }}
}}

int ns_{slug}_get_state(uintptr_t cell)
{{
    @autoreleasepool {{
        {objc_class} *obj = ns_{slug}_from(cell);
        return obj ? (int)obj.state : 0;
    }}
}}

void ns_{slug}_set_enabled(uintptr_t cell, int enabled)
{{
    @autoreleasepool {{
        {objc_class} *obj = ns_{slug}_from(cell);
        if (obj) {{
            obj.enabled = enabled ? YES : NO;
        }}
    }}
}}

int ns_{slug}_is_enabled(uintptr_t cell)
{{
    @autoreleasepool {{
        {objc_class} *obj = ns_{slug}_from(cell);
        return obj && obj.enabled ? 1 : 0;
    }}
}}

void ns_{slug}_set_tag(uintptr_t cell, int tag)
{{
    @autoreleasepool {{
        {objc_class} *obj = ns_{slug}_from(cell);
        if (obj) {{
            obj.tag = tag;
        }}
    }}
}}

int ns_{slug}_get_tag(uintptr_t cell)
{{
    @autoreleasepool {{
        {objc_class} *obj = ns_{slug}_from(cell);
        return obj ? (int)obj.tag : 0;
    }}
}}
"""

ACTION_CELL_ZEP = """
    public static function setTitle(int cell, string title) -> void
    {
        %{
            ns_{slug}_set_title((uintptr_t) cell, Z_STRVAL(title));
        }%
    }

    public static function getTitle(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\\0';
            if (ns_{slug}_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setState(int cell, int state) -> void
    {
        %{
            ns_{slug}_set_state((uintptr_t) cell, (int) state);
        }%
    }

    public static function getState(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_{slug}_get_state((uintptr_t) cell);
        }%
        return value;
    }

    public static function setEnabled(int cell, bool enabled) -> void
    {
        %{
            ns_{slug}_set_enabled((uintptr_t) cell, enabled ? 1 : 0);
        }%
    }

    public static function isEnabled(int cell) -> bool
    {
        bool result;
        %{
            result = ns_{slug}_is_enabled((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function setTag(int cell, int tag) -> void
    {
        %{
            ns_{slug}_set_tag((uintptr_t) cell, (int) tag);
        }%
    }

    public static function getTag(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_{slug}_get_tag((uintptr_t) cell);
        }%
        return value;
    }
"""

CELL_OWNERSHIP_H = """
uintptr_t ns_{slug}_create_text(const char *string);
uintptr_t ns_{slug}_wrap(void *cell);
void ns_{slug}_destroy(uintptr_t cell);
void *ns_{slug}_ns{native}(uintptr_t cell);
"""

CELL_OWNERSHIP_M = """
uintptr_t ns_{slug}_create_text(const char *string)
{{
    @autoreleasepool {{
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        return ns_retain_obj([[{objc_class} alloc] initTextCell:title]);
    }}
}}

uintptr_t ns_{slug}_wrap(void *cell)
{{
    if (!cell) {{
        return 0;
    }}
    @autoreleasepool {{
        {objc_class} *obj = (__bridge {objc_class} *)cell;
        return [obj isKindOfClass:[{objc_class} class]] ? ns_retain_obj(obj) : 0;
    }}
}}

void ns_{slug}_destroy(uintptr_t cell)
{{
    ns_release_handle(cell);
}}

void *ns_{slug}_ns{native}(uintptr_t cell)
{{
    {objc_class} *obj = ns_{slug}_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}}
"""

CELL_OWNERSHIP_ZEP = """
    public static function createText(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_{slug}_create_text(Z_STRVAL(value));
        }%
        return handle;
    }

    public static function wrap(int ptr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_{slug}_wrap((void *)(uintptr_t) ptr);
        }%
        return handle;
    }

    public static function destroy(int cell) -> void
    {
        %{
            ns_{slug}_destroy((uintptr_t) cell);
        }%
    }

    public static function ns{class}(int cell) -> int
    {
        int native;
        %{
            native = (zend_long)(uintptr_t) ns_{slug}_ns{native}(uintptr_t) cell);
        }%
        return native;
    }
"""

write(ROOT / "src/ns-buttoncell.h", """#ifndef PHP_APPKIT_NS_BUTTONCELL_H
#define PHP_APPKIT_NS_BUTTONCELL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_buttoncell_create_text(const char *string);
uintptr_t ns_buttoncell_create_image(uintptr_t image);
uintptr_t ns_buttoncell_wrap(void *cell);
void ns_buttoncell_destroy(uintptr_t cell);
void *ns_buttoncell_nsbuttoncell(uintptr_t cell);

void ns_buttoncell_set_title(uintptr_t cell, const char *title);
int ns_buttoncell_get_title(uintptr_t cell, char *out, int out_len);
void ns_buttoncell_set_state(uintptr_t cell, int state);
int ns_buttoncell_get_state(uintptr_t cell);
void ns_buttoncell_set_enabled(uintptr_t cell, int enabled);
int ns_buttoncell_is_enabled(uintptr_t cell);
void ns_buttoncell_set_tag(uintptr_t cell, int tag);
int ns_buttoncell_get_tag(uintptr_t cell);

void ns_buttoncell_set_bezel_style(uintptr_t cell, int style);
int ns_buttoncell_get_bezel_style(uintptr_t cell);
void ns_buttoncell_set_button_type(uintptr_t cell, int type);
void ns_buttoncell_set_alternate_title(uintptr_t cell, const char *title);
int ns_buttoncell_get_alternate_title(uintptr_t cell, char *out, int out_len);
void ns_buttoncell_set_key_equivalent(uintptr_t cell, const char *key);
int ns_buttoncell_get_key_equivalent(uintptr_t cell, char *out, int out_len);
void ns_buttoncell_set_transparent(uintptr_t cell, int flag);
int ns_buttoncell_is_transparent(uintptr_t cell);
void ns_buttoncell_set_image_dims_when_disabled(uintptr_t cell, int flag);
int ns_buttoncell_image_dims_when_disabled(uintptr_t cell);
void ns_buttoncell_perform_click(uintptr_t cell);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_BUTTONCELL_H */
""")

write(ROOT / "src/ns-buttoncell.m", """#import <AppKit/AppKit.h>
#import "ns-buttoncell.h"
""" + COMMON + """
static NSButtonCell *ns_buttoncell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSButtonCell class]] ? (NSButtonCell *)obj : nil;
}

uintptr_t ns_buttoncell_create_text(const char *string)
{
    @autoreleasepool {
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        return ns_retain_obj([[NSButtonCell alloc] initTextCell:title]);
    }
}

uintptr_t ns_buttoncell_create_image(uintptr_t image)
{
    @autoreleasepool {
        NSImage *img = ns_image_from_handle(image);
        return ns_retain_obj([[NSButtonCell alloc] initImageCell:img]);
    }
}

uintptr_t ns_buttoncell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSButtonCell *obj = (__bridge NSButtonCell *)cell;
        return [obj isKindOfClass:[NSButtonCell class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_buttoncell_destroy(uintptr_t cell)
{
    ns_release_handle(cell);
}

void *ns_buttoncell_nsbuttoncell(uintptr_t cell)
{
    NSButtonCell *obj = ns_buttoncell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_buttoncell_set_title(uintptr_t cell, const char *title)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_buttoncell_get_title(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        return obj ? ns_copy_nsstring(obj.title, out, out_len) : 0;
    }
}

void ns_buttoncell_set_state(uintptr_t cell, int state)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            obj.state = (NSControlStateValue)state;
        }
    }
}

int ns_buttoncell_get_state(uintptr_t cell)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        return obj ? (int)obj.state : 0;
    }
}

void ns_buttoncell_set_enabled(uintptr_t cell, int enabled)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            obj.enabled = enabled ? YES : NO;
        }
    }
}

int ns_buttoncell_is_enabled(uintptr_t cell)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_buttoncell_set_tag(uintptr_t cell, int tag)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            obj.tag = tag;
        }
    }
}

int ns_buttoncell_get_tag(uintptr_t cell)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        return obj ? (int)obj.tag : 0;
    }
}

void ns_buttoncell_set_bezel_style(uintptr_t cell, int style)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            obj.bezelStyle = (NSBezelStyle)style;
        }
    }
}

int ns_buttoncell_get_bezel_style(uintptr_t cell)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        return obj ? (int)obj.bezelStyle : 0;
    }
}

void ns_buttoncell_set_button_type(uintptr_t cell, int type)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            [obj setButtonType:(NSButtonType)type];
        }
    }
}

void ns_buttoncell_set_alternate_title(uintptr_t cell, const char *title)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            obj.alternateTitle = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_buttoncell_get_alternate_title(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        return obj ? ns_copy_nsstring(obj.alternateTitle, out, out_len) : 0;
    }
}

void ns_buttoncell_set_key_equivalent(uintptr_t cell, const char *key)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            obj.keyEquivalent = key ? [NSString stringWithUTF8String:key] : @"";
        }
    }
}

int ns_buttoncell_get_key_equivalent(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        return obj ? ns_copy_nsstring(obj.keyEquivalent, out, out_len) : 0;
    }
}

void ns_buttoncell_set_transparent(uintptr_t cell, int flag)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            obj.transparent = flag ? YES : NO;
        }
    }
}

int ns_buttoncell_is_transparent(uintptr_t cell)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        return obj && obj.transparent ? 1 : 0;
    }
}

void ns_buttoncell_set_image_dims_when_disabled(uintptr_t cell, int flag)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            obj.imageDimsWhenDisabled = flag ? YES : NO;
        }
    }
}

int ns_buttoncell_image_dims_when_disabled(uintptr_t cell)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        return obj && obj.imageDimsWhenDisabled ? 1 : 0;
    }
}

void ns_buttoncell_perform_click(uintptr_t cell)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            [obj performClick:nil];
        }
    }
}
""")

write(ROOT / "appkit/ns/nsbuttoncell/nsbuttoncell.zep", zep_ns("NSButtonCell", "ns-buttoncell.h") + r"""
/**
 * NSButtonCell — cell used by NSButton and matrix cells.
 */
class NSButtonCell
{
    public static function createText(string value = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_buttoncell_create_text(Z_STRVAL(value));
        }%
        return handle;
    }

    public static function createImage(int image) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_buttoncell_create_image((uintptr_t) image);
        }%
        return handle;
    }

    public static function wrap(int nsButtonCellPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_buttoncell_wrap((void *)(uintptr_t) nsButtonCellPtr);
        }%
        return handle;
    }

    public static function destroy(int cell) -> void
    {
        %{
            ns_buttoncell_destroy((uintptr_t) cell);
        }%
    }

    public static function nsButtonCell(int cell) -> int
    {
        int ptr;
        %{
            ptr = (zend_long)(uintptr_t) ns_buttoncell_nsbuttoncell((uintptr_t) cell);
        }%
        return ptr;
    }

    public static function setTitle(int cell, string title) -> void
    {
        %{
            ns_buttoncell_set_title((uintptr_t) cell, Z_STRVAL(title));
        }%
    }

    public static function getTitle(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_buttoncell_get_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setState(int cell, int state) -> void
    {
        %{
            ns_buttoncell_set_state((uintptr_t) cell, (int) state);
        }%
    }

    public static function getState(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_buttoncell_get_state((uintptr_t) cell);
        }%
        return value;
    }

    public static function setEnabled(int cell, bool enabled) -> void
    {
        %{
            ns_buttoncell_set_enabled((uintptr_t) cell, enabled ? 1 : 0);
        }%
    }

    public static function isEnabled(int cell) -> bool
    {
        bool result;
        %{
            result = ns_buttoncell_is_enabled((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function setTag(int cell, int tag) -> void
    {
        %{
            ns_buttoncell_set_tag((uintptr_t) cell, (int) tag);
        }%
    }

    public static function getTag(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_buttoncell_get_tag((uintptr_t) cell);
        }%
        return value;
    }

    public static function setBezelStyle(int cell, int style) -> void
    {
        %{
            ns_buttoncell_set_bezel_style((uintptr_t) cell, (int) style);
        }%
    }

    public static function getBezelStyle(int cell) -> int
    {
        int value;
        %{
            value = (zend_long) ns_buttoncell_get_bezel_style((uintptr_t) cell);
        }%
        return value;
    }

    public static function setButtonType(int cell, int type) -> void
    {
        %{
            ns_buttoncell_set_button_type((uintptr_t) cell, (int) type);
        }%
    }

    public static function setAlternateTitle(int cell, string title) -> void
    {
        %{
            ns_buttoncell_set_alternate_title((uintptr_t) cell, Z_STRVAL(title));
        }%
    }

    public static function getAlternateTitle(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_buttoncell_get_alternate_title((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setKeyEquivalent(int cell, string key) -> void
    {
        %{
            ns_buttoncell_set_key_equivalent((uintptr_t) cell, Z_STRVAL(key));
        }%
    }

    public static function getKeyEquivalent(int cell) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_buttoncell_get_key_equivalent((uintptr_t) cell, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setTransparent(int cell, bool flag) -> void
    {
        %{
            ns_buttoncell_set_transparent((uintptr_t) cell, flag ? 1 : 0);
        }%
    }

    public static function isTransparent(int cell) -> bool
    {
        bool result;
        %{
            result = ns_buttoncell_is_transparent((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function setImageDimsWhenDisabled(int cell, bool flag) -> void
    {
        %{
            ns_buttoncell_set_image_dims_when_disabled((uintptr_t) cell, flag ? 1 : 0);
        }%
    }

    public static function imageDimsWhenDisabled(int cell) -> bool
    {
        bool result;
        %{
            result = ns_buttoncell_image_dims_when_disabled((uintptr_t) cell) == 1;
        }%
        return result;
    }

    public static function performClick(int cell) -> void
    {
        %{
            ns_buttoncell_perform_click((uintptr_t) cell);
        }%
    }
}
""")

write(ROOT / ".okf/api/nsbuttoncell.md", okf(
    "NSButtonCell", "nsbuttoncell", "ns-buttoncell.h",
    "NSButtonCell push/switch/radio cell",
    [
        ("createText / createImage / wrap / destroy", "ownership"),
        ("title / state / enabled / tag", "NSActionCell base"),
        ("bezelStyle / setButtonType", "appearance"),
        ("alternateTitle / keyEquivalent / transparent / imageDimsWhenDisabled", "behavior"),
        ("performClick", "action"),
    ],
))

print("cells-path wave complete")
