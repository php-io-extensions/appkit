#include "ns-image.h"
#include "ns-value.h"

/* ====================================================================== */
/* Initialization                                                         */
/* ====================================================================== */

zend_long ns_nsimage_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSImage alloc] init]);
    }
}

zend_long ns_nsimage_image_named(zval *name)
{
    @autoreleasepool {
        return ns_handle_for([NSImage imageNamed:ns_arg_string(name)]);
    }
}

zend_long ns_nsimage_image_with_system_symbol_name_accessibility_description(zval *name, zval *description)
{
    @autoreleasepool {
        return ns_handle_for([NSImage imageWithSystemSymbolName:ns_arg_string(name)
                                      accessibilityDescription:ns_arg_string(description)]);
    }
}

zend_long ns_nsimage_image_with_system_symbol_name_variable_value_accessibility_description(zval *name, zval *value, zval *description)
{
    @autoreleasepool {
        return ns_handle_for([NSImage imageWithSystemSymbolName:ns_arg_string(name)
                                                 variableValue:ns_arg_double(value)
                                      accessibilityDescription:ns_arg_string(description)]);
    }
}

zend_long ns_nsimage_image_with_symbol_name_variable_value(zval *name, zval *value)
{
    @autoreleasepool {
        return ns_handle_for([NSImage imageWithSymbolName:ns_arg_string(name)
                                           variableValue:ns_arg_double(value)]);
    }
}

zend_long ns_nsimage_image_with_symbol_name_bundle_variable_value(zval *name, zval *bundle, zval *value)
{
    @autoreleasepool {
        return ns_handle_for([NSImage imageWithSymbolName:ns_arg_string(name)
                                                  bundle:NS_ARG_AS(NSBundle, bundle)
                                           variableValue:ns_arg_double(value)]);
    }
}

zend_long ns_nsimage_init_with_size(zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSImage alloc] initWithSize:ns_arg_size(width, height)]);
    }
}

zend_long ns_nsimage_init_with_contents_of_file(zval *fileName)
{
    @autoreleasepool {
        return ns_handle_for([[NSImage alloc] initWithContentsOfFile:ns_arg_string(fileName)]);
    }
}

zend_long ns_nsimage_init_with_contents_of_url(zval *url)
{
    @autoreleasepool {
        return ns_handle_for([[NSImage alloc] initWithContentsOfURL:NS_ARG_AS(NSURL, url)]);
    }
}

zend_long ns_nsimage_init_by_referencing_file(zval *fileName)
{
    @autoreleasepool {
        return ns_handle_for([[NSImage alloc] initByReferencingFile:ns_arg_string(fileName)]);
    }
}

zend_long ns_nsimage_init_by_referencing_url(zval *url)
{
    @autoreleasepool {
        return ns_handle_for([[NSImage alloc] initByReferencingURL:NS_ARG_AS(NSURL, url)]);
    }
}

zend_long ns_nsimage_init_with_pasteboard(zval *pasteboard)
{
    @autoreleasepool {
        return ns_handle_for([[NSImage alloc] initWithPasteboard:NS_ARG_AS(NSPasteboard, pasteboard)]);
    }
}

/* ====================================================================== */
/* Properties and Methods                                                 */
/* ====================================================================== */

void ns_nsimage_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        ns_ret_size(return_value, img != nil ? [img size] : NSZeroSize);
    }
}

void ns_nsimage_set_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img setSize:ns_arg_size(width, height)];
    }
}

zend_long ns_nsimage_set_name(zval *handle, zval *name)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        r = (img != nil && [img setName:ns_arg_string(name)]) ? 1 : 0;
    }
    return r;
}

void ns_nsimage_name(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        ns_ret_string(return_value, img != nil ? [img name] : nil);
    }
}

zend_long ns_nsimage_background_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        h = ns_handle_for(img != nil ? [img backgroundColor] : nil);
    }
    return h;
}

void ns_nsimage_set_background_color(zval *handle, zval *backgroundColor)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img setBackgroundColor:NS_ARG_AS(NSColor, backgroundColor)];
    }
}

zend_long ns_nsimage_uses_eps_on_resolution_mismatch(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        r = (img != nil && [img usesEPSOnResolutionMismatch]) ? 1 : 0;
    }
    return r;
}

void ns_nsimage_set_uses_eps_on_resolution_mismatch(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img setUsesEPSOnResolutionMismatch:ns_arg_bool(flag)];
    }
}

