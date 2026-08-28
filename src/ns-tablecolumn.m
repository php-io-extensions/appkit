#include "ns-tablecolumn.h"
#include "ns-value.h"

/* ====================================================================== */
/* Construction                                                           */
/* ====================================================================== */

zend_long ns_nstablecolumn_init_with_identifier(zval *identifier)
{
    @autoreleasepool {
        return ns_handle_for([[NSTableColumn alloc] initWithIdentifier:ns_arg_string(identifier)]);
    }
}

/* ====================================================================== */
/* Identity / table / width                                               */
/* ====================================================================== */

void ns_nstablecolumn_identifier(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        ns_ret_string(return_value, c != nil ? [c identifier] : nil);
    }
}

void ns_nstablecolumn_set_identifier(zval *handle, zval *identifier)
{
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        if (c == nil) return;
        [c setIdentifier:ns_arg_string(identifier)];
    }
}

zend_long ns_nstablecolumn_table_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        h = ns_handle_for(c != nil ? [c tableView] : nil);
    }
    return h;
}

void ns_nstablecolumn_set_table_view(zval *handle, zval *tableView)
{
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        if (c == nil) return;
        [c setTableView:NS_ARG_AS(NSTableView, tableView)];
    }
}

double ns_nstablecolumn_width(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        r = c != nil ? (double) [c width] : 0.0;
    }
    return r;
}

void ns_nstablecolumn_set_width(zval *handle, zval *width)
{
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        if (c == nil) return;
        [c setWidth:(CGFloat) ns_arg_double(width)];
    }
}

double ns_nstablecolumn_min_width(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        r = c != nil ? (double) [c minWidth] : 0.0;
    }
    return r;
}

void ns_nstablecolumn_set_min_width(zval *handle, zval *minWidth)
{
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        if (c == nil) return;
        [c setMinWidth:(CGFloat) ns_arg_double(minWidth)];
    }
}

double ns_nstablecolumn_max_width(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        r = c != nil ? (double) [c maxWidth] : 0.0;
    }
    return r;
}

void ns_nstablecolumn_set_max_width(zval *handle, zval *maxWidth)
{
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        if (c == nil) return;
        [c setMaxWidth:(CGFloat) ns_arg_double(maxWidth)];
    }
}

void ns_nstablecolumn_title(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        ns_ret_string(return_value, c != nil ? [c title] : nil);
    }
}

void ns_nstablecolumn_set_title(zval *handle, zval *title)
{
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        if (c == nil) return;
        [c setTitle:ns_arg_string(title)];
    }
}

zend_long ns_nstablecolumn_header_cell(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        h = ns_handle_for(c != nil ? [c headerCell] : nil);
    }
    return h;
}

void ns_nstablecolumn_set_header_cell(zval *handle, zval *headerCell)
{
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        if (c == nil) return;
        [c setHeaderCell:NS_ARG_AS(NSTableHeaderCell, headerCell)];
    }
}

zend_long ns_nstablecolumn_is_editable(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        r = (c != nil && [c isEditable]) ? 1 : 0;
    }
    return r;
}

void ns_nstablecolumn_set_editable(zval *handle, zval *editable)
{
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        if (c == nil) return;
        [c setEditable:ns_arg_bool(editable)];
    }
}

void ns_nstablecolumn_size_to_fit(zval *handle)
{
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        if (c == nil) return;
        [c sizeToFit];
    }
}

zend_long ns_nstablecolumn_sort_descriptor_prototype(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        h = ns_handle_for(c != nil ? [c sortDescriptorPrototype] : nil);
    }
    return h;
}

void ns_nstablecolumn_set_sort_descriptor_prototype(zval *handle, zval *sortDescriptorPrototype)
{
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        if (c == nil) return;
        [c setSortDescriptorPrototype:NS_ARG_AS(NSSortDescriptor, sortDescriptorPrototype)];
    }
}

zend_long ns_nstablecolumn_resizing_mask(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        r = c != nil ? (zend_long) [c resizingMask] : 0;
    }
    return r;
}

void ns_nstablecolumn_set_resizing_mask(zval *handle, zval *resizingMask)
{
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        if (c == nil) return;
        [c setResizingMask:(NSTableColumnResizingOptions) ns_arg_long(resizingMask)];
    }
}

void ns_nstablecolumn_header_tool_tip(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        ns_ret_string(return_value, c != nil ? [c headerToolTip] : nil);
    }
}

void ns_nstablecolumn_set_header_tool_tip(zval *handle, zval *headerToolTip)
{
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        if (c == nil) return;
        [c setHeaderToolTip:ns_arg_string(headerToolTip)];
    }
}

zend_long ns_nstablecolumn_is_hidden(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        r = (c != nil && [c isHidden]) ? 1 : 0;
    }
    return r;
}

void ns_nstablecolumn_set_hidden(zval *handle, zval *hidden)
{
    @autoreleasepool {
        NSTableColumn *c = NS_ARG_AS(NSTableColumn, handle);
        if (c == nil) return;
        [c setHidden:ns_arg_bool(hidden)];
    }
}

/* ====================================================================== */
/* NSDeprecated — all members reserved, see the header                    */
/* ====================================================================== */
