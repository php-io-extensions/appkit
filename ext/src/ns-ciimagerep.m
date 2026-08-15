#import <AppKit/AppKit.h>
#import <CoreImage/CoreImage.h>
#import "ns-ciimagerep.h"
#import "ns-imagerep.h"

static NSCIImageRep *ns_ciimagerep_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSCIImageRep class]] ? (NSCIImageRep *)obj : nil;
}

uintptr_t ns_ciimagerep_wrap(void *rep)
{
    if (!rep) {
        return 0;
    }
    @autoreleasepool {
        NSCIImageRep *obj = (__bridge NSCIImageRep *)rep;
        return [obj isKindOfClass:[NSCIImageRep class]] ? ns_imagerep_retain_obj((__bridge void *)obj) : 0;
    }
}

void ns_ciimagerep_destroy(uintptr_t rep)
{
    ns_imagerep_destroy(rep);
}

void *ns_ciimagerep_nsciimagerep(uintptr_t rep)
{
    NSCIImageRep *obj = ns_ciimagerep_from(rep);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_ciimagerep_with_ciimage(uintptr_t ci_image)
{
    if (!ci_image) {
        return 0;
    }
    @autoreleasepool {
        CIImage *image = (__bridge CIImage *)(void *)ci_image;
        if (![image isKindOfClass:[CIImage class]]) {
            return 0;
        }
        NSCIImageRep *obj = [NSCIImageRep imageRepWithCIImage:image];
        return ns_imagerep_retain_obj((__bridge void *)obj);
    }
}

uintptr_t ns_ciimagerep_ciimage(uintptr_t rep)
{
    @autoreleasepool {
        NSCIImageRep *obj = ns_ciimagerep_from(rep);
        return obj && obj.CIImage ? (uintptr_t)(__bridge void *)obj.CIImage : 0;
    }
}
