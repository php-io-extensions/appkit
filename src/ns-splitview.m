#include "ns-splitview.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSSplitView                                                            */
/* ====================================================================== */

zend_long ns_nssplitview_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSSplitView alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nssplitview_is_vertical(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        r = (v != nil && [v isVertical]) ? 1 : 0;
    }
    return r;
}

void ns_nssplitview_set_vertical(zval *handle, zval *vertical)
{
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        if (v == nil) return;
        [v setVertical:ns_arg_bool(vertical)];
    }
}

zend_long ns_nssplitview_divider_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        r = v != nil ? (zend_long) [v dividerStyle] : 0;
    }
    return r;
}

void ns_nssplitview_set_divider_style(zval *handle, zval *dividerStyle)
{
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        if (v == nil) return;
        [v setDividerStyle:(NSSplitViewDividerStyle) ns_arg_long(dividerStyle)];
    }
}

void ns_nssplitview_autosave_name(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        ns_ret_string(return_value, v != nil ? [v autosaveName] : nil);
    }
}

void ns_nssplitview_set_autosave_name(zval *handle, zval *autosaveName)
{
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        if (v == nil) return;
        [v setAutosaveName:ns_arg_string(autosaveName)];
    }
}

zend_long ns_nssplitview_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        h = ns_handle_for(v != nil ? [v delegate] : nil);
    }
    return h;
}

void ns_nssplitview_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        if (v == nil) return;
        [v setDelegate:ns_arg_object(delegate)];
    }
}

void ns_nssplitview_draw_divider_in_rect(zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        if (v == nil) return;
        [v drawDividerInRect:ns_arg_rect(x, y, width, height)];
    }
}

zend_long ns_nssplitview_divider_color(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        h = ns_handle_for(v != nil ? [v dividerColor] : nil);
    }
    return h;
}

double ns_nssplitview_divider_thickness(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        r = v != nil ? (double) [v dividerThickness] : 0.0;
    }
    return r;
}

void ns_nssplitview_adjust_subviews(zval *handle)
{
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        if (v == nil) return;
        [v adjustSubviews];
    }
}

zend_long ns_nssplitview_is_subview_collapsed(zval *handle, zval *subview)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        r = (v != nil && [v isSubviewCollapsed:NS_ARG_AS(NSView, subview)]) ? 1 : 0;
    }
    return r;
}

double ns_nssplitview_min_possible_position_of_divider_at_index(zval *handle, zval *dividerIndex)
{
    double r = 0.0;
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        r = v != nil ? (double) [v minPossiblePositionOfDividerAtIndex:(NSInteger) ns_arg_long(dividerIndex)] : 0.0;
    }
    return r;
}

double ns_nssplitview_max_possible_position_of_divider_at_index(zval *handle, zval *dividerIndex)
{
    double r = 0.0;
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        r = v != nil ? (double) [v maxPossiblePositionOfDividerAtIndex:(NSInteger) ns_arg_long(dividerIndex)] : 0.0;
    }
    return r;
}

void ns_nssplitview_set_position_of_divider_at_index(zval *handle, zval *position, zval *dividerIndex)
{
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        if (v == nil) return;
        [v setPosition:ns_arg_double(position) ofDividerAtIndex:(NSInteger) ns_arg_long(dividerIndex)];
    }
}

double ns_nssplitview_holding_priority_for_subview_at_index(zval *handle, zval *subviewIndex)
{
    double r = 0.0;
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        r = v != nil ? (double) [v holdingPriorityForSubviewAtIndex:(NSInteger) ns_arg_long(subviewIndex)] : 0.0;
    }
    return r;
}

void ns_nssplitview_set_holding_priority_for_subview_at_index(zval *handle, zval *priority, zval *subviewIndex)
{
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        if (v == nil) return;
        [v setHoldingPriority:(NSLayoutPriority) ns_arg_double(priority) forSubviewAtIndex:(NSInteger) ns_arg_long(subviewIndex)];
    }
}

zend_long ns_nssplitview_arranges_all_subviews(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        r = (v != nil && [v arrangesAllSubviews]) ? 1 : 0;
    }
    return r;
}

void ns_nssplitview_set_arranges_all_subviews(zval *handle, zval *arrangesAllSubviews)
{
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        if (v == nil) return;
        [v setArrangesAllSubviews:ns_arg_bool(arrangesAllSubviews)];
    }
}

void ns_nssplitview_arranged_subviews(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        ns_ret_object_array(return_value, v != nil ? [v arrangedSubviews] : nil);
    }
}

void ns_nssplitview_add_arranged_subview(zval *handle, zval *view)
{
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        if (v == nil) return;
        [v addArrangedSubview:NS_ARG_AS(NSView, view)];
    }
}

void ns_nssplitview_insert_arranged_subview_at_index(zval *handle, zval *view, zval *index)
{
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        if (v == nil) return;
        [v insertArrangedSubview:NS_ARG_AS(NSView, view) atIndex:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nssplitview_remove_arranged_subview(zval *handle, zval *view)
{
    @autoreleasepool {
        NSSplitView *v = NS_ARG_AS(NSSplitView, handle);
        if (v == nil) return;
        [v removeArrangedSubview:NS_ARG_AS(NSView, view)];
    }
}
