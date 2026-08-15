#!/usr/bin/env python3
"""NSSpellChecker, NSTextAttachment, NSTextAttachmentCell, NSTextList, NSTextTable, leftover zeps."""

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

write(ROOT / "src/ns-spellchecker.h", """#ifndef PHP_APPKIT_NS_SPELLCHECKER_H
#define PHP_APPKIT_NS_SPELLCHECKER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_spellchecker_shared(void);
void ns_spellchecker_destroy(uintptr_t checker);
int ns_spellchecker_unique_spell_document_tag(void);
void ns_spellchecker_check_spelling(uintptr_t checker, const char *string, int starting_at, int *location, int *length);
int ns_spellchecker_count_words_in_string(uintptr_t checker, const char *string, const char *language);
void ns_spellchecker_ignore_word(uintptr_t checker, const char *word, int tag);
int ns_spellchecker_ignored_words_count(uintptr_t checker, int tag);
int ns_spellchecker_ignored_word_at(uintptr_t checker, int tag, int index, char *out, int out_len);
void ns_spellchecker_update_spelling_panel_with_misspelled_word(uintptr_t checker, const char *word);
void ns_spellchecker_update_panels(uintptr_t checker);
int ns_spellchecker_is_automatic_spelling_correction_enabled(uintptr_t checker);
void ns_spellchecker_set_automatic_spelling_correction_enabled(uintptr_t checker, int flag);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_SPELLCHECKER_H */
""")

write(ROOT / "src/ns-spellchecker.m", """#import <AppKit/AppKit.h>
#import "ns-spellchecker.h"
""" + COMMON + """
static NSSpellChecker *ns_spellchecker_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSSpellChecker class]] ? (NSSpellChecker *)obj : nil;
}

uintptr_t ns_spellchecker_shared(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSSpellChecker sharedSpellChecker]);
    }
}

void ns_spellchecker_destroy(uintptr_t checker)
{
    ns_release_handle(checker);
}

int ns_spellchecker_unique_spell_document_tag(void)
{
    return (int)[NSSpellChecker uniqueSpellDocumentTag];
}

void ns_spellchecker_check_spelling(uintptr_t checker, const char *string, int starting_at, int *location, int *length)
{
    if (location) {
        *location = 0;
    }
    if (length) {
        *length = 0;
    }
    @autoreleasepool {
        NSSpellChecker *obj = ns_spellchecker_from(checker);
        if (!obj) {
            return;
        }
        NSString *text = string ? [NSString stringWithUTF8String:string] : @"";
        NSRange range = [obj checkSpellingOfString:text startingAt:(NSInteger)starting_at];
        if (location) {
            *location = range.location == NSNotFound ? -1 : (int)range.location;
        }
        if (length) {
            *length = (int)range.length;
        }
    }
}

int ns_spellchecker_count_words_in_string(uintptr_t checker, const char *string, const char *language)
{
    @autoreleasepool {
        NSSpellChecker *obj = ns_spellchecker_from(checker);
        if (!obj) {
            return 0;
        }
        NSString *text = string ? [NSString stringWithUTF8String:string] : @"";
        NSString *lang = (language && language[0]) ? [NSString stringWithUTF8String:language] : nil;
        return (int)[obj countWordsInString:text language:lang];
    }
}

void ns_spellchecker_ignore_word(uintptr_t checker, const char *word, int tag)
{
    @autoreleasepool {
        NSSpellChecker *obj = ns_spellchecker_from(checker);
        if (obj && word) {
            [obj ignoreWord:[NSString stringWithUTF8String:word] inSpellDocumentWithTag:(NSInteger)tag];
        }
    }
}

int ns_spellchecker_ignored_words_count(uintptr_t checker, int tag)
{
    @autoreleasepool {
        NSSpellChecker *obj = ns_spellchecker_from(checker);
        if (!obj) {
            return 0;
        }
        return (int)[obj ignoredWordsInSpellDocumentWithTag:(NSInteger)tag].count;
    }
}

int ns_spellchecker_ignored_word_at(uintptr_t checker, int tag, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSSpellChecker *obj = ns_spellchecker_from(checker);
        if (!obj) {
            return 0;
        }
        NSArray<NSString *> *words = [obj ignoredWordsInSpellDocumentWithTag:(NSInteger)tag];
        if (index < 0 || index >= (int)words.count) {
            return 0;
        }
        return ns_copy_nsstring(words[(NSUInteger)index], out, out_len);
    }
}

void ns_spellchecker_update_spelling_panel_with_misspelled_word(uintptr_t checker, const char *word)
{
    @autoreleasepool {
        NSSpellChecker *obj = ns_spellchecker_from(checker);
        if (obj) {
            [obj updateSpellingPanelWithMisspelledWord:word ? [NSString stringWithUTF8String:word] : @""];
        }
    }
}

void ns_spellchecker_update_panels(uintptr_t checker)
{
    @autoreleasepool {
        NSSpellChecker *obj = ns_spellchecker_from(checker);
        if (obj) {
            [obj updatePanels];
        }
    }
}

int ns_spellchecker_is_automatic_spelling_correction_enabled(uintptr_t checker)
{
    @autoreleasepool {
        NSSpellChecker *obj = ns_spellchecker_from(checker);
        return obj && obj.automaticSpellingCorrectionEnabled ? 1 : 0;
    }
}

void ns_spellchecker_set_automatic_spelling_correction_enabled(uintptr_t checker, int flag)
{
    @autoreleasepool {
        NSSpellChecker *obj = ns_spellchecker_from(checker);
        if (obj) {
            obj.automaticSpellingCorrectionEnabled = flag ? YES : NO;
        }
    }
}
""")

