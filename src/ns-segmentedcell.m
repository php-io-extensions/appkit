#import <AppKit/AppKit.h>
#import "ns-segmentedcell.h"

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

static NSSegmentedCell *ns_segmentedcell_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSSegmentedCell class]] ? (NSSegmentedCell *)obj : nil;
}

uintptr_t ns_segmentedcell_create_text(const char *string)
{
    @autoreleasepool {
        NSString *title = string ? [NSString stringWithUTF8String:string] : @"";
        return ns_retain_obj([[NSSegmentedCell alloc] initTextCell:title]);
    }
}

uintptr_t ns_segmentedcell_wrap(void *cell)
{
    if (!cell) {
        return 0;
    }
    @autoreleasepool {
        NSSegmentedCell *obj = (__bridge NSSegmentedCell *)cell;
        return [obj isKindOfClass:[NSSegmentedCell class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_segmentedcell_destroy(uintptr_t cell)
{
    ns_release_handle(cell);
}

void *ns_segmentedcell_nssegmentedcell(uintptr_t cell)
{
    NSSegmentedCell *obj = ns_segmentedcell_from(cell);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_segmentedcell_set_title(uintptr_t cell, const char *title)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        if (obj) {
            obj.title = title ? [NSString stringWithUTF8String:title] : @"";
        }
    }
}

int ns_segmentedcell_get_title(uintptr_t cell, char *out, int out_len)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        return obj ? ns_copy_nsstring(obj.title, out, out_len) : 0;
    }
}

void ns_segmentedcell_set_state(uintptr_t cell, int state)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        if (obj) {
            obj.state = (NSControlStateValue)state;
        }
    }
}

int ns_segmentedcell_get_state(uintptr_t cell)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        return obj ? (int)obj.state : 0;
    }
}

void ns_segmentedcell_set_enabled(uintptr_t cell, int enabled)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        if (obj) {
            obj.enabled = enabled ? YES : NO;
        }
    }
}

int ns_segmentedcell_is_enabled(uintptr_t cell)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        return obj && obj.enabled ? 1 : 0;
    }
}

void ns_segmentedcell_set_tag(uintptr_t cell, int tag)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        if (obj) {
            obj.tag = tag;
        }
    }
}

int ns_segmentedcell_get_tag(uintptr_t cell)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        return obj ? (int)obj.tag : 0;
    }
}

void ns_segmentedcell_set_segment_count(uintptr_t cell, int count)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        if (obj) {
            obj.segmentCount = count < 0 ? 0 : (NSInteger)count;
        }
    }
}

int ns_segmentedcell_get_segment_count(uintptr_t cell)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        return obj ? (int)obj.segmentCount : 0;
    }
}

void ns_segmentedcell_set_selected_segment(uintptr_t cell, int index)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        if (obj) {
            obj.selectedSegment = (NSInteger)index;
        }
    }
}

int ns_segmentedcell_get_selected_segment(uintptr_t cell)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        return obj ? (int)obj.selectedSegment : -1;
    }
}

int ns_segmentedcell_select_segment_with_tag(uintptr_t cell, int tag)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        return obj && [obj selectSegmentWithTag:tag] ? 1 : 0;
    }
}

void ns_segmentedcell_set_tracking_mode(uintptr_t cell, int mode)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        if (obj) {
            obj.trackingMode = (NSSegmentSwitchTracking)mode;
        }
    }
}

int ns_segmentedcell_get_tracking_mode(uintptr_t cell)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        return obj ? (int)obj.trackingMode : 0;
    }
}

void ns_segmentedcell_set_segment_style(uintptr_t cell, int style)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        if (obj) {
            obj.segmentStyle = (NSSegmentStyle)style;
        }
    }
}

int ns_segmentedcell_get_segment_style(uintptr_t cell)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        return obj ? (int)obj.segmentStyle : 0;
    }
}

void ns_segmentedcell_set_width_for_segment(uintptr_t cell, double width, int segment)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        if (obj) {
            [obj setWidth:(CGFloat)width forSegment:(NSInteger)segment];
        }
    }
}

double ns_segmentedcell_width_for_segment(uintptr_t cell, int segment)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        return obj ? (double)[obj widthForSegment:(NSInteger)segment] : 0.0;
    }
}

void ns_segmentedcell_set_label_for_segment(uintptr_t cell, const char *label, int segment)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        if (obj) {
            [obj setLabel:label ? [NSString stringWithUTF8String:label] : @"" forSegment:(NSInteger)segment];
        }
    }
}

int ns_segmentedcell_label_for_segment(uintptr_t cell, int segment, char *out, int out_len)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        return obj ? ns_copy_nsstring([obj labelForSegment:(NSInteger)segment], out, out_len) : 0;
    }
}

void ns_segmentedcell_set_selected_for_segment(uintptr_t cell, int selected, int segment)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        if (obj) {
            [obj setSelected:selected ? YES : NO forSegment:(NSInteger)segment];
        }
    }
}

int ns_segmentedcell_is_selected_for_segment(uintptr_t cell, int segment)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        return obj && [obj isSelectedForSegment:(NSInteger)segment] ? 1 : 0;
    }
}

void ns_segmentedcell_set_enabled_for_segment(uintptr_t cell, int enabled, int segment)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        if (obj) {
            [obj setEnabled:enabled ? YES : NO forSegment:(NSInteger)segment];
        }
    }
}

int ns_segmentedcell_is_enabled_for_segment(uintptr_t cell, int segment)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        return obj && [obj isEnabledForSegment:(NSInteger)segment] ? 1 : 0;
    }
}

void ns_segmentedcell_set_tag_for_segment(uintptr_t cell, int tag, int segment)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        if (obj) {
            [obj setTag:tag forSegment:(NSInteger)segment];
        }
    }
}

int ns_segmentedcell_tag_for_segment(uintptr_t cell, int segment)
{
    @autoreleasepool {
        NSSegmentedCell *obj = ns_segmentedcell_from(cell);
        return obj ? (int)[obj tagForSegment:(NSInteger)segment] : 0;
    }
}
