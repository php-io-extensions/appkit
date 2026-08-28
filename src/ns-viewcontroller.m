#include "ns-viewcontroller.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSViewController                                                       */
/* ====================================================================== */

zend_long ns_nsviewcontroller_init_with_nib_name_bundle(zval *nibName, zval *bundle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSViewController *c = [[NSViewController alloc] initWithNibName:ns_arg_string(nibName)
                                                                 bundle:NS_ARG_AS(NSBundle, bundle)];
        h = ns_handle_for(c);
    }
    return h;
}

void ns_nsviewcontroller_nib_name(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        ns_ret_string(return_value, c != nil ? [c nibName] : nil);
    }
}

zend_long ns_nsviewcontroller_nib_bundle(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        h = ns_handle_for(c != nil ? [c nibBundle] : nil);
    }
    return h;
}

zend_long ns_nsviewcontroller_represented_object(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        h = ns_handle_for(c != nil ? [c representedObject] : nil);
    }
    return h;
}

void ns_nsviewcontroller_set_represented_object(zval *handle, zval *representedObject)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c setRepresentedObject:ns_arg_object(representedObject)];
    }
}

void ns_nsviewcontroller_title(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        ns_ret_string(return_value, c != nil ? [c title] : nil);
    }
}

void ns_nsviewcontroller_set_title(zval *handle, zval *title)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c setTitle:ns_arg_string(title)];
    }
}

zend_long ns_nsviewcontroller_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        h = ns_handle_for(c != nil ? [c view] : nil);
    }
    return h;
}

void ns_nsviewcontroller_set_view(zval *handle, zval *view)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c setView:NS_ARG_AS(NSView, view)];
    }
}

zend_long ns_nsviewcontroller_view_if_loaded(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        h = ns_handle_for(c != nil ? [c viewIfLoaded] : nil);
    }
    return h;
}

void ns_nsviewcontroller_load_view(zval *handle)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c loadView];
    }
}

void ns_nsviewcontroller_load_view_if_needed(zval *handle)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c loadViewIfNeeded];
    }
}

void ns_nsviewcontroller_commit_editing_with_delegate_did_commit_selector_context_info(zval *handle, zval *delegate, zval *didCommitSelector, zval *contextInfo)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c commitEditingWithDelegate:ns_arg_object(delegate)
                   didCommitSelector:ns_arg_sel(didCommitSelector)
                         contextInfo:(void *)(uintptr_t) ns_arg_long(contextInfo)];
    }
}

zend_long ns_nsviewcontroller_commit_editing(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        r = (c != nil && [c commitEditing]) ? 1 : 0;
    }
    return r;
}

void ns_nsviewcontroller_discard_editing(zval *handle)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c discardEditing];
    }
}

void ns_nsviewcontroller_view_did_load(zval *handle)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c viewDidLoad];
    }
}

zend_long ns_nsviewcontroller_is_view_loaded(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        r = (c != nil && [c isViewLoaded]) ? 1 : 0;
    }
    return r;
}

void ns_nsviewcontroller_view_will_appear(zval *handle)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c viewWillAppear];
    }
}

void ns_nsviewcontroller_view_did_appear(zval *handle)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c viewDidAppear];
    }
}

void ns_nsviewcontroller_view_will_disappear(zval *handle)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c viewWillDisappear];
    }
}

void ns_nsviewcontroller_view_did_disappear(zval *handle)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c viewDidDisappear];
    }
}

void ns_nsviewcontroller_preferred_content_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        ns_ret_size(return_value, c != nil ? [c preferredContentSize] : NSZeroSize);
    }
}

void ns_nsviewcontroller_set_preferred_content_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c setPreferredContentSize:ns_arg_size(width, height)];
    }
}

void ns_nsviewcontroller_update_view_constraints(zval *handle)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c updateViewConstraints];
    }
}

void ns_nsviewcontroller_view_will_layout(zval *handle)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c viewWillLayout];
    }
}

void ns_nsviewcontroller_view_did_layout(zval *handle)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c viewDidLayout];
    }
}

void ns_nsviewcontroller_present_view_controller_animator(zval *handle, zval *viewController, zval *animator)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c presentViewController:NS_ARG_AS(NSViewController, viewController) animator:ns_arg_object(animator)];
    }
}

void ns_nsviewcontroller_dismiss_view_controller(zval *handle, zval *viewController)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c dismissViewController:NS_ARG_AS(NSViewController, viewController)];
    }
}

void ns_nsviewcontroller_dismiss_controller(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c dismissController:ns_arg_object(sender)];
    }
}

void ns_nsviewcontroller_presented_view_controllers(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        ns_ret_object_array(return_value, c != nil ? [c presentedViewControllers] : nil);
    }
}

zend_long ns_nsviewcontroller_presenting_view_controller(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        h = ns_handle_for(c != nil ? [c presentingViewController] : nil);
    }
    return h;
}

