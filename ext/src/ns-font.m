#import <AppKit/AppKit.h>
#import "ns-font.h"
#import "ns-fontdescriptor.h"

static uintptr_t ns_font_retain_obj(id object)
{
    return object ? (uintptr_t)(__bridge_retained void *)object : 0;
}

static NSFont *ns_font_from(uintptr_t handle)
{
    if (!handle) {
        return nil;
    }
    id obj = (__bridge id)(void *)handle;
    return [obj isKindOfClass:[NSFont class]] ? (NSFont *)obj : nil;
}

static int ns_font_copy_nsstring(NSString *text, char *out, int out_len)
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

static NSFontWeight ns_font_weight_from_kind(int kind)
{
    switch (kind) {
        case NS_FONT_WEIGHT_ULTRA_LIGHT:
            return NSFontWeightUltraLight;
        case NS_FONT_WEIGHT_THIN:
            return NSFontWeightThin;
        case NS_FONT_WEIGHT_LIGHT:
            return NSFontWeightLight;
        case NS_FONT_WEIGHT_MEDIUM:
            return NSFontWeightMedium;
        case NS_FONT_WEIGHT_SEMIBOLD:
            return NSFontWeightSemibold;
        case NS_FONT_WEIGHT_BOLD:
            return NSFontWeightBold;
        case NS_FONT_WEIGHT_HEAVY:
            return NSFontWeightHeavy;
        case NS_FONT_WEIGHT_BLACK:
            return NSFontWeightBlack;
        case NS_FONT_WEIGHT_REGULAR:
        default:
            return NSFontWeightRegular;
    }
}

static NSFontWidth ns_font_width_from_kind(int kind)
{
    switch (kind) {
        case NS_FONT_WIDTH_COMPRESSED:
            return NSFontWidthCompressed;
        case NS_FONT_WIDTH_CONDENSED:
            return NSFontWidthCondensed;
        case NS_FONT_WIDTH_EXPANDED:
            return NSFontWidthExpanded;
        case NS_FONT_WIDTH_STANDARD:
        default:
            return NSFontWidthStandard;
    }
}

static NSFontTextStyle ns_font_text_style_from_kind(int kind)
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

uintptr_t ns_font_wrap(void *font)
{
    if (!font) {
        return 0;
    }
    @autoreleasepool {
        NSFont *obj = (__bridge NSFont *)font;
        return [obj isKindOfClass:[NSFont class]] ? ns_font_retain_obj(obj) : 0;
    }
}

void ns_font_destroy(uintptr_t font)
{
    if (!font) {
        return;
    }
    CFRelease((void *)font);
}

void *ns_font_nsfont(uintptr_t font)
{
    NSFont *obj = ns_font_from(font);
    return obj ? (__bridge void *)obj : NULL;
}

uintptr_t ns_font_with_name(const char *name, double size)
{
    @autoreleasepool {
        if (!name || name[0] == '\0') {
            return 0;
        }
        return ns_font_retain_obj([NSFont fontWithName:[NSString stringWithUTF8String:name]
                                                  size:(CGFloat)size]);
    }
}

uintptr_t ns_font_with_descriptor(uintptr_t descriptor, double size)
{
    @autoreleasepool {
        NSFontDescriptor *desc = (__bridge NSFontDescriptor *)(void *)ns_fontdescriptor_nsfontdescriptor(descriptor);
        if (!desc) {
            return 0;
        }
        return ns_font_retain_obj([NSFont fontWithDescriptor:desc size:(CGFloat)size]);
    }
}

