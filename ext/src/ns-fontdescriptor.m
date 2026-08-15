#import <AppKit/AppKit.h>
#import "ns-fontdescriptor.h"
#import "ns-font.h"

static uintptr_t ns_fontdescriptor_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSFontDescriptor *ns_fontdescriptor_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSFontDescriptor class]] ? (NSFontDescriptor *)obj : nil;
}

static int ns_fontdescriptor_copy_nsstring(NSString *text, char *out, int out_len)
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

static NSFontTextStyle ns_fontdescriptor_text_style_from_kind(int kind)
{
    switch (kind) {
        case NS_FONT_TEXT_STYLE_LARGE_TITLE:
            return NSFontTextStyleLargeTitle;
        case NS_FONT_TEXT_STYLE_TITLE1:
            return NSFontTextStyleTitle1;
        case NS_FONT_TEXT_STYLE_TITLE2:
            return NSFontTextStyleTitle2;
        case NS_FONT_TEXT_STYLE_TITLE3:
            return NSFontTextStyleTitle3;
        case NS_FONT_TEXT_STYLE_HEADLINE:
            return NSFontTextStyleHeadline;
        case NS_FONT_TEXT_STYLE_SUBHEADLINE:
            return NSFontTextStyleSubheadline;
        case NS_FONT_TEXT_STYLE_CALLOUT:
            return NSFontTextStyleCallout;
        case NS_FONT_TEXT_STYLE_FOOTNOTE:
            return NSFontTextStyleFootnote;
        case NS_FONT_TEXT_STYLE_CAPTION1:
            return NSFontTextStyleCaption1;
        case NS_FONT_TEXT_STYLE_CAPTION2:
            return NSFontTextStyleCaption2;
        case NS_FONT_TEXT_STYLE_BODY:
        default:
            return NSFontTextStyleBody;
    }
}

static NSFontDescriptorSystemDesign ns_fontdescriptor_design_from_kind(int kind)
{
    switch (kind) {
        case NS_FONT_DESIGN_SERIF:
            return NSFontDescriptorSystemDesignSerif;
        case NS_FONT_DESIGN_MONOSPACED:
            return NSFontDescriptorSystemDesignMonospaced;
        case NS_FONT_DESIGN_ROUNDED:
            return NSFontDescriptorSystemDesignRounded;
        case NS_FONT_DESIGN_DEFAULT:
        default:
            return NSFontDescriptorSystemDesignDefault;
    }
}

uintptr_t ns_fontdescriptor_wrap(void *descriptor)
{
    if (!descriptor) {
        return 0;
    }
    @autoreleasepool {
        NSFontDescriptor *obj = (__bridge NSFontDescriptor *)descriptor;
        return [obj isKindOfClass:[NSFontDescriptor class]] ? ns_fontdescriptor_retain_obj(obj) : 0;
    }
}

void ns_fontdescriptor_destroy(uintptr_t descriptor)
{
    if (!descriptor) {
        return;
    }
    CFRelease((void *)descriptor);
}

