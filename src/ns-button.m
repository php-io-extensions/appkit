#include "ns-button.h"
#include "ns-value.h"

/* ====================================================================== */
/* Creating Standard Buttons                                              */
/* ====================================================================== */

zend_long ns_nsbutton_button_with_title_image_target_action(zval *title, zval *image, zval *target, zval *action)
{
    zend_long h = 0;
    @autoreleasepool {
        NSButton *b = [NSButton buttonWithTitle:ns_arg_string(title)
                                          image:NS_ARG_AS(NSImage, image)
                                         target:ns_arg_object(target)
                                         action:ns_arg_sel(action)];
        h = ns_handle_for(b);
    }
    return h;
}

zend_long ns_nsbutton_button_with_title_target_action(zval *title, zval *target, zval *action)
{
    zend_long h = 0;
    @autoreleasepool {
        NSButton *b = [NSButton buttonWithTitle:ns_arg_string(title)
                                         target:ns_arg_object(target)
                                         action:ns_arg_sel(action)];
        h = ns_handle_for(b);
    }
    return h;
}

zend_long ns_nsbutton_button_with_image_target_action(zval *image, zval *target, zval *action)
{
    zend_long h = 0;
    @autoreleasepool {
        NSButton *b = [NSButton buttonWithImage:NS_ARG_AS(NSImage, image)
                                         target:ns_arg_object(target)
                                         action:ns_arg_sel(action)];
        h = ns_handle_for(b);
    }
    return h;
}

zend_long ns_nsbutton_checkbox_with_title_target_action(zval *title, zval *target, zval *action)
{
    zend_long h = 0;
    @autoreleasepool {
        NSButton *b = [NSButton checkboxWithTitle:ns_arg_string(title)
                                           target:ns_arg_object(target)
                                           action:ns_arg_sel(action)];
        h = ns_handle_for(b);
    }
    return h;
}

zend_long ns_nsbutton_radio_button_with_title_target_action(zval *title, zval *target, zval *action)
{
    zend_long h = 0;
    @autoreleasepool {
        NSButton *b = [NSButton radioButtonWithTitle:ns_arg_string(title)
                                              target:ns_arg_object(target)
                                              action:ns_arg_sel(action)];
        h = ns_handle_for(b);
    }
    return h;
}

/* ====================================================================== */
/* Configuring Buttons                                                    */
/* ====================================================================== */

void ns_nsbutton_set_button_type(zval *handle, zval *type)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setButtonType:(NSButtonType) ns_arg_long(type)];
    }
}

void ns_nsbutton_title(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        ns_ret_string(return_value, b != nil ? [b title] : nil);
    }
}

void ns_nsbutton_set_title(zval *handle, zval *title)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setTitle:ns_arg_string(title)];
    }
}

void ns_nsbutton_alternate_title(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        ns_ret_string(return_value, b != nil ? [b alternateTitle] : nil);
    }
}

void ns_nsbutton_set_alternate_title(zval *handle, zval *title)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setAlternateTitle:ns_arg_string(title)];
    }
}

zend_long ns_nsbutton_has_destructive_action(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        r = (b != nil && [b hasDestructiveAction]) ? 1 : 0;
    }
    return r;
}

void ns_nsbutton_set_has_destructive_action(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setHasDestructiveAction:ns_arg_bool(flag)];
    }
}

zend_long ns_nsbutton_sound(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        h = ns_handle_for(b != nil ? [b sound] : nil);
    }
    return h;
}

void ns_nsbutton_set_sound(zval *handle, zval *sound)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setSound:NS_ARG_AS(NSSound, sound)];
    }
}

zend_long ns_nsbutton_is_spring_loaded(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        r = (b != nil && [b isSpringLoaded]) ? 1 : 0;
    }
    return r;
}

void ns_nsbutton_set_spring_loaded(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setSpringLoaded:ns_arg_bool(flag)];
    }
}

zend_long ns_nsbutton_max_accelerator_level(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        r = b != nil ? (zend_long) [b maxAcceleratorLevel] : 0;
    }
    return r;
}

void ns_nsbutton_set_max_accelerator_level(zval *handle, zval *level)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setMaxAcceleratorLevel:(NSInteger) ns_arg_long(level)];
    }
}

void ns_nsbutton_set_periodic_delay_interval(zval *handle, zval *delay, zval *interval)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setPeriodicDelay:(float) ns_arg_double(delay) interval:(float) ns_arg_double(interval)];
    }
}

void ns_nsbutton_get_periodic_delay_interval(zval *return_value, zval *handle)
{
    @autoreleasepool {
        float delay = 0.0f, interval = 0.0f;
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b != nil) {
            [b getPeriodicDelay:&delay interval:&interval];
        }
        array_init_size(return_value, 2);
        add_assoc_double(return_value, "delay", (double) delay);
        add_assoc_double(return_value, "interval", (double) interval);
    }
}

zend_long ns_nsbutton_bezel_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        r = b != nil ? (zend_long) [b bezelStyle] : 0;
    }
    return r;
}

void ns_nsbutton_set_bezel_style(zval *handle, zval *style)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setBezelStyle:(NSBezelStyle) ns_arg_long(style)];
    }
}

zend_long ns_nsbutton_is_bordered(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        r = (b != nil && [b isBordered]) ? 1 : 0;
    }
    return r;
}

void ns_nsbutton_set_bordered(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setBordered:ns_arg_bool(flag)];
    }
}

zend_long ns_nsbutton_is_transparent(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        r = (b != nil && [b isTransparent]) ? 1 : 0;
    }
    return r;
}

void ns_nsbutton_set_transparent(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setTransparent:ns_arg_bool(flag)];
    }
}

