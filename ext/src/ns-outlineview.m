#include "ns-outlineview.h"
#include "ns-value.h"

/* ====================================================================== */
/* Construction                                                           */
/* ====================================================================== */

zend_long ns_nsoutlineview_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSOutlineView alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

/* ====================================================================== */
/* Data source / delegate / outline column                                */
/* ====================================================================== */

zend_long ns_nsoutlineview_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        h = ns_handle_for(ov != nil ? [ov delegate] : nil);
    }
    return h;
}

void ns_nsoutlineview_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        if (ov == nil) return;
        [ov setDelegate:ns_arg_object(delegate)];
    }
}

zend_long ns_nsoutlineview_data_source(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        h = ns_handle_for(ov != nil ? [ov dataSource] : nil);
    }
    return h;
}

void ns_nsoutlineview_set_data_source(zval *handle, zval *dataSource)
{
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        if (ov == nil) return;
        [ov setDataSource:ns_arg_object(dataSource)];
    }
}

zend_long ns_nsoutlineview_outline_table_column(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        h = ns_handle_for(ov != nil ? [ov outlineTableColumn] : nil);
    }
    return h;
}

void ns_nsoutlineview_set_outline_table_column(zval *handle, zval *outlineTableColumn)
{
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        if (ov == nil) return;
        [ov setOutlineTableColumn:NS_ARG_AS(NSTableColumn, outlineTableColumn)];
    }
}

/* ====================================================================== */
/* Hierarchy                                                              */
/* ====================================================================== */

zend_long ns_nsoutlineview_is_expandable(zval *handle, zval *item)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        r = (ov != nil && [ov isExpandable:ns_arg_object(item)]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nsoutlineview_number_of_children_of_item(zval *handle, zval *item)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        r = ov != nil ? (zend_long) [ov numberOfChildrenOfItem:ns_arg_object(item)] : 0;
    }
    return r;
}

zend_long ns_nsoutlineview_child_of_item(zval *handle, zval *index, zval *item)
{
    zend_long h = 0;
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        h = ns_handle_for(ov != nil ? [ov child:(NSInteger) ns_arg_long(index) ofItem:ns_arg_object(item)] : nil);
    }
    return h;
}

void ns_nsoutlineview_expand_item_expand_children(zval *handle, zval *item, zval *expandChildren)
{
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        if (ov == nil) return;
        [ov expandItem:ns_arg_object(item) expandChildren:ns_arg_bool(expandChildren)];
    }
}

void ns_nsoutlineview_expand_item(zval *handle, zval *item)
{
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        if (ov == nil) return;
        [ov expandItem:ns_arg_object(item)];
    }
}

void ns_nsoutlineview_collapse_item_collapse_children(zval *handle, zval *item, zval *collapseChildren)
{
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        if (ov == nil) return;
        [ov collapseItem:ns_arg_object(item) collapseChildren:ns_arg_bool(collapseChildren)];
    }
}

void ns_nsoutlineview_collapse_item(zval *handle, zval *item)
{
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        if (ov == nil) return;
        [ov collapseItem:ns_arg_object(item)];
    }
}

void ns_nsoutlineview_reload_item_reload_children(zval *handle, zval *item, zval *reloadChildren)
{
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        if (ov == nil) return;
        [ov reloadItem:ns_arg_object(item) reloadChildren:ns_arg_bool(reloadChildren)];
    }
}

void ns_nsoutlineview_reload_item(zval *handle, zval *item)
{
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        if (ov == nil) return;
        [ov reloadItem:ns_arg_object(item)];
    }
}

zend_long ns_nsoutlineview_parent_for_item(zval *handle, zval *item)
{
    zend_long h = 0;
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        h = ns_handle_for(ov != nil ? [ov parentForItem:ns_arg_object(item)] : nil);
    }
    return h;
}

zend_long ns_nsoutlineview_child_index_for_item(zval *handle, zval *item)
{
    zend_long r = -1;
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        r = ov != nil ? (zend_long) [ov childIndexForItem:ns_arg_object(item)] : -1;
    }
    return r;
}

/* ====================================================================== */
/* Item / row translation                                                 */
/* ====================================================================== */

zend_long ns_nsoutlineview_item_at_row(zval *handle, zval *row)
{
    zend_long h = 0;
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        h = ns_handle_for(ov != nil ? [ov itemAtRow:(NSInteger) ns_arg_long(row)] : nil);
    }
    return h;
}

zend_long ns_nsoutlineview_row_for_item(zval *handle, zval *item)
{
    zend_long r = -1;
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        r = ov != nil ? (zend_long) [ov rowForItem:ns_arg_object(item)] : -1;
    }
    return r;
}

/* ====================================================================== */
/* Indentation                                                            */
/* ====================================================================== */

zend_long ns_nsoutlineview_level_for_item(zval *handle, zval *item)
{
    zend_long r = -1;
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        r = ov != nil ? (zend_long) [ov levelForItem:ns_arg_object(item)] : -1;
    }
    return r;
}

zend_long ns_nsoutlineview_level_for_row(zval *handle, zval *row)
{
    zend_long r = -1;
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        r = ov != nil ? (zend_long) [ov levelForRow:(NSInteger) ns_arg_long(row)] : -1;
    }
    return r;
}

zend_long ns_nsoutlineview_is_item_expanded(zval *handle, zval *item)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        r = (ov != nil && [ov isItemExpanded:ns_arg_object(item)]) ? 1 : 0;
    }
    return r;
}

