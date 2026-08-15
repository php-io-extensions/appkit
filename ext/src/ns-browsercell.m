#import <AppKit/AppKit.h>
#import "ns-browsercell.h"

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

static NSBrowserCell *ns_browsercell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSBrowserCell class]] ? (NSBrowserCell *)obj : nil;
}

uintptr_t ns_browsercell_create_text(const char *string)
{
    @autoreleasepool {
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        return ns_retain_obj([[NSBrowserCell alloc] initTextCell:title]);
    }
}

uintptr_t ns_browsercell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSBrowserCell *obj = (__bridge NSBrowserCell *)cell;
        return [obj isKindOfClass:[NSBrowserCell class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_browsercell_destroy(uintptr_t cell)
{
    ns_release_handle(cell);
}

void *ns_browsercell_nsbrowsercell(uintptr_t cell)
{
    NSBrowserCell *obj = ns_browsercell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_browsercell_set_title(uintptr_t cell, const char *title)
{
    @autoreleasepool {
        NSBrowserCell *obj = ns_browsercell_from(cell);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_browsercell_get_title(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSBrowserCell *obj = ns_browsercell_from(cell);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.title, out, out_len);
    }
}

void ns_browsercell_set_state(uintptr_t cell, int state)
{
    @autoreleasepool {
        NSBrowserCell *obj = ns_browsercell_from(cell);
        if (obj) {
            obj.state = (NSControlStateValue)state;
        }
    }
}

int ns_browsercell_get_state(uintptr_t cell)
{
    @autoreleasepool {
        NSBrowserCell *obj = ns_browsercell_from(cell);
        return obj ? (int)obj.state : 0;
    }
}

void ns_browsercell_set_enabled(uintptr_t cell, int enabled)
{
    @autoreleasepool {
        NSBrowserCell *obj = ns_browsercell_from(cell);
        if (obj) {
            obj.enabled = enabled ? YES : NO;
        }
    }
}

int ns_browsercell_is_enabled(uintptr_t cell)
{
    @autoreleasepool {
        NSBrowserCell *obj = ns_browsercell_from(cell);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_browsercell_set_tag(uintptr_t cell, int tag)
{
    @autoreleasepool {
        NSBrowserCell *obj = ns_browsercell_from(cell);
        if (obj) {
            obj.tag = tag;
        }
    }
}

int ns_browsercell_get_tag(uintptr_t cell)
{
    @autoreleasepool {
        NSBrowserCell *obj = ns_browsercell_from(cell);
        return obj ? (int)obj.tag : 0;
    }
}

void ns_browsercell_set_leaf(uintptr_t cell, int flag)
{
    @autoreleasepool {
        NSBrowserCell *obj = ns_browsercell_from(cell);
        if (obj) {
            obj.leaf = flag ? YES : NO;
        }
    }
}

int ns_browsercell_is_leaf(uintptr_t cell)
{
    @autoreleasepool {
        NSBrowserCell *obj = ns_browsercell_from(cell);
        return obj && obj.leaf ? 1 : 0;
    }
}

void ns_browsercell_set_loaded(uintptr_t cell, int flag)
{
    @autoreleasepool {
        NSBrowserCell *obj = ns_browsercell_from(cell);
        if (obj) {
            obj.loaded = flag ? YES : NO;
        }
    }
}

int ns_browsercell_is_loaded(uintptr_t cell)
{
    @autoreleasepool {
        NSBrowserCell *obj = ns_browsercell_from(cell);
        return obj && obj.loaded ? 1 : 0;
    }
}
