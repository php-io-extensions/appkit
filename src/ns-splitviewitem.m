#import <AppKit/AppKit.h>
#import "ns-splitviewitem.h"
#import "ns-viewcontroller.h"

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSSplitViewItem *ns_splitviewitem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSSplitViewItem class]] ? (NSSplitViewItem *)obj : nil;
}

static NSViewController *ns_vc_from(uintptr_t handle)
{
    void *ptr = ns_viewcontroller_nsviewcontroller(handle);
    if (!ptr) {
        return nil;
    }
    id obj = (__bridge id)ptr;
    return [obj isKindOfClass:[NSViewController class]] ? (NSViewController *)obj : nil;
}

uintptr_t ns_splitviewitem_create(uintptr_t viewController)
{
    NSViewController *vc = ns_vc_from(viewController);
    if (!vc) {
        return 0;
    }
    @autoreleasepool {
        return ns_retain_obj([NSSplitViewItem splitViewItemWithViewController:vc]);
    }
}

uintptr_t ns_splitviewitem_create_sidebar(uintptr_t viewController)
{
    NSViewController *vc = ns_vc_from(viewController);
    if (!vc) {
        return 0;
    }
    @autoreleasepool {
        return ns_retain_obj([NSSplitViewItem sidebarWithViewController:vc]);
    }
}

uintptr_t ns_splitviewitem_create_content_list(uintptr_t viewController)
{
    NSViewController *vc = ns_vc_from(viewController);
    if (!vc) {
        return 0;
    }
    @autoreleasepool {
        return ns_retain_obj([NSSplitViewItem contentListWithViewController:vc]);
    }
}

uintptr_t ns_splitviewitem_create_inspector(uintptr_t viewController)
{
    NSViewController *vc = ns_vc_from(viewController);
    if (!vc) {
        return 0;
    }
    @autoreleasepool {
        return ns_retain_obj([NSSplitViewItem inspectorWithViewController:vc]);
    }
}

uintptr_t ns_splitviewitem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSSplitViewItem *obj = (__bridge NSSplitViewItem *)item;
        return [obj isKindOfClass:[NSSplitViewItem class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_splitviewitem_destroy(uintptr_t item)
{
    if (item) {
        CFRelease((void *)item);
    }
}

void *ns_splitviewitem_nssplitviewitem(uintptr_t item)
{
    NSSplitViewItem *obj = ns_splitviewitem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_splitviewitem_set_view_controller(uintptr_t item, uintptr_t viewController)
{
    NSViewController *vc = ns_vc_from(viewController);
    if (!vc) {
        return;
    }
    @autoreleasepool {
        NSSplitViewItem *obj = ns_splitviewitem_from(item);
        if (obj) {
            obj.viewController = vc;
        }
    }
}

uintptr_t ns_splitviewitem_view_controller(uintptr_t item)
{
    @autoreleasepool {
        NSSplitViewItem *obj = ns_splitviewitem_from(item);
        NSViewController *vc = obj ? obj.viewController : nil;
        return vc ? ns_viewcontroller_wrap((__bridge void *)vc) : 0;
    }
}

void ns_splitviewitem_set_collapsed(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSSplitViewItem *obj = ns_splitviewitem_from(item);
        if (obj) {
            obj.collapsed = flag ? YES : NO;
        }
    }
}

int ns_splitviewitem_is_collapsed(uintptr_t item)
{
    @autoreleasepool {
        NSSplitViewItem *obj = ns_splitviewitem_from(item);
        return obj && obj.collapsed ? 1 : 0;
    }
}

void ns_splitviewitem_set_can_collapse(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSSplitViewItem *obj = ns_splitviewitem_from(item);
        if (obj) {
            obj.canCollapse = flag ? YES : NO;
        }
    }
}

int ns_splitviewitem_can_collapse(uintptr_t item)
{
    @autoreleasepool {
        NSSplitViewItem *obj = ns_splitviewitem_from(item);
        return obj && obj.canCollapse ? 1 : 0;
    }
}

void ns_splitviewitem_set_minimum_thickness(uintptr_t item, double value)
{
    @autoreleasepool {
        NSSplitViewItem *obj = ns_splitviewitem_from(item);
        if (obj) {
            obj.minimumThickness = (CGFloat)value;
        }
    }
}

double ns_splitviewitem_get_minimum_thickness(uintptr_t item)
{
    @autoreleasepool {
        NSSplitViewItem *obj = ns_splitviewitem_from(item);
        return obj ? (double)obj.minimumThickness : 0.0;
    }
}

void ns_splitviewitem_set_maximum_thickness(uintptr_t item, double value)
{
    @autoreleasepool {
        NSSplitViewItem *obj = ns_splitviewitem_from(item);
        if (obj) {
            obj.maximumThickness = (CGFloat)value;
        }
    }
}

double ns_splitviewitem_get_maximum_thickness(uintptr_t item)
{
    @autoreleasepool {
        NSSplitViewItem *obj = ns_splitviewitem_from(item);
        return obj ? (double)obj.maximumThickness : 0.0;
    }
}

void ns_splitviewitem_set_preferred_thickness_fraction(uintptr_t item, double value)
{
    @autoreleasepool {
        NSSplitViewItem *obj = ns_splitviewitem_from(item);
        if (obj) {
            obj.preferredThicknessFraction = (CGFloat)value;
        }
    }
}

double ns_splitviewitem_get_preferred_thickness_fraction(uintptr_t item)
{
    @autoreleasepool {
        NSSplitViewItem *obj = ns_splitviewitem_from(item);
        return obj ? (double)obj.preferredThicknessFraction : 0.0;
    }
}

void ns_splitviewitem_set_holding_priority(uintptr_t item, double priority)
{
    @autoreleasepool {
        NSSplitViewItem *obj = ns_splitviewitem_from(item);
        if (obj) {
            obj.holdingPriority = (NSLayoutPriority)priority;
        }
    }
}

double ns_splitviewitem_get_holding_priority(uintptr_t item)
{
    @autoreleasepool {
        NSSplitViewItem *obj = ns_splitviewitem_from(item);
        return obj ? (double)obj.holdingPriority : 0.0;
    }
}

void ns_splitviewitem_set_spring_loaded(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSSplitViewItem *obj = ns_splitviewitem_from(item);
        if (obj) {
            obj.springLoaded = flag ? YES : NO;
        }
    }
}

int ns_splitviewitem_is_spring_loaded(uintptr_t item)
{
    @autoreleasepool {
        NSSplitViewItem *obj = ns_splitviewitem_from(item);
        return obj && obj.springLoaded ? 1 : 0;
    }
}

int ns_splitviewitem_get_behavior(uintptr_t item)
{
    @autoreleasepool {
        NSSplitViewItem *obj = ns_splitviewitem_from(item);
        return obj ? (int)obj.behavior : 0;
    }
}
