#import <AppKit/AppKit.h>
#import "ns-cachedimagerep.h"
#import "ns-imagerep.h"
#import "ns-window.h"

static NSCachedImageRep *ns_cachedimagerep_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSCachedImageRep class]] ? (NSCachedImageRep *)obj : nil;
}

uintptr_t ns_cachedimagerep_wrap(void *rep)
{
    if (!rep) {
        return 0;
    }
    @autoreleasepool {
        NSCachedImageRep *obj = (__bridge NSCachedImageRep *)rep;
        return [obj isKindOfClass:[NSCachedImageRep class]] ? ns_imagerep_retain_obj((__bridge void *)obj) : 0;
    }
}

void ns_cachedimagerep_destroy(uintptr_t rep)
{
    ns_imagerep_destroy(rep);
}

void *ns_cachedimagerep_nscachedimagerep(uintptr_t rep)
{
    NSCachedImageRep *obj = ns_cachedimagerep_from(rep);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_cachedimagerep_with_window_rect(uintptr_t window, double x, double y, double width, double height)
{
    @autoreleasepool {
        NSWindow *win = (__bridge NSWindow *)ns_window_nswindow(window);
        if (!win) {
            return 0;
        }
        NSCachedImageRep *obj = [[NSCachedImageRep alloc] initWithWindow:win
                                                                    rect:NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height)];
        return ns_imagerep_retain_obj((__bridge void *)obj);
    }
}

uintptr_t ns_cachedimagerep_with_size(double width, double height, int depth, int separate, int alpha)
{
    @autoreleasepool {
        NSCachedImageRep *obj = [[NSCachedImageRep alloc] initWithSize:NSMakeSize((CGFloat)width, (CGFloat)height)
                                                                 depth:(NSWindowDepth)depth
                                                              separate:separate ? YES : NO
                                                                 alpha:alpha ? YES : NO];
        return ns_imagerep_retain_obj((__bridge void *)obj);
    }
}

uintptr_t ns_cachedimagerep_window(uintptr_t rep)
{
    @autoreleasepool {
        NSCachedImageRep *obj = ns_cachedimagerep_from(rep);
        return obj && obj.window ? (uintptr_t)(__bridge void *)obj.window : 0;
    }
}

int ns_cachedimagerep_get_rect(uintptr_t rep, double *x, double *y, double *width, double *height)
{
    if (!x || !y || !width || !height) {
        return 0;
    }
    @autoreleasepool {
        NSCachedImageRep *obj = ns_cachedimagerep_from(rep);
        if (!obj) {
            return 0;
        }
        NSRect rect = obj.rect;
        *x = (double)rect.origin.x;
        *y = (double)rect.origin.y;
        *width = (double)rect.size.width;
        *height = (double)rect.size.height;
        return 1;
    }
}
