#import <AppKit/AppKit.h>
#import "ns-menutoolbaritem.h"

static int ns_copy_nsstring(NSString *text, char *out, int out_len)
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

static uintptr_t ns_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSMenuToolbarItem *ns_menutoolbaritem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSMenuToolbarItem class]] ? (NSMenuToolbarItem *)obj : nil;
}

uintptr_t ns_menutoolbaritem_create(const char *identifier)
{
    @autoreleasepool {
        NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.menu.toolbar";
        if (@available(macOS 10.15, *)) {
            return ns_retain_obj([[NSMenuToolbarItem alloc] initWithItemIdentifier:ident]);
        }
        return 0;
    }
}

uintptr_t ns_menutoolbaritem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSMenuToolbarItem *obj = (__bridge NSMenuToolbarItem *)item;
        return [obj isKindOfClass:[NSMenuToolbarItem class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_menutoolbaritem_destroy(uintptr_t item)
{
    if (item) {
        CFRelease((void *)item);
    }
}

void *ns_menutoolbaritem_nsmenutoolbaritem(uintptr_t item)
{
    NSMenuToolbarItem *obj = ns_menutoolbaritem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_menutoolbaritem_set_shows_indicator(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSMenuToolbarItem *obj = ns_menutoolbaritem_from(item);
        if (obj) {
            obj.showsIndicator = flag ? YES : NO;
        }
    }
}

int ns_menutoolbaritem_shows_indicator(uintptr_t item)
{
    @autoreleasepool {
        NSMenuToolbarItem *obj = ns_menutoolbaritem_from(item);
        return obj && obj.showsIndicator ? 1 : 0;
    }
}

void ns_menutoolbaritem_set_label(uintptr_t item, const char *label)
{
    @autoreleasepool {
        NSMenuToolbarItem *obj = ns_menutoolbaritem_from(item);
        if (obj) {
            obj.label = label ? [NSString stringWithUTF8String:label] : @"";
        }
    }
}

int ns_menutoolbaritem_get_label(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSMenuToolbarItem *obj = ns_menutoolbaritem_from(item);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.label, out, out_len);
    }
}

void ns_menutoolbaritem_set_tool_tip(uintptr_t item, const char *tip)
{
    @autoreleasepool {
        NSMenuToolbarItem *obj = ns_menutoolbaritem_from(item);
        if (obj) {
            obj.toolTip = tip ? [NSString stringWithUTF8String:tip] : nil;
        }
    }
}

int ns_menutoolbaritem_get_tool_tip(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSMenuToolbarItem *obj = ns_menutoolbaritem_from(item);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.toolTip, out, out_len);
    }
}
