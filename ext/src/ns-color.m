#include "ns-color.h"
#include "ns-value.h"

/* ====================================================================== */
/* Construction                                                           */
/* ====================================================================== */

zend_long ns_nscolor_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSColor alloc] init]);
    }
}

/* ====================================================================== */
/* Component factories                                                    */
/* ====================================================================== */

zend_long ns_nscolor_color_with_srgb_red_green_blue_alpha(zval *red, zval *green, zval *blue, zval *alpha)
{
    @autoreleasepool {
        return ns_handle_for([NSColor colorWithSRGBRed:ns_arg_double(red)
                                                green:ns_arg_double(green)
                                                 blue:ns_arg_double(blue)
                                                alpha:ns_arg_double(alpha)]);
    }
}

zend_long ns_nscolor_color_with_generic_gamma22_white_alpha(zval *white, zval *alpha)
{
    @autoreleasepool {
        return ns_handle_for([NSColor colorWithGenericGamma22White:ns_arg_double(white) alpha:ns_arg_double(alpha)]);
    }
}

zend_long ns_nscolor_color_with_display_p3_red_green_blue_alpha(zval *red, zval *green, zval *blue, zval *alpha)
{
    @autoreleasepool {
        return ns_handle_for([NSColor colorWithDisplayP3Red:ns_arg_double(red)
                                                     green:ns_arg_double(green)
                                                      blue:ns_arg_double(blue)
                                                     alpha:ns_arg_double(alpha)]);
    }
}

zend_long ns_nscolor_color_with_white_alpha(zval *white, zval *alpha)
{
    @autoreleasepool {
        return ns_handle_for([NSColor colorWithWhite:ns_arg_double(white) alpha:ns_arg_double(alpha)]);
    }
}

zend_long ns_nscolor_color_with_red_green_blue_alpha(zval *red, zval *green, zval *blue, zval *alpha)
{
    @autoreleasepool {
        return ns_handle_for([NSColor colorWithRed:ns_arg_double(red)
                                            green:ns_arg_double(green)
                                             blue:ns_arg_double(blue)
                                            alpha:ns_arg_double(alpha)]);
    }
}

zend_long ns_nscolor_color_with_hue_saturation_brightness_alpha(zval *hue, zval *saturation, zval *brightness, zval *alpha)
{
    @autoreleasepool {
        return ns_handle_for([NSColor colorWithHue:ns_arg_double(hue)
                                       saturation:ns_arg_double(saturation)
                                       brightness:ns_arg_double(brightness)
                                            alpha:ns_arg_double(alpha)]);
    }
}

zend_long ns_nscolor_color_with_color_space_hue_saturation_brightness_alpha(zval *space, zval *hue, zval *saturation, zval *brightness, zval *alpha)
{
    @autoreleasepool {
        return ns_handle_for([NSColor colorWithColorSpace:NS_ARG_AS(NSColorSpace, space)
                                                     hue:ns_arg_double(hue)
                                              saturation:ns_arg_double(saturation)
                                              brightness:ns_arg_double(brightness)
                                                   alpha:ns_arg_double(alpha)]);
    }
}

/* ====================================================================== */
/* Catalog                                                                */
/* ====================================================================== */

zend_long ns_nscolor_color_with_catalog_name_color_name(zval *listName, zval *colorName)
{
    @autoreleasepool {
        return ns_handle_for([NSColor colorWithCatalogName:ns_arg_string(listName) colorName:ns_arg_string(colorName)]);
    }
}

zend_long ns_nscolor_color_named_bundle(zval *name, zval *bundle)
{
    @autoreleasepool {
        return ns_handle_for([NSColor colorNamed:ns_arg_string(name) bundle:NS_ARG_AS(NSBundle, bundle)]);
    }
}

zend_long ns_nscolor_color_named(zval *name)
{
    @autoreleasepool {
        return ns_handle_for([NSColor colorNamed:ns_arg_string(name)]);
    }
}

/* ====================================================================== */
/* Device / calibrated / pattern                                          */
/* ====================================================================== */

