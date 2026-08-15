#import <AppKit/AppKit.h>
#import "ns-customimagerep.h"
#import "ns-imagerep.h"

static NSCustomImageRep *ns_customimagerep_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSCustomImageRep class]] ? (NSCustomImageRep *)obj : nil;
}

uintptr_t ns_customimagerep_wrap(void *rep)
{
    if (!rep) {
        return 0;
    }
    @autoreleasepool {
        NSCustomImageRep *obj = (__bridge NSCustomImageRep *)rep;
        return [obj isKindOfClass:[NSCustomImageRep class]] ? ns_imagerep_retain_obj((__bridge void *)obj) : 0;
    }
}

void ns_customimagerep_destroy(uintptr_t rep)
{
    ns_imagerep_destroy(rep);
}

void *ns_customimagerep_nscustomimagerep(uintptr_t rep)
{
    NSCustomImageRep *obj = ns_customimagerep_from(rep);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_customimagerep_create(double width, double height, int flipped)
{
    if (width <= 0 || height <= 0) {
        return 0;
    }
    @autoreleasepool {
        NSCustomImageRep *obj = [[NSCustomImageRep alloc] initWithSize:NSMakeSize((CGFloat)width, (CGFloat)height)
                                                                 flipped:flipped ? YES : NO
                                                          drawingHandler:^BOOL(NSRect dstRect) {
                                                              (void)dstRect;
                                                              return YES;
                                                          }];
        return ns_imagerep_retain_obj((__bridge void *)obj);
    }
}

uintptr_t ns_customimagerep_draw_selector(uintptr_t rep)
{
    @autoreleasepool {
        NSCustomImageRep *obj = ns_customimagerep_from(rep);
        return obj ? (uintptr_t)obj.drawSelector : 0;
    }
}

uintptr_t ns_customimagerep_delegate(uintptr_t rep)
{
    @autoreleasepool {
        NSCustomImageRep *obj = ns_customimagerep_from(rep);
        return obj && obj.delegate ? (uintptr_t)(__bridge void *)obj.delegate : 0;
    }
}
