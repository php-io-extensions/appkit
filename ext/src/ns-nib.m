#import <AppKit/AppKit.h>
#import "ns-nib.h"

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

static NSNib *ns_nib_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSNib class]] ? (NSNib *)obj : nil;
}

uintptr_t ns_nib_create_named(const char *nib_name, const char *bundle_path)
{
    @autoreleasepool {
        if (!nib_name) {
            return 0;
        }
        NSBundle *bundle = nil;
        if (bundle_path && bundle_path[0] != '\0') {
            bundle = [NSBundle bundleWithPath:[NSString stringWithUTF8String:bundle_path]];
        }
        NSNib *nib = [[NSNib alloc] initWithNibNamed:[NSString stringWithUTF8String:nib_name] bundle:bundle];
        return nib ? ns_retain_obj(nib) : 0;
    }
}

uintptr_t ns_nib_wrap(void *nib)
{
    if (!nib) {
        return 0;
    }
    @autoreleasepool {
        NSNib *obj = (__bridge NSNib *)nib;
        return [obj isKindOfClass:[NSNib class]] ? ns_retain_obj(obj) : 0;
    }
}

void ns_nib_destroy(uintptr_t nib)
{
    ns_release_handle(nib);
}

void *ns_nib_nsnib(uintptr_t nib)
{
    NSNib *obj = ns_nib_from(nib);
    return obj ? (__bridge void *)obj : NULL;
}

int ns_nib_instantiate_with_owner(uintptr_t nib, uintptr_t owner_ptr, int *top_level_count)
{
    @autoreleasepool {
        NSNib *obj = ns_nib_from(nib);
        if (!obj) {
            if (top_level_count) {
                *top_level_count = 0;
            }
            return 0;
        }
        id owner = owner_ptr ? (__bridge id)(void *)owner_ptr : nil;
        NSArray *topLevel = nil;
        BOOL ok = [obj instantiateWithOwner:owner topLevelObjects:&topLevel];
        if (top_level_count) {
            *top_level_count = topLevel ? (int)topLevel.count : 0;
        }
        return ok ? 1 : 0;
    }
}