double ns_nsoutlineview_indentation_per_level(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        r = ov != nil ? (double) [ov indentationPerLevel] : 0.0;
    }
    return r;
}

void ns_nsoutlineview_set_indentation_per_level(zval *handle, zval *indentationPerLevel)
{
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        if (ov == nil) return;
        [ov setIndentationPerLevel:(CGFloat) ns_arg_double(indentationPerLevel)];
    }
}

zend_long ns_nsoutlineview_indentation_marker_follows_cell(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        r = (ov != nil && [ov indentationMarkerFollowsCell]) ? 1 : 0;
    }
    return r;
}

void ns_nsoutlineview_set_indentation_marker_follows_cell(zval *handle, zval *indentationMarkerFollowsCell)
{
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        if (ov == nil) return;
        [ov setIndentationMarkerFollowsCell:ns_arg_bool(indentationMarkerFollowsCell)];
    }
}

zend_long ns_nsoutlineview_autoresizes_outline_column(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        r = (ov != nil && [ov autoresizesOutlineColumn]) ? 1 : 0;
    }
    return r;
}

void ns_nsoutlineview_set_autoresizes_outline_column(zval *handle, zval *autoresizesOutlineColumn)
{
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        if (ov == nil) return;
        [ov setAutoresizesOutlineColumn:ns_arg_bool(autoresizesOutlineColumn)];
    }
}

void ns_nsoutlineview_frame_of_outline_cell_at_row(zval *return_value, zval *handle, zval *row)
{
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        ns_ret_rect(return_value, ov != nil ? [ov frameOfOutlineCellAtRow:(NSInteger) ns_arg_long(row)] : NSZeroRect);
    }
}

/* ====================================================================== */
/* Drag and drop                                                          */
/* ====================================================================== */

void ns_nsoutlineview_set_drop_item_drop_child_index(zval *handle, zval *item, zval *index)
{
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        if (ov == nil) return;
        [ov setDropItem:ns_arg_object(item) dropChildIndex:(NSInteger) ns_arg_long(index)];
    }
}

zend_long ns_nsoutlineview_should_collapse_auto_expanded_items_for_deposited(zval *handle, zval *deposited)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        r = (ov != nil && [ov shouldCollapseAutoExpandedItemsForDeposited:ns_arg_bool(deposited)]) ? 1 : 0;
    }
    return r;
}

/* ====================================================================== */
/* Persistence                                                            */
/* ====================================================================== */

zend_long ns_nsoutlineview_autosave_expanded_items(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        r = (ov != nil && [ov autosaveExpandedItems]) ? 1 : 0;
    }
    return r;
}

void ns_nsoutlineview_set_autosave_expanded_items(zval *handle, zval *autosaveExpandedItems)
{
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        if (ov == nil) return;
        [ov setAutosaveExpandedItems:ns_arg_bool(autosaveExpandedItems)];
    }
}

/* ====================================================================== */
/* Animated insert / remove / move                                        */
/* ====================================================================== */

void ns_nsoutlineview_insert_items_at_indexes_in_parent_with_animation(zval *handle, zval *indexes, zval *parent, zval *animationOptions)
{
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        if (ov == nil) return;
        [ov insertItemsAtIndexes:NS_ARG_AS(NSIndexSet, indexes) inParent:ns_arg_object(parent) withAnimation:(NSTableViewAnimationOptions) ns_arg_long(animationOptions)];
    }
}

void ns_nsoutlineview_remove_items_at_indexes_in_parent_with_animation(zval *handle, zval *indexes, zval *parent, zval *animationOptions)
{
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        if (ov == nil) return;
        [ov removeItemsAtIndexes:NS_ARG_AS(NSIndexSet, indexes) inParent:ns_arg_object(parent) withAnimation:(NSTableViewAnimationOptions) ns_arg_long(animationOptions)];
    }
}

void ns_nsoutlineview_move_item_at_index_in_parent_to_index_in_parent(zval *handle, zval *fromIndex, zval *oldParent, zval *toIndex, zval *newParent)
{
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        if (ov == nil) return;
        [ov moveItemAtIndex:(NSInteger) ns_arg_long(fromIndex) inParent:ns_arg_object(oldParent) toIndex:(NSInteger) ns_arg_long(toIndex) inParent:ns_arg_object(newParent)];
    }
}

/* ====================================================================== */
/* Layout / references                                                    */
/* ====================================================================== */

zend_long ns_nsoutlineview_user_interface_layout_direction(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        r = ov != nil ? (zend_long) [ov userInterfaceLayoutDirection] : 0;
    }
    return r;
}

void ns_nsoutlineview_set_user_interface_layout_direction(zval *handle, zval *userInterfaceLayoutDirection)
{
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        if (ov == nil) return;
        [ov setUserInterfaceLayoutDirection:(NSUserInterfaceLayoutDirection) ns_arg_long(userInterfaceLayoutDirection)];
    }
}

zend_long ns_nsoutlineview_strongly_references_items(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        r = (ov != nil && [ov stronglyReferencesItems]) ? 1 : 0;
    }
    return r;
}

void ns_nsoutlineview_set_strongly_references_items(zval *handle, zval *stronglyReferencesItems)
{
    @autoreleasepool {
        NSOutlineView *ov = NS_ARG_AS(NSOutlineView, handle);
        if (ov == nil) return;
        [ov setStronglyReferencesItems:ns_arg_bool(stronglyReferencesItems)];
    }
}
