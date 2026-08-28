#include "ns-font.h"
#include "ns-value.h"

/* ====================================================================== */
/* Factory                                                                */
/* ====================================================================== */

zend_long ns_nsfont_font_with_name_size(zval *fontName, zval *fontSize)
{
    @autoreleasepool {
        return ns_handle_for([NSFont fontWithName:ns_arg_string(fontName) size:ns_arg_double(fontSize)]);
    }
}

zend_long ns_nsfont_font_with_descriptor_size(zval *fontDescriptor, zval *fontSize)
{
    @autoreleasepool {
        return ns_handle_for([NSFont fontWithDescriptor:NS_ARG_AS(NSFontDescriptor, fontDescriptor) size:ns_arg_double(fontSize)]);
    }
}

zend_long ns_nsfont_font_with_descriptor_text_transform(zval *fontDescriptor, zval *textTransform)
{
    @autoreleasepool {
        return ns_handle_for([NSFont fontWithDescriptor:NS_ARG_AS(NSFontDescriptor, fontDescriptor)
                                         textTransform:NS_ARG_AS(NSAffineTransform, textTransform)]);
    }
}

/* ====================================================================== */
/* Meta Font                                                              */
/* ====================================================================== */

zend_long ns_nsfont_user_font_of_size(zval *fontSize)
{
    @autoreleasepool {
        return ns_handle_for([NSFont userFontOfSize:ns_arg_double(fontSize)]);
    }
}

zend_long ns_nsfont_user_fixed_pitch_font_of_size(zval *fontSize)
{
    @autoreleasepool {
        return ns_handle_for([NSFont userFixedPitchFontOfSize:ns_arg_double(fontSize)]);
    }
}

void ns_nsfont_set_user_font(zval *font)
{
    @autoreleasepool {
        [NSFont setUserFont:NS_ARG_AS(NSFont, font)];
    }
}

void ns_nsfont_set_user_fixed_pitch_font(zval *font)
{
    @autoreleasepool {
        [NSFont setUserFixedPitchFont:NS_ARG_AS(NSFont, font)];
    }
}

zend_long ns_nsfont_system_font_of_size(zval *fontSize)
{
    @autoreleasepool {
        return ns_handle_for([NSFont systemFontOfSize:ns_arg_double(fontSize)]);
    }
}

zend_long ns_nsfont_bold_system_font_of_size(zval *fontSize)
{
    @autoreleasepool {
        return ns_handle_for([NSFont boldSystemFontOfSize:ns_arg_double(fontSize)]);
    }
}

zend_long ns_nsfont_label_font_of_size(zval *fontSize)
{
    @autoreleasepool {
        return ns_handle_for([NSFont labelFontOfSize:ns_arg_double(fontSize)]);
    }
}

zend_long ns_nsfont_title_bar_font_of_size(zval *fontSize)
{
    @autoreleasepool {
        return ns_handle_for([NSFont titleBarFontOfSize:ns_arg_double(fontSize)]);
    }
}

zend_long ns_nsfont_menu_font_of_size(zval *fontSize)
{
    @autoreleasepool {
        return ns_handle_for([NSFont menuFontOfSize:ns_arg_double(fontSize)]);
    }
}

zend_long ns_nsfont_menu_bar_font_of_size(zval *fontSize)
{
    @autoreleasepool {
        return ns_handle_for([NSFont menuBarFontOfSize:ns_arg_double(fontSize)]);
    }
}

zend_long ns_nsfont_message_font_of_size(zval *fontSize)
{
    @autoreleasepool {
        return ns_handle_for([NSFont messageFontOfSize:ns_arg_double(fontSize)]);
    }
}

zend_long ns_nsfont_palette_font_of_size(zval *fontSize)
{
    @autoreleasepool {
        return ns_handle_for([NSFont paletteFontOfSize:ns_arg_double(fontSize)]);
    }
}

zend_long ns_nsfont_tool_tips_font_of_size(zval *fontSize)
{
    @autoreleasepool {
        return ns_handle_for([NSFont toolTipsFontOfSize:ns_arg_double(fontSize)]);
    }
}

zend_long ns_nsfont_control_content_font_of_size(zval *fontSize)
{
    @autoreleasepool {
        return ns_handle_for([NSFont controlContentFontOfSize:ns_arg_double(fontSize)]);
    }
}

zend_long ns_nsfont_system_font_of_size_weight(zval *fontSize, zval *weight)
{
    @autoreleasepool {
        return ns_handle_for([NSFont systemFontOfSize:ns_arg_double(fontSize) weight:(NSFontWeight) ns_arg_double(weight)]);
    }
}