uintptr_t ns_font_meta(int kind, double size)
{
    @autoreleasepool {
        NSFont *obj = nil;
        CGFloat fontSize = (CGFloat)size;
        switch (kind) {
            case NS_FONT_META_SYSTEM:
                obj = [NSFont systemFontOfSize:fontSize];
                break;
            case NS_FONT_META_BOLD_SYSTEM:
                obj = [NSFont boldSystemFontOfSize:fontSize];
                break;
            case NS_FONT_META_LABEL:
                obj = [NSFont labelFontOfSize:fontSize];
                break;
            case NS_FONT_META_TITLE_BAR:
                obj = [NSFont titleBarFontOfSize:fontSize];
                break;
            case NS_FONT_META_MENU:
                obj = [NSFont menuFontOfSize:fontSize];
                break;
            case NS_FONT_META_MENU_BAR:
                obj = [NSFont menuBarFontOfSize:fontSize];
                break;
            case NS_FONT_META_MESSAGE:
                obj = [NSFont messageFontOfSize:fontSize];
                break;
            case NS_FONT_META_PALETTE:
                obj = [NSFont paletteFontOfSize:fontSize];
                break;
            case NS_FONT_META_TOOL_TIPS:
                obj = [NSFont toolTipsFontOfSize:fontSize];
                break;
            case NS_FONT_META_CONTROL_CONTENT:
                obj = [NSFont controlContentFontOfSize:fontSize];
                break;
            case NS_FONT_META_USER:
                obj = [NSFont userFontOfSize:fontSize];
                break;
            case NS_FONT_META_USER_FIXED_PITCH:
                obj = [NSFont userFixedPitchFontOfSize:fontSize];
                break;
            default:
                break;
        }
        return ns_font_retain_obj(obj);
    }
}

uintptr_t ns_font_system_weight(double size, int weight_kind)
{
    @autoreleasepool {
        return ns_font_retain_obj([NSFont systemFontOfSize:(CGFloat)size
                                                    weight:ns_font_weight_from_kind(weight_kind)]);
    }
}

uintptr_t ns_font_system_weight_width(double size, int weight_kind, int width_kind)
{
    @autoreleasepool {
        return ns_font_retain_obj([NSFont systemFontOfSize:(CGFloat)size
                                                    weight:ns_font_weight_from_kind(weight_kind)
                                                     width:ns_font_width_from_kind(width_kind)]);
    }
}

uintptr_t ns_font_monospaced_digit_system(double size, int weight_kind)
{
    @autoreleasepool {
        return ns_font_retain_obj([NSFont monospacedDigitSystemFontOfSize:(CGFloat)size
                                                                   weight:ns_font_weight_from_kind(weight_kind)]);
    }
}

uintptr_t ns_font_monospaced_system(double size, int weight_kind)
{
    @autoreleasepool {
        return ns_font_retain_obj([NSFont monospacedSystemFontOfSize:(CGFloat)size
                                                              weight:ns_font_weight_from_kind(weight_kind)]);
    }
}

uintptr_t ns_font_preferred_for_text_style(int style_kind)
{
    @autoreleasepool {
        return ns_font_retain_obj([NSFont preferredFontForTextStyle:ns_font_text_style_from_kind(style_kind)
                                                            options:@{}]);
    }
}

uintptr_t ns_font_with_size(uintptr_t font, double size)
{
    @autoreleasepool {
        NSFont *obj = ns_font_from(font);
        return obj ? ns_font_retain_obj([obj fontWithSize:(CGFloat)size]) : 0;
    }
}

void ns_font_set_user_font(uintptr_t font)
{
    @autoreleasepool {
        [NSFont setUserFont:ns_font_from(font)];
    }
}

void ns_font_set_user_fixed_pitch_font(uintptr_t font)
{
    @autoreleasepool {
        [NSFont setUserFixedPitchFont:ns_font_from(font)];
    }
}

double ns_font_system_font_size(void)
{
    return (double)[NSFont systemFontSize];
}

double ns_font_small_system_font_size(void)
{
    return (double)[NSFont smallSystemFontSize];
}

double ns_font_label_font_size(void)
{
    return (double)[NSFont labelFontSize];
}

double ns_font_system_font_size_for_control_size(unsigned control_size)
{
    return (double)[NSFont systemFontSizeForControlSize:(NSControlSize)control_size];
}

int ns_font_font_name(uintptr_t font, char *out, int out_len)
{
    @autoreleasepool {
        return ns_font_copy_nsstring(ns_font_from(font).fontName, out, out_len);
    }
}

int ns_font_family_name(uintptr_t font, char *out, int out_len)
{
    @autoreleasepool {
        return ns_font_copy_nsstring(ns_font_from(font).familyName, out, out_len);
    }
}