zend_long ns_nscolor_color_with_device_white_alpha(zval *white, zval *alpha)
{
    @autoreleasepool {
        return ns_handle_for([NSColor colorWithDeviceWhite:ns_arg_double(white) alpha:ns_arg_double(alpha)]);
    }
}

zend_long ns_nscolor_color_with_device_red_green_blue_alpha(zval *red, zval *green, zval *blue, zval *alpha)
{
    @autoreleasepool {
        return ns_handle_for([NSColor colorWithDeviceRed:ns_arg_double(red)
                                                  green:ns_arg_double(green)
                                                   blue:ns_arg_double(blue)
                                                  alpha:ns_arg_double(alpha)]);
    }
}

zend_long ns_nscolor_color_with_device_hue_saturation_brightness_alpha(zval *hue, zval *saturation, zval *brightness, zval *alpha)
{
    @autoreleasepool {
        return ns_handle_for([NSColor colorWithDeviceHue:ns_arg_double(hue)
                                             saturation:ns_arg_double(saturation)
                                             brightness:ns_arg_double(brightness)
                                                  alpha:ns_arg_double(alpha)]);
    }
}

zend_long ns_nscolor_color_with_device_cyan_magenta_yellow_black_alpha(zval *cyan, zval *magenta, zval *yellow, zval *black, zval *alpha)
{
    @autoreleasepool {
        return ns_handle_for([NSColor colorWithDeviceCyan:ns_arg_double(cyan)
                                                 magenta:ns_arg_double(magenta)
                                                  yellow:ns_arg_double(yellow)
                                                   black:ns_arg_double(black)
                                                   alpha:ns_arg_double(alpha)]);
    }
}

zend_long ns_nscolor_color_with_calibrated_white_alpha(zval *white, zval *alpha)
{
    @autoreleasepool {
        return ns_handle_for([NSColor colorWithCalibratedWhite:ns_arg_double(white) alpha:ns_arg_double(alpha)]);
    }
}

zend_long ns_nscolor_color_with_calibrated_red_green_blue_alpha(zval *red, zval *green, zval *blue, zval *alpha)
{
    @autoreleasepool {
        return ns_handle_for([NSColor colorWithCalibratedRed:ns_arg_double(red)
                                                      green:ns_arg_double(green)
                                                       blue:ns_arg_double(blue)
                                                      alpha:ns_arg_double(alpha)]);
    }
}

zend_long ns_nscolor_color_with_calibrated_hue_saturation_brightness_alpha(zval *hue, zval *saturation, zval *brightness, zval *alpha)
{
    @autoreleasepool {
        return ns_handle_for([NSColor colorWithCalibratedHue:ns_arg_double(hue)
                                                 saturation:ns_arg_double(saturation)
                                                 brightness:ns_arg_double(brightness)
                                                      alpha:ns_arg_double(alpha)]);
    }
}

zend_long ns_nscolor_color_with_pattern_image(zval *image)
{
    @autoreleasepool {
        return ns_handle_for([NSColor colorWithPatternImage:NS_ARG_AS(NSImage, image)]);
    }
}

/* ====================================================================== */
/* Type / conversion                                                      */
/* ====================================================================== */

zend_long ns_nscolor_type(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        r = c != nil ? (zend_long) [c type] : 0;
    }
    return r;
}

zend_long ns_nscolor_color_using_type(zval *handle, zval *type)
{
    zend_long h = 0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        h = ns_handle_for(c != nil ? [c colorUsingType:(NSColorType) ns_arg_long(type)] : nil);
    }
    return h;
}

zend_long ns_nscolor_color_using_color_space(zval *handle, zval *space)
{
    zend_long h = 0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        h = ns_handle_for(c != nil ? [c colorUsingColorSpace:NS_ARG_AS(NSColorSpace, space)] : nil);
    }
    return h;
}

/* ====================================================================== */
/* Convenience colors                                                     */
/* ====================================================================== */

zend_long ns_nscolor_black_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor blackColor]);
    }
}

zend_long ns_nscolor_dark_gray_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor darkGrayColor]);
    }
}

