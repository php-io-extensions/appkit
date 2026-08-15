#import <AppKit/AppKit.h>
#import "ns-slidercell.h"

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

static NSSliderCell *ns_slidercell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSSliderCell class]] ? (NSSliderCell *)obj : nil;
}

uintptr_t ns_slidercell_create_text(const char *string)
{
    @autoreleasepool {
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        return ns_retain_obj([[NSSliderCell alloc] initTextCell:title]);
    }
}

uintptr_t ns_slidercell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSSliderCell *obj = (__bridge NSSliderCell *)cell;
        return [obj isKindOfClass:[NSSliderCell class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_slidercell_destroy(uintptr_t cell)
{
    ns_release_handle(cell);
}

void *ns_slidercell_nsslidercell(uintptr_t cell)
{
    NSSliderCell *obj = ns_slidercell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_slidercell_set_title(uintptr_t cell, const char *title)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_slidercell_get_title(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        return obj ? ns_copy_nsstring(obj.title, out, out_len) : 0;
    }
}

void ns_slidercell_set_state(uintptr_t cell, int state)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        if (obj) {
            obj.state = (NSControlStateValue)state;
        }
    }
}

int ns_slidercell_get_state(uintptr_t cell)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        return obj ? (int)obj.state : 0;
    }
}

void ns_slidercell_set_enabled(uintptr_t cell, int enabled)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        if (obj) {
            obj.enabled = enabled ? YES : NO;
        }
    }
}

int ns_slidercell_is_enabled(uintptr_t cell)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_slidercell_set_tag(uintptr_t cell, int tag)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        if (obj) {
            obj.tag = tag;
        }
    }
}

int ns_slidercell_get_tag(uintptr_t cell)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        return obj ? (int)obj.tag : 0;
    }
}

void ns_slidercell_set_min_value(uintptr_t cell, double value)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        if (obj) {
            obj.minValue = value;
        }
    }
}

double ns_slidercell_get_min_value(uintptr_t cell)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        return obj ? obj.minValue : 0.0;
    }
}

void ns_slidercell_set_max_value(uintptr_t cell, double value)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        if (obj) {
            obj.maxValue = value;
        }
    }
}

double ns_slidercell_get_max_value(uintptr_t cell)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        return obj ? obj.maxValue : 0.0;
    }
}

void ns_slidercell_set_alt_increment_value(uintptr_t cell, double value)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        if (obj) {
            obj.altIncrementValue = value;
        }
    }
}

double ns_slidercell_get_alt_increment_value(uintptr_t cell)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        return obj ? obj.altIncrementValue : 0.0;
    }
}

void ns_slidercell_set_slider_type(uintptr_t cell, int type)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        if (obj) {
            obj.sliderType = (NSSliderType)type;
        }
    }
}

int ns_slidercell_get_slider_type(uintptr_t cell)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        return obj ? (int)obj.sliderType : 0;
    }
}

void ns_slidercell_set_vertical(uintptr_t cell, int flag)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        if (obj) {
            obj.vertical = flag ? YES : NO;
        }
    }
}

int ns_slidercell_is_vertical(uintptr_t cell)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        return obj && obj.vertical ? 1 : 0;
    }
}

void ns_slidercell_set_number_of_tick_marks(uintptr_t cell, int count)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        if (obj) {
            obj.numberOfTickMarks = count < 0 ? 0 : (NSInteger)count;
        }
    }
}

int ns_slidercell_get_number_of_tick_marks(uintptr_t cell)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        return obj ? (int)obj.numberOfTickMarks : 0;
    }
}

void ns_slidercell_set_tick_mark_position(uintptr_t cell, int position)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        if (obj) {
            obj.tickMarkPosition = (NSTickMarkPosition)position;
        }
    }
}

int ns_slidercell_get_tick_mark_position(uintptr_t cell)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        return obj ? (int)obj.tickMarkPosition : 0;
    }
}

void ns_slidercell_set_allows_tick_mark_values_only(uintptr_t cell, int flag)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        if (obj) {
            obj.allowsTickMarkValuesOnly = flag ? YES : NO;
        }
    }
}

int ns_slidercell_allows_tick_mark_values_only(uintptr_t cell)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        return obj && obj.allowsTickMarkValuesOnly ? 1 : 0;
    }
}

double ns_slidercell_tick_mark_value_at_index(uintptr_t cell, int index)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        if (!obj || index < 0 || index >= (int)obj.numberOfTickMarks) {
            return 0.0;
        }
        return [obj tickMarkValueAtIndex:(NSInteger)index];
    }
}

double ns_slidercell_closest_tick_mark_value_to_value(uintptr_t cell, double value)
{
    @autoreleasepool {
        NSSliderCell *obj = ns_slidercell_from(cell);
        return obj ? [obj closestTickMarkValueToValue:value] : 0.0;
    }
}
