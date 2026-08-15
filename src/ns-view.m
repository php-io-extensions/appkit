#import <AppKit/AppKit.h>
#import "ns-view.h"

typedef struct {
    void *view;
} ns_view_box;

static inline ns_view_box *ns_view_box_from(uintptr_t handle)
{
    return handle ? (ns_view_box *)handle : NULL;
}

static inline void *ns_retain_obj(id object)
{
    return object ? (__bridge_retained void *)object : NULL;
}

static inline void ns_release_obj(void **slot)
{
    if (slot && *slot) {
        CFRelease(*slot);
        *slot = NULL;
    }
}

static uintptr_t ns_view_box_make(NSView *view)
{
    if (!view) {
        return 0;
    }

    ns_view_box *box = calloc(1, sizeof(ns_view_box));
    if (!box) {
        return 0;
    }
    box->view = ns_retain_obj(view);
    return (uintptr_t)box;
}

uintptr_t ns_view_create(double x, double y, double width, double height)
{
    if (width <= 0) {
        width = 100;
    }
    if (height <= 0) {
        height = 100;
    }

    @autoreleasepool {
        NSRect rect = NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height);
        NSView *view = [[NSView alloc] initWithFrame:rect];
        return ns_view_box_make(view);
    }
}

uintptr_t ns_view_wrap(void *nsview)
{
    if (!nsview) {
        return 0;
    }
    @autoreleasepool {
        NSView *view = (__bridge NSView *)nsview;
        return ns_view_box_make(view);
    }
}

void *ns_view_nsview(uintptr_t view)
{
    ns_view_box *box = ns_view_box_from(view);
    return box ? box->view : NULL;
}

void ns_view_destroy(uintptr_t view)
{
    ns_view_box *box = ns_view_box_from(view);
    if (!box) {
        return;
    }

    @autoreleasepool {
        if (box->view) {
            NSView *nsview = (__bridge NSView *)box->view;
            [nsview removeFromSuperview];
        }
        ns_release_obj(&box->view);
    }
    free(box);
}

void ns_view_add_subview(uintptr_t parent, uintptr_t child)
{
    ns_view_box *p = ns_view_box_from(parent);
    ns_view_box *c = ns_view_box_from(child);
    if (!p || !c || !p->view || !c->view) {
        return;
    }

    @autoreleasepool {
        NSView *parentView = (__bridge NSView *)p->view;
        NSView *childView = (__bridge NSView *)c->view;
        [parentView addSubview:childView];
    }
}

void ns_view_set_frame(uintptr_t view, double x, double y, double width, double height)
{
    ns_view_box *box = ns_view_box_from(view);
    if (!box || !box->view) {
        return;
    }

    @autoreleasepool {
        NSView *nsview = (__bridge NSView *)box->view;
        [nsview setFrame:NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height)];
    }
}

int ns_view_get_width(uintptr_t view)
{
    ns_view_box *box = ns_view_box_from(view);
    if (!box || !box->view) {
        return 0;
    }
    NSView *nsview = (__bridge NSView *)box->view;
    return (int)lround(nsview.bounds.size.width);
}

int ns_view_get_height(uintptr_t view)
{
    ns_view_box *box = ns_view_box_from(view);
    if (!box || !box->view) {
        return 0;
    }
    NSView *nsview = (__bridge NSView *)box->view;
    return (int)lround(nsview.bounds.size.height);
}
