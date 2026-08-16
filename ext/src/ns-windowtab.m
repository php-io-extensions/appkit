#import <AppKit/AppKit.h>
#import "ns-windowtab.h"
#import "ns-view.h"

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

static NSWindowTab *ns_windowtab_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSWindowTab class]] ? (NSWindowTab *)obj : nil;
}

uintptr_t ns_windowtab_wrap(void *tab)
{
    if (!tab) {
        return 0;
    }
    @autoreleasepool {
        NSWindowTab *obj = (__bridge NSWindowTab *)tab;
        return [obj isKindOfClass:[NSWindowTab class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_windowtab_destroy(uintptr_t tab)
{
    if (tab) {
        CFRelease((void *)tab);
    }
}

void *ns_windowtab_nswindowtab(uintptr_t tab)
{
    NSWindowTab *obj = ns_windowtab_from(tab);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_windowtab_title(uintptr_t tab, char *out, int out_len)
{
    @autoreleasepool {
        NSWindowTab *obj = ns_windowtab_from(tab);
        return obj ? ns_copy_nsstring(obj.title, out, out_len) : 0;
    }
}

void ns_windowtab_set_title(uintptr_t tab, const char *title)
{
    @autoreleasepool {
        NSWindowTab *obj = ns_windowtab_from(tab);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : nil;
        }
    }
}

int ns_windowtab_tool_tip(uintptr_t tab, char *out, int out_len)
{
    @autoreleasepool {
        NSWindowTab *obj = ns_windowtab_from(tab);
        return obj ? ns_copy_nsstring(obj.toolTip, out, out_len) : 0;
    }
}

void ns_windowtab_set_tool_tip(uintptr_t tab, const char *tool_tip)
{
    @autoreleasepool {
        NSWindowTab *obj = ns_windowtab_from(tab);
        if (obj) {
            obj.toolTip = tool_tip ? [NSString stringWithUTF8String:tool_tip] : nil;
        }
    }
}

void ns_windowtab_set_accessory_view(uintptr_t tab, uintptr_t view)
{
    @autoreleasepool {
        NSWindowTab *obj = ns_windowtab_from(tab);
        void *nsview = ns_view_nsview(view);
        if (obj) {
            obj.accessoryView = nsview ? (__bridge NSView *)nsview : nil;
        }
    }
}

uintptr_t ns_windowtab_accessory_view(uintptr_t tab)
{
    @autoreleasepool {
        NSWindowTab *obj = ns_windowtab_from(tab);
        if (!obj || !obj.accessoryView) {
            return 0;
        }
        return ns_view_wrap((__bridge void *)obj.accessoryView);
    }
}
