#import <AppKit/AppKit.h>
#import "ns-steppercell.h"

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

static NSStepperCell *ns_steppercell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSStepperCell class]] ? (NSStepperCell *)obj : nil;
}

uintptr_t ns_steppercell_create_text(const char *string)
{
    @autoreleasepool {
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        return ns_retain_obj([[NSStepperCell alloc] initTextCell:title]);
    }
}

uintptr_t ns_steppercell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSStepperCell *obj = (__bridge NSStepperCell *)cell;
        return [obj isKindOfClass:[NSStepperCell class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_steppercell_destroy(uintptr_t cell)
{
    ns_release_handle(cell);
}

void *ns_steppercell_nssteppercell(uintptr_t cell)
{
    NSStepperCell *obj = ns_steppercell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_steppercell_set_title(uintptr_t cell, const char *title)
{
    @autoreleasepool {
        NSStepperCell *obj = ns_steppercell_from(cell);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_steppercell_get_title(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSStepperCell *obj = ns_steppercell_from(cell);
        return obj ? ns_copy_nsstring(obj.title, out, out_len) : 0;
    }
}

void ns_steppercell_set_state(uintptr_t cell, int state)
{
    @autoreleasepool {
        NSStepperCell *obj = ns_steppercell_from(cell);
        if (obj) {
            obj.state = (NSControlStateValue)state;
        }
    }
}

int ns_steppercell_get_state(uintptr_t cell)
{
    @autoreleasepool {
        NSStepperCell *obj = ns_steppercell_from(cell);
        return obj ? (int)obj.state : 0;
    }
}

void ns_steppercell_set_enabled(uintptr_t cell, int enabled)
{
    @autoreleasepool {
        NSStepperCell *obj = ns_steppercell_from(cell);
        if (obj) {
            obj.enabled = enabled ? YES : NO;
        }
    }
}

int ns_steppercell_is_enabled(uintptr_t cell)
{
    @autoreleasepool {
        NSStepperCell *obj = ns_steppercell_from(cell);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_steppercell_set_tag(uintptr_t cell, int tag)
{
    @autoreleasepool {
        NSStepperCell *obj = ns_steppercell_from(cell);
        if (obj) {
            obj.tag = tag;
        }
    }
}

int ns_steppercell_get_tag(uintptr_t cell)
{
    @autoreleasepool {
        NSStepperCell *obj = ns_steppercell_from(cell);
        return obj ? (int)obj.tag : 0;
    }
}

void ns_steppercell_set_min_value(uintptr_t cell, double value)
{
    @autoreleasepool {
        NSStepperCell *obj = ns_steppercell_from(cell);
        if (obj) {
            obj.minValue = value;
        }
    }
}

double ns_steppercell_get_min_value(uintptr_t cell)
{
    @autoreleasepool {
        NSStepperCell *obj = ns_steppercell_from(cell);
        return obj ? obj.minValue : 0.0;
    }
}

void ns_steppercell_set_max_value(uintptr_t cell, double value)
{
    @autoreleasepool {
        NSStepperCell *obj = ns_steppercell_from(cell);
        if (obj) {
            obj.maxValue = value;
        }
    }
}

double ns_steppercell_get_max_value(uintptr_t cell)
{
    @autoreleasepool {
        NSStepperCell *obj = ns_steppercell_from(cell);
        return obj ? obj.maxValue : 0.0;
    }
}

void ns_steppercell_set_increment(uintptr_t cell, double value)
{
    @autoreleasepool {
        NSStepperCell *obj = ns_steppercell_from(cell);
        if (obj) {
            obj.increment = value;
        }
    }
}

double ns_steppercell_get_increment(uintptr_t cell)
{
    @autoreleasepool {
        NSStepperCell *obj = ns_steppercell_from(cell);
        return obj ? obj.increment : 0.0;
    }
}

void ns_steppercell_set_value_wraps(uintptr_t cell, int flag)
{
    @autoreleasepool {
        NSStepperCell *obj = ns_steppercell_from(cell);
        if (obj) {
            obj.valueWraps = flag ? YES : NO;
        }
    }
}

int ns_steppercell_value_wraps(uintptr_t cell)
{
    @autoreleasepool {
        NSStepperCell *obj = ns_steppercell_from(cell);
        return obj && obj.valueWraps ? 1 : 0;
    }
}

void ns_steppercell_set_autorepeat(uintptr_t cell, int flag)
{
    @autoreleasepool {
        NSStepperCell *obj = ns_steppercell_from(cell);
        if (obj) {
            obj.autorepeat = flag ? YES : NO;
        }
    }
}

int ns_steppercell_autorepeat(uintptr_t cell)
{
    @autoreleasepool {
        NSStepperCell *obj = ns_steppercell_from(cell);
        return obj && obj.autorepeat ? 1 : 0;
    }
}
