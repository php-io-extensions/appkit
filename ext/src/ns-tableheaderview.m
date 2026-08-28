#include "ns-tableheaderview.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSTableHeaderView                                                      */
/* ====================================================================== */

zend_long ns_nstableheaderview_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSTableHeaderView alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nstableheaderview_table_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableHeaderView *v = NS_ARG_AS(NSTableHeaderView, handle);
        h = ns_handle_for(v != nil ? [v tableView] : nil);
    }
    return h;
}

void ns_nstableheaderview_set_table_view(zval *handle, zval *tableView)
{
    @autoreleasepool {
        NSTableHeaderView *v = NS_ARG_AS(NSTableHeaderView, handle);
        if (v == nil) return;
        [v setTableView:NS_ARG_AS(NSTableView, tableView)];
    }
}

zend_long ns_nstableheaderview_dragged_column(zval *handle)
{
    zend_long r = -1;
    @autoreleasepool {
        NSTableHeaderView *v = NS_ARG_AS(NSTableHeaderView, handle);
        r = v != nil ? (zend_long) [v draggedColumn] : -1;
    }
    return r;
}

double ns_nstableheaderview_dragged_distance(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSTableHeaderView *v = NS_ARG_AS(NSTableHeaderView, handle);
        r = v != nil ? (double) [v draggedDistance] : 0.0;
    }
    return r;
}

zend_long ns_nstableheaderview_resized_column(zval *handle)
{
    zend_long r = -1;
    @autoreleasepool {
        NSTableHeaderView *v = NS_ARG_AS(NSTableHeaderView, handle);
        r = v != nil ? (zend_long) [v resizedColumn] : -1;
    }
    return r;
}

void ns_nstableheaderview_header_rect_of_column(zval *return_value, zval *handle, zval *column)
{
    @autoreleasepool {
        NSTableHeaderView *v = NS_ARG_AS(NSTableHeaderView, handle);
        ns_ret_rect(return_value, v != nil
            ? [v headerRectOfColumn:(NSInteger) ns_arg_long(column)]
            : NSZeroRect);
    }
}

zend_long ns_nstableheaderview_column_at_point(zval *handle, zval *x, zval *y)
{
    zend_long r = -1;
    @autoreleasepool {
        NSTableHeaderView *v = NS_ARG_AS(NSTableHeaderView, handle);
        r = v != nil ? (zend_long) [v columnAtPoint:ns_arg_point(x, y)] : -1;
    }
    return r;
}
