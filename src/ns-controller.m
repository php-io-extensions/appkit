#import <AppKit/AppKit.h>
#import "ns-controller.h"

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

static NSController *ns_controller_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSController class]] ? (NSController *)obj : nil;
}

uintptr_t ns_controller_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSController alloc] init]);
    }
}

uintptr_t ns_controller_wrap(void *controller)
{
    if (!controller) {
        return 0;
    }
    @autoreleasepool {
        NSController *obj = (__bridge NSController *)controller;
        return [obj isKindOfClass:[NSController class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_controller_destroy(uintptr_t controller)
{
    ns_release_handle(controller);
}

void *ns_controller_nscontroller(uintptr_t controller)
{
    NSController *obj = ns_controller_from(controller);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_controller_discard_editing(uintptr_t controller)
{
    @autoreleasepool {
        NSController *obj = ns_controller_from(controller);
        if (obj) {
            [obj discardEditing];
        }
    }
}

int ns_controller_commit_editing(uintptr_t controller)
{
    @autoreleasepool {
        NSController *obj = ns_controller_from(controller);
        return obj && [obj commitEditing] ? 1 : 0;
    }
}

int ns_controller_is_editing(uintptr_t controller)
{
    @autoreleasepool {
        NSController *obj = ns_controller_from(controller);
        return obj && obj.editing ? 1 : 0;
    }
}