void *ns_fontdescriptor_nsfontdescriptor(uintptr_t descriptor)
{
    NSFontDescriptor *obj = ns_fontdescriptor_from(descriptor);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_fontdescriptor_with_name(const char *name, double size)
{
    @autoreleasepool {
        if (!name || name[0] == '\0') {
            return 0;
        }
        return ns_fontdescriptor_retain_obj([NSFontDescriptor fontDescriptorWithName:[NSString stringWithUTF8String:name]
                                                                               size:(CGFloat)size]);
    }
}

uintptr_t ns_fontdescriptor_preferred_for_text_style(int style_kind)
{
    @autoreleasepool {
        return ns_fontdescriptor_retain_obj(
            [NSFontDescriptor preferredFontDescriptorForTextStyle:ns_fontdescriptor_text_style_from_kind(style_kind)
                                                          options:@{}]);
    }
}

int ns_fontdescriptor_postscript_name(uintptr_t descriptor, char *out, int out_len)
{
    @autoreleasepool {
        return ns_fontdescriptor_copy_nsstring(ns_fontdescriptor_from(descriptor).postscriptName, out, out_len);
    }
}

double ns_fontdescriptor_point_size(uintptr_t descriptor)
{
    @autoreleasepool {
        NSFontDescriptor *obj = ns_fontdescriptor_from(descriptor);
        return obj ? (double)obj.pointSize : 0.0;
    }
}

unsigned ns_fontdescriptor_symbolic_traits(uintptr_t descriptor)
{
    @autoreleasepool {
        NSFontDescriptor *obj = ns_fontdescriptor_from(descriptor);
        return obj ? (unsigned)obj.symbolicTraits : 0;
    }
}

int ns_fontdescriptor_requires_font_asset_request(uintptr_t descriptor)
{
    @autoreleasepool {
        NSFontDescriptor *obj = ns_fontdescriptor_from(descriptor);
        return obj && obj.requiresFontAssetRequest ? 1 : 0;
    }
}

uintptr_t ns_fontdescriptor_with_symbolic_traits(uintptr_t descriptor, unsigned traits)
{
    @autoreleasepool {
        NSFontDescriptor *obj = ns_fontdescriptor_from(descriptor);
        return obj ? ns_fontdescriptor_retain_obj([obj fontDescriptorWithSymbolicTraits:(NSFontDescriptorSymbolicTraits)traits]) : 0;
    }
}

uintptr_t ns_fontdescriptor_with_size(uintptr_t descriptor, double size)
{
    @autoreleasepool {
        NSFontDescriptor *obj = ns_fontdescriptor_from(descriptor);
        return obj ? ns_fontdescriptor_retain_obj([obj fontDescriptorWithSize:(CGFloat)size]) : 0;
    }
}

uintptr_t ns_fontdescriptor_with_family(uintptr_t descriptor, const char *family)
{
    @autoreleasepool {
        NSFontDescriptor *obj = ns_fontdescriptor_from(descriptor);
        if (!obj || !family || family[0] == '\0') {
            return 0;
        }
        return ns_fontdescriptor_retain_obj([obj fontDescriptorWithFamily:[NSString stringWithUTF8String:family]]);
    }
}

uintptr_t ns_fontdescriptor_with_face(uintptr_t descriptor, const char *face)
{
    @autoreleasepool {
        NSFontDescriptor *obj = ns_fontdescriptor_from(descriptor);
        if (!obj || !face || face[0] == '\0') {
            return 0;
        }
        return ns_fontdescriptor_retain_obj([obj fontDescriptorWithFace:[NSString stringWithUTF8String:face]]);
    }
}

uintptr_t ns_fontdescriptor_with_design(uintptr_t descriptor, int design_kind)
{
    @autoreleasepool {
        NSFontDescriptor *obj = ns_fontdescriptor_from(descriptor);
        if (!obj) {
            return 0;
        }
        NSFontDescriptor *next = [obj fontDescriptorWithDesign:ns_fontdescriptor_design_from_kind(design_kind)];
        return ns_fontdescriptor_retain_obj(next);
    }
}

int ns_fontdescriptor_matching_count(uintptr_t descriptor)
{
    @autoreleasepool {
        NSFontDescriptor *obj = ns_fontdescriptor_from(descriptor);
        return obj ? (int)[obj matchingFontDescriptorsWithMandatoryKeys:nil].count : 0;
    }
}

uintptr_t ns_fontdescriptor_matching_at(uintptr_t descriptor, int index)
{
    @autoreleasepool {
        NSFontDescriptor *obj = ns_fontdescriptor_from(descriptor);
        if (!obj || index < 0) {
            return 0;
        }
        NSArray<NSFontDescriptor *> *matches = [obj matchingFontDescriptorsWithMandatoryKeys:nil];
        if ((NSUInteger)index >= matches.count) {
            return 0;
        }
        return ns_fontdescriptor_retain_obj(matches[(NSUInteger)index]);
    }
}

uintptr_t ns_fontdescriptor_matching_first(uintptr_t descriptor)
{
    @autoreleasepool {
        NSFontDescriptor *obj = ns_fontdescriptor_from(descriptor);
        if (!obj) {
            return 0;
        }
        return ns_fontdescriptor_retain_obj([obj matchingFontDescriptorWithMandatoryKeys:nil]);
    }
}
