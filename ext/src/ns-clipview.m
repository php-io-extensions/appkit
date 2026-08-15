#import <AppKit/AppKit.h>
#import "ns-clipview.h"
#import "ns-view.h"

static NSClipView *ns_clipview_from(uintptr_t handle)
{
    void *ptr = ns_view_nsview(handle);
    if (!ptr) {
        return nil;
    }
    NSView *view = (__bridge NSView *)ptr;
    return [view isKindOfClass:[NSClipView class]] ? (NSClipView *)view : nil;
}

uintptr_t ns_clipview_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 240;
    }
    if (height <= 0) {
        height = 160;
    }
    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSClipView *clip = [[NSClipView alloc] initWithFrame:rect];
        return ns_view_wrap((__bridge void *)clip);
    }
}

uintptr_t ns_clipview_wrap(void *clip)
{
    if (!clip) {
        return 0;
    }
    @autoreleasepool {
        NSClipView *obj = (__bridge NSClipView *)clip;
        return [obj isKindOfClass:[NSClipView class]] ? ns_view_wrap(clip) : 0;
    }
}

void ns_clipview_destroy(uintptr_t clip)
{
    ns_view_destroy(clip);
}

void *ns_clipview_nsclipview(uintptr_t clip)
{
    NSClipView *obj = ns_clipview_from(clip);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_clipview_set_document_view(uintptr_t clip, uintptr_t child)
{
    void *kid = ns_view_nsview(child);
    if (!kid) {
        return;
    }
    @autoreleasepool {
        NSClipView *obj = ns_clipview_from(clip);
        if (obj) {
            obj.documentView = (__bridge NSView *)kid;
        }
    }
}

uintptr_t ns_clipview_document_view(uintptr_t clip)
{
    @autoreleasepool {
        NSClipView *obj = ns_clipview_from(clip);
        NSView *doc = obj ? obj.documentView : nil;
        return doc ? ns_view_wrap((__bridge void *)doc) : 0;
    }
}

void ns_clipview_set_draws_background(uintptr_t clip, int flag)
{
    @autoreleasepool {
        NSClipView *obj = ns_clipview_from(clip);
        if (obj) {
            obj.drawsBackground = flag ? YES : NO;
        }
    }
}

int ns_clipview_draws_background(uintptr_t clip)
{
    @autoreleasepool {
        NSClipView *obj = ns_clipview_from(clip);
        return obj && obj.drawsBackground ? 1 : 0;
    }
}

void ns_clipview_scroll_to_point(uintptr_t clip, double x, double y)
{
    @autoreleasepool {
        NSClipView *obj = ns_clipview_from(clip);
        if (obj) {
            [obj scrollToPoint:NSMakePoint((CGFloat)x, (CGFloat)y)];
        }
    }
}

void ns_clipview_set_content_insets(uintptr_t clip, double top, double left, double bottom, double right)
{
    @autoreleasepool {
        NSClipView *obj = ns_clipview_from(clip);
        if (obj) {
            obj.contentInsets = NSEdgeInsetsMake((CGFloat)top, (CGFloat)left, (CGFloat)bottom, (CGFloat)right);
        }
    }
}

void ns_clipview_set_automatically_adjusts_content_insets(uintptr_t clip, int flag)
{
    @autoreleasepool {
        NSClipView *obj = ns_clipview_from(clip);
        if (obj) {
            obj.automaticallyAdjustsContentInsets = flag ? YES : NO;
        }
    }
}

int ns_clipview_automatically_adjusts_content_insets(uintptr_t clip)
{
    @autoreleasepool {
        NSClipView *obj = ns_clipview_from(clip);
        return obj && obj.automaticallyAdjustsContentInsets ? 1 : 0;
    }
}

void ns_clipview_get_document_visible_rect(uintptr_t clip, double *x, double *y, double *w, double *h)
{
    if (x) {
        *x = 0;
    }
    if (y) {
        *y = 0;
    }
    if (w) {
        *w = 0;
    }
    if (h) {
        *h = 0;
    }
    @autoreleasepool {
        NSClipView *obj = ns_clipview_from(clip);
        if (!obj) {
            return;
        }
        NSRect r = obj.documentVisibleRect;
        if (x) {
            *x = (double)r.origin.x;
        }
        if (y) {
            *y = (double)r.origin.y;
        }
        if (w) {
            *w = (double)r.size.width;
        }
        if (h) {
            *h = (double)r.size.height;
        }
    }
}
