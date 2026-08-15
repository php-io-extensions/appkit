#import <AppKit/AppKit.h>
#import "ns-cell.h"

static uintptr_t ns_cell_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSCell *ns_cell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSCell class]] ? (NSCell *)obj : nil;
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

uintptr_t ns_cell_create_text(const char *string)
{
    @autoreleasepool {
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        NSCell *cell = [[NSCell alloc] initTextCell:title];
        return ns_cell_retain_obj(cell);
    }
}

uintptr_t ns_cell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSCell *obj = (__bridge NSCell *)cell;
        return ns_cell_retain_obj(obj);
    }
}

void ns_cell_destroy(uintptr_t cell)
{
    if (!cell) {
        return;
    }
    CFRelease((void *)cell);
}

void *ns_cell_nscell(uintptr_t cell)
{
    NSCell *obj = ns_cell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_cell_set_title(uintptr_t cell, const char *title)
{
    @autoreleasepool {
        NSCell *obj = ns_cell_from(cell);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_cell_get_title(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSCell *obj = ns_cell_from(cell);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.title, out, out_len);
    }
}

void ns_cell_set_state(uintptr_t cell, int state)
{
    @autoreleasepool {
        NSCell *obj = ns_cell_from(cell);
        if (obj) {
            obj.state = (NSControlStateValue)state;
        }
    }
}

int ns_cell_get_state(uintptr_t cell)
{
    @autoreleasepool {
        NSCell *obj = ns_cell_from(cell);
        return obj ? (int)obj.state : 0;
    }
}

void ns_cell_set_enabled(uintptr_t cell, int enabled)
{
    @autoreleasepool {
        NSCell *obj = ns_cell_from(cell);
        if (obj) {
            obj.enabled = enabled ? YES : NO;
        }
    }
}

int ns_cell_is_enabled(uintptr_t cell)
{
    @autoreleasepool {
        NSCell *obj = ns_cell_from(cell);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_cell_set_tag(uintptr_t cell, int tag)
{
    @autoreleasepool {
        NSCell *obj = ns_cell_from(cell);
        if (obj) {
            obj.tag = tag;
        }
    }
}

int ns_cell_get_tag(uintptr_t cell)
{
    @autoreleasepool {
        NSCell *obj = ns_cell_from(cell);
        return obj ? (int)obj.tag : 0;
    }
}

void ns_cell_set_string(uintptr_t cell, const char *value)
{
    @autoreleasepool {
        NSCell *obj = ns_cell_from(cell);
        if (obj) {
            obj.stringValue = value ? [NSString stringWithUTF8String:value] : @"";
        }
    }
}

int ns_cell_get_string(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSCell *obj = ns_cell_from(cell);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.stringValue, out, out_len);
    }
}
