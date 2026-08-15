#import <AppKit/AppKit.h>
#import "ns-textfieldcell.h"
#import "ns-color.h"

static uintptr_t ns_textfieldcell_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSTextFieldCell *ns_textfieldcell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextFieldCell class]] ? (NSTextFieldCell *)obj : nil;
}

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

uintptr_t ns_textfieldcell_create_text(const char *string)
{
    @autoreleasepool {
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        NSTextFieldCell *cell = [[NSTextFieldCell alloc] initTextCell:title];
        return ns_textfieldcell_retain_obj(cell);
    }
}

uintptr_t ns_textfieldcell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSTextFieldCell *obj = (__bridge NSTextFieldCell *)cell;
        return [obj isKindOfClass:[NSTextFieldCell class]] ? ns_textfieldcell_retain_obj(obj) : 0;
    }
}

void ns_textfieldcell_destroy(uintptr_t cell)
{
    if (!cell) {
        return;
    }
    CFRelease((void *)cell);
}

void *ns_textfieldcell_nstextfieldcell(uintptr_t cell)
{
    NSTextFieldCell *obj = ns_textfieldcell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_textfieldcell_set_title(uintptr_t cell, const char *title)
{
    @autoreleasepool {
        NSTextFieldCell *obj = ns_textfieldcell_from(cell);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_textfieldcell_get_title(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSTextFieldCell *obj = ns_textfieldcell_from(cell);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.title, out, out_len);
    }
}

void ns_textfieldcell_set_string(uintptr_t cell, const char *value)
{
    @autoreleasepool {
        NSTextFieldCell *obj = ns_textfieldcell_from(cell);
        if (obj) {
            obj.stringValue = value ? [NSString stringWithUTF8String:value] : @"";
        }
    }
}

int ns_textfieldcell_get_string(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSTextFieldCell *obj = ns_textfieldcell_from(cell);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.stringValue, out, out_len);
    }
}

void ns_textfieldcell_set_background_color(uintptr_t cell, uintptr_t color)
{
    @autoreleasepool {
        NSTextFieldCell *obj = ns_textfieldcell_from(cell);
        NSColor *nsColor = (__bridge NSColor *)ns_color_nscolor(color);
        if (obj) {
            obj.backgroundColor = nsColor;
        }
    }
}

void ns_textfieldcell_set_draws_background(uintptr_t cell, int drawsBackground)
{
    @autoreleasepool {
        NSTextFieldCell *obj = ns_textfieldcell_from(cell);
        if (obj) {
            obj.drawsBackground = drawsBackground ? YES : NO;
        }
    }
}

int ns_textfieldcell_draws_background(uintptr_t cell)
{
    @autoreleasepool {
        NSTextFieldCell *obj = ns_textfieldcell_from(cell);
        return obj && obj.drawsBackground ? 1 : 0;
    }
}

void ns_textfieldcell_set_text_color(uintptr_t cell, uintptr_t color)
{
    @autoreleasepool {
        NSTextFieldCell *obj = ns_textfieldcell_from(cell);
        NSColor *nsColor = (__bridge NSColor *)ns_color_nscolor(color);
        if (obj) {
            obj.textColor = nsColor;
        }
    }
}

void ns_textfieldcell_set_bezel_style(uintptr_t cell, int style)
{
    @autoreleasepool {
        NSTextFieldCell *obj = ns_textfieldcell_from(cell);
        if (obj) {
            obj.bezelStyle = (NSTextFieldBezelStyle)style;
        }
    }
}

int ns_textfieldcell_get_bezel_style(uintptr_t cell)
{
    @autoreleasepool {
        NSTextFieldCell *obj = ns_textfieldcell_from(cell);
        return obj ? (int)obj.bezelStyle : 0;
    }
}

void ns_textfieldcell_set_placeholder_string(uintptr_t cell, const char *placeholder)
{
    @autoreleasepool {
        NSTextFieldCell *obj = ns_textfieldcell_from(cell);
        if (obj) {
            obj.placeholderString = placeholder ? [NSString stringWithUTF8String:placeholder] : nil;
        }
    }
}

int ns_textfieldcell_get_placeholder_string(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSTextFieldCell *obj = ns_textfieldcell_from(cell);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.placeholderString, out, out_len);
    }
}

void ns_textfieldcell_set_wants_notification_for_marked_text(uintptr_t cell, int flag)
{
    @autoreleasepool {
        NSTextFieldCell *obj = ns_textfieldcell_from(cell);
        if (obj) {
            [obj setWantsNotificationForMarkedText:flag ? YES : NO];
        }
    }
}