zend_long ns_nscolor_light_gray_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor lightGrayColor]);
    }
}

zend_long ns_nscolor_white_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor whiteColor]);
    }
}

zend_long ns_nscolor_gray_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor grayColor]);
    }
}

zend_long ns_nscolor_red_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor redColor]);
    }
}

zend_long ns_nscolor_green_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor greenColor]);
    }
}

zend_long ns_nscolor_blue_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor blueColor]);
    }
}

zend_long ns_nscolor_cyan_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor cyanColor]);
    }
}

zend_long ns_nscolor_yellow_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor yellowColor]);
    }
}

zend_long ns_nscolor_magenta_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor magentaColor]);
    }
}

zend_long ns_nscolor_orange_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor orangeColor]);
    }
}

zend_long ns_nscolor_purple_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor purpleColor]);
    }
}

zend_long ns_nscolor_brown_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor brownColor]);
    }
}

zend_long ns_nscolor_clear_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor clearColor]);
    }
}

/* ====================================================================== */
/* Semantic system colors: foreground                                     */
/* ====================================================================== */

zend_long ns_nscolor_label_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor labelColor]);
    }
}

zend_long ns_nscolor_secondary_label_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor secondaryLabelColor]);
    }
}

zend_long ns_nscolor_tertiary_label_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor tertiaryLabelColor]);
    }
}

zend_long ns_nscolor_quaternary_label_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor quaternaryLabelColor]);
    }
}

zend_long ns_nscolor_quinary_label_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor quinaryLabelColor]);
    }
}

zend_long ns_nscolor_link_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor linkColor]);
    }
}

zend_long ns_nscolor_placeholder_text_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor placeholderTextColor]);
    }
}

zend_long ns_nscolor_window_frame_text_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor windowFrameTextColor]);
    }
}

zend_long ns_nscolor_selected_menu_item_text_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor selectedMenuItemTextColor]);
    }
}

zend_long ns_nscolor_alternate_selected_control_text_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor alternateSelectedControlTextColor]);
    }
}

zend_long ns_nscolor_header_text_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor headerTextColor]);
    }
}

zend_long ns_nscolor_separator_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor separatorColor]);
    }
}

zend_long ns_nscolor_grid_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor gridColor]);
    }
}

/* ====================================================================== */
/* Semantic system colors: background                                     */
/* ====================================================================== */

zend_long ns_nscolor_window_background_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor windowBackgroundColor]);
    }
}

zend_long ns_nscolor_under_page_background_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor underPageBackgroundColor]);
    }
}

zend_long ns_nscolor_control_background_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor controlBackgroundColor]);
    }
}

zend_long ns_nscolor_selected_content_background_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor selectedContentBackgroundColor]);
    }
}

zend_long ns_nscolor_unemphasized_selected_content_background_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor unemphasizedSelectedContentBackgroundColor]);
    }
}

void ns_nscolor_alternating_content_background_colors(zval *return_value)
{
    @autoreleasepool {
        ns_ret_object_array(return_value, [NSColor alternatingContentBackgroundColors]);
    }
}

zend_long ns_nscolor_find_highlight_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor findHighlightColor]);
    }
}

/* ====================================================================== */
/* Semantic system colors: text                                           */
/* ====================================================================== */

zend_long ns_nscolor_text_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor textColor]);
    }
}

zend_long ns_nscolor_text_background_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor textBackgroundColor]);
    }
}

zend_long ns_nscolor_text_insertion_point_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor textInsertionPointColor]);
    }
}

zend_long ns_nscolor_selected_text_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor selectedTextColor]);
    }
}

zend_long ns_nscolor_selected_text_background_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor selectedTextBackgroundColor]);
    }
}

zend_long ns_nscolor_unemphasized_selected_text_background_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor unemphasizedSelectedTextBackgroundColor]);
    }
}

zend_long ns_nscolor_unemphasized_selected_text_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor unemphasizedSelectedTextColor]);
    }
}

/* ====================================================================== */
/* Semantic system colors: control                                        */
/* ====================================================================== */

