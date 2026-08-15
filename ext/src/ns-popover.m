#import <AppKit/AppKit.h>
#import "ns-popover.h"
#import "ns-view.h"

static uintptr_t ns_popover_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static id ns_popover_bridge_obj(uintptr_t handle)
{
    return handle ? (__bridge id)(void *)handle : nil;
}

uintptr_t ns_popover_create(void)
{
    @autoreleasepool {
        NSPopover *popover = [[NSPopover alloc] init];
        [popover setBehavior:NSPopoverBehaviorTransient];
        [popover setAnimates:YES];
        NSViewController *controller = [[NSViewController alloc] init];
        controller.view = [[NSView alloc] initWithFrame:NSMakeRect(0, 0, 200, 120)];
        [popover setContentViewController:controller];
        return ns_popover_retain_obj(popover);
    }
}

void ns_popover_destroy(uintptr_t popover)
{
    if (!popover) {
        return;
    }
    @autoreleasepool {
        NSPopover *obj = ns_popover_bridge_obj(popover);
        [obj close];
        [obj setContentViewController:nil];
    }
    CFRelease((void *)popover);
}

void ns_popover_set_content(uintptr_t popover, uintptr_t view)
{
    void *kid = ns_view_nsview(view);
    if (!kid) {
        return;
    }
    @autoreleasepool {
        NSPopover *obj = ns_popover_bridge_obj(popover);
        if (!obj) {
            return;
        }
        NSView *content = (__bridge NSView *)kid;
        NSViewController *controller = obj.contentViewController;
        if (!controller) {
            controller = [[NSViewController alloc] init];
            [obj setContentViewController:controller];
        }
        controller.view = content;
        [obj setContentSize:content.frame.size];
    }
}

void ns_popover_show(uintptr_t popover, uintptr_t anchor)
{
    void *ptr = ns_view_nsview(anchor);
    if (!ptr) {
        return;
    }
    @autoreleasepool {
        NSPopover *obj = ns_popover_bridge_obj(popover);
        NSView *view = (__bridge NSView *)ptr;
        if (!obj || !view) {
            return;
        }
        [obj showRelativeToRect:view.bounds ofView:view preferredEdge:NSRectEdgeMaxY];
    }
}

void ns_popover_close(uintptr_t popover)
{
    @autoreleasepool {
        NSPopover *obj = ns_popover_bridge_obj(popover);
        [obj close];
    }
}

int ns_popover_is_shown(uintptr_t popover)
{
    @autoreleasepool {
        NSPopover *obj = ns_popover_bridge_obj(popover);
        return obj && obj.shown ? 1 : 0;
    }
}
