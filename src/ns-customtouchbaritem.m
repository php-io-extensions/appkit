#import <AppKit/AppKit.h>
#import "ns-customtouchbaritem.h"
#import "ns-touchbaritem.h"
#import "ns-view.h"

static NSCustomTouchBarItem *ns_customtouchbaritem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSCustomTouchBarItem class]] ? (NSCustomTouchBarItem *)obj : nil;
}

uintptr_t ns_customtouchbaritem_create(const char *identifier)
{
    @autoreleasepool {
        if (@available(macOS 10.12.2, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.custom";
            return ns_retain_obj([[NSCustomTouchBarItem alloc] initWithIdentifier:ident]);
        }
        return 0;
    }
}

uintptr_t ns_customtouchbaritem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSCustomTouchBarItem *obj = (__bridge NSCustomTouchBarItem *)item;
        return [obj isKindOfClass:[NSCustomTouchBarItem class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_customtouchbaritem_destroy(uintptr_t item)
{
    ns_touchbaritem_destroy(item);
}

void *ns_customtouchbaritem_nscustomtouchbaritem(uintptr_t item)
{
    NSCustomTouchBarItem *obj = ns_customtouchbaritem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_customtouchbaritem_set_view(uintptr_t item, uintptr_t view)
{
    @autoreleasepool {
        NSCustomTouchBarItem *obj = ns_customtouchbaritem_from(item);
        void *v = ns_view_nsview(view);
        if (obj && v) {
            obj.view = (__bridge NSView *)v;
        }
    }
}

uintptr_t ns_customtouchbaritem_get_view(uintptr_t item)
{
    @autoreleasepool {
        NSCustomTouchBarItem *obj = ns_customtouchbaritem_from(item);
        return obj && obj.view ? ns_view_wrap((__bridge void *)obj.view) : 0;
    }
}

void ns_customtouchbaritem_set_customization_label(uintptr_t item, const char *label)
{
    @autoreleasepool {
        NSCustomTouchBarItem *obj = ns_customtouchbaritem_from(item);
        if (obj) {
            obj.customizationLabel = label ? [NSString stringWithUTF8String:label] : @"";
        }
    }
}

int ns_customtouchbaritem_get_customization_label(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSCustomTouchBarItem *obj = ns_customtouchbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.customizationLabel, out, out_len) : 0;
    }
}
