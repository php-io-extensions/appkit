#import <AppKit/AppKit.h>
#import "ns-statusbar.h"
#import "ns-statusitem.h"

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

static NSStatusBar *ns_statusbar_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSStatusBar class]] ? (NSStatusBar *)obj : nil;
}

uintptr_t ns_statusbar_system(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSStatusBar systemStatusBar]);
    }
}

uintptr_t ns_statusbar_wrap(void *bar)
{
    if (!bar) {
        return 0;
    }
    @autoreleasepool {
        NSStatusBar *obj = (__bridge NSStatusBar *)bar;
        return [obj isKindOfClass:[NSStatusBar class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_statusbar_destroy(uintptr_t bar)
{
    ns_release_handle(bar);
}

void *ns_statusbar_nsstatusbar(uintptr_t bar)
{
    NSStatusBar *obj = ns_statusbar_from(bar);
    return obj ? (__bridge void *)obj : NULL;
}

static CGFloat ns_statusbar_length_from_kind(int kind)
{
    if (kind == NS_STATUS_ITEM_LENGTH_SQUARE) {
        return NSSquareStatusItemLength;
    }
    return NSVariableStatusItemLength;
}

uintptr_t ns_statusbar_status_item_with_length(uintptr_t bar, double length)
{
    @autoreleasepool {
        NSStatusBar *obj = ns_statusbar_from(bar);
        if (!obj) {
            return 0;
        }
        NSStatusItem *item = [obj statusItemWithLength:(CGFloat)length];
        return ns_statusitem_wrap_native((__bridge void *)item);
    }
}

uintptr_t ns_statusbar_status_item_with_kind(uintptr_t bar, int kind)
{
    return ns_statusbar_status_item_with_length(bar, (double)ns_statusbar_length_from_kind(kind));
}

void ns_statusbar_remove_status_item(uintptr_t bar, uintptr_t item)
{
    @autoreleasepool {
        NSStatusBar *obj = ns_statusbar_from(bar);
        void *ptr = ns_statusitem_nsstatusitem(item);
        if (!obj || !ptr) {
            return;
        }
        [obj removeStatusItem:(__bridge NSStatusItem *)ptr];
    }
}

int ns_statusbar_is_vertical(uintptr_t bar)
{
    @autoreleasepool {
        NSStatusBar *obj = ns_statusbar_from(bar);
        return obj && obj.vertical ? 1 : 0;
    }
}

double ns_statusbar_thickness(uintptr_t bar)
{
    @autoreleasepool {
        NSStatusBar *obj = ns_statusbar_from(bar);
        return obj ? (double)obj.thickness : 0.0;
    }
}
