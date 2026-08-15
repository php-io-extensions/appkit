#import <AppKit/AppKit.h>
#import "ns-actioncell.h"

static uintptr_t ns_actioncell_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSActionCell *ns_actioncell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSActionCell class]] ? (NSActionCell *)obj : nil;
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

uintptr_t ns_actioncell_create_text(const char *string)
{
    @autoreleasepool {
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        NSActionCell *cell = [[NSActionCell alloc] initTextCell:title];
        return ns_actioncell_retain_obj(cell);
    }
}

uintptr_t ns_actioncell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSActionCell *obj = (__bridge NSActionCell *)cell;
        return [obj isKindOfClass:[NSActionCell class]] ? ns_actioncell_retain_obj(obj) : 0;
    }
}

void ns_actioncell_destroy(uintptr_t cell)
{
    if (!cell) {
        return;
    }
    CFRelease((void *)cell);
}

void *ns_actioncell_nsactioncell(uintptr_t cell)
{
    NSActionCell *obj = ns_actioncell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_actioncell_set_title(uintptr_t cell, const char *title)
{
    @autoreleasepool {
        NSActionCell *obj = ns_actioncell_from(cell);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_actioncell_get_title(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSActionCell *obj = ns_actioncell_from(cell);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.title, out, out_len);
    }
}

void ns_actioncell_set_state(uintptr_t cell, int state)
{
    @autoreleasepool {
        NSActionCell *obj = ns_actioncell_from(cell);
        if (obj) {
            obj.state = (NSControlStateValue)state;
        }
    }
}

int ns_actioncell_get_state(uintptr_t cell)
{
    @autoreleasepool {
        NSActionCell *obj = ns_actioncell_from(cell);
        return obj ? (int)obj.state : 0;
    }
}

void ns_actioncell_set_enabled(uintptr_t cell, int enabled)
{
    @autoreleasepool {
        NSActionCell *obj = ns_actioncell_from(cell);
        if (obj) {
            obj.enabled = enabled ? YES : NO;
        }
    }
}

int ns_actioncell_is_enabled(uintptr_t cell)
{
    @autoreleasepool {
        NSActionCell *obj = ns_actioncell_from(cell);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_actioncell_set_tag(uintptr_t cell, int tag)
{
    @autoreleasepool {
        NSActionCell *obj = ns_actioncell_from(cell);
        if (obj) {
            obj.tag = tag;
        }
    }
}

int ns_actioncell_get_tag(uintptr_t cell)
{
    @autoreleasepool {
        NSActionCell *obj = ns_actioncell_from(cell);
        return obj ? (int)obj.tag : 0;
    }
}
