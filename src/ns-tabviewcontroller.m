#import <AppKit/AppKit.h>
#import "ns-tabviewcontroller.h"
#import "ns-tabviewitem.h"
#import "ns-view.h"

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSTabViewController *ns_tabviewcontroller_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTabViewController class]] ? (NSTabViewController *)obj : nil;
}

uintptr_t ns_tabviewcontroller_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSTabViewController alloc] init]);
    }
}

uintptr_t ns_tabviewcontroller_wrap(void *controller)
{
    if (!controller) {
        return 0;
    }
    @autoreleasepool {
        NSTabViewController *obj = (__bridge NSTabViewController *)controller;
        return [obj isKindOfClass:[NSTabViewController class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_tabviewcontroller_destroy(uintptr_t controller)
{
    if (!controller) {
        return;
    }
    @autoreleasepool {
        NSTabViewController *obj = ns_tabviewcontroller_from(controller);
        if (obj) {
            obj.tabViewItems = @[];
        }
    }
    CFRelease((void *)controller);
}

void *ns_tabviewcontroller_nstabviewcontroller(uintptr_t controller)
{
    NSTabViewController *obj = ns_tabviewcontroller_from(controller);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_tabviewcontroller_set_tab_style(uintptr_t controller, int style)
{
    @autoreleasepool {
        NSTabViewController *obj = ns_tabviewcontroller_from(controller);
        if (obj) {
            obj.tabStyle = (NSTabViewControllerTabStyle)style;
        }
    }
}

int ns_tabviewcontroller_get_tab_style(uintptr_t controller)
{
    @autoreleasepool {
        NSTabViewController *obj = ns_tabviewcontroller_from(controller);
        return obj ? (int)obj.tabStyle : 0;
    }
}

void ns_tabviewcontroller_set_selected_tab_view_item_index(uintptr_t controller, int index)
{
    @autoreleasepool {
        NSTabViewController *obj = ns_tabviewcontroller_from(controller);
        if (obj) {
            obj.selectedTabViewItemIndex = index;
        }
    }
}

int ns_tabviewcontroller_get_selected_tab_view_item_index(uintptr_t controller)
{
    @autoreleasepool {
        NSTabViewController *obj = ns_tabviewcontroller_from(controller);
        return obj ? (int)obj.selectedTabViewItemIndex : -1;
    }
}

void ns_tabviewcontroller_add_tab_view_item(uintptr_t controller, uintptr_t item)
{
    void *ptr = ns_tabviewitem_nstabviewitem(item);
    if (!ptr) {
        return;
    }
    @autoreleasepool {
        NSTabViewController *obj = ns_tabviewcontroller_from(controller);
        if (obj) {
            [obj addTabViewItem:(__bridge NSTabViewItem *)ptr];
        }
    }
}

void ns_tabviewcontroller_remove_tab_view_item(uintptr_t controller, uintptr_t item)
{
    void *ptr = ns_tabviewitem_nstabviewitem(item);
    if (!ptr) {
        return;
    }
    @autoreleasepool {
        NSTabViewController *obj = ns_tabviewcontroller_from(controller);
        if (obj) {
            [obj removeTabViewItem:(__bridge NSTabViewItem *)ptr];
        }
    }
}

int ns_tabviewcontroller_tab_view_item_count(uintptr_t controller)
{
    @autoreleasepool {
        NSTabViewController *obj = ns_tabviewcontroller_from(controller);
        return obj ? (int)obj.tabViewItems.count : 0;
    }
}

uintptr_t ns_tabviewcontroller_tab_view(uintptr_t controller)
{
    @autoreleasepool {
        NSTabViewController *obj = ns_tabviewcontroller_from(controller);
        NSTabView *tabs = obj ? obj.tabView : nil;
        return tabs ? ns_view_wrap((__bridge void *)tabs) : 0;
    }
}

void ns_tabviewcontroller_set_can_propagate_selected_child_view_controller_title(uintptr_t controller, int flag)
{
    @autoreleasepool {
        NSTabViewController *obj = ns_tabviewcontroller_from(controller);
        if (obj) {
            obj.canPropagateSelectedChildViewControllerTitle = flag ? YES : NO;
        }
    }
}

int ns_tabviewcontroller_can_propagate_selected_child_view_controller_title(uintptr_t controller)
{
    @autoreleasepool {
        NSTabViewController *obj = ns_tabviewcontroller_from(controller);
        return obj && obj.canPropagateSelectedChildViewControllerTitle ? 1 : 0;
    }
}