zend_long ns_nscolor_control_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor controlColor]);
    }
}

zend_long ns_nscolor_control_text_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor controlTextColor]);
    }
}

zend_long ns_nscolor_selected_control_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor selectedControlColor]);
    }
}

zend_long ns_nscolor_selected_control_text_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor selectedControlTextColor]);
    }
}

zend_long ns_nscolor_disabled_control_text_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor disabledControlTextColor]);
    }
}

zend_long ns_nscolor_keyboard_focus_indicator_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor keyboardFocusIndicatorColor]);
    }
}

zend_long ns_nscolor_scrubber_textured_background_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor scrubberTexturedBackgroundColor]);
    }
}

/* ====================================================================== */
/* System / fill / accent                                                 */
/* ====================================================================== */

zend_long ns_nscolor_system_red_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor systemRedColor]);
    }
}

zend_long ns_nscolor_system_green_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor systemGreenColor]);
    }
}

zend_long ns_nscolor_system_blue_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor systemBlueColor]);
    }
}

zend_long ns_nscolor_system_orange_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor systemOrangeColor]);
    }
}

zend_long ns_nscolor_system_yellow_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor systemYellowColor]);
    }
}

zend_long ns_nscolor_system_brown_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor systemBrownColor]);
    }
}

zend_long ns_nscolor_system_pink_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor systemPinkColor]);
    }
}

zend_long ns_nscolor_system_purple_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor systemPurpleColor]);
    }
}

zend_long ns_nscolor_system_gray_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor systemGrayColor]);
    }
}

zend_long ns_nscolor_system_teal_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor systemTealColor]);
    }
}

zend_long ns_nscolor_system_indigo_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor systemIndigoColor]);
    }
}

zend_long ns_nscolor_system_mint_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor systemMintColor]);
    }
}

zend_long ns_nscolor_system_cyan_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor systemCyanColor]);
    }
}

zend_long ns_nscolor_system_fill_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor systemFillColor]);
    }
}

zend_long ns_nscolor_secondary_system_fill_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor secondarySystemFillColor]);
    }
}

zend_long ns_nscolor_tertiary_system_fill_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor tertiarySystemFillColor]);
    }
}

zend_long ns_nscolor_quaternary_system_fill_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor quaternarySystemFillColor]);
    }
}

zend_long ns_nscolor_quinary_system_fill_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor quinarySystemFillColor]);
    }
}

zend_long ns_nscolor_control_accent_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor controlAccentColor]);
    }
}

zend_long ns_nscolor_current_control_tint(void)
{
    zend_long r = 0;
    @autoreleasepool {
        r = (zend_long) [NSColor currentControlTint];
    }
    return r;
}

/* ====================================================================== */
/* Highlight / shadow / effect                                            */
/* ====================================================================== */

zend_long ns_nscolor_highlight_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor highlightColor]);
    }
}

zend_long ns_nscolor_shadow_color(void)
{
    @autoreleasepool {
        return ns_handle_for([NSColor shadowColor]);
    }
}

zend_long ns_nscolor_highlight_with_level(zval *handle, zval *val)
{
    zend_long h = 0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        h = ns_handle_for(c != nil ? [c highlightWithLevel:ns_arg_double(val)] : nil);
    }
    return h;
}

zend_long ns_nscolor_shadow_with_level(zval *handle, zval *val)
{
    zend_long h = 0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        h = ns_handle_for(c != nil ? [c shadowWithLevel:ns_arg_double(val)] : nil);
    }
    return h;
}

zend_long ns_nscolor_color_with_system_effect(zval *handle, zval *systemEffect)
{
    zend_long h = 0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        h = ns_handle_for(c != nil ? [c colorWithSystemEffect:(NSColorSystemEffect) ns_arg_long(systemEffect)] : nil);
    }
    return h;
}

/* ====================================================================== */
/* Current drawing color                                                  */
/* ====================================================================== */

void ns_nscolor_set(zval *handle)
{
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        if (c == nil) return;
        [c set];
    }
}

void ns_nscolor_set_fill(zval *handle)
{
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        if (c == nil) return;
        [c setFill];
    }
}

