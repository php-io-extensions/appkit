#import <AppKit/AppKit.h>
#import "ns-storyboard.h"

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

static NSStoryboard *ns_storyboard_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSStoryboard class]] ? (NSStoryboard *)obj : nil;
}

uintptr_t ns_storyboard_main(void)
{
    @autoreleasepool {
        NSStoryboard *storyboard = [NSStoryboard mainStoryboard];
        return storyboard ? ns_retain_obj(storyboard) : 0;
    }
}

uintptr_t ns_storyboard_with_name(const char *name, const char *bundle_path)
{
    @autoreleasepool {
        if (!name) {
            return 0;
        }
        NSBundle *bundle = nil;
        if (bundle_path && bundle_path[0] != '\0') {
            bundle = [NSBundle bundleWithPath:[NSString stringWithUTF8String:bundle_path]];
        }
        NSStoryboard *storyboard = [NSStoryboard storyboardWithName:[NSString stringWithUTF8String:name] bundle:bundle];
        return storyboard ? ns_retain_obj(storyboard) : 0;
    }
}

uintptr_t ns_storyboard_wrap(void *storyboard)
{
    if (!storyboard) {
        return 0;
    }
    @autoreleasepool {
        NSStoryboard *obj = (__bridge NSStoryboard *)storyboard;
        return [obj isKindOfClass:[NSStoryboard class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_storyboard_destroy(uintptr_t storyboard)
{
    ns_release_handle(storyboard);
}

void *ns_storyboard_nsstoryboard(uintptr_t storyboard)
{
    NSStoryboard *obj = ns_storyboard_from(storyboard);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_storyboard_instantiate_initial_controller(uintptr_t storyboard)
{
    @autoreleasepool {
        NSStoryboard *obj = ns_storyboard_from(storyboard);
        if (!obj) {
            return 0;
        }
        id controller = [obj instantiateInitialController];
        return controller ? ns_retain_obj(controller) : 0;
    }
}

uintptr_t ns_storyboard_instantiate_controller_with_identifier(uintptr_t storyboard, const char *identifier)
{
    @autoreleasepool {
        NSStoryboard *obj = ns_storyboard_from(storyboard);
        if (!obj || !identifier) {
            return 0;
        }
        id controller = [obj instantiateControllerWithIdentifier:[NSString stringWithUTF8String:identifier]];
        return controller ? ns_retain_obj(controller) : 0;
    }
}
