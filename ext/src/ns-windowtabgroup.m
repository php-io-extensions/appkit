#import <AppKit/AppKit.h>
#import "ns-windowtabgroup.h"
#import "ns-window.h"

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

static NSWindowTabGroup *ns_windowtabgroup_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSWindowTabGroup class]] ? (NSWindowTabGroup *)obj : nil;
}

static NSWindow *ns_win_from_handle(uintptr_t window)
{
    void *ptr = ns_window_nswindow(window);
    if (ptr) {
        return (__bridge NSWindow *)ptr;
    }
    if (!window) {
        return nil;
    }
    id obj = (__bridge id)(void *)window;
    return [obj isKindOfClass:[NSWindow class]] ? (NSWindow *)obj : nil;
}

uintptr_t ns_windowtabgroup_wrap(void *group)
{
    if (!group) {
        return 0;
    }
    @autoreleasepool {
        NSWindowTabGroup *obj = (__bridge NSWindowTabGroup *)group;
        return [obj isKindOfClass:[NSWindowTabGroup class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_windowtabgroup_destroy(uintptr_t group)
{
    if (group) {
        CFRelease((void *)group);
    }
}

void *ns_windowtabgroup_nswindowtabgroup(uintptr_t group)
{
    NSWindowTabGroup *obj = ns_windowtabgroup_from(group);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_windowtabgroup_identifier(uintptr_t group, char *out, int out_len)
{
    @autoreleasepool {
        NSWindowTabGroup *obj = ns_windowtabgroup_from(group);
        return obj ? ns_copy_nsstring(obj.identifier, out, out_len) : 0;
    }
}

int ns_windowtabgroup_windows_count(uintptr_t group)
{
    @autoreleasepool {
        NSWindowTabGroup *obj = ns_windowtabgroup_from(group);
        return obj ? (int)obj.windows.count : 0;
    }
}

void *ns_windowtabgroup_window_at(uintptr_t group, int index)
{
    @autoreleasepool {
        NSWindowTabGroup *obj = ns_windowtabgroup_from(group);
        if (!obj || index < 0 || index >= (int)obj.windows.count) {
            return NULL;
        }
        return (__bridge void *)obj.windows[(NSUInteger)index];
    }
}

int ns_windowtabgroup_is_overview_visible(uintptr_t group)
{
    @autoreleasepool {
        NSWindowTabGroup *obj = ns_windowtabgroup_from(group);
        return obj && obj.overviewVisible ? 1 : 0;
    }
}

void ns_windowtabgroup_set_overview_visible(uintptr_t group, int visible)
{
    @autoreleasepool {
        NSWindowTabGroup *obj = ns_windowtabgroup_from(group);
        if (obj) {
            obj.overviewVisible = visible ? YES : NO;
        }
    }
}

int ns_windowtabgroup_is_tab_bar_visible(uintptr_t group)
{
    @autoreleasepool {
        NSWindowTabGroup *obj = ns_windowtabgroup_from(group);
        return obj && obj.tabBarVisible ? 1 : 0;
    }
}

void *ns_windowtabgroup_selected_window(uintptr_t group)
{
    @autoreleasepool {
        NSWindowTabGroup *obj = ns_windowtabgroup_from(group);
        return obj && obj.selectedWindow ? (__bridge void *)obj.selectedWindow : NULL;
    }
}

void ns_windowtabgroup_set_selected_window(uintptr_t group, uintptr_t window)
{
    @autoreleasepool {
        NSWindowTabGroup *obj = ns_windowtabgroup_from(group);
        NSWindow *win = ns_win_from_handle(window);
        if (obj && win) {
            obj.selectedWindow = win;
        }
    }
}

void ns_windowtabgroup_add_window(uintptr_t group, uintptr_t window)
{
    @autoreleasepool {
        NSWindowTabGroup *obj = ns_windowtabgroup_from(group);
        NSWindow *win = ns_win_from_handle(window);
        if (obj && win) {
            [obj addWindow:win];
        }
    }
}

void ns_windowtabgroup_insert_window(uintptr_t group, uintptr_t window, int index)
{
    @autoreleasepool {
        NSWindowTabGroup *obj = ns_windowtabgroup_from(group);
        NSWindow *win = ns_win_from_handle(window);
        if (obj && win) {
            [obj insertWindow:win atIndex:index];
        }
    }
}

void ns_windowtabgroup_remove_window(uintptr_t group, uintptr_t window)
{
    @autoreleasepool {
        NSWindowTabGroup *obj = ns_windowtabgroup_from(group);
        NSWindow *win = ns_win_from_handle(window);
        if (obj && win) {
            [obj removeWindow:win];
        }
    }
}
