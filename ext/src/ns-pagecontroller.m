#import <AppKit/AppKit.h>
#import "ns-pagecontroller.h"
#import "ns-viewcontroller.h"

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSPageController *ns_pagecontroller_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSPageController class]] ? (NSPageController *)obj : nil;
}

uintptr_t ns_pagecontroller_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSPageController alloc] init]);
    }
}

uintptr_t ns_pagecontroller_wrap(void *controller)
{
    if (!controller) {
        return 0;
    }
    @autoreleasepool {
        NSPageController *obj = (__bridge NSPageController *)controller;
        return [obj isKindOfClass:[NSPageController class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_pagecontroller_destroy(uintptr_t controller)
{
    if (controller) {
        CFRelease((void *)controller);
    }
}

void *ns_pagecontroller_nspagecontroller(uintptr_t controller)
{
    NSPageController *obj = ns_pagecontroller_from(controller);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_pagecontroller_set_transition_style(uintptr_t controller, int style)
{
    @autoreleasepool {
        NSPageController *obj = ns_pagecontroller_from(controller);
        if (obj) {
            obj.transitionStyle = (NSPageControllerTransitionStyle)style;
        }
    }
}

int ns_pagecontroller_get_transition_style(uintptr_t controller)
{
    @autoreleasepool {
        NSPageController *obj = ns_pagecontroller_from(controller);
        return obj ? (int)obj.transitionStyle : 0;
    }
}

void ns_pagecontroller_set_selected_index(uintptr_t controller, int index)
{
    @autoreleasepool {
        NSPageController *obj = ns_pagecontroller_from(controller);
        if (obj) {
            obj.selectedIndex = index;
        }
    }
}

int ns_pagecontroller_get_selected_index(uintptr_t controller)
{
    @autoreleasepool {
        NSPageController *obj = ns_pagecontroller_from(controller);
        return obj ? (int)obj.selectedIndex : -1;
    }
}

int ns_pagecontroller_arranged_object_count(uintptr_t controller)
{
    @autoreleasepool {
        NSPageController *obj = ns_pagecontroller_from(controller);
        return obj ? (int)obj.arrangedObjects.count : 0;
    }
}

void ns_pagecontroller_navigate_forward_to_object(uintptr_t controller, const char *object_id)
{
    @autoreleasepool {
        NSPageController *obj = ns_pagecontroller_from(controller);
        if (obj) {
            id object = object_id ? [NSString stringWithUTF8String:object_id] : @"";
            [obj navigateForwardToObject:object];
        }
    }
}

void ns_pagecontroller_navigate_back(uintptr_t controller)
{
    @autoreleasepool {
        NSPageController *obj = ns_pagecontroller_from(controller);
        if (obj) {
            [obj navigateBack:nil];
        }
    }
}

void ns_pagecontroller_navigate_forward(uintptr_t controller)
{
    @autoreleasepool {
        NSPageController *obj = ns_pagecontroller_from(controller);
        if (obj) {
            [obj navigateForward:nil];
        }
    }
}

void ns_pagecontroller_complete_transition(uintptr_t controller)
{
    @autoreleasepool {
        NSPageController *obj = ns_pagecontroller_from(controller);
        if (obj) {
            [obj completeTransition];
        }
    }
}

uintptr_t ns_pagecontroller_selected_view_controller(uintptr_t controller)
{
    @autoreleasepool {
        NSPageController *obj = ns_pagecontroller_from(controller);
        NSViewController *vc = obj ? obj.selectedViewController : nil;
        return vc ? ns_viewcontroller_wrap((__bridge void *)vc) : 0;
    }
}
