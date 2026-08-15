#import <AppKit/AppKit.h>
#import "ns-epsimagerep.h"
#import "ns-imagerep.h"

static NSEPSImageRep *ns_epsimagerep_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSEPSImageRep class]] ? (NSEPSImageRep *)obj : nil;
}

uintptr_t ns_epsimagerep_wrap(void *rep)
{
    if (!rep) {
        return 0;
    }
    @autoreleasepool {
        NSEPSImageRep *obj = (__bridge NSEPSImageRep *)rep;
        return [obj isKindOfClass:[NSEPSImageRep class]] ? ns_imagerep_retain_obj((__bridge void *)obj) : 0;
    }
}

void ns_epsimagerep_destroy(uintptr_t rep)
{
    ns_imagerep_destroy(rep);
}

void *ns_epsimagerep_nsepsimagerep(uintptr_t rep)
{
    NSEPSImageRep *obj = ns_epsimagerep_from(rep);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_epsimagerep_with_data(const char *data, size_t length)
{
    @autoreleasepool {
        if (!data || length == 0) {
            return 0;
        }
        NSData *blob = [NSData dataWithBytes:data length:length];
        NSEPSImageRep *obj = [[NSEPSImageRep alloc] initWithData:blob];
        return ns_imagerep_retain_obj((__bridge void *)obj);
    }
}

int ns_epsimagerep_get_bounding_box(uintptr_t rep, double *x, double *y, double *width, double *height)
{
    if (!x || !y || !width || !height) {
        return 0;
    }
    @autoreleasepool {
        NSEPSImageRep *obj = ns_epsimagerep_from(rep);
        if (!obj) {
            return 0;
        }
        NSRect rect = obj.boundingBox;
        *x = (double)rect.origin.x;
        *y = (double)rect.origin.y;
        *width = (double)rect.size.width;
        *height = (double)rect.size.height;
        return 1;
    }
}

int ns_epsimagerep_get_eps_representation(uintptr_t rep, char **out, size_t *out_len)
{
    if (!out || !out_len) {
        return 0;
    }
    *out = NULL;
    *out_len = 0;
    @autoreleasepool {
        NSEPSImageRep *obj = ns_epsimagerep_from(rep);
        NSData *data = obj.EPSRepresentation;
        if (!obj || !data || data.length == 0) {
            return 0;
        }
        char *copy = (char *)malloc(data.length);
        if (!copy) {
            return 0;
        }
        memcpy(copy, data.bytes, data.length);
        *out = copy;
        *out_len = data.length;
        return 1;
    }
}

void ns_epsimagerep_free_buffer(char *buffer)
{
    if (buffer) {
        free(buffer);
    }
}
