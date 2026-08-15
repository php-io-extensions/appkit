#import <AppKit/AppKit.h>
#import "ns-textviewportlayoutcontroller.h"

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

static NSColor *ns_color_from_handle(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSColor class]] ? (NSColor *)obj : nil;
}

static NSTextViewportLayoutController *ns_textviewportlayoutcontroller_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSTextViewportLayoutController class]] ? (NSTextViewportLayoutController *)obj : nil;
}

uintptr_t ns_textviewportlayoutcontroller_wrap(void *controller)
{
    if (!controller) {
        return 0;
    }
    @autoreleasepool {
        NSTextViewportLayoutController *obj = (__bridge NSTextViewportLayoutController *)controller;
        return [obj isKindOfClass:[NSTextViewportLayoutController class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_textviewportlayoutcontroller_destroy(uintptr_t controller)
{
    ns_release_handle(controller);
}

void *ns_textviewportlayoutcontroller_nstextviewportlayoutcontroller(uintptr_t controller)
{
    NSTextViewportLayoutController *obj = ns_textviewportlayoutcontroller_from(controller);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_textviewportlayoutcontroller_viewport_bounds(uintptr_t controller, double *x, double *y, double *w, double *h)
{
    @autoreleasepool {
        NSTextViewportLayoutController *obj = ns_textviewportlayoutcontroller_from(controller);
        CGRect bounds = obj ? obj.viewportBounds : CGRectZero;
        if (x) {
            *x = (double)bounds.origin.x;
        }
        if (y) {
            *y = (double)bounds.origin.y;
        }
        if (w) {
            *w = (double)bounds.size.width;
        }
        if (h) {
            *h = (double)bounds.size.height;
        }
    }
}

void ns_textviewportlayoutcontroller_layout_viewport(uintptr_t controller)
{
    @autoreleasepool {
        NSTextViewportLayoutController *obj = ns_textviewportlayoutcontroller_from(controller);
        if (obj) {
            [obj layoutViewport];
        }
    }
}

void ns_textviewportlayoutcontroller_adjust_viewport_by_vertical_offset(uintptr_t controller, double offset)
{
    @autoreleasepool {
        NSTextViewportLayoutController *obj = ns_textviewportlayoutcontroller_from(controller);
        if (obj) {
            [obj adjustViewportByVerticalOffset:(CGFloat)offset];
        }
    }
}
