#include "ns-stackview.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSStackView                                                            */
/* ====================================================================== */

zend_long ns_nsstackview_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSStackView alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

zend_long ns_nsstackview_stack_view_with_views(zval *views)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSStackView stackViewWithViews:ns_arg_object_array(views)]);
    }
    return h;
}

zend_long ns_nsstackview_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        h = ns_handle_for(v != nil ? [v delegate] : nil);
    }
    return h;
}

void ns_nsstackview_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        if (v == nil) return;
        [v setDelegate:ns_arg_object(delegate)];
    }
}

zend_long ns_nsstackview_orientation(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        r = v != nil ? (zend_long) [v orientation] : 0;
    }
    return r;
}

void ns_nsstackview_set_orientation(zval *handle, zval *orientation)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        if (v == nil) return;
        [v setOrientation:(NSUserInterfaceLayoutOrientation) ns_arg_long(orientation)];
    }
}

zend_long ns_nsstackview_alignment(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        r = v != nil ? (zend_long) [v alignment] : 0;
    }
    return r;
}

void ns_nsstackview_set_alignment(zval *handle, zval *alignment)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        if (v == nil) return;
        [v setAlignment:(NSLayoutAttribute) ns_arg_long(alignment)];
    }
}

void ns_nsstackview_edge_insets(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        ns_ret_edge_insets(return_value, v != nil ? [v edgeInsets] : NSEdgeInsetsZero);
    }
}

void ns_nsstackview_set_edge_insets(zval *handle, zval *top, zval *left, zval *bottom, zval *right)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        if (v == nil) return;
        [v setEdgeInsets:NSEdgeInsetsMake(ns_arg_double(top), ns_arg_double(left), ns_arg_double(bottom), ns_arg_double(right))];
    }
}

zend_long ns_nsstackview_distribution(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        r = v != nil ? (zend_long) [v distribution] : 0;
    }
    return r;
}

void ns_nsstackview_set_distribution(zval *handle, zval *distribution)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        if (v == nil) return;
        [v setDistribution:(NSStackViewDistribution) ns_arg_long(distribution)];
    }
}

double ns_nsstackview_spacing(zval *handle)
{
    double r = 0.0;
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        r = v != nil ? (double) [v spacing] : 0.0;
    }
    return r;
}

void ns_nsstackview_set_spacing(zval *handle, zval *spacing)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        if (v == nil) return;
        [v setSpacing:ns_arg_double(spacing)];
    }
}

void ns_nsstackview_set_custom_spacing_after_view(zval *handle, zval *spacing, zval *view)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        if (v == nil) return;
        [v setCustomSpacing:ns_arg_double(spacing) afterView:NS_ARG_AS(NSView, view)];
    }
}

double ns_nsstackview_custom_spacing_after_view(zval *handle, zval *view)
{
    double r = 0.0;
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        r = v != nil ? (double) [v customSpacingAfterView:NS_ARG_AS(NSView, view)] : 0.0;
    }
    return r;
}

zend_long ns_nsstackview_detaches_hidden_views(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        r = (v != nil && [v detachesHiddenViews]) ? 1 : 0;
    }
    return r;
}

void ns_nsstackview_set_detaches_hidden_views(zval *handle, zval *detachesHiddenViews)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        if (v == nil) return;
        [v setDetachesHiddenViews:ns_arg_bool(detachesHiddenViews)];
    }
}

void ns_nsstackview_arranged_subviews(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        ns_ret_object_array(return_value, v != nil ? [v arrangedSubviews] : nil);
    }
}

void ns_nsstackview_add_arranged_subview(zval *handle, zval *view)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        if (v == nil) return;
        [v addArrangedSubview:NS_ARG_AS(NSView, view)];
    }
}

void ns_nsstackview_insert_arranged_subview_at_index(zval *handle, zval *view, zval *index)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        if (v == nil) return;
        [v insertArrangedSubview:NS_ARG_AS(NSView, view) atIndex:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nsstackview_remove_arranged_subview(zval *handle, zval *view)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        if (v == nil) return;
        [v removeArrangedSubview:NS_ARG_AS(NSView, view)];
    }
}

void ns_nsstackview_detached_views(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        ns_ret_object_array(return_value, v != nil ? [v detachedViews] : nil);
    }
}

void ns_nsstackview_set_visibility_priority_for_view(zval *handle, zval *priority, zval *view)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        if (v == nil) return;
        [v setVisibilityPriority:(NSStackViewVisibilityPriority) ns_arg_double(priority) forView:NS_ARG_AS(NSView, view)];
    }
}

double ns_nsstackview_visibility_priority_for_view(zval *handle, zval *view)
{
    double r = 0.0;
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        r = v != nil ? (double) [v visibilityPriorityForView:NS_ARG_AS(NSView, view)] : 0.0;
    }
    return r;
}

double ns_nsstackview_clipping_resistance_priority_for_orientation(zval *handle, zval *orientation)
{
    double r = 0.0;
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        r = v != nil ? (double) [v clippingResistancePriorityForOrientation:(NSLayoutConstraintOrientation) ns_arg_long(orientation)] : 0.0;
    }
    return r;
}

void ns_nsstackview_set_clipping_resistance_priority_for_orientation(zval *handle, zval *clippingResistancePriority, zval *orientation)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        if (v == nil) return;
        [v setClippingResistancePriority:(NSLayoutPriority) ns_arg_double(clippingResistancePriority) forOrientation:(NSLayoutConstraintOrientation) ns_arg_long(orientation)];
    }
}

double ns_nsstackview_hugging_priority_for_orientation(zval *handle, zval *orientation)
{
    double r = 0.0;
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        r = v != nil ? (double) [v huggingPriorityForOrientation:(NSLayoutConstraintOrientation) ns_arg_long(orientation)] : 0.0;
    }
    return r;
}

void ns_nsstackview_set_hugging_priority_for_orientation(zval *handle, zval *huggingPriority, zval *orientation)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        if (v == nil) return;
        [v setHuggingPriority:(NSLayoutPriority) ns_arg_double(huggingPriority) forOrientation:(NSLayoutConstraintOrientation) ns_arg_long(orientation)];
    }
}

void ns_nsstackview_add_view_in_gravity(zval *handle, zval *view, zval *gravity)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        if (v == nil) return;
        [v addView:NS_ARG_AS(NSView, view) inGravity:(NSStackViewGravity) ns_arg_long(gravity)];
    }
}

void ns_nsstackview_insert_view_at_index_in_gravity(zval *handle, zval *view, zval *index, zval *gravity)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        if (v == nil) return;
        [v insertView:NS_ARG_AS(NSView, view) atIndex:(NSUInteger) ns_arg_long(index) inGravity:(NSStackViewGravity) ns_arg_long(gravity)];
    }
}

void ns_nsstackview_remove_view(zval *handle, zval *view)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        if (v == nil) return;
        [v removeView:NS_ARG_AS(NSView, view)];
    }
}

void ns_nsstackview_views_in_gravity(zval *return_value, zval *handle, zval *gravity)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        ns_ret_object_array(return_value, v != nil ? [v viewsInGravity:(NSStackViewGravity) ns_arg_long(gravity)] : nil);
    }
}

void ns_nsstackview_set_views_in_gravity(zval *handle, zval *views, zval *gravity)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        if (v == nil) return;
        [v setViews:ns_arg_object_array(views) inGravity:(NSStackViewGravity) ns_arg_long(gravity)];
    }
}

void ns_nsstackview_views(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSStackView *v = NS_ARG_AS(NSStackView, handle);
        ns_ret_object_array(return_value, v != nil ? [v views] : nil);
    }
}
