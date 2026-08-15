#import <AppKit/AppKit.h>
#import "ns-viewcontroller.h"
#import "ns-view.h"

static uintptr_t ns_viewcontroller_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSViewController *ns_viewcontroller_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSViewController class]] ? (NSViewController *)obj : nil;
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

uintptr_t ns_viewcontroller_create(void)
{
    @autoreleasepool {
        NSViewController *controller = [[NSViewController alloc] init];
        return ns_viewcontroller_retain_obj(controller);
    }
}

uintptr_t ns_viewcontroller_create_with_view(uintptr_t view)
{
    void *ptr = ns_view_nsview(view);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSView *content = (__bridge NSView *)ptr;
        NSViewController *controller = [[NSViewController alloc] init];
        controller.view = content;
        return ns_viewcontroller_retain_obj(controller);
    }
}

uintptr_t ns_viewcontroller_wrap(void *controller)
{
    if (!controller) {
        return 0;
    }
    @autoreleasepool {
        NSViewController *obj = (__bridge NSViewController *)controller;
        return ns_viewcontroller_retain_obj(obj);
    }
}

void ns_viewcontroller_destroy(uintptr_t controller)
{
    if (!controller) {
        return;
    }
    @autoreleasepool {
        NSViewController *obj = ns_viewcontroller_from(controller);
        if (obj) {
            obj.view = nil;
        }
    }
    CFRelease((void *)controller);
}

void *ns_viewcontroller_nsviewcontroller(uintptr_t controller)
{
    NSViewController *obj = ns_viewcontroller_from(controller);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_viewcontroller_set_view(uintptr_t controller, uintptr_t view)
{
    void *ptr = ns_view_nsview(view);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSViewController *obj = ns_viewcontroller_from(controller);
        if (obj) {
            obj.view = (__bridge NSView *)ptr;
        }
    }
}

uintptr_t ns_viewcontroller_view(uintptr_t controller)
{
    @autoreleasepool {
        NSViewController *obj = ns_viewcontroller_from(controller);
        NSView *view = obj ? obj.view : nil;
        return view ? ns_view_wrap((__bridge void *)view) : 0;
    }
}

void ns_viewcontroller_set_title(uintptr_t controller, const char *title)
{
    @autoreleasepool {
        NSViewController *obj = ns_viewcontroller_from(controller);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_viewcontroller_get_title(uintptr_t controller, char *out, int out_len)
{
    @autoreleasepool {
        NSViewController *obj = ns_viewcontroller_from(controller);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.title, out, out_len);
    }
}

int ns_viewcontroller_is_view_loaded(uintptr_t controller)
{
    @autoreleasepool {
        NSViewController *obj = ns_viewcontroller_from(controller);
        return obj && obj.viewLoaded ? 1 : 0;
    }
}

void ns_viewcontroller_load_view_if_needed(uintptr_t controller)
{
    @autoreleasepool {
        NSViewController *obj = ns_viewcontroller_from(controller);
        if (obj) {
            [obj loadViewIfNeeded];
        }
    }
}
