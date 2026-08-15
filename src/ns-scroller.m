#import <AppKit/AppKit.h>
#import "ns-scroller.h"
#import "ns-view.h"

static NSScroller *ns_scroller_from(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSScroller class]] ? (NSScroller *)view : nil;
}

uintptr_t ns_scroller_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 16;
    }
    if (height <= 0) {
        height = 160;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSScroller *scroller = [[NSScroller alloc] initWithFrame:rect];
        return ns_view_wrap((__bridge void *)scroller);
    }
}

uintptr_t ns_scroller_wrap(void *scroller)
{
    if (!scroller) {
        return 0;
    }
    @autoreleasepool {
        NSScroller *obj = (__bridge NSScroller *)scroller;
        return [obj isKindOfClass:[NSScroller class]] ? ns_view_wrap(scroller) : 0;
    }
}

void ns_scroller_destroy(uintptr_t scroller)
{
    ns_view_destroy(scroller);
}

void *ns_scroller_nsscroller(uintptr_t scroller)
{
    NSScroller *obj = ns_scroller_from(scroller);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_scroller_set_scroller_style(uintptr_t scroller, int style)
{
    @autoreleasepool {
        NSScroller *obj = ns_scroller_from(scroller);
        if (obj) {
            obj.scrollerStyle = (NSScrollerStyle)style;
        }
    }
}

int ns_scroller_get_scroller_style(uintptr_t scroller)
{
    @autoreleasepool {
        NSScroller *obj = ns_scroller_from(scroller);
        return obj ? (int)obj.scrollerStyle : 0;
    }
}

void ns_scroller_set_knob_style(uintptr_t scroller, int style)
{
    @autoreleasepool {
        NSScroller *obj = ns_scroller_from(scroller);
        if (obj) {
            obj.knobStyle = (NSScrollerKnobStyle)style;
        }
    }
}

int ns_scroller_get_knob_style(uintptr_t scroller)
{
    @autoreleasepool {
        NSScroller *obj = ns_scroller_from(scroller);
        return obj ? (int)obj.knobStyle : 0;
    }
}

void ns_scroller_set_control_size(uintptr_t scroller, int size)
{
    @autoreleasepool {
        NSScroller *obj = ns_scroller_from(scroller);
        if (obj) {
            obj.controlSize = (NSControlSize)size;
        }
    }
}

int ns_scroller_get_control_size(uintptr_t scroller)
{
    @autoreleasepool {
        NSScroller *obj = ns_scroller_from(scroller);
        return obj ? (int)obj.controlSize : 0;
    }
}

void ns_scroller_set_knob_proportion(uintptr_t scroller, double proportion)
{
    @autoreleasepool {
        NSScroller *obj = ns_scroller_from(scroller);
        if (obj) {
            [obj setKnobProportion:(CGFloat)proportion];
        }
    }
}

double ns_scroller_get_knob_proportion(uintptr_t scroller)
{
    @autoreleasepool {
        NSScroller *obj = ns_scroller_from(scroller);
        return obj ? (double)obj.knobProportion : 0.0;
    }
}

int ns_scroller_get_hit_part(uintptr_t scroller)
{
    @autoreleasepool {
        NSScroller *obj = ns_scroller_from(scroller);
        return obj ? (int)obj.hitPart : 0;
    }
}

int ns_scroller_get_preferred_scroller_style(void)
{
    @autoreleasepool {
        return (int)[NSScroller preferredScrollerStyle];
    }
}

double ns_scroller_scroller_width(int control_size, int scroller_style)
{
    @autoreleasepool {
        return (double)[NSScroller scrollerWidthForControlSize:(NSControlSize)control_size
                                                 scrollerStyle:(NSScrollerStyle)scroller_style];
    }
}