zend_long ns_nsimage_prefers_color_match(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        r = (img != nil && [img prefersColorMatch]) ? 1 : 0;
    }
    return r;
}

void ns_nsimage_set_prefers_color_match(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img setPrefersColorMatch:ns_arg_bool(flag)];
    }
}

zend_long ns_nsimage_matches_on_multiple_resolution(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        r = (img != nil && [img matchesOnMultipleResolution]) ? 1 : 0;
    }
    return r;
}

void ns_nsimage_set_matches_on_multiple_resolution(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img setMatchesOnMultipleResolution:ns_arg_bool(flag)];
    }
}

zend_long ns_nsimage_matches_only_on_best_fitting_axis(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        r = (img != nil && [img matchesOnlyOnBestFittingAxis]) ? 1 : 0;
    }
    return r;
}

void ns_nsimage_set_matches_only_on_best_fitting_axis(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img setMatchesOnlyOnBestFittingAxis:ns_arg_bool(flag)];
    }
}

void ns_nsimage_draw_at_point_from_rect_operation_fraction(zval *handle, zval *x, zval *y, zval *fromX, zval *fromY, zval *fromWidth, zval *fromHeight, zval *op, zval *delta)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img drawAtPoint:ns_arg_point(x, y)
                fromRect:ns_arg_rect(fromX, fromY, fromWidth, fromHeight)
               operation:(NSCompositingOperation) ns_arg_long(op)
                fraction:ns_arg_double(delta)];
    }
}

void ns_nsimage_draw_in_rect_from_rect_operation_fraction(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *fromX, zval *fromY, zval *fromWidth, zval *fromHeight, zval *op, zval *delta)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img drawInRect:ns_arg_rect(x, y, width, height)
               fromRect:ns_arg_rect(fromX, fromY, fromWidth, fromHeight)
              operation:(NSCompositingOperation) ns_arg_long(op)
               fraction:ns_arg_double(delta)];
    }
}

void ns_nsimage_draw_in_rect_from_rect_operation_fraction_respect_flipped_hints(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *fromX, zval *fromY, zval *fromWidth, zval *fromHeight, zval *op, zval *requestedAlpha, zval *respectFlipped, zval *hints)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img drawInRect:ns_arg_rect(x, y, width, height)
               fromRect:ns_arg_rect(fromX, fromY, fromWidth, fromHeight)
              operation:(NSCompositingOperation) ns_arg_long(op)
               fraction:ns_arg_double(requestedAlpha)
         respectFlipped:ns_arg_bool(respectFlipped)
                  hints:NS_ARG_AS(NSDictionary, hints)];
    }
}

zend_long ns_nsimage_draw_representation_in_rect(zval *handle, zval *imageRep, zval *x, zval *y, zval *width, zval *height)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        r = (img != nil && [img drawRepresentation:NS_ARG_AS(NSImageRep, imageRep)
                                            inRect:ns_arg_rect(x, y, width, height)]) ? 1 : 0;
    }
    return r;
}

void ns_nsimage_draw_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img drawInRect:ns_arg_rect(x, y, width, height)];
    }
}

void ns_nsimage_recache(zval *handle)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img recache];
    }
}

void ns_nsimage_representations(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        ns_ret_object_array(return_value, img != nil ? [img representations] : nil);
    }
}

void ns_nsimage_add_representations(zval *handle, zval *imageReps)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img addRepresentations:ns_arg_object_array(imageReps)];
    }
}

void ns_nsimage_add_representation(zval *handle, zval *imageRep)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img addRepresentation:NS_ARG_AS(NSImageRep, imageRep)];
    }
}

void ns_nsimage_remove_representation(zval *handle, zval *imageRep)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img removeRepresentation:NS_ARG_AS(NSImageRep, imageRep)];
    }
}

zend_long ns_nsimage_is_valid(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        r = (img != nil && [img isValid]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nsimage_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        h = ns_handle_for(img != nil ? [img delegate] : nil);
    }
    return h;
}

void ns_nsimage_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img setDelegate:ns_arg_object(delegate)];
    }
}

void ns_nsimage_image_types(zval *return_value)
{
    @autoreleasepool {
        ns_ret_string_array(return_value, [NSImage imageTypes]);
    }
}

void ns_nsimage_image_unfiltered_types(zval *return_value)
{
    @autoreleasepool {
        ns_ret_string_array(return_value, [NSImage imageUnfilteredTypes]);
    }
}