void ns_nsviewcontroller_present_view_controller_as_sheet(zval *handle, zval *viewController)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c presentViewControllerAsSheet:NS_ARG_AS(NSViewController, viewController)];
    }
}

void ns_nsviewcontroller_present_view_controller_as_modal_window(zval *handle, zval *viewController)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c presentViewControllerAsModalWindow:NS_ARG_AS(NSViewController, viewController)];
    }
}

void ns_nsviewcontroller_present_view_controller_as_popover_relative_to_rect_of_view_preferred_edge_behavior(zval *handle, zval *viewController, zval *x, zval *y, zval *width, zval *height, zval *positioningView, zval *preferredEdge, zval *behavior)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c presentViewController:NS_ARG_AS(NSViewController, viewController)
        asPopoverRelativeToRect:ns_arg_rect(x, y, width, height)
                         ofView:NS_ARG_AS(NSView, positioningView)
                  preferredEdge:(NSRectEdge) ns_arg_long(preferredEdge)
                       behavior:(NSPopoverBehavior) ns_arg_long(behavior)];
    }
}

void ns_nsviewcontroller_present_view_controller_as_popover_relative_to_rect_of_view_preferred_edge_behavior_has_full_size_content(zval *handle, zval *viewController, zval *x, zval *y, zval *width, zval *height, zval *positioningView, zval *preferredEdge, zval *behavior, zval *hasFullSizeContent)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c presentViewController:NS_ARG_AS(NSViewController, viewController)
        asPopoverRelativeToRect:ns_arg_rect(x, y, width, height)
                         ofView:NS_ARG_AS(NSView, positioningView)
                  preferredEdge:(NSRectEdge) ns_arg_long(preferredEdge)
                       behavior:(NSPopoverBehavior) ns_arg_long(behavior)
             hasFullSizeContent:ns_arg_bool(hasFullSizeContent)];
    }
}

zend_long ns_nsviewcontroller_parent_view_controller(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        h = ns_handle_for(c != nil ? [c parentViewController] : nil);
    }
    return h;
}

void ns_nsviewcontroller_child_view_controllers(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        ns_ret_object_array(return_value, c != nil ? [c childViewControllers] : nil);
    }
}

void ns_nsviewcontroller_set_child_view_controllers(zval *handle, zval *childViewControllers)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c setChildViewControllers:ns_arg_object_array(childViewControllers)];
    }
}

void ns_nsviewcontroller_add_child_view_controller(zval *handle, zval *childViewController)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c addChildViewController:NS_ARG_AS(NSViewController, childViewController)];
    }
}

void ns_nsviewcontroller_remove_from_parent_view_controller(zval *handle)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c removeFromParentViewController];
    }
}

void ns_nsviewcontroller_insert_child_view_controller_at_index(zval *handle, zval *childViewController, zval *index)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c insertChildViewController:NS_ARG_AS(NSViewController, childViewController)
                             atIndex:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nsviewcontroller_remove_child_view_controller_at_index(zval *handle, zval *index)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c removeChildViewControllerAtIndex:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nsviewcontroller_preferred_content_size_did_change_for_view_controller(zval *handle, zval *viewController)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c preferredContentSizeDidChangeForViewController:NS_ARG_AS(NSViewController, viewController)];
    }
}

void ns_nsviewcontroller_view_will_transition_to_size(zval *handle, zval *width, zval *height)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c viewWillTransitionToSize:ns_arg_size(width, height)];
    }
}

zend_long ns_nsviewcontroller_storyboard(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        h = ns_handle_for(c != nil ? [c storyboard] : nil);
    }
    return h;
}

zend_long ns_nsviewcontroller_extension_context(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        h = ns_handle_for(c != nil ? [c extensionContext] : nil);
    }
    return h;
}

zend_long ns_nsviewcontroller_source_item_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        h = ns_handle_for(c != nil ? [c sourceItemView] : nil);
    }
    return h;
}

void ns_nsviewcontroller_set_source_item_view(zval *handle, zval *sourceItemView)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c setSourceItemView:NS_ARG_AS(NSView, sourceItemView)];
    }
}

void ns_nsviewcontroller_preferred_screen_origin(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        ns_ret_point(return_value, c != nil ? [c preferredScreenOrigin] : NSZeroPoint);
    }
}

void ns_nsviewcontroller_set_preferred_screen_origin(zval *handle, zval *x, zval *y)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        if (c == nil) return;
        [c setPreferredScreenOrigin:ns_arg_point(x, y)];
    }
}

void ns_nsviewcontroller_preferred_minimum_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        ns_ret_size(return_value, c != nil ? [c preferredMinimumSize] : NSZeroSize);
    }
}

void ns_nsviewcontroller_preferred_maximum_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSViewController *c = NS_ARG_AS(NSViewController, handle);
        ns_ret_size(return_value, c != nil ? [c preferredMaximumSize] : NSZeroSize);
    }
}
