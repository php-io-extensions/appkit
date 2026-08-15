#import <AppKit/AppKit.h>
#import "ns-color.h"
#import "ns-colorspace.h"

static uintptr_t ns_color_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSColor *ns_color_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSColor class]] ? (NSColor *)obj : nil;
}

static int ns_color_copy_nsstring(NSString *text, char *out, int out_len)
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

static NSColor *ns_color_srgb_from(NSColor *color)
{
    if (!color) {
        return nil;
    }
    return [color colorUsingColorSpace:[NSColorSpace sRGBColorSpace]];
}

uintptr_t ns_color_wrap(void *color)
{
    if (!color) {
        return 0;
    }
    @autoreleasepool {
        NSColor *obj = (__bridge NSColor *)color;
        return [obj isKindOfClass:[NSColor class]] ? ns_color_retain_obj(obj) : 0;
    }
}

void ns_color_destroy(uintptr_t color)
{
    if (!color) {
        return;
    }
    CFRelease((void *)color);
}

void *ns_color_nscolor(uintptr_t color)
{
    NSColor *obj = ns_color_from(color);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_color_with_rgba(double red, double green, double blue, double alpha)
{
    @autoreleasepool {
        return ns_color_retain_obj([NSColor colorWithRed:(CGFloat)red
                                                  green:(CGFloat)green
                                                   blue:(CGFloat)blue
                                                  alpha:(CGFloat)alpha]);
    }
}

uintptr_t ns_color_with_srgb_bytes(int red, int green, int blue, int alpha)
{
    @autoreleasepool {
        return ns_color_retain_obj([NSColor colorWithRed:((CGFloat)red) / 255.0
                                                  green:((CGFloat)green) / 255.0
                                                   blue:((CGFloat)blue) / 255.0
                                                  alpha:((CGFloat)alpha) / 255.0]);
    }
}

uintptr_t ns_color_with_white(double white, double alpha)
{
    @autoreleasepool {
        return ns_color_retain_obj([NSColor colorWithWhite:(CGFloat)white alpha:(CGFloat)alpha]);
    }
}

uintptr_t ns_color_with_hsb(double hue, double saturation, double brightness, double alpha)
{
    @autoreleasepool {
        return ns_color_retain_obj([NSColor colorWithHue:(CGFloat)hue
                                              saturation:(CGFloat)saturation
                                              brightness:(CGFloat)brightness
                                                   alpha:(CGFloat)alpha]);
    }
}

uintptr_t ns_color_named(const char *name)
{
    @autoreleasepool {
        if (!name || name[0] == '\0') {
            return 0;
        }
        NSColor *obj = [NSColor colorNamed:[NSString stringWithUTF8String:name]];
        return ns_color_retain_obj(obj);
    }
}

uintptr_t ns_color_with_catalog(const char *listName, const char *colorName)
{
    @autoreleasepool {
        if (!listName || listName[0] == '\0' || !colorName || colorName[0] == '\0') {
            return 0;
        }
        NSColor *obj = [NSColor colorWithCatalogName:[NSString stringWithUTF8String:listName]
                                           colorName:[NSString stringWithUTF8String:colorName]];
        return ns_color_retain_obj(obj);
    }
}

uintptr_t ns_color_standard(int kind)
{
    @autoreleasepool {
        NSColor *obj = nil;
        switch (kind) {
            case NS_COLOR_KIND_BLACK:
                obj = NSColor.blackColor;
                break;
            case NS_COLOR_KIND_DARK_GRAY:
                obj = NSColor.darkGrayColor;
                break;
            case NS_COLOR_KIND_LIGHT_GRAY:
                obj = NSColor.lightGrayColor;
                break;
            case NS_COLOR_KIND_WHITE:
                obj = NSColor.whiteColor;
                break;
            case NS_COLOR_KIND_GRAY:
                obj = NSColor.grayColor;
                break;
            case NS_COLOR_KIND_RED:
                obj = NSColor.redColor;
                break;
            case NS_COLOR_KIND_GREEN:
                obj = NSColor.greenColor;
                break;
            case NS_COLOR_KIND_BLUE:
                obj = NSColor.blueColor;
                break;
            case NS_COLOR_KIND_CYAN:
                obj = NSColor.cyanColor;
                break;
            case NS_COLOR_KIND_YELLOW:
                obj = NSColor.yellowColor;
                break;
            case NS_COLOR_KIND_MAGENTA:
                obj = NSColor.magentaColor;
                break;
            case NS_COLOR_KIND_ORANGE:
                obj = NSColor.orangeColor;
                break;
            case NS_COLOR_KIND_PURPLE:
                obj = NSColor.purpleColor;
                break;
            case NS_COLOR_KIND_BROWN:
                obj = NSColor.brownColor;
                break;
            case NS_COLOR_KIND_CLEAR:
                obj = NSColor.clearColor;
                break;
            case NS_COLOR_KIND_LABEL:
                obj = NSColor.labelColor;
                break;
            case NS_COLOR_KIND_SECONDARY_LABEL:
                obj = NSColor.secondaryLabelColor;
                break;
            case NS_COLOR_KIND_CONTROL_ACCENT:
                obj = NSColor.controlAccentColor;
                break;
            case NS_COLOR_KIND_TEXT:
                obj = NSColor.textColor;
                break;
            case NS_COLOR_KIND_CONTROL:
                obj = NSColor.controlColor;
                break;
            case NS_COLOR_KIND_WINDOW_BACKGROUND:
                obj = NSColor.windowBackgroundColor;
                break;
            case NS_COLOR_KIND_SEPARATOR:
                obj = NSColor.separatorColor;
                break;
            default:
                return 0;
        }
        return ns_color_retain_obj(obj);
    }
}

uintptr_t ns_color_with_alpha(uintptr_t color, double alpha)
{
    @autoreleasepool {
        NSColor *obj = ns_color_from(color);
        if (!obj) {
            return 0;
        }
        return ns_color_retain_obj([obj colorWithAlphaComponent:(CGFloat)alpha]);
    }
}

uintptr_t ns_color_using_color_space(uintptr_t color, uintptr_t space)
{
    @autoreleasepool {
        NSColor *obj = ns_color_from(color);
        NSColorSpace *colorSpace = (__bridge NSColorSpace *)(void *)ns_colorspace_nscolorspace(space);
        if (!obj || !colorSpace) {
            return 0;
        }
        return ns_color_retain_obj([obj colorUsingColorSpace:colorSpace]);
    }
}

int ns_color_type(uintptr_t color)
{
    @autoreleasepool {
        NSColor *obj = ns_color_from(color);
        return obj ? (int)obj.type : -1;
    }
}

double ns_color_alpha(uintptr_t color)
{
    @autoreleasepool {
        NSColor *obj = ns_color_from(color);
        return obj ? (double)obj.alphaComponent : 0.0;
    }
}

int ns_color_get_srgba(uintptr_t color, int *r, int *g, int *b, int *a)
{
    if (!r || !g || !b || !a) {
        return 0;
    }
    @autoreleasepool {
        NSColor *converted = ns_color_srgb_from(ns_color_from(color));
        if (!converted) {
            return 0;
        }
        *r = (int)(converted.redComponent * 255.0 + 0.5);
        *g = (int)(converted.greenComponent * 255.0 + 0.5);
        *b = (int)(converted.blueComponent * 255.0 + 0.5);
        *a = (int)(converted.alphaComponent * 255.0 + 0.5);
        return 1;
    }
}

int ns_color_get_rgba_double(uintptr_t color, double *r, double *g, double *b, double *a)
{
    if (!r || !g || !b || !a) {
        return 0;
    }
    @autoreleasepool {
        NSColor *converted = ns_color_srgb_from(ns_color_from(color));
        if (!converted) {
            return 0;
        }
        *r = (double)converted.redComponent;
        *g = (double)converted.greenComponent;
        *b = (double)converted.blueComponent;
        *a = (double)converted.alphaComponent;
        return 1;
    }
}

void ns_color_set(uintptr_t color)
{
    @autoreleasepool {
        NSColor *obj = ns_color_from(color);
        if (obj) {
            [obj set];
        }
    }
}

void ns_color_set_fill(uintptr_t color)
{
    @autoreleasepool {
        NSColor *obj = ns_color_from(color);
        if (obj) {
            [obj setFill];
        }
    }
}

void ns_color_set_stroke(uintptr_t color)
{
    @autoreleasepool {
        NSColor *obj = ns_color_from(color);
        if (obj) {
            [obj setStroke];
        }
    }
}

int ns_color_catalog_name(uintptr_t color, char *out, int out_len)
{
    @autoreleasepool {
        NSColor *obj = ns_color_from(color);
        if (!obj || obj.type != NSColorTypeCatalog) {
            return 0;
        }
        return ns_color_copy_nsstring(obj.catalogNameComponent, out, out_len);
    }
}

int ns_color_color_name(uintptr_t color, char *out, int out_len)
{
    @autoreleasepool {
        NSColor *obj = ns_color_from(color);
        if (!obj || obj.type != NSColorTypeCatalog) {
            return 0;
        }
        return ns_color_copy_nsstring(obj.colorNameComponent, out, out_len);
    }
}
