#import <AppKit/AppKit.h>
#import "ns-scrubberflowlayout.h"

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

static NSScrubberFlowLayout *ns_scrubberflowlayout_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSScrubberFlowLayout class]] ? (NSScrubberFlowLayout *)obj : nil;
}

uintptr_t ns_scrubberflowlayout_create(void)
{
    @autoreleasepool {
        NSScrubberFlowLayout *layout = [[NSScrubberFlowLayout alloc] init];
        layout.itemSize = NSMakeSize(50.0, 30.0);
        return ns_retain_obj(layout);
    }
}

uintptr_t ns_scrubberflowlayout_wrap(void *layout)
{
    if (!layout) {
        return 0;
    }
    @autoreleasepool {
        NSScrubberFlowLayout *obj = (__bridge NSScrubberFlowLayout *)layout;
        return [obj isKindOfClass:[NSScrubberFlowLayout class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_scrubberflowlayout_destroy(uintptr_t layout)
{
    ns_release_handle(layout);
}

void *ns_scrubberflowlayout_nsscrubberflowlayout(uintptr_t layout)
{
    NSScrubberFlowLayout *obj = ns_scrubberflowlayout_from(layout);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_scrubberflowlayout_set_item_spacing(uintptr_t layout, double spacing)
{
    @autoreleasepool {
        NSScrubberFlowLayout *obj = ns_scrubberflowlayout_from(layout);
        if (obj) {
            obj.itemSpacing = (CGFloat)spacing;
        }
    }
}

double ns_scrubberflowlayout_get_item_spacing(uintptr_t layout)
{
    @autoreleasepool {
        NSScrubberFlowLayout *obj = ns_scrubberflowlayout_from(layout);
        return obj ? (double)obj.itemSpacing : 0.0;
    }
}

void ns_scrubberflowlayout_set_item_size(uintptr_t layout, double width, double height)
{
    @autoreleasepool {
        NSScrubberFlowLayout *obj = ns_scrubberflowlayout_from(layout);
        if (obj) {
            obj.itemSize = NSMakeSize((CGFloat)width, (CGFloat)height);
        }
    }
}

int ns_scrubberflowlayout_get_item_size(uintptr_t layout, double *width, double *height)
{
    @autoreleasepool {
        NSScrubberFlowLayout *obj = ns_scrubberflowlayout_from(layout);
        if (!obj) {
            return 0;
        }
        if (width) {
            *width = (double)obj.itemSize.width;
        }
        if (height) {
            *height = (double)obj.itemSize.height;
        }
        return 1;
    }
}

void ns_scrubberflowlayout_invalidate_items_at_indexes(uintptr_t layout, const int *indexes, int count)
{
    if (!indexes || count <= 0) {
        return;
    }
    @autoreleasepool {
        NSScrubberFlowLayout *obj = ns_scrubberflowlayout_from(layout);
        if (!obj) {
            return;
        }
        NSMutableIndexSet *set = [NSMutableIndexSet indexSet];
        for (int i = 0; i < count; i++) {
            if (indexes[i] >= 0) {
                [set addIndex:(NSUInteger)indexes[i]];
            }
        }
        if (set.count > 0) {
            [obj invalidateLayoutForItemsAtIndexes:set];
        }
    }
}
