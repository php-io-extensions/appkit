#import <AppKit/AppKit.h>
#import "ns-menuitem.h"
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

static NSMenuItem *ns_menuitem_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSMenuItem class]] ? (NSMenuItem *)obj : nil;
}

uintptr_t ns_menuitem_create(const char *title, const char *key_equivalent)
{
    @autoreleasepool {
        NSString *t = title ? [NSString stringWithUTF8String:title] : @"";
        NSString *k = key_equivalent ? [NSString stringWithUTF8String:key_equivalent] : @"";
        NSMenuItem *item = [[NSMenuItem alloc] initWithTitle:t action:NULL keyEquivalent:k];
        return ns_retain_obj(item);
    }
}

uintptr_t ns_menuitem_separator(void)
{
    @autoreleasepool {
        return ns_retain_obj([NSMenuItem separatorItem]);
    }
}

uintptr_t ns_menuitem_section_header(const char *title)
{
    @autoreleasepool {
        NSString *t = title ? [NSString stringWithUTF8String:title] : @"";
        if (@available(macOS 14.0, *)) {
            return ns_retain_obj([NSMenuItem sectionHeaderWithTitle:t]);
        }
        NSMenuItem *item = [[NSMenuItem alloc] initWithTitle:t action:NULL keyEquivalent:@""];
        item.enabled = NO;
        return ns_retain_obj(item);
    }
}

uintptr_t ns_menuitem_wrap(void *item)
{
    if (!item) {
        return 0;
    }
    @autoreleasepool {
        NSMenuItem *obj = (__bridge NSMenuItem *)item;
        return [obj isKindOfClass:[NSMenuItem class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_menuitem_destroy(uintptr_t item)
{
    if (item) {
        CFRelease((void *)item);
    }
}

void *ns_menuitem_nsmenuitem(uintptr_t item)
{
    NSMenuItem *obj = ns_menuitem_from(item);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_menuitem_set_title(uintptr_t item, const char *title)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_menuitem_get_title(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.title, out, out_len);
    }
}

void ns_menuitem_set_subtitle(uintptr_t item, const char *subtitle)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        if (obj && [obj respondsToSelector:@selector(setSubtitle:)]) {
            obj.subtitle = subtitle ? [NSString stringWithUTF8String:subtitle] : nil;
        }
    }
}

int ns_menuitem_get_subtitle(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        if (!obj || ![obj respondsToSelector:@selector(subtitle)]) {
            return 0;
        }
        return ns_copy_nsstring(obj.subtitle, out, out_len);
    }
}

void ns_menuitem_set_key_equivalent(uintptr_t item, const char *key)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        if (obj) {
            obj.keyEquivalent = key ? [NSString stringWithUTF8String:key] : @"";
        }
    }
}

int ns_menuitem_get_key_equivalent(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.keyEquivalent, out, out_len);
    }
}

void ns_menuitem_set_enabled(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        if (obj) {
            obj.enabled = flag ? YES : NO;
        }
    }
}

int ns_menuitem_is_enabled(uintptr_t item)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_menuitem_set_hidden(uintptr_t item, int flag)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        if (obj) {
            obj.hidden = flag ? YES : NO;
        }
    }
}

int ns_menuitem_is_hidden(uintptr_t item)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        return obj && obj.hidden ? 1 : 0;
    }
}

void ns_menuitem_set_state(uintptr_t item, int state)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        if (obj) {
            obj.state = (NSControlStateValue)state;
        }
    }
}

int ns_menuitem_get_state(uintptr_t item)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        return obj ? (int)obj.state : 0;
    }
}

void ns_menuitem_set_tag(uintptr_t item, int tag)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        if (obj) {
            obj.tag = tag;
        }
    }
}

int ns_menuitem_get_tag(uintptr_t item)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        return obj ? (int)obj.tag : 0;
    }
}

void ns_menuitem_set_tool_tip(uintptr_t item, const char *tip)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        if (obj) {
            obj.toolTip = tip ? [NSString stringWithUTF8String:tip] : nil;
        }
    }
}

int ns_menuitem_get_tool_tip(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.toolTip, out, out_len);
    }
}

void ns_menuitem_set_indentation_level(uintptr_t item, int level)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        if (obj) {
            obj.indentationLevel = level;
        }
    }
}

int ns_menuitem_get_indentation_level(uintptr_t item)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        return obj ? (int)obj.indentationLevel : 0;
    }
}

void ns_menuitem_set_represented_object(uintptr_t item, const char *token)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        if (obj) {
            obj.representedObject = token ? [NSString stringWithUTF8String:token] : nil;
        }
    }
}

int ns_menuitem_get_represented_object(uintptr_t item, char *out, int out_len)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        if (!obj) {
            return 0;
        }
        id rep = obj.representedObject;
        if ([rep isKindOfClass:[NSString class]]) {
            return ns_copy_nsstring((NSString *)rep, out, out_len);
        }
        if (out && out_len > 0) {
            out[0] = '\0';
        }
        return rep ? 0 : 1;
    }
}

void ns_menuitem_set_view(uintptr_t item, uintptr_t view)
{
    void *ptr = ns_view_nsview(view);
    if (!ptr) {
        return;
    }
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        if (obj) {
            obj.view = (__bridge NSView *)ptr;
        }
    }
}

uintptr_t ns_menuitem_view(uintptr_t item)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        NSView *view = obj ? obj.view : nil;
        return view ? ns_view_wrap((__bridge void *)view) : 0;
    }
}

int ns_menuitem_is_separator(uintptr_t item)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        return obj && obj.separatorItem ? 1 : 0;
    }
}

int ns_menuitem_is_section_header(uintptr_t item)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        if (!obj) {
            return 0;
        }
        if ([obj respondsToSelector:@selector(isSectionHeader)]) {
            return obj.sectionHeader ? 1 : 0;
        }
        return 0;
    }
}

int ns_menuitem_has_submenu(uintptr_t item)
{
    @autoreleasepool {
        NSMenuItem *obj = ns_menuitem_from(item);
        return obj && obj.hasSubmenu ? 1 : 0;
    }
}
