#include "ns-imageview.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSImageView                                                            */
/* ====================================================================== */

zend_long ns_nsimageview_image_view_with_image(zval *image)
{
    zend_long h = 0;
    @autoreleasepool {
        NSImageView *v = [NSImageView imageViewWithImage:NS_ARG_AS(NSImage, image)];
        h = ns_handle_for(v);
    }
    return h;
}

zend_long ns_nsimageview_image(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        h = ns_handle_for(v != nil ? [v image] : nil);
    }
    return h;
}

void ns_nsimageview_set_image(zval *handle, zval *image)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v setImage:NS_ARG_AS(NSImage, image)];
    }
}

zend_long ns_nsimageview_is_editable(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        r = (v != nil && [v isEditable]) ? 1 : 0;
    }
    return r;
}

void ns_nsimageview_set_editable(zval *handle, zval *editable)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v setEditable:ns_arg_bool(editable)];
    }
}

zend_long ns_nsimageview_image_alignment(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        r = v != nil ? (zend_long) [v imageAlignment] : 0;
    }
    return r;
}

void ns_nsimageview_set_image_alignment(zval *handle, zval *imageAlignment)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v setImageAlignment:(NSImageAlignment) ns_arg_long(imageAlignment)];
    }
}

zend_long ns_nsimageview_image_scaling(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        r = v != nil ? (zend_long) [v imageScaling] : 0;
    }
    return r;
}

void ns_nsimageview_set_image_scaling(zval *handle, zval *imageScaling)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v setImageScaling:(NSImageScaling) ns_arg_long(imageScaling)];
    }
}

zend_long ns_nsimageview_image_frame_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        r = v != nil ? (zend_long) [v imageFrameStyle] : 0;
    }
    return r;
}

void ns_nsimageview_set_image_frame_style(zval *handle, zval *imageFrameStyle)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v setImageFrameStyle:(NSImageFrameStyle) ns_arg_long(imageFrameStyle)];
    }
}

zend_long ns_nsimageview_symbol_configuration(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        h = ns_handle_for(v != nil ? [v symbolConfiguration] : nil);
    }
    return h;
}

void ns_nsimageview_set_symbol_configuration(zval *handle, zval *symbolConfiguration)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v setSymbolConfiguration:NS_ARG_AS(NSImageSymbolConfiguration, symbolConfiguration)];
    }
}

zend_long ns_nsimageview_content_tint_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        h = ns_handle_for(v != nil ? [v contentTintColor] : nil);
    }
    return h;
}

void ns_nsimageview_set_content_tint_color(zval *handle, zval *contentTintColor)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v setContentTintColor:NS_ARG_AS(NSColor, contentTintColor)];
    }
}

zend_long ns_nsimageview_animates(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        r = (v != nil && [v animates]) ? 1 : 0;
    }
    return r;
}

void ns_nsimageview_set_animates(zval *handle, zval *animates)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v setAnimates:ns_arg_bool(animates)];
    }
}

zend_long ns_nsimageview_allows_cut_copy_paste(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        r = (v != nil && [v allowsCutCopyPaste]) ? 1 : 0;
    }
    return r;
}

void ns_nsimageview_set_allows_cut_copy_paste(zval *handle, zval *allowsCutCopyPaste)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v setAllowsCutCopyPaste:ns_arg_bool(allowsCutCopyPaste)];
    }
}

zend_long ns_nsimageview_default_preferred_image_dynamic_range(void)
{
    zend_long r = 0;
    @autoreleasepool {
        r = (zend_long) [NSImageView defaultPreferredImageDynamicRange];
    }
    return r;
}

void ns_nsimageview_set_default_preferred_image_dynamic_range(zval *defaultPreferredImageDynamicRange)
{
    @autoreleasepool {
        [NSImageView setDefaultPreferredImageDynamicRange:(NSImageDynamicRange) ns_arg_long(defaultPreferredImageDynamicRange)];
    }
}

