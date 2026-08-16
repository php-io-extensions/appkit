#import <AppKit/AppKit.h>
#import "ns-toolbaritem.h"
#import "ns-image.h"
#import "ns-view.h"

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

static NSToolbarItem *ns_toolbaritem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSToolbarItem class]] ? (NSToolbarItem *)obj : nil;
}

uintptr_t ns_toolbaritem_create(const char *identifier)
{
    @autoreleasepool {
        NSString *ident = identifier ? [NSString stringWithUTF8String:identifier] : @"ns.toolbar.item";
        return ns_retain_obj([[NSToolbarItem alloc] initWithItemIdentifier:ident]);
    }
}

uintptr_t ns_toolbaritem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSToolbarItem *obj = (__bridge NSToolbarItem *)item;
        return [obj isKindOfClass:[NSToolbarItem class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_toolbaritem_destroy(uintptr_t item)
{
    if (item) {
        CFRelease((void *)item);
    }
}

void *ns_toolbaritem_nstoolbaritem(uintptr_t item)
{
    NSToolbarItem *obj = ns_toolbaritem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_toolbaritem_get_item_identifier(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.itemIdentifier, out, out_len) : 0;
    }
}

void ns_toolbaritem_set_label(uintptr_t item, const char *label)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        if (obj) {
            obj.label = label ? [NSString stringWithUTF8String:label] : @"";
        }
    }
}

int ns_toolbaritem_get_label(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.label, out, out_len) : 0;
    }
}

void ns_toolbaritem_set_palette_label(uintptr_t item, const char *label)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        if (obj) {
            obj.paletteLabel = label ? [NSString stringWithUTF8String:label] : @"";
        }
    }
}

int ns_toolbaritem_get_palette_label(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.paletteLabel, out, out_len) : 0;
    }
}

void ns_toolbaritem_set_tool_tip(uintptr_t item, const char *tip)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        if (obj) {
            obj.toolTip = tip ? [NSString stringWithUTF8String:tip] : nil;
        }
    }
}

int ns_toolbaritem_get_tool_tip(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        return obj ? ns_copy_nsstring(obj.toolTip, out, out_len) : 0;
    }
}

void ns_toolbaritem_set_tag(uintptr_t item, int tag)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        if (obj) {
            obj.tag = tag;
        }
    }
}

int ns_toolbaritem_get_tag(uintptr_t item)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        return obj ? (int)obj.tag : 0;
    }
}

void ns_toolbaritem_set_enabled(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        if (obj) {
            obj.enabled = flag ? YES : NO;
        }
    }
}

int ns_toolbaritem_is_enabled(uintptr_t item)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_toolbaritem_set_title(uintptr_t item, const char *title)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        if (obj) {
            if (@available(macOS 10.15, *)) {
                obj.title = title ? [NSString stringWithUTF8String:title] : @"";
            }
        }
    }
}

int ns_toolbaritem_get_title(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        if (!obj) {
            return 0;
        }
        if (@available(macOS 10.15, *)) {
            return ns_copy_nsstring(obj.title, out, out_len);
        }
        return 0;
    }
}

void ns_toolbaritem_set_bordered(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        if (obj) {
            if (@available(macOS 10.15, *)) {
                obj.bordered = flag ? YES : NO;
            }
        }
    }
}

int ns_toolbaritem_is_bordered(uintptr_t item)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        if (!obj) {
            return 0;
        }
        if (@available(macOS 10.15, *)) {
            return obj.bordered ? 1 : 0;
        }
        return 0;
    }
}

void ns_toolbaritem_set_navigational(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        if (obj) {
            if (@available(macOS 11.0, *)) {
                obj.navigational = flag ? YES : NO;
            }
        }
    }
}

int ns_toolbaritem_is_navigational(uintptr_t item)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        if (!obj) {
            return 0;
        }
        if (@available(macOS 11.0, *)) {
            return obj.navigational ? 1 : 0;
        }
        return 0;
    }
}

void ns_toolbaritem_set_hidden(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        if (obj) {
            if (@available(macOS 15.0, *)) {
                obj.hidden = flag ? YES : NO;
            }
        }
    }
}

int ns_toolbaritem_is_hidden(uintptr_t item)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        if (!obj) {
            return 0;
        }
        if (@available(macOS 15.0, *)) {
            return obj.hidden ? 1 : 0;
        }
        return 0;
    }
}

void ns_toolbaritem_set_visibility_priority(uintptr_t item, int priority)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        if (obj) {
            obj.visibilityPriority = priority;
        }
    }
}

int ns_toolbaritem_get_visibility_priority(uintptr_t item)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        return obj ? (int)obj.visibilityPriority : 0;
    }
}

void ns_toolbaritem_set_autovalidates(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        if (obj) {
            obj.autovalidates = flag ? YES : NO;
        }
    }
}

int ns_toolbaritem_autovalidates(uintptr_t item)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        return obj && obj.autovalidates ? 1 : 0;
    }
}

int ns_toolbaritem_is_visible(uintptr_t item)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        if (!obj) {
            return 0;
        }
        if (@available(macOS 12.0, *)) {
            return obj.visible ? 1 : 0;
        }
        return 0;
    }
}

void ns_toolbaritem_set_image(uintptr_t item, uintptr_t image)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        void *img = ns_image_nsimage(image);
        if (obj && img) {
            obj.image = (__bridge NSImage *)img;
        }
    }
}

void ns_toolbaritem_set_view(uintptr_t item, uintptr_t view)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        void *v = ns_view_nsview(view);
        if (obj && v) {
            obj.view = (__bridge NSView *)v;
        }
    }
}

uintptr_t ns_toolbaritem_get_view(uintptr_t item)
{
    @autoreleasepool {
        NSToolbarItem *obj = ns_toolbaritem_from(item);
        return obj && obj.view ? ns_view_wrap((__bridge void *)obj.view) : 0;
    }
}
