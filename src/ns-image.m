#import <AppKit/AppKit.h>
#import "ns-image.h"
#import "ns-imagerep.h"

static NSImage *ns_image_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSImage class]] ? (NSImage *)obj : nil;
}

static int ns_image_copy_nsstring(NSString *text, char *out, int out_len)
{
    if (!out || out_len <= 0) {
        return 0;
    }
    if (!text) {
        out[0] = '\0';
        return 1;
    }
    return [text getCString:out maxLength:(NSUInteger)out_len encoding:NSUTF8StringEncoding] ? 1 : 0;
}

uintptr_t ns_image_wrap(void *image)
{
    if (!image) {
        return 0;
    }
    @autoreleasepool {
        NSImage *obj = (__bridge NSImage *)image;
        return [obj isKindOfClass:[NSImage class]] ? ns_imagerep_retain_obj((__bridge void *)obj) : 0;
    }
}

void ns_image_destroy(uintptr_t image)
{
    ns_imagerep_destroy(image);
}

void *ns_image_nsimage(uintptr_t image)
{
    NSImage *obj = ns_image_from(image);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_image_named(const char *name)
{
    @autoreleasepool {
        if (!name || name[0] == '\0') {
            return 0;
        }
        NSImage *obj = [NSImage imageNamed:[NSString stringWithUTF8String:name]];
        return ns_imagerep_retain_obj((__bridge void *)obj);
    }
}

uintptr_t ns_image_with_system_symbol_name(const char *name, const char *description)
{
    @autoreleasepool {
        if (!name || name[0] == '\0') {
            return 0;
        }
        NSString *desc = description ? [NSString stringWithUTF8String:description] : nil;
        NSImage *obj = [NSImage imageWithSystemSymbolName:[NSString stringWithUTF8String:name]
                                 accessibilityDescription:desc];
        return ns_imagerep_retain_obj((__bridge void *)obj);
    }
}

uintptr_t ns_image_with_size(double width, double height)
{
    @autoreleasepool {
        NSImage *obj = [[NSImage alloc] initWithSize:NSMakeSize((CGFloat)width, (CGFloat)height)];
        return ns_imagerep_retain_obj((__bridge void *)obj);
    }
}

uintptr_t ns_image_with_contents_of_file(const char *path)
{
    @autoreleasepool {
        if (!path || path[0] == '\0') {
            return 0;
        }
        NSImage *obj = [[NSImage alloc] initWithContentsOfFile:[NSString stringWithUTF8String:path]];
        return ns_imagerep_retain_obj((__bridge void *)obj);
    }
}

uintptr_t ns_image_with_data(const char *data, size_t length)
{
    @autoreleasepool {
        if (!data || length == 0) {
            return 0;
        }
        NSData *blob = [NSData dataWithBytes:data length:length];
        NSImage *obj = [[NSImage alloc] initWithData:blob];
        return ns_imagerep_retain_obj((__bridge void *)obj);
    }
}

uintptr_t ns_image_by_referencing_file(const char *path)
{
    @autoreleasepool {
        if (!path || path[0] == '\0') {
            return 0;
        }
        NSImage *obj = [[NSImage alloc] initByReferencingFile:[NSString stringWithUTF8String:path]];
        return ns_imagerep_retain_obj((__bridge void *)obj);
    }
}

int ns_image_get_size(uintptr_t image, double *width, double *height)
{
    if (!width || !height) {
        return 0;
    }
    @autoreleasepool {
        NSImage *obj = ns_image_from(image);
        if (!obj) {
            return 0;
        }
        *width = (double)obj.size.width;
        *height = (double)obj.size.height;
        return 1;
    }
}

void ns_image_set_size(uintptr_t image, double width, double height)
{
    @autoreleasepool {
        NSImage *obj = ns_image_from(image);
        if (obj) {
            obj.size = NSMakeSize((CGFloat)width, (CGFloat)height);
        }
    }
}

int ns_image_is_valid(uintptr_t image)
{
    @autoreleasepool {
        NSImage *obj = ns_image_from(image);
        return obj && obj.valid ? 1 : 0;
    }
}

int ns_image_is_template(uintptr_t image)
{
    @autoreleasepool {
        NSImage *obj = ns_image_from(image);
        return obj && obj.template ? 1 : 0;
    }
}

void ns_image_set_template(uintptr_t image, int is_template)
{
    @autoreleasepool {
        NSImage *obj = ns_image_from(image);
        if (obj) {
            obj.template = is_template ? YES : NO;
        }
    }
}

int ns_image_set_name(uintptr_t image, const char *name)
{
    @autoreleasepool {
        NSImage *obj = ns_image_from(image);
        if (!obj) {
            return 0;
        }
        if (!name || name[0] == '\0') {
            return [obj setName:nil] ? 1 : 0;
        }
        return [obj setName:[NSString stringWithUTF8String:name]] ? 1 : 0;
    }
}

int ns_image_get_name(uintptr_t image, char *out, int out_len)
{
    @autoreleasepool {
        NSImage *obj = ns_image_from(image);
        if (!obj) {
            return 0;
        }
        return ns_image_copy_nsstring(obj.name, out, out_len);
    }
}

void ns_image_add_representation(uintptr_t image, uintptr_t rep)
{
    @autoreleasepool {
        NSImage *obj = ns_image_from(image);
        NSImageRep *imageRep = (__bridge NSImageRep *)(void *)ns_imagerep_nsimagerep(rep);
        if (obj && imageRep) {
            [obj addRepresentation:imageRep];
        }
    }
}

void ns_image_remove_representation(uintptr_t image, uintptr_t rep)
{
    @autoreleasepool {
        NSImage *obj = ns_image_from(image);
        NSImageRep *imageRep = (__bridge NSImageRep *)(void *)ns_imagerep_nsimagerep(rep);
        if (obj && imageRep) {
            [obj removeRepresentation:imageRep];
        }
    }
}

int ns_image_representation_count(uintptr_t image)
{
    @autoreleasepool {
        NSImage *obj = ns_image_from(image);
        return obj ? (int)obj.representations.count : 0;
    }
}

uintptr_t ns_image_representation_at(uintptr_t image, int index)
{
    @autoreleasepool {
        NSImage *obj = ns_image_from(image);
        if (!obj) {
            return 0;
        }
        NSArray<NSImageRep *> *reps = obj.representations;
        if (index < 0 || index >= (int)reps.count) {
            return 0;
        }
        return ns_imagerep_retain_obj((__bridge void *)reps[(NSUInteger)index]);
    }
}

int ns_image_draw_in_rect(uintptr_t image, double x, double y, double width, double height)
{
    @autoreleasepool {
        NSImage *obj = ns_image_from(image);
        if (!obj) {
            return 0;
        }
        [obj drawInRect:NSMakeRect((CGFloat)x, (CGFloat)y, (CGFloat)width, (CGFloat)height)];
        return 1;
    }
}

int ns_image_get_tiff_representation(uintptr_t image, char **out, size_t *out_len)
{
    if (!out || !out_len) {
        return 0;
    }
    *out = NULL;
    *out_len = 0;
    @autoreleasepool {
        NSImage *obj = ns_image_from(image);
        NSData *data = obj.TIFFRepresentation;
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

void ns_image_free_buffer(char *buffer)
{
    if (buffer) {
        free(buffer);
    }
}

int ns_image_get_cache_mode(uintptr_t image)
{
    @autoreleasepool {
        NSImage *obj = ns_image_from(image);
        return obj ? (int)obj.cacheMode : NSImageCacheDefault;
    }
}

void ns_image_set_cache_mode(uintptr_t image, int mode)
{
    @autoreleasepool {
        NSImage *obj = ns_image_from(image);
        if (obj) {
            obj.cacheMode = (NSImageCacheMode)mode;
        }
    }
}

int ns_image_get_accessibility_description(uintptr_t image, char *out, int out_len)
{
    @autoreleasepool {
        NSImage *obj = ns_image_from(image);
        if (!obj) {
            return 0;
        }
        return ns_image_copy_nsstring(obj.accessibilityDescription, out, out_len);
    }
}

void ns_image_set_accessibility_description(uintptr_t image, const char *description)
{
    @autoreleasepool {
        NSImage *obj = ns_image_from(image);
        if (!obj) {
            return;
        }
        if (!description || description[0] == '\0') {
            obj.accessibilityDescription = nil;
            return;
        }
        obj.accessibilityDescription = [NSString stringWithUTF8String:description];
    }
}
