#include "ns-imagerep.h"
#include "ns-value.h"

/* ====================================================================== */
/* Initialization                                                         */
/* ====================================================================== */

zend_long ns_nsimagerep_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSImageRep alloc] init]);
    }
}

/* ====================================================================== */
/* Drawing                                                                */
/* ====================================================================== */

zend_long ns_nsimagerep_draw(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImageRep *rep = NS_ARG_AS(NSImageRep, handle);
        r = (rep != nil && [rep draw]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nsimagerep_draw_at_point(zval *handle, zval *x, zval *y)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImageRep *rep = NS_ARG_AS(NSImageRep, handle);
        r = (rep != nil && [rep drawAtPoint:ns_arg_point(x, y)]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nsimagerep_draw_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImageRep *rep = NS_ARG_AS(NSImageRep, handle);
        r = (rep != nil && [rep drawInRect:ns_arg_rect(x, y, width, height)]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nsimagerep_draw_in_rect_from_rect_operation_fraction_respect_flipped_hints(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *fromX, zval *fromY, zval *fromWidth, zval *fromHeight, zval *op, zval *requestedAlpha, zval *respectFlipped, zval *hints)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImageRep *rep = NS_ARG_AS(NSImageRep, handle);
        r = (rep != nil && [rep drawInRect:ns_arg_rect(x, y, width, height)
                                 fromRect:ns_arg_rect(fromX, fromY, fromWidth, fromHeight)
                                operation:(NSCompositingOperation) ns_arg_long(op)
                                 fraction:ns_arg_double(requestedAlpha)
                           respectFlipped:ns_arg_bool(respectFlipped)
                                    hints:ns_arg_dictionary(hints)]) ? 1 : 0;
    }
    return r;
}

/* ====================================================================== */
/* Image info                                                             */
/* ====================================================================== */

void ns_nsimagerep_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSImageRep *rep = NS_ARG_AS(NSImageRep, handle);
        ns_ret_size(return_value, rep != nil ? [rep size] : NSZeroSize);
    }
}

void ns_nsimagerep_set_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSImageRep *rep = NS_ARG_AS(NSImageRep, handle);
        if (rep == nil) return;
        [rep setSize:ns_arg_size(width, height)];
    }
}

zend_long ns_nsimagerep_has_alpha(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImageRep *rep = NS_ARG_AS(NSImageRep, handle);
        r = (rep != nil && [rep hasAlpha]) ? 1 : 0;
    }
    return r;
}

void ns_nsimagerep_set_alpha(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSImageRep *rep = NS_ARG_AS(NSImageRep, handle);
        if (rep == nil) return;
        [rep setAlpha:ns_arg_bool(flag)];
    }
}

zend_long ns_nsimagerep_is_opaque(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImageRep *rep = NS_ARG_AS(NSImageRep, handle);
        r = (rep != nil && [rep isOpaque]) ? 1 : 0;
    }
    return r;
}

void ns_nsimagerep_set_opaque(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSImageRep *rep = NS_ARG_AS(NSImageRep, handle);
        if (rep == nil) return;
        [rep setOpaque:ns_arg_bool(flag)];
    }
}

void ns_nsimagerep_color_space_name(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSImageRep *rep = NS_ARG_AS(NSImageRep, handle);
        ns_ret_string(return_value, rep != nil ? [rep colorSpaceName] : nil);
    }
}

void ns_nsimagerep_set_color_space_name(zval *handle, zval *colorSpaceName)
{
    @autoreleasepool {
        NSImageRep *rep = NS_ARG_AS(NSImageRep, handle);
        if (rep == nil) return;
        [rep setColorSpaceName:ns_arg_string(colorSpaceName)];
    }
}

zend_long ns_nsimagerep_bits_per_sample(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImageRep *rep = NS_ARG_AS(NSImageRep, handle);
        r = rep != nil ? (zend_long) [rep bitsPerSample] : 0;
    }
    return r;
}

void ns_nsimagerep_set_bits_per_sample(zval *handle, zval *bitsPerSample)
{
    @autoreleasepool {
        NSImageRep *rep = NS_ARG_AS(NSImageRep, handle);
        if (rep == nil) return;
        [rep setBitsPerSample:ns_arg_long(bitsPerSample)];
    }
}