zend_long ns_nsfont_monospaced_digit_system_font_of_size_weight(zval *fontSize, zval *weight)
{
    @autoreleasepool {
        return ns_handle_for([NSFont monospacedDigitSystemFontOfSize:ns_arg_double(fontSize) weight:(NSFontWeight) ns_arg_double(weight)]);
    }
}

zend_long ns_nsfont_system_font_of_size_weight_width(zval *fontSize, zval *weight, zval *width)
{
    @autoreleasepool {
        return ns_handle_for([NSFont systemFontOfSize:ns_arg_double(fontSize)
                                              weight:(NSFontWeight) ns_arg_double(weight)
                                               width:(NSFontWidth) ns_arg_double(width)]);
    }
}

zend_long ns_nsfont_monospaced_system_font_of_size_weight(zval *fontSize, zval *weight)
{
    @autoreleasepool {
        return ns_handle_for([NSFont monospacedSystemFontOfSize:ns_arg_double(fontSize) weight:(NSFontWeight) ns_arg_double(weight)]);
    }
}

zend_long ns_nsfont_font_with_size(zval *handle, zval *fontSize)
{
    zend_long h = 0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        h = ns_handle_for(f != nil ? [f fontWithSize:ns_arg_double(fontSize)] : nil);
    }
    return h;
}

double ns_nsfont_system_font_size(void)
{
    double r = 0.0;
    @autoreleasepool {
        r = (double) [NSFont systemFontSize];
    }
    return r;
}

double ns_nsfont_small_system_font_size(void)
{
    double r = 0.0;
    @autoreleasepool {
        r = (double) [NSFont smallSystemFontSize];
    }
    return r;
}

double ns_nsfont_label_font_size(void)
{
    double r = 0.0;
    @autoreleasepool {
        r = (double) [NSFont labelFontSize];
    }
    return r;
}

double ns_nsfont_system_font_size_for_control_size(zval *controlSize)
{
    double r = 0.0;
    @autoreleasepool {
        r = (double) [NSFont systemFontSizeForControlSize:(NSControlSize) ns_arg_long(controlSize)];
    }
    return r;
}

/* ====================================================================== */
/* Core font attribute                                                    */
/* ====================================================================== */

void ns_nsfont_font_name(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        ns_ret_string(return_value, f != nil ? [f fontName] : nil);
    }
}

double ns_nsfont_point_size(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        r = f != nil ? (double) [f pointSize] : 0.0;
    }
    return r;
}

void ns_nsfont_family_name(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        ns_ret_string(return_value, f != nil ? [f familyName] : nil);
    }
}

void ns_nsfont_display_name(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        ns_ret_string(return_value, f != nil ? [f displayName] : nil);
    }
}

zend_long ns_nsfont_font_descriptor(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        h = ns_handle_for(f != nil ? [f fontDescriptor] : nil);
    }
    return h;
}

zend_long ns_nsfont_text_transform(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        h = ns_handle_for(f != nil ? [f textTransform] : nil);
    }
    return h;
}

/* ====================================================================== */
/* Glyph coverage                                                         */
/* ====================================================================== */

zend_long ns_nsfont_number_of_glyphs(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        r = f != nil ? (zend_long) [f numberOfGlyphs] : 0;
    }
    return r;
}

zend_long ns_nsfont_most_compatible_string_encoding(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        r = f != nil ? (zend_long) [f mostCompatibleStringEncoding] : 0;
    }
    return r;
}

zend_long ns_nsfont_covered_character_set(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        h = ns_handle_for(f != nil ? [f coveredCharacterSet] : nil);
    }
    return h;
}

/* ====================================================================== */
/* Font instance-wide metrics                                             */
/* ====================================================================== */

void ns_nsfont_bounding_rect_for_font(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        ns_ret_rect(return_value, f != nil ? [f boundingRectForFont] : NSZeroRect);
    }
}

void ns_nsfont_maximum_advancement(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        ns_ret_size(return_value, f != nil ? [f maximumAdvancement] : NSZeroSize);
    }
}

double ns_nsfont_ascender(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        r = f != nil ? (double) [f ascender] : 0.0;
    }
    return r;
}

double ns_nsfont_descender(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        r = f != nil ? (double) [f descender] : 0.0;
    }
    return r;
}

double ns_nsfont_leading(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        r = f != nil ? (double) [f leading] : 0.0;
    }
    return r;
}

