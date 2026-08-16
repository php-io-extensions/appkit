#import <AppKit/AppKit.h>
#import "ns-touchbar.h"
#import "ns-touchbaritem.h"
#import "ns-responder.h"

static NSTouchBar *ns_touchbar_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTouchBar class]] ? (NSTouchBar *)obj : nil;
}

uintptr_t ns_touchbar_create(void)
{
    @autoreleasepool {
        if (@available(macOS 10.12.2, *)) {
            return ns_retain_obj([[NSTouchBar alloc] init]);
        }
        return 0;
    }
}

uintptr_t ns_touchbar_wrap(void *bar)
{
    if (!bar) {
        return 0;
    }
    @autoreleasepool {
        NSTouchBar *obj = (__bridge NSTouchBar *)bar;
        return [obj isKindOfClass:[NSTouchBar class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_touchbar_destroy(uintptr_t bar)
{
    ns_touchbaritem_destroy(bar);
}

void *ns_touchbar_nstouchbar(uintptr_t bar)
{
    NSTouchBar *obj = ns_touchbar_from(bar);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_touchbar_set_customization_identifier(uintptr_t bar, const char *identifier)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (obj) {
            obj.customizationIdentifier = identifier ? [NSString stringWithUTF8String:identifier] : nil;
        }
    }
}

int ns_touchbar_get_customization_identifier(uintptr_t bar, char *out, int out_len)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        return obj ? ns_copy_nsstring(obj.customizationIdentifier, out, out_len) : 0;
    }
}

void ns_touchbar_set_default_item_identifiers(uintptr_t bar, const char **items, int count)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (obj) {
            obj.defaultItemIdentifiers = ns_strings_from_c(items, count);
        }
    }
}

int ns_touchbar_default_item_identifiers_count(uintptr_t bar)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        return obj ? (int)obj.defaultItemIdentifiers.count : 0;
    }
}

int ns_touchbar_default_item_identifier_at(uintptr_t bar, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (!obj || index < 0 || index >= (int)obj.defaultItemIdentifiers.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.defaultItemIdentifiers[(NSUInteger)index], out, out_len);
    }
}

void ns_touchbar_set_customization_allowed_item_identifiers(uintptr_t bar, const char **items, int count)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (obj) {
            obj.customizationAllowedItemIdentifiers = ns_strings_from_c(items, count);
        }
    }
}

int ns_touchbar_customization_allowed_item_identifiers_count(uintptr_t bar)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        return obj ? (int)obj.customizationAllowedItemIdentifiers.count : 0;
    }
}

int ns_touchbar_customization_allowed_item_identifier_at(uintptr_t bar, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (!obj || index < 0 || index >= (int)obj.customizationAllowedItemIdentifiers.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.customizationAllowedItemIdentifiers[(NSUInteger)index], out, out_len);
    }
}

void ns_touchbar_set_customization_required_item_identifiers(uintptr_t bar, const char **items, int count)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (obj) {
            obj.customizationRequiredItemIdentifiers = ns_strings_from_c(items, count);
        }
    }
}

int ns_touchbar_customization_required_item_identifiers_count(uintptr_t bar)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        return obj ? (int)obj.customizationRequiredItemIdentifiers.count : 0;
    }
}

int ns_touchbar_customization_required_item_identifier_at(uintptr_t bar, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (!obj || index < 0 || index >= (int)obj.customizationRequiredItemIdentifiers.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.customizationRequiredItemIdentifiers[(NSUInteger)index], out, out_len);
    }
}

void ns_touchbar_set_principal_item_identifier(uintptr_t bar, const char *identifier)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (obj) {
            obj.principalItemIdentifier = identifier ? [NSString stringWithUTF8String:identifier] : nil;
        }
    }
}

int ns_touchbar_get_principal_item_identifier(uintptr_t bar, char *out, int out_len)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        return obj ? ns_copy_nsstring(obj.principalItemIdentifier, out, out_len) : 0;
    }
}

void ns_touchbar_set_escape_key_replacement_item_identifier(uintptr_t bar, const char *identifier)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (obj) {
            obj.escapeKeyReplacementItemIdentifier = identifier ? [NSString stringWithUTF8String:identifier] : nil;
        }
    }
}

int ns_touchbar_get_escape_key_replacement_item_identifier(uintptr_t bar, char *out, int out_len)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        return obj ? ns_copy_nsstring(obj.escapeKeyReplacementItemIdentifier, out, out_len) : 0;
    }
}

void ns_touchbar_set_template_items(uintptr_t bar, const uintptr_t *items, int count)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (!obj) {
            return;
        }
        NSMutableSet<NSTouchBarItem *> *set = [NSMutableSet setWithCapacity:(NSUInteger)count];
        int i;
        for (i = 0; i < count; i++) {
            NSTouchBarItem *item = ns_touchbaritem_from(items[i]);
            if (item) {
                [set addObject:item];
            }
        }
        obj.templateItems = [set copy];
    }
}

int ns_touchbar_item_identifiers_count(uintptr_t bar)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        return obj ? (int)obj.itemIdentifiers.count : 0;
    }
}

int ns_touchbar_item_identifier_at(uintptr_t bar, int index, char *out, int out_len)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (!obj || index < 0 || index >= (int)obj.itemIdentifiers.count) {
            return 0;
        }
        return ns_copy_nsstring(obj.itemIdentifiers[(NSUInteger)index], out, out_len);
    }
}

uintptr_t ns_touchbar_item_for_identifier(uintptr_t bar, const char *identifier)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        if (!obj || !identifier) {
            return 0;
        }
        NSTouchBarItem *item = [obj itemForIdentifier:[NSString stringWithUTF8String:identifier]];
        return item ? ns_touchbaritem_wrap((__bridge void *)item) : 0;
    }
}

int ns_touchbar_is_visible(uintptr_t bar)
{
    @autoreleasepool {
        NSTouchBar *obj = ns_touchbar_from(bar);
        return obj && obj.visible ? 1 : 0;
    }
}

void ns_touchbar_assign_to_responder(uintptr_t bar, uintptr_t responder)
{
    @autoreleasepool {
        void *ptr = ns_responder_nsresponder(responder);
        NSTouchBar *touchBar = ns_touchbar_from(bar);
        if (!ptr || !touchBar) {
            return;
        }
        NSResponder *r = (__bridge NSResponder *)ptr;
        if (@available(macOS 10.12.2, *)) {
            r.touchBar = touchBar;
        }
    }
}

uintptr_t ns_touchbar_from_responder(uintptr_t responder)
{
    @autoreleasepool {
        void *ptr = ns_responder_nsresponder(responder);
        if (!ptr) {
            return 0;
        }
        NSResponder *r = (__bridge NSResponder *)ptr;
        if (@available(macOS 10.12.2, *)) {
            return r.touchBar ? ns_touchbar_wrap((__bridge void *)r.touchBar) : 0;
        }
        return 0;
    }
}

void ns_touchbar_set_automatic_customize_menu_item_enabled(int enabled)
{
    @autoreleasepool {
        if (@available(macOS 10.15, *)) {
            [NSTouchBar setAutomaticCustomizeTouchBarMenuItemEnabled:enabled ? YES : NO];
        }
    }
}

int ns_touchbar_is_automatic_customize_menu_item_enabled(void)
{
    @autoreleasepool {
        if (@available(macOS 10.15, *)) {
            return [NSTouchBar isAutomaticCustomizeTouchBarMenuItemEnabled] ? 1 : 0;
        }
        return 0;
    }
}
