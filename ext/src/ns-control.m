#import <AppKit/AppKit.h>
#import "ns-control.h"
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

static NSControl *ns_control_from_view(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSControl class]] ? (NSControl *)view : nil;
}

void ns_control_set_enabled(uintptr_t control, int enabled)
{
    @autoreleasepool {
        NSControl *obj = ns_control_from_view(control);
        if (obj) {
            obj.enabled = enabled ? YES : NO;
        }
    }
}

int ns_control_is_enabled(uintptr_t control)
{
    @autoreleasepool {
        NSControl *obj = ns_control_from_view(control);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_control_set_string(uintptr_t control, const char *value)
{
    @autoreleasepool {
        NSControl *obj = ns_control_from_view(control);
        if (obj) {
            obj.stringValue = value ? [NSString stringWithUTF8String:value] : @"";
        }
    }
}

int ns_control_get_string(uintptr_t control, char *out, int out_len)
{
    @autoreleasepool {
        NSControl *obj = ns_control_from_view(control);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.stringValue, out, out_len);
    }
}

void ns_control_set_int_value(uintptr_t control, int value)
{
    @autoreleasepool {
        NSControl *obj = ns_control_from_view(control);
        if (obj) {
            obj.intValue = value;
        }
    }
}

int ns_control_get_int_value(uintptr_t control)
{
    @autoreleasepool {
        NSControl *obj = ns_control_from_view(control);
        return obj ? (int)obj.intValue : 0;
    }
}

void ns_control_set_tag(uintptr_t control, int tag)
{
    @autoreleasepool {
        NSControl *obj = ns_control_from_view(control);
        if (obj) {
            obj.tag = tag;
        }
    }
}

int ns_control_get_tag(uintptr_t control)
{
    @autoreleasepool {
        NSControl *obj = ns_control_from_view(control);
        return obj ? (int)obj.tag : 0;
    }
}

void ns_control_perform_click(uintptr_t control)
{
    @autoreleasepool {
        NSControl *obj = ns_control_from_view(control);
        if (obj) {
            [obj performClick:nil];
        }
    }
}

void ns_control_set_continuous(uintptr_t control, int continuous)
{
    @autoreleasepool {
        NSControl *obj = ns_control_from_view(control);
        if (obj) {
            obj.continuous = continuous ? YES : NO;
        }
    }
}

int ns_control_is_continuous(uintptr_t control)
{
    @autoreleasepool {
        NSControl *obj = ns_control_from_view(control);
        return obj && obj.continuous ? 1 : 0;
    }
}

void ns_control_set_state(uintptr_t control, int state)
{
    @autoreleasepool {
        NSControl *obj = ns_control_from_view(control);
        if ([obj isKindOfClass:[NSButton class]]) {
            [(NSButton *)obj setState:(NSControlStateValue)state];
        }
    }
}

int ns_control_get_state(uintptr_t control)
{
    @autoreleasepool {
        NSControl *obj = ns_control_from_view(control);
        if ([obj isKindOfClass:[NSButton class]]) {
            return (int)[(NSButton *)obj state];
        }
        return 0;
    }
}

void ns_control_set_control_size(uintptr_t control, int size)
{
    @autoreleasepool {
        NSControl *obj = ns_control_from_view(control);
        if (obj) {
            obj.controlSize = (NSControlSize)size;
        }
    }
}

int ns_control_get_control_size(uintptr_t control)
{
    @autoreleasepool {
        NSControl *obj = ns_control_from_view(control);
        return obj ? (int)obj.controlSize : 0;
    }
}
