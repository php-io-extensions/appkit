#import <AppKit/AppKit.h>
#import "ns-colorspace.h"

static uintptr_t ns_colorspace_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSColorSpace *ns_colorspace_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSColorSpace class]] ? (NSColorSpace *)obj : nil;
}

static int ns_colorspace_copy_nsstring(NSString *text, char *out, int out_len)
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

uintptr_t ns_colorspace_wrap(void *space)
{
    if (!space) {
        return 0;
    }
    @autoreleasepool {
        NSColorSpace *obj = (__bridge NSColorSpace *)space;
        return [obj isKindOfClass:[NSColorSpace class]] ? ns_colorspace_retain_obj(obj) : 0;
    }
}

void ns_colorspace_destroy(uintptr_t space)
{
    if (!space) {
        return;
    }
    CFRelease((void *)space);
}

void *ns_colorspace_nscolorspace(uintptr_t space)
{
    NSColorSpace *obj = ns_colorspace_from(space);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_colorspace_standard(int kind)
{
    @autoreleasepool {
        NSColorSpace *obj = nil;
        switch (kind) {
            case NS_COLORSPACE_KIND_SRGB:
                obj = NSColorSpace.sRGBColorSpace;
                break;
            case NS_COLORSPACE_KIND_GENERIC_GAMMA22_GRAY:
                obj = NSColorSpace.genericGamma22GrayColorSpace;
                break;
            case NS_COLORSPACE_KIND_EXTENDED_SRGB:
                obj = NSColorSpace.extendedSRGBColorSpace;
                break;
            case NS_COLORSPACE_KIND_EXTENDED_GENERIC_GAMMA22_GRAY:
                obj = NSColorSpace.extendedGenericGamma22GrayColorSpace;
                break;
            case NS_COLORSPACE_KIND_DISPLAY_P3:
                obj = NSColorSpace.displayP3ColorSpace;
                break;
            case NS_COLORSPACE_KIND_ADOBE_RGB1998:
                obj = NSColorSpace.adobeRGB1998ColorSpace;
                break;
            case NS_COLORSPACE_KIND_GENERIC_RGB:
                obj = NSColorSpace.genericRGBColorSpace;
                break;
            case NS_COLORSPACE_KIND_GENERIC_GRAY:
                obj = NSColorSpace.genericGrayColorSpace;
                break;
            case NS_COLORSPACE_KIND_GENERIC_CMYK:
                obj = NSColorSpace.genericCMYKColorSpace;
                break;
            case NS_COLORSPACE_KIND_DEVICE_RGB:
                obj = NSColorSpace.deviceRGBColorSpace;
                break;
            case NS_COLORSPACE_KIND_DEVICE_GRAY:
                obj = NSColorSpace.deviceGrayColorSpace;
                break;
            case NS_COLORSPACE_KIND_DEVICE_CMYK:
                obj = NSColorSpace.deviceCMYKColorSpace;
                break;
            default:
                return 0;
        }
        return ns_colorspace_retain_obj(obj);
    }
}

int ns_colorspace_model(uintptr_t space)
{
    @autoreleasepool {
        NSColorSpace *obj = ns_colorspace_from(space);
        return obj ? (int)obj.colorSpaceModel : (int)NSColorSpaceModelUnknown;
    }
}

int ns_colorspace_number_of_color_components(uintptr_t space)
{
    @autoreleasepool {
        NSColorSpace *obj = ns_colorspace_from(space);
        return obj ? (int)obj.numberOfColorComponents : 0;
    }
}

int ns_colorspace_localized_name(uintptr_t space, char *out, int out_len)
{
    @autoreleasepool {
        NSColorSpace *obj = ns_colorspace_from(space);
        if (!obj) {
            return 0;
        }
        return ns_colorspace_copy_nsstring(obj.localizedName, out, out_len);
    }
}

int ns_colorspace_available_count(int model)
{
    @autoreleasepool {
        return (int)[NSColorSpace availableColorSpacesWithModel:(NSColorSpaceModel)model].count;
    }
}

uintptr_t ns_colorspace_available_at(int model, int index)
{
    @autoreleasepool {
        NSArray<NSColorSpace *> *spaces = [NSColorSpace availableColorSpacesWithModel:(NSColorSpaceModel)model];
        if (index < 0 || index >= (int)spaces.count) {
            return 0;
        }
        return ns_colorspace_retain_obj(spaces[(NSUInteger)index]);
    }
}