int ns_font_display_name(uintptr_t font, char *out, int out_len)
{
    @autoreleasepool {
        return ns_font_copy_nsstring(ns_font_from(font).displayName, out, out_len);
    }
}

double ns_font_point_size(uintptr_t font)
{
    @autoreleasepool {
        NSFont *obj = ns_font_from(font);
        return obj ? (double)obj.pointSize : 0.0;
    }
}

uintptr_t ns_font_font_descriptor(uintptr_t font)
{
    @autoreleasepool {
        NSFont *obj = ns_font_from(font);
        return obj ? ns_fontdescriptor_wrap((__bridge void *)obj.fontDescriptor) : 0;
    }
}

unsigned ns_font_number_of_glyphs(uintptr_t font)
{
    @autoreleasepool {
        NSFont *obj = ns_font_from(font);
        return obj ? (unsigned)obj.numberOfGlyphs : 0;
    }
}

int ns_font_is_fixed_pitch(uintptr_t font)
{
    @autoreleasepool {
        NSFont *obj = ns_font_from(font);
        return obj && obj.isFixedPitch ? 1 : 0;
    }
}

int ns_font_is_vertical(uintptr_t font)
{
    @autoreleasepool {
        NSFont *obj = ns_font_from(font);
        return obj && obj.vertical ? 1 : 0;
    }
}

uintptr_t ns_font_vertical_font(uintptr_t font)
{
    @autoreleasepool {
        NSFont *obj = ns_font_from(font);
        return obj ? ns_font_retain_obj(obj.verticalFont) : 0;
    }
}

double ns_font_ascender(uintptr_t font)
{
    @autoreleasepool {
        NSFont *obj = ns_font_from(font);
        return obj ? (double)obj.ascender : 0.0;
    }
}

double ns_font_descender(uintptr_t font)
{
    @autoreleasepool {
        NSFont *obj = ns_font_from(font);
        return obj ? (double)obj.descender : 0.0;
    }
}

double ns_font_leading(uintptr_t font)
{
    @autoreleasepool {
        NSFont *obj = ns_font_from(font);
        return obj ? (double)obj.leading : 0.0;
    }
}

double ns_font_underline_position(uintptr_t font)
{
    @autoreleasepool {
        NSFont *obj = ns_font_from(font);
        return obj ? (double)obj.underlinePosition : 0.0;
    }
}

double ns_font_underline_thickness(uintptr_t font)
{
    @autoreleasepool {
        NSFont *obj = ns_font_from(font);
        return obj ? (double)obj.underlineThickness : 0.0;
    }
}

double ns_font_italic_angle(uintptr_t font)
{
    @autoreleasepool {
        NSFont *obj = ns_font_from(font);
        return obj ? (double)obj.italicAngle : 0.0;
    }
}

double ns_font_cap_height(uintptr_t font)
{
    @autoreleasepool {
        NSFont *obj = ns_font_from(font);
        return obj ? (double)obj.capHeight : 0.0;
    }
}

double ns_font_x_height(uintptr_t font)
{
    @autoreleasepool {
        NSFont *obj = ns_font_from(font);
        return obj ? (double)obj.xHeight : 0.0;
    }
}

int ns_font_bounding_rect(uintptr_t font, double *x, double *y, double *w, double *h)
{
    if (!x || !y || !w || !h) {
        return 0;
    }
    @autoreleasepool {
        NSFont *obj = ns_font_from(font);
        if (!obj) {
            return 0;
        }
        NSRect rect = obj.boundingRectForFont;
        *x = (double)rect.origin.x;
        *y = (double)rect.origin.y;
        *w = (double)rect.size.width;
        *h = (double)rect.size.height;
        return 1;
    }
}

int ns_font_maximum_advancement(uintptr_t font, double *width, double *height)
{
    if (!width || !height) {
        return 0;
    }
    @autoreleasepool {
        NSFont *obj = ns_font_from(font);
        if (!obj) {
            return 0;
        }
        NSSize size = obj.maximumAdvancement;
        *width = (double)size.width;
        *height = (double)size.height;
        return 1;
    }
}

void ns_font_set(uintptr_t font)
{
    @autoreleasepool {
        [ns_font_from(font) set];
    }
}
