#include "ns-tableheadercell.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSTableHeaderCell                                                      */
/* ====================================================================== */

zend_long ns_nstableheadercell_init_text_cell(zval *string_)
{
    @autoreleasepool {
        return ns_handle_for([[NSTableHeaderCell alloc] initTextCell:ns_arg_string(string_)]);
    }
}

void ns_nstableheadercell_draw_sort_indicator_with_frame_in_view_ascending_priority(zval *handle, zval *x, zval *y, zval *width, zval *height, zval *controlView, zval *ascending, zval *priority)
{
    @autoreleasepool {
        NSTableHeaderCell *c = NS_ARG_AS(NSTableHeaderCell, handle);
        if (c == nil) return;
        [c drawSortIndicatorWithFrame:ns_arg_rect(x, y, width, height)
                               inView:NS_ARG_AS(NSView, controlView)
                            ascending:ns_arg_bool(ascending)
                             priority:(NSInteger) ns_arg_long(priority)];
    }
}

void ns_nstableheadercell_sort_indicator_rect_for_bounds(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSTableHeaderCell *c = NS_ARG_AS(NSTableHeaderCell, handle);
        ns_ret_rect(return_value, c != nil
            ? [c sortIndicatorRectForBounds:ns_arg_rect(x, y, width, height)]
            : NSZeroRect);
    }
}
