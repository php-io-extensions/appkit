#import <AppKit/AppKit.h>
#import "ns-windowcontroller.h"
#import "ns-window.h"
#import "ns-viewcontroller.h"

static uintptr_t ns_windowcontroller_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSWindowController *ns_windowcontroller_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSWindowController class]] ? (NSWindowController *)obj : nil;
}

uintptr_t ns_windowcontroller_create(uintptr_t window)
{
    void *ptr = ns_window_nswindow(window);
    if (!ptr) {
        return 0;
    }

    @autoreleasepool {
        NSWindow *win = (__bridge NSWindow *)ptr;
        NSWindowController *controller = [[NSWindowController alloc] initWithWindow:win];
        return ns_windowcontroller_retain_obj(controller);
    }
}

uintptr_t ns_windowcontroller_create_empty(void)
{
    @autoreleasepool {
        NSWindowController *controller = [[NSWindowController alloc] initWithWindow:nil];
        return ns_windowcontroller_retain_obj(controller);
    }
}

uintptr_t ns_windowcontroller_wrap(void *controller)
{
    if (!controller) {
        return 0;
    }
    @autoreleasepool {
        NSWindowController *obj = (__bridge NSWindowController *)controller;
        return ns_windowcontroller_retain_obj(obj);
    }
}

void ns_windowcontroller_destroy(uintptr_t controller)
{
    if (!controller) {
        return;
    }
    @autoreleasepool {
        NSWindowController *obj = ns_windowcontroller_from(controller);
        if (obj) {
            obj.window = nil;
            obj.contentViewController = nil;
        }
    }
    CFRelease((void *)controller);
}

void *ns_windowcontroller_nswindowcontroller(uintptr_t controller)
{
    NSWindowController *obj = ns_windowcontroller_from(controller);
    return obj ? (__bridge void *)obj : NULL;
}

void *ns_windowcontroller_nswindow(uintptr_t controller)
{
    @autoreleasepool {
        NSWindowController *obj = ns_windowcontroller_from(controller);
        NSWindow *window = obj ? obj.window : nil;
        return window ? (__bridge void *)window : NULL;
    }
}

void ns_windowcontroller_show_window(uintptr_t controller)
{
    @autoreleasepool {
        NSWindowController *obj = ns_windowcontroller_from(controller);
        if (obj) {
            [obj showWindow:nil];
        }
    }
}

void ns_windowcontroller_close(uintptr_t controller)
{
    @autoreleasepool {
        NSWindowController *obj = ns_windowcontroller_from(controller);
        if (obj) {
            [obj close];
        }
    }
}

void ns_windowcontroller_set_content_view_controller(uintptr_t controller, uintptr_t viewController)
{
    void *ptr = ns_viewcontroller_nsviewcontroller(viewController);
    if (!ptr) {
        return;
    }

    @autoreleasepool {
        NSWindowController *obj = ns_windowcontroller_from(controller);
        if (obj) {
            obj.contentViewController = (__bridge NSViewController *)ptr;
        }
    }
}

int ns_windowcontroller_is_window_loaded(uintptr_t controller)
{
    @autoreleasepool {
        NSWindowController *obj = ns_windowcontroller_from(controller);
        return obj && obj.windowLoaded ? 1 : 0;
    }
}

void ns_windowcontroller_set_should_close_document(uintptr_t controller, int shouldClose)
{
    @autoreleasepool {
        NSWindowController *obj = ns_windowcontroller_from(controller);
        if (obj) {
            obj.shouldCloseDocument = shouldClose ? YES : NO;
        }
    }
}

int ns_windowcontroller_should_close_document(uintptr_t controller)
{
    @autoreleasepool {
        NSWindowController *obj = ns_windowcontroller_from(controller);
        return obj && obj.shouldCloseDocument ? 1 : 0;
    }
}