write(ROOT / "appkit/ns/nsspellchecker/nsspellchecker.zep", zep_ns("NSSpellChecker", "ns-spellchecker.h") + r"""
/**
 * NSSpellChecker — shared spelling service.
 */
class NSSpellChecker
{
    public static function shared() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_spellchecker_shared();
        }%
        return handle;
    }

    public static function destroy(int checker) -> void
    {
        %{
            ns_spellchecker_destroy((uintptr_t) checker);
        }%
    }

    public static function uniqueSpellDocumentTag() -> int
    {
        int value;
        %{
            value = (zend_long) ns_spellchecker_unique_spell_document_tag();
        }%
        return value;
    }

    /**
     * @return array [location, length] — location is -1 when NSNotFound
     */
    public static function checkSpelling(int checker, string text, int startingAt = 0) -> array
    {
        array out = [];
        %{
            int location = 0, length = 0;
            ns_spellchecker_check_spelling((uintptr_t) checker, Z_STRVAL(text), (int) startingAt, &location, &length);
            add_next_index_long(&out, location);
            add_next_index_long(&out, length);
        }%
        return out;
    }

    public static function countWordsInString(int checker, string text, string language = "") -> int
    {
        int value;
        %{
            value = (zend_long) ns_spellchecker_count_words_in_string((uintptr_t) checker, Z_STRVAL(text), Z_STRVAL(language));
        }%
        return value;
    }

    public static function ignoreWord(int checker, string word, int tag) -> void
    {
        %{
            ns_spellchecker_ignore_word((uintptr_t) checker, Z_STRVAL(word), (int) tag);
        }%
    }

    public static function ignoredWordsCount(int checker, int tag) -> int
    {
        int value;
        %{
            value = (zend_long) ns_spellchecker_ignored_words_count((uintptr_t) checker, (int) tag);
        }%
        return value;
    }

    public static function ignoredWordsAt(int checker, int tag, int index) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_spellchecker_ignored_word_at((uintptr_t) checker, (int) tag, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function updateSpellingPanelWithMisspelledWord(int checker, string word) -> void
    {
        %{
            ns_spellchecker_update_spelling_panel_with_misspelled_word((uintptr_t) checker, Z_STRVAL(word));
        }%
    }

    public static function updatePanels(int checker) -> void
    {
        %{
            ns_spellchecker_update_panels((uintptr_t) checker);
        }%
    }

    public static function isAutomaticSpellingCorrectionEnabled(int checker) -> bool
    {
        bool result;
        %{
            result = ns_spellchecker_is_automatic_spelling_correction_enabled((uintptr_t) checker) == 1;
        }%
        return result;
    }

    public static function setAutomaticSpellingCorrectionEnabled(int checker, bool flag) -> void
    {
        %{
            ns_spellchecker_set_automatic_spelling_correction_enabled((uintptr_t) checker, flag ? 1 : 0);
        }%
    }
}
""")

write(ROOT / ".okf/api/nsspellchecker.md", okf(
    "NSSpellChecker", "nsspellchecker", "ns-spellchecker.h",
    "Shared NSSpellChecker spelling service",
    [
        ("shared / destroy", "sharedSpellChecker retain/release"),
        ("uniqueSpellDocumentTag", "class tag allocator"),
        ("checkSpelling", "range [location, length]"),
        ("countWordsInString / ignoreWord / ignoredWords*", "document ignore list"),
        ("updateSpellingPanelWithMisspelledWord / updatePanels", "panels"),
        ("isAutomaticSpellingCorrectionEnabled / set", "auto-correct"),
    ],
))

