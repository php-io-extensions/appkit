#import <AppKit/AppKit.h>
#import "ns-scrubberproportionallayout.h"

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

static NSScrubberProportionalLayout *ns_scrubberproportionallayout_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSScrubberProportionalLayout class]] ? (NSScrubberProportionalLayout *)obj : nil;
}

uintptr_t ns_scrubberproportionallayout_create(int numberOfVisibleItems)
{
    if (numberOfVisibleItems <= 0) {
        numberOfVisibleItems = 1;
    }
    @autoreleasepool {
        return ns_retain_obj([[NSScrubberProportionalLayout alloc] initWithNumberOfVisibleItems:numberOfVisibleItems]);
    }
}

uintptr_t ns_scrubberproportionallayout_wrap(void *layout)
{
    if (!layout) {
        return 0;
    }
    @autoreleasepool {
        NSScrubberProportionalLayout *obj = (__bridge NSScrubberProportionalLayout *)layout;
        return [obj isKindOfClass:[NSScrubberProportionalLayout class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_scrubberproportionallayout_destroy(uintptr_t layout)
{
    ns_release_handle(layout);
}

void *ns_scrubberproportionallayout_nsscrubberproportionallayout(uintptr_t layout)
{
    NSScrubberProportionalLayout *obj = ns_scrubberproportionallayout_from(layout);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_scrubberproportionallayout_set_number_of_visible_items(uintptr_t layout, int count)
{
    @autoreleasepool {
        NSScrubberProportionalLayout *obj = ns_scrubberproportionallayout_from(layout);
        if (obj && count > 0) {
            obj.numberOfVisibleItems = count;
        }
    }
}

int ns_scrubberproportionallayout_get_number_of_visible_items(uintptr_t layout)
{
    @autoreleasepool {
        NSScrubberProportionalLayout *obj = ns_scrubberproportionallayout_from(layout);
        return obj ? (int)obj.numberOfVisibleItems : 0;
    }
}
