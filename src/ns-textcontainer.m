#include "ns-textcontainer.h"
#include "ns-value.h"

static void ns_ret_fragment_and_remaining(zval *rv, NSRect fragment, NSRect remaining)
{
    ns_ret_rect(rv, fragment);
    zval rem;
    ns_ret_rect(&rem, remaining);
    add_assoc_zval(rv, "remainingRect", &rem);
}

/* ====================================================================== */
/* NSTextContainer                                                        */
/* ====================================================================== */

zend_long ns_nstextcontainer_init_with_size(zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSTextContainer alloc] initWithSize:ns_arg_size(width, height)]);
    }
}

zend_long ns_nstextcontainer_text_layout_manager(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        h = ns_handle_for(c != nil ? [c textLayoutManager] : nil);
    }
    return h;
}

void ns_nstextcontainer_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        ns_ret_size(return_value, c != nil ? [c size] : NSZeroSize);
    }
}

void ns_nstextcontainer_set_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        if (c == nil) return;
        [c setSize:ns_arg_size(width, height)];
    }
}

zend_long ns_nstextcontainer_line_break_mode(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        r = c != nil ? (zend_long) [c lineBreakMode] : 0;
    }
    return r;
}

void ns_nstextcontainer_set_line_break_mode(zval *handle, zval *lineBreakMode)
{
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        if (c == nil) return;
        [c setLineBreakMode:(NSLineBreakMode) ns_arg_long(lineBreakMode)];
    }
}

double ns_nstextcontainer_line_fragment_padding(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        r = c != nil ? (double) [c lineFragmentPadding] : 0.0;
    }
    return r;
}

void ns_nstextcontainer_set_line_fragment_padding(zval *handle, zval *lineFragmentPadding)
{
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        if (c == nil) return;
        [c setLineFragmentPadding:ns_arg_double(lineFragmentPadding)];
    }
}

zend_long ns_nstextcontainer_maximum_number_of_lines(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        r = c != nil ? (zend_long) [c maximumNumberOfLines] : 0;
    }
    return r;
}

void ns_nstextcontainer_set_maximum_number_of_lines(zval *handle, zval *maximumNumberOfLines)
{
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        if (c == nil) return;
        [c setMaximumNumberOfLines:(NSUInteger) ns_arg_long(maximumNumberOfLines)];
    }
}

void ns_nstextcontainer_line_fragment_rect_for_proposed_rect_at_index_writing_direction_remaining_rect(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *characterIndex, zval *baseWritingDirection)
{
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        NSRect remaining = NSZeroRect;
        NSRect fragment = NSZeroRect;
        if (c != nil) {
            fragment = [c lineFragmentRectForProposedRect:ns_arg_rect(x, y, width, height)
                                                  atIndex:(NSUInteger) ns_arg_long(characterIndex)
                                         writingDirection:(NSWritingDirection) ns_arg_long(baseWritingDirection)
                                            remainingRect:&remaining];
        }
        ns_ret_fragment_and_remaining(return_value, fragment, remaining);
    }
}

zend_long ns_nstextcontainer_is_simple_rectangular_text_container(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        r = (c != nil && [c isSimpleRectangularTextContainer]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nstextcontainer_width_tracks_text_view(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        r = (c != nil && [c widthTracksTextView]) ? 1 : 0;
    }
    return r;
}

void ns_nstextcontainer_set_width_tracks_text_view(zval *handle, zval *widthTracksTextView)
{
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        if (c == nil) return;
        [c setWidthTracksTextView:ns_arg_bool(widthTracksTextView)];
    }
}

zend_long ns_nstextcontainer_height_tracks_text_view(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        r = (c != nil && [c heightTracksTextView]) ? 1 : 0;
    }
    return r;
}

void ns_nstextcontainer_set_height_tracks_text_view(zval *handle, zval *heightTracksTextView)
{
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        if (c == nil) return;
        [c setHeightTracksTextView:ns_arg_bool(heightTracksTextView)];
    }
}

zend_long ns_nstextcontainer_layout_manager(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        h = ns_handle_for(c != nil ? [c layoutManager] : nil);
    }
    return h;
}

void ns_nstextcontainer_set_layout_manager(zval *handle, zval *layoutManager)
{
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        if (c == nil) return;
        [c setLayoutManager:NS_ARG_AS(NSLayoutManager, layoutManager)];
    }
}

void ns_nstextcontainer_replace_layout_manager(zval *handle, zval *newLayoutManager)
{
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        if (c == nil) return;
        [c replaceLayoutManager:NS_ARG_AS(NSLayoutManager, newLayoutManager)];
    }
}

void ns_nstextcontainer_exclusion_paths(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        ns_ret_object_array(return_value, c != nil ? [c exclusionPaths] : nil);
    }
}

void ns_nstextcontainer_set_exclusion_paths(zval *handle, zval *exclusionPaths)
{
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        if (c == nil) return;
        [c setExclusionPaths:ns_arg_object_array(exclusionPaths)];
    }
}

zend_long ns_nstextcontainer_text_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        h = ns_handle_for(c != nil ? [c textView] : nil);
    }
    return h;
}

void ns_nstextcontainer_set_text_view(zval *handle, zval *textView)
{
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        if (c == nil) return;
        [c setTextView:NS_ARG_AS(NSTextView, textView)];
    }
}

zend_long ns_nstextcontainer_init_with_container_size(zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSTextContainer alloc] initWithContainerSize:ns_arg_size(width, height)]);
    }
}

void ns_nstextcontainer_container_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        ns_ret_size(return_value, c != nil ? [c containerSize] : NSZeroSize);
    }
}

void ns_nstextcontainer_set_container_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        if (c == nil) return;
        [c setContainerSize:ns_arg_size(width, height)];
    }
}

void ns_nstextcontainer_line_fragment_rect_for_proposed_rect_sweep_direction_movement_direction_remaining_rect(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height, zval *sweepDirection, zval *movementDirection)
{
    @autoreleasepool {
        NSTextContainer *c = NS_ARG_AS(NSTextContainer, handle);
        NSRect remaining = NSZeroRect;
        NSRect fragment = NSZeroRect;
        if (c != nil) {
            fragment = [c lineFragmentRectForProposedRect:ns_arg_rect(x, y, width, height)
                                           sweepDirection:(NSLineSweepDirection) ns_arg_long(sweepDirection)
                                        movementDirection:(NSLineMovementDirection) ns_arg_long(movementDirection)
                                            remainingRect:&remaining];
        }
        ns_ret_fragment_and_remaining(return_value, fragment, remaining);
    }
}