write(ROOT / "src/ns-textattachment.h", """#ifndef PHP_APPKIT_NS_TEXTATTACHMENT_H
#define PHP_APPKIT_NS_TEXTATTACHMENT_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

uintptr_t ns_textattachment_create(void);
uintptr_t ns_textattachment_create_with_data(const char *data, size_t length, const char *file_type);
uintptr_t ns_textattachment_wrap(void *attachment);
void ns_textattachment_destroy(uintptr_t attachment);
void *ns_textattachment_nstextattachment(uintptr_t attachment);

void ns_textattachment_set_file_type(uintptr_t attachment, const char *file_type);
int ns_textattachment_get_file_type(uintptr_t attachment, char *out, int out_len);
void ns_textattachment_set_image(uintptr_t attachment, uintptr_t image);
uintptr_t ns_textattachment_get_image(uintptr_t attachment);
void ns_textattachment_set_bounds(uintptr_t attachment, double x, double y, double width, double height);
void ns_textattachment_get_bounds(uintptr_t attachment, double *x, double *y, double *width, double *height);
void ns_textattachment_set_attachment_cell(uintptr_t attachment, uintptr_t cell);
uintptr_t ns_textattachment_get_attachment_cell(uintptr_t attachment);
void ns_textattachment_set_line_layout_padding(uintptr_t attachment, double padding);
double ns_textattachment_get_line_layout_padding(uintptr_t attachment);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_TEXTATTACHMENT_H */
""")

write(ROOT / "src/ns-textattachment.m", """#import <AppKit/AppKit.h>
#import "ns-textattachment.h"
#import "ns-image.h"
""" + COMMON + """
static NSTextAttachment *ns_textattachment_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextAttachment class]] ? (NSTextAttachment *)obj : nil;
}

uintptr_t ns_textattachment_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSTextAttachment alloc] init]);
    }
}

uintptr_t ns_textattachment_create_with_data(const char *data, size_t length, const char *file_type)
{
    @autoreleasepool {
        NSData *payload = (data && length > 0) ? [NSData dataWithBytes:data length:length] : [NSData data];
        NSString *uti = file_type ? [NSString stringWithUTF8String:file_type] : nil;
        return ns_retain_obj([[NSTextAttachment alloc] initWithData:payload ofType:uti]);
    }
}

uintptr_t ns_textattachment_wrap(void *attachment)
{
    if (!attachment) {
        return 0;
    }
    @autoreleasepool {
        NSTextAttachment *obj = (__bridge NSTextAttachment *)attachment;
        return [obj isKindOfClass:[NSTextAttachment class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textattachment_destroy(uintptr_t attachment)
{
    ns_release_handle(attachment);
}

void *ns_textattachment_nstextattachment(uintptr_t attachment)
{
    NSTextAttachment *obj = ns_textattachment_from(attachment);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_textattachment_set_file_type(uintptr_t attachment, const char *file_type)
{
    @autoreleasepool {
        NSTextAttachment *obj = ns_textattachment_from(attachment);
        if (obj) {
            obj.fileType = file_type ? [NSString stringWithUTF8String:file_type] : nil;
        }
    }
}

int ns_textattachment_get_file_type(uintptr_t attachment, char *out, int out_len)
{
    @autoreleasepool {
        NSTextAttachment *obj = ns_textattachment_from(attachment);
        return obj ? ns_copy_nsstring(obj.fileType, out, out_len) : 0;
    }
}

void ns_textattachment_set_image(uintptr_t attachment, uintptr_t image)
{
    @autoreleasepool {
        NSTextAttachment *obj = ns_textattachment_from(attachment);
        if (obj) {
            obj.image = (__bridge NSImage *)ns_image_nsimage(image);
        }
    }
}

uintptr_t ns_textattachment_get_image(uintptr_t attachment)
{
    @autoreleasepool {
        NSTextAttachment *obj = ns_textattachment_from(attachment);
        return obj && obj.image ? ns_image_wrap((__bridge void *)obj.image) : 0;
    }
}

void ns_textattachment_set_bounds(uintptr_t attachment, double x, double y, double width, double height)
{
    @autoreleasepool {
        NSTextAttachment *obj = ns_textattachment_from(attachment);
        if (obj) {
            obj.bounds = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        }
    }
}

void ns_textattachment_get_bounds(uintptr_t attachment, double *x, double *y, double *width, double *height)
{
    if (x) {
        *x = 0;
    }
    if (y) {
        *y = 0;
    }
    if (width) {
        *width = 0;
    }
    if (height) {
        *height = 0;
    }
    @autoreleasepool {
        NSTextAttachment *obj = ns_textattachment_from(attachment);
        if (!obj) {
            return;
        }
        if (x) {
            *x = obj.bounds.origin.x;
        }
        if (y) {
            *y = obj.bounds.origin.y;
        }
        if (width) {
            *width = obj.bounds.size.width;
        }
        if (height) {
            *height = obj.bounds.size.height;
        }
    }
}

void ns_textattachment_set_attachment_cell(uintptr_t attachment, uintptr_t cell)
{
    @autoreleasepool {
        NSTextAttachment *obj = ns_textattachment_from(attachment);
        if (!obj) {
            return;
        }
        id cellObj = cell ? (__bridge id)(void *)cell : nil;
        if (cellObj && [cellObj conformsToProtocol:@protocol(NSTextAttachmentCell)]) {
            obj.attachmentCell = cellObj;
        } else {
            obj.attachmentCell = nil;
        }
    }
}

uintptr_t ns_textattachment_get_attachment_cell(uintptr_t attachment)
{
    @autoreleasepool {
        NSTextAttachment *obj = ns_textattachment_from(attachment);
        return obj && obj.attachmentCell ? ns_retain_obj(obj.attachmentCell) : 0;
    }
}

void ns_textattachment_set_line_layout_padding(uintptr_t attachment, double padding)
{
    @autoreleasepool {
        NSTextAttachment *obj = ns_textattachment_from(attachment);
        if (obj) {
            obj.lineLayoutPadding = (CGFloat)padding;
        }
    }
}

double ns_textattachment_get_line_layout_padding(uintptr_t attachment)
{
    @autoreleasepool {
        NSTextAttachment *obj = ns_textattachment_from(attachment);
        return obj ? obj.lineLayoutPadding : 0.0;
    }
}
""")

