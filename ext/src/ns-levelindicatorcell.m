#import <AppKit/AppKit.h>
#import "ns-levelindicatorcell.h"

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

static NSLevelIndicatorCell *ns_levelindicatorcell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSLevelIndicatorCell class]] ? (NSLevelIndicatorCell *)obj : nil;
}

uintptr_t ns_levelindicatorcell_create_text(const char *string)
{
    @autoreleasepool {
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        return ns_retain_obj([[NSLevelIndicatorCell alloc] initTextCell:title]);
    }
}

uintptr_t ns_levelindicatorcell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSLevelIndicatorCell *obj = (__bridge NSLevelIndicatorCell *)cell;
        return [obj isKindOfClass:[NSLevelIndicatorCell class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_levelindicatorcell_destroy(uintptr_t cell)
{
    ns_release_handle(cell);
}

void *ns_levelindicatorcell_nslevelindicatorcell(uintptr_t cell)
{
    NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_levelindicatorcell_set_title(uintptr_t cell, const char *title)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_levelindicatorcell_get_title(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        if (!obj) {
            return 0;
        }
        return ns_copy_nsstring(obj.title, out, out_len);
    }
}

void ns_levelindicatorcell_set_state(uintptr_t cell, int state)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        if (obj) {
            obj.state = (NSControlStateValue)state;
        }
    }
}

int ns_levelindicatorcell_get_state(uintptr_t cell)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        return obj ? (int)obj.state : 0;
    }
}

void ns_levelindicatorcell_set_enabled(uintptr_t cell, int enabled)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        if (obj) {
            obj.enabled = enabled ? YES : NO;
        }
    }
}

int ns_levelindicatorcell_is_enabled(uintptr_t cell)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_levelindicatorcell_set_tag(uintptr_t cell, int tag)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        if (obj) {
            obj.tag = tag;
        }
    }
}

int ns_levelindicatorcell_get_tag(uintptr_t cell)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        return obj ? (int)obj.tag : 0;
    }
}

void ns_levelindicatorcell_set_level_indicator_style(uintptr_t cell, int style)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        if (obj) {
            obj.levelIndicatorStyle = (NSLevelIndicatorStyle)style;
        }
    }
}

int ns_levelindicatorcell_get_level_indicator_style(uintptr_t cell)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        return obj ? (int)obj.levelIndicatorStyle : 0;
    }
}

void ns_levelindicatorcell_set_editable(uintptr_t cell, int flag)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        if (obj) {
            obj.editable = flag ? YES : NO;
        }
    }
}

int ns_levelindicatorcell_is_editable(uintptr_t cell)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        return obj && obj.editable ? 1 : 0;
    }
}

void ns_levelindicatorcell_set_min_value(uintptr_t cell, double value)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        if (obj) {
            obj.minValue = value;
        }
    }
}

double ns_levelindicatorcell_get_min_value(uintptr_t cell)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        return obj ? obj.minValue : 0.0;
    }
}

void ns_levelindicatorcell_set_max_value(uintptr_t cell, double value)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        if (obj) {
            obj.maxValue = value;
        }
    }
}

double ns_levelindicatorcell_get_max_value(uintptr_t cell)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        return obj ? obj.maxValue : 0.0;
    }
}

void ns_levelindicatorcell_set_warning_value(uintptr_t cell, double value)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        if (obj) {
            obj.warningValue = value;
        }
    }
}

double ns_levelindicatorcell_get_warning_value(uintptr_t cell)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        return obj ? obj.warningValue : 0.0;
    }
}

void ns_levelindicatorcell_set_critical_value(uintptr_t cell, double value)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        if (obj) {
            obj.criticalValue = value;
        }
    }
}

double ns_levelindicatorcell_get_critical_value(uintptr_t cell)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        return obj ? obj.criticalValue : 0.0;
    }
}

void ns_levelindicatorcell_set_double_value(uintptr_t cell, double value)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        if (obj) {
            obj.doubleValue = value;
        }
    }
}

double ns_levelindicatorcell_get_double_value(uintptr_t cell)
{
    @autoreleasepool {
        NSLevelIndicatorCell *obj = ns_levelindicatorcell_from(cell);
        return obj ? obj.doubleValue : 0.0;
    }
}
