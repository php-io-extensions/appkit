#import <AppKit/AppKit.h>
#import "ns-grouptouchbaritem.h"
#import "ns-touchbar.h"
#import "ns-touchbaritem.h"

static NSGroupTouchBarItem *ns_grouptouchbaritem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSGroupTouchBarItem class]] ? (NSGroupTouchBarItem *)obj : nil;
}

static NSArray<NSTouchBarItem *> *ns_touchbaritems_from_handles(const uintptr_t *items, int count)
{
    NSMutableArray<NSTouchBarItem *> *arr = [NSMutableArray arrayWithCapacity:(NSUInteger)count];
    int i;
    for (i = 0; i < count; i++) {
        NSTouchBarItem *item = ns_touchbaritem_from(items[i]);
        if (item) {
            [arr addObject:item];
        }
    }
    return [arr copy];
}

uintptr_t ns_grouptouchbaritem_group_item(const char *identifier, const uintptr_t *items, int count)
{
    @autoreleasepool {
        if (@available(macOS 10.12.2, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.group";
            NSGroupTouchBarItem *item = [NSGroupTouchBarItem groupItemWithIdentifier:ident items:ns_touchbaritems_from_handles(items, count)];
            return ns_retain_obj(item);
        }
        return 0;
    }
}

uintptr_t ns_grouptouchbaritem_alert_style_group_item(const char *identifier)
{
    @autoreleasepool {
        if (@available(macOS 10.13, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.alert";
            return ns_retain_obj([NSGroupTouchBarItem alertStyleGroupItemWithIdentifier:ident]);
        }
        return 0;
    }
}

uintptr_t ns_grouptouchbaritem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSGroupTouchBarItem *obj = (__bridge NSGroupTouchBarItem *)item;
        return [obj isKindOfClass:[NSGroupTouchBarItem class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_grouptouchbaritem_destroy(uintptr_t item)
{
    ns_touchbaritem_destroy(item);
}

void *ns_grouptouchbaritem_nsgrouptouchbaritem(uintptr_t item)
{
    NSGroupTouchBarItem *obj = ns_grouptouchbaritem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_grouptouchbaritem_set_group_touchbar(uintptr_t item, uintptr_t bar)
{
    @autoreleasepool {
        NSGroupTouchBarItem *obj = ns_grouptouchbaritem_from(item);
        NSTouchBar *touchBar = (__bridge NSTouchBar *)ns_touchbar_nstouchbar(bar);
        if (obj && touchBar) {
            obj.groupTouchBar = touchBar;
        }
    }
}

uintptr_t ns_grouptouchbaritem_get_group_touchbar(uintptr_t item)
{
    @autoreleasepool {
        NSGroupTouchBarItem *obj = ns_grouptouchbaritem_from(item);
        return obj && obj.groupTouchBar ? ns_touchbar_wrap((__bridge void *)obj.groupTouchBar) : 0;
    }
}

void ns_grouptouchbaritem_set_customization_label(uintptr_t item, const char *label)
{
    @autoreleasepool {
        NSGroupTouchBarItem *obj = ns_grouptouchbaritem_from(item);
        if (obj) {
            obj.customizationLabel = label ? [NSString stringWithUTF8String:label] : @"";
        }
    }
}

int ns_grouptouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSGroupTouchBarItem *obj = ns_grouptouchbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.customizationLabel, out, out_len) : 0;
    }
}

void ns_grouptouchbaritem_set_prefers_equal_widths(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSGroupTouchBarItem *obj = ns_grouptouchbaritem_from(item);
        if (obj) {
            if (@available(macOS 10.13, *)) {
                obj.prefersEqualWidths = flag ? YES : NO;
            }
        }
    }
}

int ns_grouptouchbaritem_prefers_equal_widths(uintptr_t item)
{
    @autoreleasepool {
        NSGroupTouchBarItem *obj = ns_grouptouchbaritem_from(item);
        if (!obj) {
            return 0;
        }
        if (@available(macOS 10.13, *)) {
            return obj.prefersEqualWidths ? 1 : 0;
        }
        return 0;
    }
}

void ns_grouptouchbaritem_set_preferred_item_width(uintptr_t item, double width)
{
    @autoreleasepool {
        NSGroupTouchBarItem *obj = ns_grouptouchbaritem_from(item);
        if (obj) {
            if (@available(macOS 10.13, *)) {
                obj.preferredItemWidth = (CGFloat)width;
            }
        }
    }
}

double ns_grouptouchbaritem_get_preferred_item_width(uintptr_t item)
{
    @autoreleasepool {
        NSGroupTouchBarItem *obj = ns_grouptouchbaritem_from(item);
        if (!obj) {
            return -1.0;
        }
        if (@available(macOS 10.13, *)) {
            return (double)obj.preferredItemWidth;
        }
        return -1.0;
    }
}

void ns_grouptouchbaritem_set_group_user_interface_layout_direction(uintptr_t item, int direction)
{
    @autoreleasepool {
        NSGroupTouchBarItem *obj = ns_grouptouchbaritem_from(item);
        if (obj) {
            if (@available(macOS 10.13, *)) {
                obj.groupUserInterfaceLayoutDirection = (NSUserInterfaceLayoutDirection)direction;
            }
        }
    }
}

int ns_grouptouchbaritem_get_group_user_interface_layout_direction(uintptr_t item)
{
    @autoreleasepool {
        NSGroupTouchBarItem *obj = ns_grouptouchbaritem_from(item);
        if (!obj) {
            return 0;
        }
        if (@available(macOS 10.13, *)) {
            return (int)obj.groupUserInterfaceLayoutDirection;
        }
        return 0;
    }
}
