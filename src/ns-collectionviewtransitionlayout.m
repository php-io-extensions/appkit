#import <AppKit/AppKit.h>
#import "ns-collectionviewtransitionlayout.h"
#import "ns-collectionviewlayout.h"

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

static NSCollectionViewTransitionLayout *ns_transition_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSCollectionViewTransitionLayout class]] ? (NSCollectionViewTransitionLayout *)obj : nil;
}

uintptr_t ns_collectionviewtransitionlayout_create(uintptr_t current_layout, uintptr_t next_layout)
{
    void *curPtr = ns_collectionviewlayout_nscollectionviewlayout(current_layout);
    void *nextPtr = ns_collectionviewlayout_nscollectionviewlayout(next_layout);
    if (!curPtr || !nextPtr) {
        return 0;
    }
    @autoreleasepool {
        NSCollectionViewLayout *current = (__bridge NSCollectionViewLayout *)curPtr;
        NSCollectionViewLayout *next = (__bridge NSCollectionViewLayout *)nextPtr;
        NSCollectionViewTransitionLayout *layout = [[NSCollectionViewTransitionLayout alloc]
            initWithCurrentLayout:current nextLayout:next];
        return ns_retain_obj(layout);
    }
}

uintptr_t ns_collectionviewtransitionlayout_wrap(void *layout)
{
    if (!layout) {
        return 0;
    }
    @autoreleasepool {
        NSCollectionViewTransitionLayout *obj = (__bridge NSCollectionViewTransitionLayout *)layout;
        return [obj isKindOfClass:[NSCollectionViewTransitionLayout class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_collectionviewtransitionlayout_destroy(uintptr_t layout)
{
    ns_release_handle(layout);
}

void *ns_collectionviewtransitionlayout_nscollectionviewtransitionlayout(uintptr_t layout)
{
    NSCollectionViewTransitionLayout *obj = ns_transition_from(layout);
    return obj ? (__bridge void *)obj : NULL;
}

void ns_collectionviewtransitionlayout_set_progress(uintptr_t layout, double progress)
{
    @autoreleasepool {
        NSCollectionViewTransitionLayout *obj = ns_transition_from(layout);
        if (obj) {
            obj.transitionProgress = (CGFloat)progress;
        }
    }
}

double ns_collectionviewtransitionlayout_get_progress(uintptr_t layout)
{
    @autoreleasepool {
        NSCollectionViewTransitionLayout *obj = ns_transition_from(layout);
        return obj ? (double)obj.transitionProgress : 0.0;
    }
}

uintptr_t ns_collectionviewtransitionlayout_current_layout(uintptr_t layout)
{
    @autoreleasepool {
        NSCollectionViewTransitionLayout *obj = ns_transition_from(layout);
        if (!obj || !obj.currentLayout) {
            return 0;
        }
        return ns_collectionviewlayout_wrap((__bridge void *)obj.currentLayout);
    }
}

uintptr_t ns_collectionviewtransitionlayout_next_layout(uintptr_t layout)
{
    @autoreleasepool {
        NSCollectionViewTransitionLayout *obj = ns_transition_from(layout);
        if (!obj || !obj.nextLayout) {
            return 0;
        }
        return ns_collectionviewlayout_wrap((__bridge void *)obj.nextLayout);
    }
}

void ns_collectionviewtransitionlayout_update_value(uintptr_t layout, const char *key, double value)
{
    @autoreleasepool {
        NSCollectionViewTransitionLayout *obj = ns_transition_from(layout);
        if (!obj || !key) {
            return;
        }
        [obj updateValue:(CGFloat)value forAnimatedKey:[NSString stringWithUTF8String:key]];
    }
}

double ns_collectionviewtransitionlayout_value_for_key(uintptr_t layout, const char *key)
{
    @autoreleasepool {
        NSCollectionViewTransitionLayout *obj = ns_transition_from(layout);
        if (!obj || !key) {
            return 0.0;
        }
        return (double)[obj valueForAnimatedKey:[NSString stringWithUTF8String:key]];
    }
}
