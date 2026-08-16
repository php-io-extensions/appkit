#import <AppKit/AppKit.h>
#import "ns-scrubberitemview.h"
#import "ns-view.h"

static NSScrubberItemView *ns_scrubberitemview_view(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSScrubberItemView class]] ? (NSScrubberItemView *)view : nil;
}

uintptr_t ns_scrubberitemview_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 44;
    }
    if (height <= 0) {
        height = 44;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSScrubberItemView *obj = [[NSScrubberItemView alloc] initWithFrame:rect];
        return ns_view_wrap((__bridge void *)obj);
    }
}

uintptr_t ns_scrubberitemview_wrap(void *view)
{
    if (!view) {
        return 0;
    }
    @autoreleasepool {
        NSView *obj = (__bridge NSView *)view;
        if (![obj isKindOfClass:[NSScrubberItemView class]]) {
            return 0;
        }
        return ns_view_wrap(view);
    }
}

void ns_scrubberitemview_destroy(uintptr_t view)
{
    ns_view_destroy(view);
}

void *ns_scrubberitemview_nsscrubberitemview(uintptr_t view)
{
    NSScrubberItemView *obj = ns_scrubberitemview_view(view);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_scrubberitemview_set_selected(uintptr_t view, int flag)
{
    @autoreleasepool {
        NSScrubberItemView *obj = ns_scrubberitemview_view(view);
        if (obj) {
            obj.selected = flag ? YES : NO;
        }
    }
}

int ns_scrubberitemview_is_selected(uintptr_t view)
{
    @autoreleasepool {
        NSScrubberItemView *obj = ns_scrubberitemview_view(view);
        return obj && obj.selected ? 1 : 0;
    }
}

void ns_scrubberitemview_set_highlighted(uintptr_t view, int flag)
{
    @autoreleasepool {
        NSScrubberItemView *obj = ns_scrubberitemview_view(view);
        if (obj) {
            obj.highlighted = flag ? YES : NO;
        }
    }
}

int ns_scrubberitemview_is_highlighted(uintptr_t view)
{
    @autoreleasepool {
        NSScrubberItemView *obj = ns_scrubberitemview_view(view);
        return obj && obj.highlighted ? 1 : 0;
    }
}

void ns_scrubberitemview_apply_layout_attributes(uintptr_t view, void *layoutAttributes)
{
    @autoreleasepool {
        NSScrubberItemView *obj = ns_scrubberitemview_view(view);
        if (obj && layoutAttributes) {
            [obj applyLayoutAttributes:(__bridge NSScrubberLayoutAttributes *)layoutAttributes];
        }
    }
}
