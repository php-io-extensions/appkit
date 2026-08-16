#import <AppKit/AppKit.h>
#import "ns-scrubberselectionview.h"
#import "ns-view.h"

static NSScrubberSelectionView *ns_scrubberselectionview_view(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSScrubberSelectionView class]] ? (NSScrubberSelectionView *)view : nil;
}

uintptr_t ns_scrubberselectionview_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 44;
    }
    if (height <= 0) {
        height = 44;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSScrubberSelectionView *obj = [[NSScrubberSelectionView alloc] initWithFrame:rect];
        return ns_view_wrap((__bridge void *)obj);
    }
}

uintptr_t ns_scrubberselectionview_wrap(void *view)
{
    if (!view) {
        return 0;
    }
    @autoreleasepool {
        NSView *obj = (__bridge NSView *)view;
        if (![obj isKindOfClass:[NSScrubberSelectionView class]]) {
            return 0;
        }
        return ns_view_wrap(view);
    }
}

void ns_scrubberselectionview_destroy(uintptr_t view)
{
    ns_view_destroy(view);
}

void *ns_scrubberselectionview_nsscrubberselectionview(uintptr_t view)
{
    NSScrubberSelectionView *obj = ns_scrubberselectionview_view(view);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_scrubberselectionview_set_selected(uintptr_t view, int flag)
{
    @autoreleasepool {
        NSScrubberSelectionView *obj = ns_scrubberselectionview_view(view);
        if (obj) {
            obj.selected = flag ? YES : NO;
        }
    }
}

int ns_scrubberselectionview_is_selected(uintptr_t view)
{
    @autoreleasepool {
        NSScrubberSelectionView *obj = ns_scrubberselectionview_view(view);
        return obj && obj.selected ? 1 : 0;
    }
}

void ns_scrubberselectionview_set_highlighted(uintptr_t view, int flag)
{
    @autoreleasepool {
        NSScrubberSelectionView *obj = ns_scrubberselectionview_view(view);
        if (obj) {
            obj.highlighted = flag ? YES : NO;
        }
    }
}

int ns_scrubberselectionview_is_highlighted(uintptr_t view)
{
    @autoreleasepool {
        NSScrubberSelectionView *obj = ns_scrubberselectionview_view(view);
        return obj && obj.highlighted ? 1 : 0;
    }
}

void ns_scrubberselectionview_apply_layout_attributes(uintptr_t view, void *layoutAttributes)
{
    @autoreleasepool {
        NSScrubberSelectionView *obj = ns_scrubberselectionview_view(view);
        if (obj && layoutAttributes) {
            [obj applyLayoutAttributes:(__bridge NSScrubberLayoutAttributes *)layoutAttributes];
        }
    }
}