zend_long ns_nsimage_can_init_with_pasteboard(zval *pasteboard)
{
    zend_long r = 0;
    @autoreleasepool {
        r = [NSImage canInitWithPasteboard:NS_ARG_AS(NSPasteboard, pasteboard)] ? 1 : 0;
    }
    return r;
}

zend_long ns_nsimage_cache_mode(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        r = img != nil ? (zend_long) [img cacheMode] : 0;
    }
    return r;
}

void ns_nsimage_set_cache_mode(zval *handle, zval *cacheMode)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img setCacheMode:(NSImageCacheMode) ns_arg_long(cacheMode)];
    }
}

void ns_nsimage_alignment_rect(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        ns_ret_rect(return_value, img != nil ? [img alignmentRect] : NSZeroRect);
    }
}

void ns_nsimage_set_alignment_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img setAlignmentRect:ns_arg_rect(x, y, width, height)];
    }
}

zend_long ns_nsimage_is_template(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        r = (img != nil && [img isTemplate]) ? 1 : 0;
    }
    return r;
}

void ns_nsimage_set_template(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img setTemplate:ns_arg_bool(flag)];
    }
}

void ns_nsimage_accessibility_description(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        ns_ret_string(return_value, img != nil ? [img accessibilityDescription] : nil);
    }
}

void ns_nsimage_set_accessibility_description(zval *handle, zval *accessibilityDescription)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img setAccessibilityDescription:ns_arg_string(accessibilityDescription)];
    }
}

zend_long ns_nsimage_init_with_cgimage_size(zval *cgImage, zval *width, zval *height)
{
    @autoreleasepool {
        CGImageRef cg = (CGImageRef) (uintptr_t) ns_arg_long(cgImage);
        return ns_handle_for([[NSImage alloc] initWithCGImage:cg size:ns_arg_size(width, height)]);
    }
}

zend_long ns_nsimage_best_representation_for_rect_context_hints(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *context, zval *hints)
{
    zend_long h = 0;
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        h = ns_handle_for(img != nil ? [img bestRepresentationForRect:ns_arg_rect(x, y, width, height)
                                                             context:NS_ARG_AS(NSGraphicsContext, context)
                                                               hints:NS_ARG_AS(NSDictionary, hints)] : nil);
    }
    return h;
}

zend_long ns_nsimage_hit_test_rect_with_image_destination_rect_context_hints_flipped(zval *handle, zval *testX, zval *testY, zval *testWidth, zval *testHeight, zval *destX, zval *destY, zval *destWidth, zval *destHeight, zval *context, zval *hints, zval *flipped)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        r = (img != nil && [img hitTestRect:ns_arg_rect(testX, testY, testWidth, testHeight)
                 withImageDestinationRect:ns_arg_rect(destX, destY, destWidth, destHeight)
                                  context:NS_ARG_AS(NSGraphicsContext, context)
                                    hints:NS_ARG_AS(NSDictionary, hints)
                                  flipped:ns_arg_bool(flipped)]) ? 1 : 0;
    }
    return r;
}

double ns_nsimage_recommended_layer_contents_scale(zval *handle, zval *preferredContentsScale)
{
    double r = 0.0;
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        r = img != nil ? [img recommendedLayerContentsScale:ns_arg_double(preferredContentsScale)] : 0.0;
    }
    return r;
}

zend_long ns_nsimage_layer_contents_for_contents_scale(zval *handle, zval *layerContentsScale)
{
    zend_long h = 0;
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        h = ns_handle_for(img != nil ? [img layerContentsForContentsScale:ns_arg_double(layerContentsScale)] : nil);
    }
    return h;
}

void ns_nsimage_cap_insets(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        ns_ret_edge_insets(return_value, img != nil ? [img capInsets] : NSEdgeInsetsZero);
    }
}

void ns_nsimage_set_cap_insets(zval *handle, zval *top, zval *left, zval *bottom, zval *right)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img setCapInsets:NSEdgeInsetsMake(ns_arg_double(top), ns_arg_double(left), ns_arg_double(bottom), ns_arg_double(right))];
    }
}

zend_long ns_nsimage_resizing_mode(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        r = img != nil ? (zend_long) [img resizingMode] : 0;
    }
    return r;
}

void ns_nsimage_set_resizing_mode(zval *handle, zval *resizingMode)
{
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        if (img == nil) return;
        [img setResizingMode:(NSImageResizingMode) ns_arg_long(resizingMode)];
    }
}

