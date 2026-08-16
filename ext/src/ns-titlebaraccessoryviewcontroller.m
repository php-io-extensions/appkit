#import <AppKit/AppKit.h>
#import "ns-titlebaraccessoryviewcontroller.h"
#import "ns-view.h"

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSTitlebarAccessoryViewController *ns_titlebar_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTitlebarAccessoryViewController class]] ? (NSTitlebarAccessoryViewController *)obj : nil;
}

uintptr_t ns_titlebaraccessoryviewcontroller_create(void)
{
    @autoreleasepool {
        NSTitlebarAccessoryViewController *controller = [[NSTitlebarAccessoryViewController alloc] init];
        return ns_retain_obj(controller);
    }
}

uintptr_t ns_titlebaraccessoryviewcontroller_create_with_view(uintptr_t view)
{
    void *ptr = ns_view_nsview(view);
    if (!ptr) {
        return 0;
    }
    @autoreleasepool {
        NSTitlebarAccessoryViewController *controller = [[NSTitlebarAccessoryViewController alloc] init];
        controller.view = (__bridge NSView *)ptr;
        return ns_retain_obj(controller);
    }
}

uintptr_t ns_titlebaraccessoryviewcontroller_wrap(void *controller)
{
    if (!controller) {
        return 0;
    }
    @autoreleasepool {
        NSTitlebarAccessoryViewController *obj = (__bridge NSTitlebarAccessoryViewController *)controller;
        return [obj isKindOfClass:[NSTitlebarAccessoryViewController class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_titlebaraccessoryviewcontroller_destroy(uintptr_t controller)
{
    if (controller) {
        CFRelease((void *)controller);
    }
}

void *ns_titlebaraccessoryviewcontroller_nstitlebaraccessoryviewcontroller(uintptr_t controller)
{
    NSTitlebarAccessoryViewController *obj = ns_titlebar_from(controller);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_titlebaraccessoryviewcontroller_set_view(uintptr_t controller, uintptr_t view)
{
    @autoreleasepool {
        NSTitlebarAccessoryViewController *obj = ns_titlebar_from(controller);
        void *ptr = ns_view_nsview(view);
        if (obj && ptr) {
            obj.view = (__bridge NSView *)ptr;
        }
    }
}

uintptr_t ns_titlebaraccessoryviewcontroller_view(uintptr_t controller)
{
    @autoreleasepool {
        NSTitlebarAccessoryViewController *obj = ns_titlebar_from(controller);
        if (!obj || !obj.view) {
            return 0;
        }
        return ns_view_wrap((__bridge void *)obj.view);
    }
}

void ns_titlebaraccessoryviewcontroller_set_layout_attribute(uintptr_t controller, int attribute)
{
    @autoreleasepool {
        NSTitlebarAccessoryViewController *obj = ns_titlebar_from(controller);
        if (obj) {
            obj.layoutAttribute = (NSLayoutAttribute)attribute;
        }
    }
}

int ns_titlebaraccessoryviewcontroller_layout_attribute(uintptr_t controller)
{
    @autoreleasepool {
        NSTitlebarAccessoryViewController *obj = ns_titlebar_from(controller);
        return obj ? (int)obj.layoutAttribute : 0;
    }
}

void ns_titlebaraccessoryviewcontroller_set_full_screen_min_height(uintptr_t controller, double height)
{
    @autoreleasepool {
        NSTitlebarAccessoryViewController *obj = ns_titlebar_from(controller);
        if (obj) {
            obj.fullScreenMinHeight = (CGFloat)height;
        }
    }
}

double ns_titlebaraccessoryviewcontroller_full_screen_min_height(uintptr_t controller)
{
    @autoreleasepool {
        NSTitlebarAccessoryViewController *obj = ns_titlebar_from(controller);
        return obj ? (double)obj.fullScreenMinHeight : 0.0;
    }
}

void ns_titlebaraccessoryviewcontroller_set_hidden(uintptr_t controller, int hidden)
{
    @autoreleasepool {
        NSTitlebarAccessoryViewController *obj = ns_titlebar_from(controller);
        if (obj) {
            obj.hidden = hidden ? YES : NO;
        }
    }
}

int ns_titlebaraccessoryviewcontroller_is_hidden(uintptr_t controller)
{
    @autoreleasepool {
        NSTitlebarAccessoryViewController *obj = ns_titlebar_from(controller);
        return obj && obj.hidden ? 1 : 0;
    }
}

void ns_titlebaraccessoryviewcontroller_set_automatically_adjusts_size(uintptr_t controller, int adjusts)
{
    @autoreleasepool {
        NSTitlebarAccessoryViewController *obj = ns_titlebar_from(controller);
        if (obj) {
            obj.automaticallyAdjustsSize = adjusts ? YES : NO;
        }
    }
}

int ns_titlebaraccessoryviewcontroller_automatically_adjusts_size(uintptr_t controller)
{
    @autoreleasepool {
        NSTitlebarAccessoryViewController *obj = ns_titlebar_from(controller);
        return obj && obj.automaticallyAdjustsSize ? 1 : 0;
    }
}
