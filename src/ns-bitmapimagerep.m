#import <AppKit/AppKit.h>
#import "ns-bitmapimagerep.h"
#import "ns-color.h"
#import "ns-imagerep.h"

static NSBitmapImageRep *ns_bitmapimagerep_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSBitmapImageRep class]] ? (NSBitmapImageRep *)obj : nil;
}

uintptr_t ns_bitmapimagerep_wrap(void *rep)
{
    if (!rep) {
        return 0;
    }
    @autoreleasepool {
        NSBitmapImageRep *obj = (__bridge NSBitmapImageRep *)rep;
        return [obj isKindOfClass:[NSBitmapImageRep class]] ? ns_imagerep_retain_obj((__bridge void *)obj) : 0;
    }
}

void ns_bitmapimagerep_destroy(uintptr_t rep)
{
    ns_imagerep_destroy(rep);
}

void *ns_bitmapimagerep_nsbitmapimagerep(uintptr_t rep)
{
    NSBitmapImageRep *obj = ns_bitmapimagerep_from(rep);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_bitmapimagerep_with_data(const char *data, size_t length)
{
    @autoreleasepool {
        if (!data || length == 0) {
            return 0;
        }
        NSData *blob = [NSData dataWithBytes:data length:length];
        NSBitmapImageRep *obj = [[NSBitmapImageRep alloc] initWithData:blob];
        return ns_imagerep_retain_obj((__bridge void *)obj);
    }
}

uintptr_t ns_bitmapimagerep_rep_with_contents_of_file(const char *path)
{
    @autoreleasepool {
        if (!path || path[0] == '\0') {
            return 0;
        }
        NSBitmapImageRep *obj = [NSBitmapImageRep imageRepWithContentsOfFile:[NSString stringWithUTF8String:path]];
        return ns_imagerep_retain_obj((__bridge void *)obj);
    }
}

uintptr_t ns_bitmapimagerep_with_pixels(int width, int height, int has_alpha)
{
    if (width <= 0 || height <= 0) {
        return 0;
    }
    @autoreleasepool {
        NSInteger spp = has_alpha ? 4 : 3;
        NSBitmapImageRep *obj = [[NSBitmapImageRep alloc]
            initWithBitmapDataPlanes:NULL
                            pixelsWide:width
                            pixelsHigh:height
                         bitsPerSample:8
                       samplesPerPixel:spp
                              hasAlpha:has_alpha ? YES : NO
                              isPlanar:NO
                        colorSpaceName:NSCalibratedRGBColorSpace
                           bytesPerRow:0
                          bitsPerPixel:0];
        return ns_imagerep_retain_obj((__bridge void *)obj);
    }
}

uintptr_t ns_bitmapimagerep_with_cgimage(uintptr_t cg_image)
{
    if (!cg_image) {
        return 0;
    }
    @autoreleasepool {
        CGImageRef imageRef = (CGImageRef)(void *)cg_image;
        NSBitmapImageRep *obj = [[NSBitmapImageRep alloc] initWithCGImage:imageRef];
        return ns_imagerep_retain_obj((__bridge void *)obj);
    }
}

int ns_bitmapimagerep_is_planar(uintptr_t rep)
{
    @autoreleasepool {
        NSBitmapImageRep *obj = ns_bitmapimagerep_from(rep);
        return obj && obj.planar ? 1 : 0;
    }
}

int ns_bitmapimagerep_samples_per_pixel(uintptr_t rep)
{
    @autoreleasepool {
        NSBitmapImageRep *obj = ns_bitmapimagerep_from(rep);
        return obj ? (int)obj.samplesPerPixel : 0;
    }
}

int ns_bitmapimagerep_bits_per_pixel(uintptr_t rep)
{
    @autoreleasepool {
        NSBitmapImageRep *obj = ns_bitmapimagerep_from(rep);
        return obj ? (int)obj.bitsPerPixel : 0;
    }
}

int ns_bitmapimagerep_bytes_per_row(uintptr_t rep)
{
    @autoreleasepool {
        NSBitmapImageRep *obj = ns_bitmapimagerep_from(rep);
        return obj ? (int)obj.bytesPerRow : 0;
    }
}

int ns_bitmapimagerep_number_of_planes(uintptr_t rep)
{
    @autoreleasepool {
        NSBitmapImageRep *obj = ns_bitmapimagerep_from(rep);
        return obj ? (int)obj.numberOfPlanes : 0;
    }
}

uintptr_t ns_bitmapimagerep_bitmap_data(uintptr_t rep)
{
    @autoreleasepool {
        NSBitmapImageRep *obj = ns_bitmapimagerep_from(rep);
        return obj && obj.bitmapData ? (uintptr_t)obj.bitmapData : 0;
    }
}

static int ns_bitmapimagerep_copy_data(NSData *data, char **out, size_t *out_len)
{
    if (!out || !out_len || !data || data.length == 0) {
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

int ns_bitmapimagerep_get_tiff_representation(uintptr_t rep, char **out, size_t *out_len)
{
    @autoreleasepool {
        NSBitmapImageRep *obj = ns_bitmapimagerep_from(rep);
        return ns_bitmapimagerep_copy_data(obj.TIFFRepresentation, out, out_len);
    }
}

int ns_bitmapimagerep_representation_using_type(uintptr_t rep, int file_type, char **out, size_t *out_len)
{
    @autoreleasepool {
        NSBitmapImageRep *obj = ns_bitmapimagerep_from(rep);
        if (!obj) {
            return 0;
        }
        NSData *data = [obj representationUsingType:(NSBitmapImageFileType)file_type properties:@{}];
        return ns_bitmapimagerep_copy_data(data, out, out_len);
    }
}

void ns_bitmapimagerep_free_buffer(char *buffer)
{
    if (buffer) {
        free(buffer);
    }
}

int ns_bitmapimagerep_set_color_at(uintptr_t rep, int x, int y, uintptr_t color)
{
    @autoreleasepool {
        NSBitmapImageRep *obj = ns_bitmapimagerep_from(rep);
        NSColor *nsColor = (__bridge NSColor *)ns_color_nscolor(color);
        if (!obj || !nsColor) {
            return 0;
        }
        [obj setColor:nsColor atX:x y:y];
        return 1;
    }
}

uintptr_t ns_bitmapimagerep_color_at(uintptr_t rep, int x, int y)
{
    @autoreleasepool {
        NSBitmapImageRep *obj = ns_bitmapimagerep_from(rep);
        if (!obj) {
            return 0;
        }
        NSColor *color = [obj colorAtX:x y:y];
        return ns_imagerep_retain_obj((__bridge void *)color);
    }
}