void ns_nscolor_set_stroke(zval *handle)
{
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        if (c == nil) return;
        [c setStroke];
    }
}

/* ====================================================================== */
/* Blend / alpha                                                          */
/* ====================================================================== */

zend_long ns_nscolor_blended_color_with_fraction_of_color(zval *handle, zval *fraction, zval *color)
{
    zend_long h = 0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        h = ns_handle_for(c != nil ? [c blendedColorWithFraction:ns_arg_double(fraction) ofColor:NS_ARG_AS(NSColor, color)] : nil);
    }
    return h;
}

zend_long ns_nscolor_color_with_alpha_component(zval *handle, zval *alpha)
{
    zend_long h = 0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        h = ns_handle_for(c != nil ? [c colorWithAlphaComponent:ns_arg_double(alpha)] : nil);
    }
    return h;
}

/* ====================================================================== */
/* Catalog components                                                     */
/* ====================================================================== */

void ns_nscolor_catalog_name_component(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        ns_ret_string(return_value, c != nil ? [c catalogNameComponent] : nil);
    }
}

void ns_nscolor_color_name_component(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        ns_ret_string(return_value, c != nil ? [c colorNameComponent] : nil);
    }
}

void ns_nscolor_localized_catalog_name_component(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        ns_ret_string(return_value, c != nil ? [c localizedCatalogNameComponent] : nil);
    }
}

void ns_nscolor_localized_color_name_component(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        ns_ret_string(return_value, c != nil ? [c localizedColorNameComponent] : nil);
    }
}

/* ====================================================================== */
/* RGB / HSB / gray / CMYK components                                     */
/* ====================================================================== */

double ns_nscolor_red_component(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        r = c != nil ? (double) [c redComponent] : 0.0;
    }
    return r;
}

double ns_nscolor_green_component(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        r = c != nil ? (double) [c greenComponent] : 0.0;
    }
    return r;
}

double ns_nscolor_blue_component(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        r = c != nil ? (double) [c blueComponent] : 0.0;
    }
    return r;
}

void ns_nscolor_get_red_green_blue_alpha(zval *return_value, zval *handle)
{
    @autoreleasepool {
        CGFloat red = 0.0, green = 0.0, blue = 0.0, alpha = 0.0;
        NSColor *c = NS_ARG_AS(NSColor, handle);
        if (c != nil) {
            [c getRed:&red green:&green blue:&blue alpha:&alpha];
        }
        array_init_size(return_value, 4);
        add_assoc_double(return_value, "red", (double) red);
        add_assoc_double(return_value, "green", (double) green);
        add_assoc_double(return_value, "blue", (double) blue);
        add_assoc_double(return_value, "alpha", (double) alpha);
    }
}

double ns_nscolor_hue_component(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        r = c != nil ? (double) [c hueComponent] : 0.0;
    }
    return r;
}

double ns_nscolor_saturation_component(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        r = c != nil ? (double) [c saturationComponent] : 0.0;
    }
    return r;
}

double ns_nscolor_brightness_component(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        r = c != nil ? (double) [c brightnessComponent] : 0.0;
    }
    return r;
}

void ns_nscolor_get_hue_saturation_brightness_alpha(zval *return_value, zval *handle)
{
    @autoreleasepool {
        CGFloat hue = 0.0, saturation = 0.0, brightness = 0.0, alpha = 0.0;
        NSColor *c = NS_ARG_AS(NSColor, handle);
        if (c != nil) {
            [c getHue:&hue saturation:&saturation brightness:&brightness alpha:&alpha];
        }
        array_init_size(return_value, 4);
        add_assoc_double(return_value, "hue", (double) hue);
        add_assoc_double(return_value, "saturation", (double) saturation);
        add_assoc_double(return_value, "brightness", (double) brightness);
        add_assoc_double(return_value, "alpha", (double) alpha);
    }
}

double ns_nscolor_white_component(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        r = c != nil ? (double) [c whiteComponent] : 0.0;
    }
    return r;
}

