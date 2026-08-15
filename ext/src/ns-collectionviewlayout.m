#import <AppKit/AppKit.h>
#import "ns-collectionviewlayout.h"
#import "ns-view.h"

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

static NSCollectionViewLayout *ns_layout_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSCollectionViewLayout class]] ? (NSCollectionViewLayout *)obj : nil;
}

uintptr_t ns_collectionviewlayout_create(void)
{
    @autoreleasepool {
        return ns_retain_obj([[NSCollectionViewLayout alloc] init]);
    }
}

uintptr_t ns_collectionviewlayout_wrap(void *layout)
{
    if (!layout) {
        return 0;
    }
    @autoreleasepool {
        NSCollectionViewLayout *obj = (__bridge NSCollectionViewLayout *)layout;
        return [obj isKindOfClass:[NSCollectionViewLayout class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_collectionviewlayout_destroy(uintptr_t layout)
{
    ns_release_handle(layout);
}

void *ns_collectionviewlayout_nscollectionviewlayout(uintptr_t layout)
{
    NSCollectionViewLayout *obj = ns_layout_from(layout);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_collectionviewlayout_invalidate(uintptr_t layout)
{
    @autoreleasepool {
        NSCollectionViewLayout *obj = ns_layout_from(layout);
        if (obj) {
            [obj invalidateLayout];
        }
    }
}

uintptr_t ns_collectionviewlayout_collection_view(uintptr_t layout)
{
    @autoreleasepool {
        NSCollectionViewLayout *obj = ns_layout_from(layout);
        if (!obj || !obj.collectionView) {
            return 0;
        }
        return ns_view_wrap((__bridge void *)obj.collectionView);
    }
}

double ns_collectionviewlayout_content_width(uintptr_t layout)
{
    @autoreleasepool {
        NSCollectionViewLayout *obj = ns_layout_from(layout);
        return obj ? (double)obj.collectionViewContentSize.width : 0.0;
    }
}

double ns_collectionviewlayout_content_height(uintptr_t layout)
{
    @autoreleasepool {
        NSCollectionViewLayout *obj = ns_layout_from(layout);
        return obj ? (double)obj.collectionViewContentSize.height : 0.0;
    }
}
