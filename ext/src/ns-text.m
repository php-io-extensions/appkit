#import <AppKit/AppKit.h>
#import "ns-text.h"
#import "ns-view.h"
#import "ns-color.h"
#import "ns-font.h"

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

static NSText *ns_text_from_view(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    id obj = (__bridge id)ptr;
    return [obj isKindOfClass:[NSText class]] ? (NSText *)obj : nil;
}

uintptr_t ns_text_create(double x, double y, double width, double height, const char *value)
{
    if (width <= 0) {
        width = 200;
    }
    if (height <= 0) {
        height = 24;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSText *text = [[NSText alloc] initWithFrame:rect];
        [text setString:value ? [NSString stringWithUTF8String:value] : @""];
        [text setEditable:YES];
        [text setSelectable:YES];
        return ns_view_wrap((__bridge void *)text);
    }
}

uintptr_t ns_text_wrap(void *text)
{
    if (!text) {
        return 0;
    }
    @autoreleasepool {
        NSText *obj = (__bridge NSText *)text;
        return [obj isKindOfClass:[NSText class]] ? ns_view_wrap(text) : 0;
    }
}

void ns_text_destroy(uintptr_t text)
{
    ns_view_destroy(text);
}

void *ns_text_nstext(uintptr_t text)
{
    NSText *obj = ns_text_from_view(text);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_text_set_string(uintptr_t text, const char *value)
{
    @autoreleasepool {
        NSText *obj = ns_text_from_view(text);
        if (obj) {
            obj.string = value ? [NSString stringWithUTF8String:value] : @"";
        }
    }
}

int ns_text_get_string(uintptr_t text, char *out, int out_len)
{
    @autoreleasepool {
        NSText *obj = ns_text_from_view(text);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.string, out, out_len);
    }
}

void ns_text_set_editable(uintptr_t text, int editable)
{
    @autoreleasepool {
        NSText *obj = ns_text_from_view(text);
        if (obj) {
            obj.editable = editable ? YES : NO;
        }
    }
}

int ns_text_is_editable(uintptr_t text)
{
    @autoreleasepool {
        NSText *obj = ns_text_from_view(text);
        return obj && obj.editable ? 1 : 0;
    }
}

void ns_text_set_selectable(uintptr_t text, int selectable)
{
    @autoreleasepool {
        NSText *obj = ns_text_from_view(text);
        if (obj) {
            obj.selectable = selectable ? YES : NO;
        }
    }
}

int ns_text_is_selectable(uintptr_t text)
{
    @autoreleasepool {
        NSText *obj = ns_text_from_view(text);
        return obj && obj.selectable ? 1 : 0;
    }
}

void ns_text_set_rich_text(uintptr_t text, int richText)
{
    @autoreleasepool {
        NSText *obj = ns_text_from_view(text);
        if (obj) {
            obj.richText = richText ? YES : NO;
        }
    }
}

int ns_text_is_rich_text(uintptr_t text)
{
    @autoreleasepool {
        NSText *obj = ns_text_from_view(text);
        return obj && obj.richText ? 1 : 0;
    }
}

void ns_text_set_draws_background(uintptr_t text, int drawsBackground)
{
    @autoreleasepool {
        NSText *obj = ns_text_from_view(text);
        if (obj) {
            obj.drawsBackground = drawsBackground ? YES : NO;
        }
    }
}

int ns_text_draws_background(uintptr_t text)
{
    @autoreleasepool {
        NSText *obj = ns_text_from_view(text);
        return obj && obj.drawsBackground ? 1 : 0;
    }
}

void ns_text_set_background_color(uintptr_t text, uintptr_t color)
{
    @autoreleasepool {
        NSText *obj = ns_text_from_view(text);
        NSColor *nsColor = (__bridge NSColor *)ns_color_nscolor(color);
        if (obj) {
            obj.backgroundColor = nsColor;
        }
    }
}

void ns_text_set_text_color(uintptr_t text, uintptr_t color)
{
    @autoreleasepool {
        NSText *obj = ns_text_from_view(text);
        NSColor *nsColor = (__bridge NSColor *)ns_color_nscolor(color);
        if (obj) {
            obj.textColor = nsColor;
        }
    }
}

void ns_text_set_font(uintptr_t text, uintptr_t font)
{
    @autoreleasepool {
        NSText *obj = ns_text_from_view(text);
        NSFont *nsFont = (__bridge NSFont *)ns_font_nsfont(font);
        if (obj && nsFont) {
            obj.font = nsFont;
        }
    }
}

void ns_text_set_alignment(uintptr_t text, int alignment)
{
    @autoreleasepool {
        NSText *obj = ns_text_from_view(text);
        if (obj) {
            obj.alignment = (NSTextAlignment)alignment;
        }
    }
}

int ns_text_get_alignment(uintptr_t text)
{
    @autoreleasepool {
        NSText *obj = ns_text_from_view(text);
        return obj ? (int)obj.alignment : 0;
    }
}

void ns_text_set_writing_direction(uintptr_t text, int direction)
{
    @autoreleasepool {
        NSText *obj = ns_text_from_view(text);
        if (obj) {
            obj.baseWritingDirection = (NSWritingDirection)direction;
        }
    }
}

int ns_text_get_writing_direction(uintptr_t text)
{
    @autoreleasepool {
        NSText *obj = ns_text_from_view(text);
        return obj ? (int)obj.baseWritingDirection : 0;
    }
}

void ns_text_set_selected_range(uintptr_t text, int location, int length)
{
    @autoreleasepool {
        NSText *obj = ns_text_from_view(text);
        if (obj) {
            obj.selectedRange = NSMakeRange((NSUInteger)location, (NSUInteger)length);
        }
    }
}

void ns_text_get_selected_range(uintptr_t text, int *location, int *length)
{
    if (!location || !length) {
        return;
    }
    @autoreleasepool {
        NSText *obj = ns_text_from_view(text);
        if (!obj) {
            *location = 0;
            *length = 0;
            return;
        }
        *location = (int)obj.selectedRange.location;
        *length = (int)obj.selectedRange.length;
    }
}

void ns_text_size_to_fit(uintptr_t text)
{
    @autoreleasepool {
        NSText *obj = ns_text_from_view(text);
        if (obj) {
            [obj sizeToFit];
        }
    }
}
