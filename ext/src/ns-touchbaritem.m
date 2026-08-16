#import <AppKit/AppKit.h>
#import "ns-touchbaritem.h"
#import "ns-view.h"

int ns_copy_nsstring(NSString *text, char *out, int out_len)
{
    if (!out || out_len <= 0) {
        return 0;
    }
    if (!text) {
        out[0] = '\0';
        return 1;
    }
    return [text getCString:out maxLength:(NSUInteger)out_len encoding:NSUTF8StringEncoding] ? 1 : 0;
}

uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

NSTouchBarItem *ns_touchbaritem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTouchBarItem class]] ? (NSTouchBarItem *)obj : nil;
}

NSArray<NSString *> *ns_strings_from_c(const char **items, int count)
{
    NSMutableArray<NSString *> *arr = [NSMutableArray arrayWithCapacity:(NSUInteger)count];
    int i;
    for (i = 0; i < count; i++) {
        if (items && items[i]) {
            [arr addObject:[NSString stringWithUTF8String:items[i]]];
        }
    }
    return [arr copy];
}

uintptr_t ns_touchbaritem_create(const char *identifier)
{
    @autoreleasepool {
        if (@available(macOS 10.12.2, *)) {
            NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.touchbar.item";
            return ns_retain_obj([[NSTouchBarItem alloc] initWithIdentifier:ident]);
        }
        return 0;
    }
}

uintptr_t ns_touchbaritem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSTouchBarItem *obj = (__bridge NSTouchBarItem *)item;
        return [obj isKindOfClass:[NSTouchBarItem class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_touchbaritem_destroy(uintptr_t item)
{
    if (item) {
        CFRelease((void *)item);
    }
}

void *ns_touchbaritem_nstouchbaritem(uintptr_t item)
{
    NSTouchBarItem *obj = ns_touchbaritem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_touchbaritem_get_identifier(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSTouchBarItem *obj = ns_touchbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.identifier, out, out_len) : 0;
    }
}

void ns_touchbaritem_set_visibility_priority(uintptr_t item, float priority)
{
    @autoreleasepool {
        NSTouchBarItem *obj = ns_touchbaritem_from(item);
        if (obj) {
            obj.visibilityPriority = priority;
        }
    }
}

float ns_touchbaritem_get_visibility_priority(uintptr_t item)
{
    @autoreleasepool {
        NSTouchBarItem *obj = ns_touchbaritem_from(item);
        return obj ? obj.visibilityPriority : 0.0f;
    }
}

int ns_touchbaritem_get_customization_label(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSTouchBarItem *obj = ns_touchbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.customizationLabel, out, out_len) : 0;
    }
}

int ns_touchbaritem_is_visible(uintptr_t item)
{
    @autoreleasepool {
        NSTouchBarItem *obj = ns_touchbaritem_from(item);
        return obj && obj.visible ? 1 : 0;
    }
}

uintptr_t ns_touchbaritem_get_view(uintptr_t item)
{
    @autoreleasepool {
        NSTouchBarItem *obj = ns_touchbaritem_from(item);
        return obj && obj.view ? ns_view_wrap((__bridge void *)obj.view) : 0;
    }
}
