#import <AppKit/AppKit.h>
#import "ns-splitviewcontroller.h"
#import "ns-splitviewitem.h"
#import "ns-view.h"

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSSplitViewController *ns_splitviewcontroller_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSSplitViewController class]] ? (NSSplitViewController *)obj : nil;
}

uintptr_t ns_splitviewcontroller_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSSplitViewController alloc] init]);
    }
}

uintptr_t ns_splitviewcontroller_wrap(void *controller)
{
    if (!controller) {
        return 0;
    }
    @autoreleasepool {
        NSSplitViewController *obj = (__bridge NSSplitViewController *)controller;
        return [obj isKindOfClass:[NSSplitViewController class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_splitviewcontroller_destroy(uintptr_t controller)
{
    if (!controller) {
        return;
    }
    @autoreleasepool {
        NSSplitViewController *obj = ns_splitviewcontroller_from(controller);
        if (obj) {
            obj.splitViewItems = @[];
        }
    }
    CFRelease((void *)controller);
}

void *ns_splitviewcontroller_nssplitviewcontroller(uintptr_t controller)
{
    NSSplitViewController *obj = ns_splitviewcontroller_from(controller);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_splitviewcontroller_add_split_view_item(uintptr_t controller, uintptr_t item)
{
    void *ptr = ns_splitviewitem_nssplitviewitem(item);
    if (!ptr) {
        return;
    }
    @autoreleasepool {
        NSSplitViewController *obj = ns_splitviewcontroller_from(controller);
        if (obj) {
            [obj addSplitViewItem:(__bridge NSSplitViewItem *)ptr];
        }
    }
}

void ns_splitviewcontroller_remove_split_view_item(uintptr_t controller, uintptr_t item)
{
    void *ptr = ns_splitviewitem_nssplitviewitem(item);
    if (!ptr) {
        return;
    }
    @autoreleasepool {
        NSSplitViewController *obj = ns_splitviewcontroller_from(controller);
        if (obj) {
            [obj removeSplitViewItem:(__bridge NSSplitViewItem *)ptr];
        }
    }
}

int ns_splitviewcontroller_split_view_item_count(uintptr_t controller)
{
    @autoreleasepool {
        NSSplitViewController *obj = ns_splitviewcontroller_from(controller);
        return obj ? (int)obj.splitViewItems.count : 0;
    }
}

uintptr_t ns_splitviewcontroller_split_view_item_at(uintptr_t controller, int index)
{
    @autoreleasepool {
        NSSplitViewController *obj = ns_splitviewcontroller_from(controller);
        if (!obj || index < 0 || (NSUInteger)index >= obj.splitViewItems.count) {
            return 0;
        }
        NSSplitViewItem *item = obj.splitViewItems[(NSUInteger)index];
        return ns_splitviewitem_wrap((__bridge void *)item);
    }
}

void ns_splitviewcontroller_set_minimum_thickness_for_inline_sidebars(uintptr_t controller, double value)
{
    @autoreleasepool {
        NSSplitViewController *obj = ns_splitviewcontroller_from(controller);
        if (obj) {
            obj.minimumThicknessForInlineSidebars = (CGFloat)value;
        }
    }
}

double ns_splitviewcontroller_get_minimum_thickness_for_inline_sidebars(uintptr_t controller)
{
    @autoreleasepool {
        NSSplitViewController *obj = ns_splitviewcontroller_from(controller);
        return obj ? (double)obj.minimumThicknessForInlineSidebars : 0.0;
    }
}

uintptr_t ns_splitviewcontroller_split_view(uintptr_t controller)
{
    @autoreleasepool {
        NSSplitViewController *obj = ns_splitviewcontroller_from(controller);
        NSSplitView *split = obj ? obj.splitView : nil;
        return split ? ns_view_wrap((__bridge void *)split) : 0;
    }
}

void ns_splitviewcontroller_toggle_sidebar(uintptr_t controller)
{
    @autoreleasepool {
        NSSplitViewController *obj = ns_splitviewcontroller_from(controller);
        if (obj) {
            [obj toggleSidebar:nil];
        }
    }
}