zend_long ns_nsimage_image_with_symbol_configuration(zval *handle, zval *configuration)
{
    zend_long h = 0;
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        h = ns_handle_for(img != nil ? [img imageWithSymbolConfiguration:NS_ARG_AS(NSImageSymbolConfiguration, configuration)] : nil);
    }
    return h;
}

zend_long ns_nsimage_symbol_configuration(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        h = ns_handle_for(img != nil ? [img symbolConfiguration] : nil);
    }
    return h;
}

zend_long ns_nsimage_image_with_locale(zval *handle, zval *locale)
{
    zend_long h = 0;
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        h = ns_handle_for(img != nil ? [img imageWithLocale:NS_ARG_AS(NSLocale, locale)] : nil);
    }
    return h;
}

zend_long ns_nsimage_locale(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSImage *img = NS_ARG_AS(NSImage, handle);
        h = ns_handle_for(img != nil ? [img locale] : nil);
    }
    return h;
}

/* ====================================================================== */
/* NSImageSymbolConfiguration                                             */
/* ====================================================================== */

zend_long ns_nsimagesymbolconfiguration_configuration_with_point_size_weight_scale(zval *pointSize, zval *weight, zval *scale)
{
    @autoreleasepool {
        return ns_handle_for([NSImageSymbolConfiguration configurationWithPointSize:ns_arg_double(pointSize)
                                                                            weight:(NSFontWeight) ns_arg_double(weight)
                                                                             scale:(NSImageSymbolScale) ns_arg_long(scale)]);
    }
}

zend_long ns_nsimagesymbolconfiguration_configuration_with_point_size_weight(zval *pointSize, zval *weight)
{
    @autoreleasepool {
        return ns_handle_for([NSImageSymbolConfiguration configurationWithPointSize:ns_arg_double(pointSize)
                                                                            weight:(NSFontWeight) ns_arg_double(weight)]);
    }
}

zend_long ns_nsimagesymbolconfiguration_configuration_with_text_style_scale(zval *style, zval *scale)
{
    @autoreleasepool {
        return ns_handle_for([NSImageSymbolConfiguration configurationWithTextStyle:ns_arg_string(style)
                                                                             scale:(NSImageSymbolScale) ns_arg_long(scale)]);
    }
}

zend_long ns_nsimagesymbolconfiguration_configuration_with_text_style(zval *style)
{
    @autoreleasepool {
        return ns_handle_for([NSImageSymbolConfiguration configurationWithTextStyle:ns_arg_string(style)]);
    }
}

zend_long ns_nsimagesymbolconfiguration_configuration_with_scale(zval *scale)
{
    @autoreleasepool {
        return ns_handle_for([NSImageSymbolConfiguration configurationWithScale:(NSImageSymbolScale) ns_arg_long(scale)]);
    }
}

zend_long ns_nsimagesymbolconfiguration_configuration_preferring_monochrome(void)
{
    @autoreleasepool {
        return ns_handle_for([NSImageSymbolConfiguration configurationPreferringMonochrome]);
    }
}

zend_long ns_nsimagesymbolconfiguration_configuration_preferring_hierarchical(void)
{
    @autoreleasepool {
        return ns_handle_for([NSImageSymbolConfiguration configurationPreferringHierarchical]);
    }
}

zend_long ns_nsimagesymbolconfiguration_configuration_with_hierarchical_color(zval *hierarchicalColor)
{
    @autoreleasepool {
        return ns_handle_for([NSImageSymbolConfiguration configurationWithHierarchicalColor:NS_ARG_AS(NSColor, hierarchicalColor)]);
    }
}

zend_long ns_nsimagesymbolconfiguration_configuration_with_palette_colors(zval *paletteColors)
{
    @autoreleasepool {
        return ns_handle_for([NSImageSymbolConfiguration configurationWithPaletteColors:ns_arg_object_array(paletteColors)]);
    }
}

zend_long ns_nsimagesymbolconfiguration_configuration_preferring_multicolor(void)
{
    @autoreleasepool {
        return ns_handle_for([NSImageSymbolConfiguration configurationPreferringMulticolor]);
    }
}

zend_long ns_nsimagesymbolconfiguration_configuration_by_applying_configuration(zval *handle, zval *configuration)
{
    zend_long h = 0;
    @autoreleasepool {
        NSImageSymbolConfiguration *cfg = NS_ARG_AS(NSImageSymbolConfiguration, handle);
        h = ns_handle_for(cfg != nil ? [cfg configurationByApplyingConfiguration:NS_ARG_AS(NSImageSymbolConfiguration, configuration)] : nil);
    }
    return h;
}
