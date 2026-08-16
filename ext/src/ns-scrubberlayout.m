#import <AppKit/AppKit.h>
#import "ns-scrubberlayout.h"
#import "ns-scrubber.h"

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

static NSScrubberLayout *ns_scrubberlayout_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSScrubberLayout class]] ? (NSScrubberLayout *)obj : nil;
}

uintptr_t ns_scrubberlayout_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSScrubberLayout alloc] init]);
    }
}

uintptr_t ns_scrubberlayout_wrap(void *layout)
{
    if (!layout) {
        return 0;
    }
    @autoreleasepool {
        NSScrubberLayout *obj = (__bridge NSScrubberLayout *)layout;
        return [obj isKindOfClass:[NSScrubberLayout class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_scrubberlayout_destroy(uintptr_t layout)
{
    ns_release_handle(layout);
}

void *ns_scrubberlayout_nsscrubberlayout(uintptr_t layout)
{
    NSScrubberLayout *obj = ns_scrubberlayout_from(layout);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_scrubberlayout_invalidate(uintptr_t layout)
{
    @autoreleasepool {
        NSScrubberLayout *obj = ns_scrubberlayout_from(layout);
        if (obj) {
            [obj invalidateLayout];
        }
    }
}

uintptr_t ns_scrubberlayout_scrubber(uintptr_t layout)
{
    @autoreleasepool {
        NSScrubberLayout *obj = ns_scrubberlayout_from(layout);
        if (!obj || !obj.scrubber) {
            return 0;
        }
        return ns_scrubber_wrap((__bridge void *)obj.scrubber);
    }
}

int ns_scrubberlayout_visible_rect(uintptr_t layout, double *x, double *y, double *width, double *height)
{
    @autoreleasepool {
        NSScrubberLayout *obj = ns_scrubberlayout_from(layout);
        if (!obj) {
            return 0;
        }
        NSRect rect = obj.visibleRect;
        if (x) {
            *x = (double)rect.origin.x;
        }
        if (y) {
            *y = (double)rect.origin.y;
        }
        if (width) {
            *width = (double)rect.size.width;
        }
        if (height) {
            *height = (double)rect.size.height;
        }
        return 1;
    }
}

double ns_scrubberlayout_content_width(uintptr_t layout)
{
    @autoreleasepool {
        NSScrubberLayout *obj = ns_scrubberlayout_from(layout);
        return obj ? (double)obj.scrubberContentSize.width : 0.0;
    }
}

double ns_scrubberlayout_content_height(uintptr_t layout)
{
    @autoreleasepool {
        NSScrubberLayout *obj = ns_scrubberlayout_from(layout);
        return obj ? (double)obj.scrubberContentSize.height : 0.0;
    }
}

int ns_scrubberlayout_should_invalidate_for_selection_change(uintptr_t layout)
{
    @autoreleasepool {
        NSScrubberLayout *obj = ns_scrubberlayout_from(layout);
        return obj && obj.shouldInvalidateLayoutForSelectionChange ? 1 : 0;
    }
}

int ns_scrubberlayout_should_invalidate_for_highlight_change(uintptr_t layout)
{
    @autoreleasepool {
        NSScrubberLayout *obj = ns_scrubberlayout_from(layout);
        return obj && obj.shouldInvalidateLayoutForHighlightChange ? 1 : 0;
    }
}

int ns_scrubberlayout_automatically_mirrors_in_rtl(uintptr_t layout)
{
    @autoreleasepool {
        NSScrubberLayout *obj = ns_scrubberlayout_from(layout);
        return obj && obj.automaticallyMirrorsInRightToLeftLayout ? 1 : 0;
    }
}
