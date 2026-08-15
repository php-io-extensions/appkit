#import <AppKit/AppKit.h>
#import "ns-tableheadercell.h"

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

static NSTableHeaderCell *ns_tableheadercell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTableHeaderCell class]] ? (NSTableHeaderCell *)obj : nil;
}

uintptr_t ns_tableheadercell_create_text(const char *string)
{
    @autoreleasepool {
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        return ns_retain_obj([[NSTableHeaderCell alloc] initTextCell:title]);
    }
}

uintptr_t ns_tableheadercell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSTableHeaderCell *obj = (__bridge NSTableHeaderCell *)cell;
        return [obj isKindOfClass:[NSTableHeaderCell class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_tableheadercell_destroy(uintptr_t cell)
{
    ns_release_handle(cell);
}

void *ns_tableheadercell_nstableheadercell(uintptr_t cell)
{
    NSTableHeaderCell *obj = ns_tableheadercell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_tableheadercell_set_title(uintptr_t cell, const char *title)
{
    @autoreleasepool {
        NSTableHeaderCell *obj = ns_tableheadercell_from(cell);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_tableheadercell_get_title(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSTableHeaderCell *obj = ns_tableheadercell_from(cell);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.title, out, out_len);
    }
}

void ns_tableheadercell_set_state(uintptr_t cell, int state)
{
    @autoreleasepool {
        NSTableHeaderCell *obj = ns_tableheadercell_from(cell);
        if (obj) {
            obj.state = (NSControlStateValue)state;
        }
    }
}

int ns_tableheadercell_get_state(uintptr_t cell)
{
    @autoreleasepool {
        NSTableHeaderCell *obj = ns_tableheadercell_from(cell);
        return obj ? (int)obj.state : 0;
    }
}

void ns_tableheadercell_set_enabled(uintptr_t cell, int enabled)
{
    @autoreleasepool {
        NSTableHeaderCell *obj = ns_tableheadercell_from(cell);
        if (obj) {
            obj.enabled = enabled ? YES : NO;
        }
    }
}

int ns_tableheadercell_is_enabled(uintptr_t cell)
{
    @autoreleasepool {
        NSTableHeaderCell *obj = ns_tableheadercell_from(cell);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_tableheadercell_set_tag(uintptr_t cell, int tag)
{
    @autoreleasepool {
        NSTableHeaderCell *obj = ns_tableheadercell_from(cell);
        if (obj) {
            obj.tag = tag;
        }
    }
}

int ns_tableheadercell_get_tag(uintptr_t cell)
{
    @autoreleasepool {
        NSTableHeaderCell *obj = ns_tableheadercell_from(cell);
        return obj ? (int)obj.tag : 0;
    }
}
