#import <AppKit/AppKit.h>
#import "ns-formcell.h"

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

static NSFormCell *ns_formcell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSFormCell class]] ? (NSFormCell *)obj : nil;
}

uintptr_t ns_formcell_create_text(const char *string)
{
    @autoreleasepool {
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        return ns_retain_obj([[NSFormCell alloc] initTextCell:title]);
    }
}

uintptr_t ns_formcell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSFormCell *obj = (__bridge NSFormCell *)cell;
        return [obj isKindOfClass:[NSFormCell class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_formcell_destroy(uintptr_t cell)
{
    ns_release_handle(cell);
}

void *ns_formcell_nsformcell(uintptr_t cell)
{
    NSFormCell *obj = ns_formcell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_formcell_set_title(uintptr_t cell, const char *title)
{
    @autoreleasepool {
        NSFormCell *obj = ns_formcell_from(cell);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_formcell_get_title(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSFormCell *obj = ns_formcell_from(cell);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.title, out, out_len);
    }
}

void ns_formcell_set_state(uintptr_t cell, int state)
{
    @autoreleasepool {
        NSFormCell *obj = ns_formcell_from(cell);
        if (obj) {
            obj.state = (NSControlStateValue)state;
        }
    }
}

int ns_formcell_get_state(uintptr_t cell)
{
    @autoreleasepool {
        NSFormCell *obj = ns_formcell_from(cell);
        return obj ? (int)obj.state : 0;
    }
}

void ns_formcell_set_enabled(uintptr_t cell, int enabled)
{
    @autoreleasepool {
        NSFormCell *obj = ns_formcell_from(cell);
        if (obj) {
            obj.enabled = enabled ? YES : NO;
        }
    }
}

int ns_formcell_is_enabled(uintptr_t cell)
{
    @autoreleasepool {
        NSFormCell *obj = ns_formcell_from(cell);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_formcell_set_tag(uintptr_t cell, int tag)
{
    @autoreleasepool {
        NSFormCell *obj = ns_formcell_from(cell);
        if (obj) {
            obj.tag = tag;
        }
    }
}

int ns_formcell_get_tag(uintptr_t cell)
{
    @autoreleasepool {
        NSFormCell *obj = ns_formcell_from(cell);
        return obj ? (int)obj.tag : 0;
    }
}

void ns_formcell_set_placeholder_string(uintptr_t cell, const char *placeholder)
{
    @autoreleasepool {
        NSFormCell *obj = ns_formcell_from(cell);
        if (obj) {
            obj.placeholderString = placeholder ? [NSString stringWithUTF8String:placeholder] : @"";
        }
    }
}

int ns_formcell_get_placeholder_string(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSFormCell *obj = ns_formcell_from(cell);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.placeholderString, out, out_len);
    }
}

void ns_formcell_set_title_width(uintptr_t cell, double width)
{
    @autoreleasepool {
        NSFormCell *obj = ns_formcell_from(cell);
        if (obj) {
            obj.titleWidth = (CGFloat)width;
        }
    }
}

double ns_formcell_get_title_width(uintptr_t cell)
{
    @autoreleasepool {
        NSFormCell *obj = ns_formcell_from(cell);
        return obj ? (double)obj.titleWidth : 0.0;
    }
}

void ns_formcell_set_string_value(uintptr_t cell, const char *value)
{
    @autoreleasepool {
        NSFormCell *obj = ns_formcell_from(cell);
        if (obj) {
            obj.stringValue = value ? [NSString stringWithUTF8String:value] : @"";
        }
    }
}

int ns_formcell_get_string_value(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSFormCell *obj = ns_formcell_from(cell);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.stringValue, out, out_len);
    }
}
