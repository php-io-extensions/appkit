#import <AppKit/AppKit.h>
#import "ns-trackingarea.h"
#import "ns-view.h"

static uintptr_t ns_trackingarea_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSTrackingArea *ns_trackingarea_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTrackingArea class]] ? (NSTrackingArea *)obj : nil;
}

uintptr_t ns_trackingarea_create(double x, double y, double width, double height, unsigned options)
{
    @autoreleasepool {
        if (width <= 0) {
            width = 1;
        }
        if (height <= 0) {
            height = 1;
        }
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSTrackingArea *area = [[NSTrackingArea alloc] initWithRect:rect
                                                            options:(NSTrackingAreaOptions)options
                                                              owner:nil
                                                           userInfo:nil];
        return ns_trackingarea_retain_obj(area);
    }
}

void ns_trackingarea_destroy(uintptr_t area)
{
    if (!area) {
        return;
    }
    CFRelease((void *)area);
}

int ns_trackingarea_add_to_view(uintptr_t area, uintptr_t view)
{
    @autoreleasepool {
        NSTrackingArea *tracking = ns_trackingarea_from(area);
        void *nsview = ns_view_nsview(view);
        if (!tracking || !nsview) {
            return 0;
        }
        [(NSView *)(__bridge NSView *)nsview addTrackingArea:tracking];
        return 1;
    }
}

void ns_trackingarea_remove_from_view(uintptr_t area, uintptr_t view)
{
    @autoreleasepool {
        NSTrackingArea *tracking = ns_trackingarea_from(area);
        void *nsview = ns_view_nsview(view);
        if (!tracking || !nsview) {
            return;
        }
        [(NSView *)(__bridge NSView *)nsview removeTrackingArea:tracking];
    }
}

int ns_trackingarea_rect(uintptr_t area, double *x, double *y, double *w, double *h)
{
    if (!x || !y || !w || !h) {
        return 0;
    }
    @autoreleasepool {
        NSTrackingArea *tracking = ns_trackingarea_from(area);
        if (!tracking) {
            return 0;
        }
        NSRect rect = tracking.rect;
        *x = (double)rect.origin.x;
        *y = (double)rect.origin.y;
        *w = (double)rect.size.width;
        *h = (double)rect.size.height;
        return 1;
    }
}

unsigned ns_trackingarea_options(uintptr_t area)
{
    @autoreleasepool {
        NSTrackingArea *tracking = ns_trackingarea_from(area);
        return tracking ? (unsigned)tracking.options : 0;
    }
}

void *ns_trackingarea_nstrackingarea(uintptr_t area)
{
    NSTrackingArea *tracking = ns_trackingarea_from(area);
    return tracking ? (__bridge void *)tracking : NULL;
}