write(ROOT / "appkit/ns/nstextattachment/nstextattachment.zep", zep_ns("NSTextAttachment", "ns-textattachment.h") + r"""
/**
 * NSTextAttachment — inline attachment in attributed text.
 */
class NSTextAttachment
{
    public static function create() -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textattachment_create();
        }%
        return handle;
    }

    public static function createWithData(string data, string fileType = "") -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textattachment_create_with_data(Z_STRVAL(data), (size_t) Z_STRLEN(data), Z_STRVAL(fileType));
        }%
        return handle;
    }

    public static function wrap(int nsTextAttachmentPtr) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textattachment_wrap((void *)(uintptr_t) nsTextAttachmentPtr);
        }%
        return handle;
    }

    public static function destroy(int attachment) -> void
    {
        %{
            ns_textattachment_destroy((uintptr_t) attachment);
        }%
    }

    public static function setFileType(int attachment, string fileType) -> void
    {
        %{
            ns_textattachment_set_file_type((uintptr_t) attachment, Z_STRVAL(fileType));
        }%
    }

    public static function getFileType(int attachment) -> string
    {
        %{
            char buf[4096];
            buf[0] = '\0';
            if (ns_textattachment_get_file_type((uintptr_t) attachment, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        }%
        return "";
    }

    public static function setImage(int attachment, int image) -> void
    {
        %{
            ns_textattachment_set_image((uintptr_t) attachment, (uintptr_t) image);
        }%
    }

    public static function getImage(int attachment) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textattachment_get_image((uintptr_t) attachment);
        }%
        return handle;
    }

    public static function setBounds(int attachment, float x, float y, float width, float height) -> void
    {
        %{
            ns_textattachment_set_bounds((uintptr_t) attachment, (double) x, (double) y, (double) width, (double) height);
        }%
    }

    /**
     * @return array [x, y, width, height]
     */
    public static function getBounds(int attachment) -> array
    {
        array out = [];
        %{
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_textattachment_get_bounds((uintptr_t) attachment, &x, &y, &w, &h);
            add_next_index_double(&out, x);
            add_next_index_double(&out, y);
            add_next_index_double(&out, w);
            add_next_index_double(&out, h);
        }%
        return out;
    }

    public static function setAttachmentCell(int attachment, int cell) -> void
    {
        %{
            ns_textattachment_set_attachment_cell((uintptr_t) attachment, (uintptr_t) cell);
        }%
    }

    public static function getAttachmentCell(int attachment) -> int
    {
        int handle;
        %{
            handle = (zend_long) ns_textattachment_get_attachment_cell((uintptr_t) attachment);
        }%
        return handle;
    }

    public static function setLineLayoutPadding(int attachment, float padding) -> void
    {
        %{
            ns_textattachment_set_line_layout_padding((uintptr_t) attachment, (double) padding);
        }%
    }

    public static function getLineLayoutPadding(int attachment) -> float
    {
        double value;
        %{
            value = ns_textattachment_get_line_layout_padding((uintptr_t) attachment);
        }%
        return (float) value;
    }
}
""")

write(ROOT / ".okf/api/nstextattachment.md", okf(
    "NSTextAttachment", "nstextattachment", "ns-textattachment.h",
    "NSTextAttachment inline attributed-text attachment",
    [
        ("create / createWithData / wrap / destroy", "ownership"),
        ("fileType / image / bounds", "content"),
        ("attachmentCell", "cell handle"),
        ("lineLayoutPadding", "layout padding"),
    ],
))

print("spell + attachment done")
