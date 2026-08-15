#import <AppKit/AppKit.h>
#import "ns-buttoncell.h"

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

static void ns_release_handle(uintptr_t handle)
{
    if (handle) {
        CFRelease((void *)handle);
    }
}

static NSMenu *ns_menu_from_handle(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSMenu class]] ? (NSMenu *)obj : nil;
}

static NSColor *ns_color_from_handle(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSColor class]] ? (NSColor *)obj : nil;
}

static NSImage *ns_image_from_handle(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSImage class]] ? (NSImage *)obj : nil;
}

static NSButtonCell *ns_buttoncell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSButtonCell class]] ? (NSButtonCell *)obj : nil;
}

uintptr_t ns_buttoncell_create_text(const char *string)
{
    @autoreleasepool {
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        return ns_retain_obj([[NSButtonCell alloc] initTextCell:title]);
    }
}

uintptr_t ns_buttoncell_create_image(uintptr_t image)
{
    @autoreleasepool {
        NSImage *img = ns_image_from_handle(image);
        return ns_retain_obj([[NSButtonCell alloc] initImageCell:img]);
    }
}

uintptr_t ns_buttoncell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSButtonCell *obj = (__bridge NSButtonCell *)cell;
        return [obj isKindOfClass:[NSButtonCell class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_buttoncell_destroy(uintptr_t cell)
{
    ns_release_handle(cell);
}

void *ns_buttoncell_nsbuttoncell(uintptr_t cell)
{
    NSButtonCell *obj = ns_buttoncell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_buttoncell_set_title(uintptr_t cell, const char *title)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_buttoncell_get_title(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        return obj ? ns_copy_nsstring(obj.title, out, out_len) : 0;
    }
}

void ns_buttoncell_set_state(uintptr_t cell, int state)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            obj.state = (NSControlStateValue)state;
        }
    }
}

int ns_buttoncell_get_state(uintptr_t cell)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        return obj ? (int)obj.state : 0;
    }
}

void ns_buttoncell_set_enabled(uintptr_t cell, int enabled)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            obj.enabled = enabled ? YES : NO;
        }
    }
}

int ns_buttoncell_is_enabled(uintptr_t cell)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_buttoncell_set_tag(uintptr_t cell, int tag)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            obj.tag = tag;
        }
    }
}

int ns_buttoncell_get_tag(uintptr_t cell)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        return obj ? (int)obj.tag : 0;
    }
}

void ns_buttoncell_set_bezel_style(uintptr_t cell, int style)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            obj.bezelStyle = (NSBezelStyle)style;
        }
    }
}

int ns_buttoncell_get_bezel_style(uintptr_t cell)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        return obj ? (int)obj.bezelStyle : 0;
    }
}

void ns_buttoncell_set_button_type(uintptr_t cell, int type)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            [obj setButtonType:(NSButtonType)type];
        }
    }
}

void ns_buttoncell_set_alternate_title(uintptr_t cell, const char *title)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            obj.alternateTitle = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_buttoncell_get_alternate_title(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        return obj ? ns_copy_nsstring(obj.alternateTitle, out, out_len) : 0;
    }
}

void ns_buttoncell_set_key_equivalent(uintptr_t cell, const char *key)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            obj.keyEquivalent = key ? [NSString stringWithUTF8String:key] : @"";
        }
    }
}

int ns_buttoncell_get_key_equivalent(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        return obj ? ns_copy_nsstring(obj.keyEquivalent, out, out_len) : 0;
    }
}

void ns_buttoncell_set_transparent(uintptr_t cell, int flag)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            obj.transparent = flag ? YES : NO;
        }
    }
}

int ns_buttoncell_is_transparent(uintptr_t cell)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        return obj && obj.transparent ? 1 : 0;
    }
}

void ns_buttoncell_set_image_dims_when_disabled(uintptr_t cell, int flag)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            obj.imageDimsWhenDisabled = flag ? YES : NO;
        }
    }
}

int ns_buttoncell_image_dims_when_disabled(uintptr_t cell)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        return obj && obj.imageDimsWhenDisabled ? 1 : 0;
    }
}

void ns_buttoncell_perform_click(uintptr_t cell)
{
    @autoreleasepool {
        NSButtonCell *obj = ns_buttoncell_from(cell);
        if (obj) {
            [obj performClick:nil];
        }
    }
}