double ns_nsfont_underline_position(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        r = f != nil ? (double) [f underlinePosition] : 0.0;
    }
    return r;
}

double ns_nsfont_underline_thickness(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        r = f != nil ? (double) [f underlineThickness] : 0.0;
    }
    return r;
}

double ns_nsfont_italic_angle(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        r = f != nil ? (double) [f italicAngle] : 0.0;
    }
    return r;
}

double ns_nsfont_cap_height(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        r = f != nil ? (double) [f capHeight] : 0.0;
    }
    return r;
}

double ns_nsfont_x_height(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        r = f != nil ? (double) [f xHeight] : 0.0;
    }
    return r;
}

zend_long ns_nsfont_is_fixed_pitch(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        r = (f != nil && [f isFixedPitch]) ? 1 : 0;
    }
    return r;
}

/* ====================================================================== */
/* Glyph metrics                                                          */
/* ====================================================================== */

void ns_nsfont_bounding_rect_for_cg_glyph(zval *return_value, zval *handle, zval *glyph)
{
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        ns_ret_rect(return_value, f != nil ? [f boundingRectForCGGlyph:(CGGlyph) ns_arg_long(glyph)] : NSZeroRect);
    }
}

void ns_nsfont_advancement_for_cg_glyph(zval *return_value, zval *handle, zval *glyph)
{
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        ns_ret_size(return_value, f != nil ? [f advancementForCGGlyph:(CGGlyph) ns_arg_long(glyph)] : NSZeroSize);
    }
}

/* ====================================================================== */
/* NSGraphicsContext-related                                              */
/* ====================================================================== */

void ns_nsfont_set(zval *handle)
{
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        if (f == nil) return;
        [f set];
    }
}

void ns_nsfont_set_in_context(zval *handle, zval *graphicsContext)
{
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        if (f == nil) return;
        [f setInContext:NS_ARG_AS(NSGraphicsContext, graphicsContext)];
    }
}

/* ====================================================================== */
/* Vertical mode                                                          */
/* ====================================================================== */

zend_long ns_nsfont_vertical_font(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        h = ns_handle_for(f != nil ? [f verticalFont] : nil);
    }
    return h;
}

zend_long ns_nsfont_is_vertical(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        r = (f != nil && [f isVertical]) ? 1 : 0;
    }
    return r;
}

/* ====================================================================== */
/* NSFont_Deprecated                                                      */
/* ====================================================================== */

zend_long ns_nsfont_glyph_with_name(zval *handle, zval *name)
{
    zend_long r = 0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        r = f != nil ? (zend_long) [f glyphWithName:ns_arg_string(name)] : 0;
    }
    return r;
}

void ns_nsfont_bounding_rect_for_glyph(zval *return_value, zval *handle, zval *glyph)
{
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        ns_ret_rect(return_value, f != nil ? [f boundingRectForGlyph:(NSGlyph) ns_arg_long(glyph)] : NSZeroRect);
    }
}

void ns_nsfont_advancement_for_glyph(zval *return_value, zval *handle, zval *glyph)
{
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        ns_ret_size(return_value, f != nil ? [f advancementForGlyph:(NSGlyph) ns_arg_long(glyph)] : NSZeroSize);
    }
}

zend_long ns_nsfont_printer_font(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        h = ns_handle_for(f != nil ? [f printerFont] : nil);
    }
    return h;
}

zend_long ns_nsfont_screen_font(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        h = ns_handle_for(f != nil ? [f screenFont] : nil);
    }
    return h;
}

zend_long ns_nsfont_screen_font_with_rendering_mode(zval *handle, zval *renderingMode)
{
    zend_long h = 0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        h = ns_handle_for(f != nil ? [f screenFontWithRenderingMode:(NSFontRenderingMode) ns_arg_long(renderingMode)] : nil);
    }
    return h;
}

zend_long ns_nsfont_rendering_mode(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSFont *f = NS_ARG_AS(NSFont, handle);
        r = f != nil ? (zend_long) [f renderingMode] : 0;
    }
    return r;
}

/* ====================================================================== */
/* NSFont_TextStyles                                                      */
/* ====================================================================== */

zend_long ns_nsfont_preferred_font_for_text_style_options(zval *style, zval *options)
{
    @autoreleasepool {
        return ns_handle_for([NSFont preferredFontForTextStyle:ns_arg_string(style)
                                                       options:NS_ARG_AS(NSDictionary, options)]);
    }
}