zend_long ns_nsbutton_shows_border_only_while_mouse_inside(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        r = (b != nil && [b showsBorderOnlyWhileMouseInside]) ? 1 : 0;
    }
    return r;
}

void ns_nsbutton_set_shows_border_only_while_mouse_inside(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setShowsBorderOnlyWhileMouseInside:ns_arg_bool(flag)];
    }
}

zend_long ns_nsbutton_bezel_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        h = ns_handle_for(b != nil ? [b bezelColor] : nil);
    }
    return h;
}

void ns_nsbutton_set_bezel_color(zval *handle, zval *color)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setBezelColor:NS_ARG_AS(NSColor, color)];
    }
}

zend_long ns_nsbutton_content_tint_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        h = ns_handle_for(b != nil ? [b contentTintColor] : nil);
    }
    return h;
}

void ns_nsbutton_set_content_tint_color(zval *handle, zval *color)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setContentTintColor:NS_ARG_AS(NSColor, color)];
    }
}

/* ====================================================================== */
/* Configuring Button Images                                              */
/* ====================================================================== */

zend_long ns_nsbutton_image(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        h = ns_handle_for(b != nil ? [b image] : nil);
    }
    return h;
}

void ns_nsbutton_set_image(zval *handle, zval *image)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setImage:NS_ARG_AS(NSImage, image)];
    }
}

zend_long ns_nsbutton_alternate_image(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        h = ns_handle_for(b != nil ? [b alternateImage] : nil);
    }
    return h;
}

void ns_nsbutton_set_alternate_image(zval *handle, zval *image)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setAlternateImage:NS_ARG_AS(NSImage, image)];
    }
}

zend_long ns_nsbutton_image_position(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        r = b != nil ? (zend_long) [b imagePosition] : 0;
    }
    return r;
}

void ns_nsbutton_set_image_position(zval *handle, zval *position)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setImagePosition:(NSCellImagePosition) ns_arg_long(position)];
    }
}

zend_long ns_nsbutton_image_scaling(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        r = b != nil ? (zend_long) [b imageScaling] : 0;
    }
    return r;
}

void ns_nsbutton_set_image_scaling(zval *handle, zval *scaling)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setImageScaling:(NSImageScaling) ns_arg_long(scaling)];
    }
}

zend_long ns_nsbutton_image_hugs_title(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        r = (b != nil && [b imageHugsTitle]) ? 1 : 0;
    }
    return r;
}

void ns_nsbutton_set_image_hugs_title(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setImageHugsTitle:ns_arg_bool(flag)];
    }
}

zend_long ns_nsbutton_symbol_configuration(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        h = ns_handle_for(b != nil ? [b symbolConfiguration] : nil);
    }
    return h;
}

void ns_nsbutton_set_symbol_configuration(zval *handle, zval *configuration)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setSymbolConfiguration:NS_ARG_AS(NSImageSymbolConfiguration, configuration)];
    }
}

/* ====================================================================== */
/* Managing Button State                                                  */
/* ====================================================================== */

zend_long ns_nsbutton_state(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        r = b != nil ? (zend_long) [b state] : 0;
    }
    return r;
}

void ns_nsbutton_set_state(zval *handle, zval *state)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setState:(NSControlStateValue) ns_arg_long(state)];
    }
}

zend_long ns_nsbutton_allows_mixed_state(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        r = (b != nil && [b allowsMixedState]) ? 1 : 0;
    }
    return r;
}

void ns_nsbutton_set_allows_mixed_state(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setAllowsMixedState:ns_arg_bool(flag)];
    }
}

void ns_nsbutton_set_next_state(zval *handle)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setNextState];
    }
}

void ns_nsbutton_highlight(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b highlight:ns_arg_bool(flag)];
    }
}

/* ====================================================================== */
/* Handling Keyboard Events                                               */
/* ====================================================================== */

void ns_nsbutton_key_equivalent(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        ns_ret_string(return_value, b != nil ? [b keyEquivalent] : nil);
    }
}

void ns_nsbutton_set_key_equivalent(zval *handle, zval *keyEquivalent)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setKeyEquivalent:ns_arg_string(keyEquivalent)];
    }
}

zend_long ns_nsbutton_key_equivalent_modifier_mask(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        r = b != nil ? (zend_long) [b keyEquivalentModifierMask] : 0;
    }
    return r;
}

void ns_nsbutton_set_key_equivalent_modifier_mask(zval *handle, zval *mask)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b setKeyEquivalentModifierMask:(NSEventModifierFlags) ns_arg_long(mask)];
    }
}

zend_long ns_nsbutton_perform_key_equivalent(zval *handle, zval *key)
{
    zend_long r = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        NSEvent *e = NS_ARG_AS(NSEvent, key);
        r = (b != nil && e != nil && [b performKeyEquivalent:e]) ? 1 : 0;
    }
    return r;
}

/* ====================================================================== */
/* NSUserInterfaceCompression                                             */
/* ====================================================================== */

void ns_nsbutton_compress_with_prioritized_compression_options(zval *handle, zval *prioritizedOptions)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        if (b == nil) return;
        [b compressWithPrioritizedCompressionOptions:ns_arg_object_array(prioritizedOptions)];
    }
}

void ns_nsbutton_minimum_size_with_prioritized_compression_options(zval *return_value, zval *handle, zval *prioritizedOptions)
{
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        ns_ret_size(return_value, b != nil
            ? [b minimumSizeWithPrioritizedCompressionOptions:ns_arg_object_array(prioritizedOptions)]
            : NSZeroSize);
    }
}

zend_long ns_nsbutton_active_compression_options(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSButton *b = NS_ARG_AS(NSButton, handle);
        h = ns_handle_for(b != nil ? [b activeCompressionOptions] : nil);
    }
    return h;
}