zend_long ns_nsimageview_preferred_image_dynamic_range(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        r = v != nil ? (zend_long) [v preferredImageDynamicRange] : 0;
    }
    return r;
}

void ns_nsimageview_set_preferred_image_dynamic_range(zval *handle, zval *preferredImageDynamicRange)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v setPreferredImageDynamicRange:(NSImageDynamicRange) ns_arg_long(preferredImageDynamicRange)];
    }
}

zend_long ns_nsimageview_image_dynamic_range(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        r = v != nil ? (zend_long) [v imageDynamicRange] : 0;
    }
    return r;
}

/* ====================================================================== */
/* NSSymbolEffect                                                         */
/* ====================================================================== */

void ns_nsimageview_add_symbol_effect(zval *handle, zval *symbolEffect)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v addSymbolEffect:NS_ARG_AS(NSSymbolEffect, symbolEffect)];
    }
}

void ns_nsimageview_add_symbol_effect_options(zval *handle, zval *symbolEffect, zval *options)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v addSymbolEffect:NS_ARG_AS(NSSymbolEffect, symbolEffect)
                   options:NS_ARG_AS(NSSymbolEffectOptions, options)];
    }
}

void ns_nsimageview_add_symbol_effect_options_animated(zval *handle, zval *symbolEffect, zval *options, zval *animated)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v addSymbolEffect:NS_ARG_AS(NSSymbolEffect, symbolEffect)
                   options:NS_ARG_AS(NSSymbolEffectOptions, options)
                  animated:ns_arg_bool(animated)];
    }
}

void ns_nsimageview_remove_symbol_effect_of_type(zval *handle, zval *symbolEffect)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v removeSymbolEffectOfType:NS_ARG_AS(NSSymbolEffect, symbolEffect)];
    }
}

void ns_nsimageview_remove_symbol_effect_of_type_options(zval *handle, zval *symbolEffect, zval *options)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v removeSymbolEffectOfType:NS_ARG_AS(NSSymbolEffect, symbolEffect)
                            options:NS_ARG_AS(NSSymbolEffectOptions, options)];
    }
}

void ns_nsimageview_remove_symbol_effect_of_type_options_animated(zval *handle, zval *symbolEffect, zval *options, zval *animated)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v removeSymbolEffectOfType:NS_ARG_AS(NSSymbolEffect, symbolEffect)
                            options:NS_ARG_AS(NSSymbolEffectOptions, options)
                           animated:ns_arg_bool(animated)];
    }
}

void ns_nsimageview_remove_all_symbol_effects(zval *handle)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v removeAllSymbolEffects];
    }
}

void ns_nsimageview_remove_all_symbol_effects_with_options(zval *handle, zval *options)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v removeAllSymbolEffectsWithOptions:NS_ARG_AS(NSSymbolEffectOptions, options)];
    }
}

void ns_nsimageview_remove_all_symbol_effects_with_options_animated(zval *handle, zval *options, zval *animated)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v removeAllSymbolEffectsWithOptions:NS_ARG_AS(NSSymbolEffectOptions, options)
                                    animated:ns_arg_bool(animated)];
    }
}

void ns_nsimageview_set_symbol_image_with_content_transition(zval *handle, zval *symbolImage, zval *transition)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v setSymbolImage:NS_ARG_AS(NSImage, symbolImage)
    withContentTransition:NS_ARG_AS(NSSymbolContentTransition, transition)];
    }
}

void ns_nsimageview_set_symbol_image_with_content_transition_options(zval *handle, zval *symbolImage, zval *transition, zval *options)
{
    @autoreleasepool {
        NSImageView *v = NS_ARG_AS(NSImageView, handle);
        if (v == nil) return;
        [v setSymbolImage:NS_ARG_AS(NSImage, symbolImage)
    withContentTransition:NS_ARG_AS(NSSymbolContentTransition, transition)
                  options:NS_ARG_AS(NSSymbolEffectOptions, options)];
    }
}