zend_long ns_nsimagerep_pixels_wide(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImageRep *rep = NS_ARG_AS(NSImageRep, handle);
        r = rep != nil ? (zend_long) [rep pixelsWide] : 0;
    }
    return r;
}

void ns_nsimagerep_set_pixels_wide(zval *handle, zval *pixelsWide)
{
    @autoreleasepool {
        NSImageRep *rep = NS_ARG_AS(NSImageRep, handle);
        if (rep == nil) return;
        [rep setPixelsWide:ns_arg_long(pixelsWide)];
    }
}

zend_long ns_nsimagerep_pixels_high(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImageRep *rep = NS_ARG_AS(NSImageRep, handle);
        r = rep != nil ? (zend_long) [rep pixelsHigh] : 0;
    }
    return r;
}

void ns_nsimagerep_set_pixels_high(zval *handle, zval *pixelsHigh)
{
    @autoreleasepool {
        NSImageRep *rep = NS_ARG_AS(NSImageRep, handle);
        if (rep == nil) return;
        [rep setPixelsHigh:ns_arg_long(pixelsHigh)];
    }
}

zend_long ns_nsimagerep_layout_direction(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSImageRep *rep = NS_ARG_AS(NSImageRep, handle);
        r = rep != nil ? (zend_long) [rep layoutDirection] : 0;
    }
    return r;
}

void ns_nsimagerep_set_layout_direction(zval *handle, zval *layoutDirection)
{
    @autoreleasepool {
        NSImageRep *rep = NS_ARG_AS(NSImageRep, handle);
        if (rep == nil) return;
        [rep setLayoutDirection:(NSImageLayoutDirection) ns_arg_long(layoutDirection)];
    }
}

/* ====================================================================== */
/* File / pasteboard convenience                                          */
/* ====================================================================== */

void ns_nsimagerep_image_unfiltered_types(zval *return_value)
{
    @autoreleasepool {
        ns_ret_string_array(return_value, [NSImageRep imageUnfilteredTypes]);
    }
}

void ns_nsimagerep_image_types(zval *return_value)
{
    @autoreleasepool {
        ns_ret_string_array(return_value, [NSImageRep imageTypes]);
    }
}

zend_long ns_nsimagerep_can_init_with_pasteboard(zval *pasteboard)
{
    zend_long r = 0;
    @autoreleasepool {
        r = [NSImageRep canInitWithPasteboard:NS_ARG_AS(NSPasteboard, pasteboard)] ? 1 : 0;
    }
    return r;
}

void ns_nsimagerep_image_reps_with_contents_of_file(zval *return_value, zval *fileName)
{
    @autoreleasepool {
        ns_ret_object_array(return_value, [NSImageRep imageRepsWithContentsOfFile:ns_arg_string(fileName)]);
    }
}

zend_long ns_nsimagerep_image_rep_with_contents_of_file(zval *fileName)
{
    @autoreleasepool {
        return ns_handle_for([NSImageRep imageRepWithContentsOfFile:ns_arg_string(fileName)]);
    }
}

void ns_nsimagerep_image_reps_with_contents_of_url(zval *return_value, zval *url)
{
    @autoreleasepool {
        ns_ret_object_array(return_value, [NSImageRep imageRepsWithContentsOfURL:NS_ARG_AS(NSURL, url)]);
    }
}

zend_long ns_nsimagerep_image_rep_with_contents_of_url(zval *url)
{
    @autoreleasepool {
        return ns_handle_for([NSImageRep imageRepWithContentsOfURL:NS_ARG_AS(NSURL, url)]);
    }
}

void ns_nsimagerep_image_reps_with_pasteboard(zval *return_value, zval *pasteboard)
{
    @autoreleasepool {
        ns_ret_object_array(return_value, [NSImageRep imageRepsWithPasteboard:NS_ARG_AS(NSPasteboard, pasteboard)]);
    }
}

zend_long ns_nsimagerep_image_rep_with_pasteboard(zval *pasteboard)
{
    @autoreleasepool {
        return ns_handle_for([NSImageRep imageRepWithPasteboard:NS_ARG_AS(NSPasteboard, pasteboard)]);
    }
}
