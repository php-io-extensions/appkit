#import <AppKit/AppKit.h>
#import "ns-paragraphstyle.h"

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