void ns_nscolor_get_white_alpha(zval *return_value, zval *handle)
{
    @autoreleasepool {
        CGFloat white = 0.0, alpha = 0.0;
        NSColor *c = NS_ARG_AS(NSColor, handle);
        if (c != nil) {
            [c getWhite:&white alpha:&alpha];
        }
        array_init_size(return_value, 2);
        add_assoc_double(return_value, "white", (double) white);
        add_assoc_double(return_value, "alpha", (double) alpha);
    }
}

double ns_nscolor_cyan_component(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        r = c != nil ? (double) [c cyanComponent] : 0.0;
    }
    return r;
}

double ns_nscolor_magenta_component(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        r = c != nil ? (double) [c magentaComponent] : 0.0;
    }
    return r;
}

double ns_nscolor_yellow_component(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        r = c != nil ? (double) [c yellowComponent] : 0.0;
    }
    return r;
}

double ns_nscolor_black_component(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        r = c != nil ? (double) [c blackComponent] : 0.0;
    }
    return r;
}

void ns_nscolor_get_cyan_magenta_yellow_black_alpha(zval *return_value, zval *handle)
{
    @autoreleasepool {
        CGFloat cyan = 0.0, magenta = 0.0, yellow = 0.0, black = 0.0, alpha = 0.0;
        NSColor *c = NS_ARG_AS(NSColor, handle);
        if (c != nil) {
            [c getCyan:&cyan magenta:&magenta yellow:&yellow black:&black alpha:&alpha];
        }
        array_init_size(return_value, 5);
        add_assoc_double(return_value, "cyan", (double) cyan);
        add_assoc_double(return_value, "magenta", (double) magenta);
        add_assoc_double(return_value, "yellow", (double) yellow);
        add_assoc_double(return_value, "black", (double) black);
        add_assoc_double(return_value, "alpha", (double) alpha);
    }
}

zend_long ns_nscolor_color_space(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        h = ns_handle_for(c != nil ? [c colorSpace] : nil);
    }
    return h;
}

zend_long ns_nscolor_number_of_components(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        r = c != nil ? (zend_long) [c numberOfComponents] : 0;
    }
    return r;
}

zend_long ns_nscolor_pattern_image(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        h = ns_handle_for(c != nil ? [c patternImage] : nil);
    }
    return h;
}

double ns_nscolor_alpha_component(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        r = c != nil ? (double) [c alphaComponent] : 0.0;
    }
    return r;
}

/* ====================================================================== */
/* Pasteboard / swatch / CG                                               */
/* ====================================================================== */

zend_long ns_nscolor_color_from_pasteboard(zval *pasteBoard)
{
    @autoreleasepool {
        return ns_handle_for([NSColor colorFromPasteboard:NS_ARG_AS(NSPasteboard, pasteBoard)]);
    }
}

void ns_nscolor_write_to_pasteboard(zval *handle, zval *pasteBoard)
{
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        if (c == nil) return;
        [c writeToPasteboard:NS_ARG_AS(NSPasteboard, pasteBoard)];
    }
}

void ns_nscolor_draw_swatch_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        if (c == nil) return;
        [c drawSwatchInRect:ns_arg_rect(x, y, width, height)];
    }
}

zend_long ns_nscolor_color_with_cg_color(zval *cgColor)
{
    @autoreleasepool {
        CGColorRef cg = (CGColorRef) (uintptr_t) ns_arg_long(cgColor);
        return ns_handle_for([NSColor colorWithCGColor:cg]);
    }
}

/* ====================================================================== */
/* NSQuartzCoreAdditions                                                  */
/* ====================================================================== */

zend_long ns_nscolor_color_with_ci_color(zval *color)
{
    @autoreleasepool {
        return ns_handle_for([NSColor colorWithCIColor:NS_ARG_AS(CIColor, color)]);
    }
}

zend_long ns_nscolor_cg_color(zval *handle)
{
    @autoreleasepool {
        NSColor *c = NS_ARG_AS(NSColor, handle);
        if (c == nil) return 0;
        return (zend_long) (uintptr_t) [c CGColor];
    }
}
