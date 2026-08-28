#include "ns-toolbaritemgroup.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSToolbarItemGroup                                                     */
/* ====================================================================== */

zend_long ns_nstoolbaritemgroup_init_with_item_identifier(zval *itemIdentifier)
{
    @autoreleasepool {
        return ns_handle_for([[NSToolbarItemGroup alloc] initWithItemIdentifier:ns_arg_string(itemIdentifier)]);
    }
}

zend_long ns_nstoolbaritemgroup_group_with_item_identifier_titles_selection_mode_labels_target_action(zval *itemIdentifier, zval *titles, zval *selectionMode, zval *labels, zval *target, zval *action)
{
    zend_long h = 0;
    @autoreleasepool {
        zval *z = ns_deref(labels);
        NSArray *labelArr = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(labels) : nil;
        h = ns_handle_for([NSToolbarItemGroup groupWithItemIdentifier:ns_arg_string(itemIdentifier)
                                                              titles:ns_arg_string_array(titles)
                                                       selectionMode:(NSToolbarItemGroupSelectionMode) ns_arg_long(selectionMode)
                                                              labels:labelArr
                                                              target:ns_arg_object(target)
                                                              action:ns_arg_sel(action)]);
    }
    return h;
}

zend_long ns_nstoolbaritemgroup_group_with_item_identifier_images_selection_mode_labels_target_action(zval *itemIdentifier, zval *images, zval *selectionMode, zval *labels, zval *target, zval *action)
{
    zend_long h = 0;
    @autoreleasepool {
        zval *z = ns_deref(labels);
        NSArray *labelArr = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(labels) : nil;
        h = ns_handle_for([NSToolbarItemGroup groupWithItemIdentifier:ns_arg_string(itemIdentifier)
                                                              images:ns_arg_object_array(images)
                                                       selectionMode:(NSToolbarItemGroupSelectionMode) ns_arg_long(selectionMode)
                                                              labels:labelArr
                                                              target:ns_arg_object(target)
                                                              action:ns_arg_sel(action)]);
    }
    return h;
}

void ns_nstoolbaritemgroup_subitems(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSToolbarItemGroup *g = NS_ARG_AS(NSToolbarItemGroup, handle);
        ns_ret_object_array(return_value, g != nil ? [g subitems] : nil);
    }
}

void ns_nstoolbaritemgroup_set_subitems(zval *handle, zval *subitems)
{
    @autoreleasepool {
        NSToolbarItemGroup *g = NS_ARG_AS(NSToolbarItemGroup, handle);
        if (g == nil) return;
        [g setSubitems:ns_arg_object_array(subitems)];
    }
}

zend_long ns_nstoolbaritemgroup_control_representation(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSToolbarItemGroup *g = NS_ARG_AS(NSToolbarItemGroup, handle);
        r = g != nil ? (zend_long) [g controlRepresentation] : 0;
    }
    return r;
}

void ns_nstoolbaritemgroup_set_control_representation(zval *handle, zval *controlRepresentation)
{
    @autoreleasepool {
        NSToolbarItemGroup *g = NS_ARG_AS(NSToolbarItemGroup, handle);
        if (g == nil) return;
        [g setControlRepresentation:(NSToolbarItemGroupControlRepresentation) ns_arg_long(controlRepresentation)];
    }
}

zend_long ns_nstoolbaritemgroup_selection_mode(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSToolbarItemGroup *g = NS_ARG_AS(NSToolbarItemGroup, handle);
        r = g != nil ? (zend_long) [g selectionMode] : 0;
    }
    return r;
}

void ns_nstoolbaritemgroup_set_selection_mode(zval *handle, zval *selectionMode)
{
    @autoreleasepool {
        NSToolbarItemGroup *g = NS_ARG_AS(NSToolbarItemGroup, handle);
        if (g == nil) return;
        [g setSelectionMode:(NSToolbarItemGroupSelectionMode) ns_arg_long(selectionMode)];
    }
}

zend_long ns_nstoolbaritemgroup_selected_index(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSToolbarItemGroup *g = NS_ARG_AS(NSToolbarItemGroup, handle);
        r = g != nil ? (zend_long) [g selectedIndex] : 0;
    }
    return r;
}

void ns_nstoolbaritemgroup_set_selected_index(zval *handle, zval *selectedIndex)
{
    @autoreleasepool {
        NSToolbarItemGroup *g = NS_ARG_AS(NSToolbarItemGroup, handle);
        if (g == nil) return;
        [g setSelectedIndex:(NSInteger) ns_arg_long(selectedIndex)];
    }
}

void ns_nstoolbaritemgroup_set_selected_at_index(zval *handle, zval *selected, zval *index)
{
    @autoreleasepool {
        NSToolbarItemGroup *g = NS_ARG_AS(NSToolbarItemGroup, handle);
        if (g == nil) return;
        [g setSelected:ns_arg_bool(selected) atIndex:(NSInteger) ns_arg_long(index)];
    }
}

zend_long ns_nstoolbaritemgroup_is_selected_at_index(zval *handle, zval *index)
{
    zend_long r = 0;
    @autoreleasepool {
        NSToolbarItemGroup *g = NS_ARG_AS(NSToolbarItemGroup, handle);
        r = (g != nil && [g isSelectedAtIndex:(NSInteger) ns_arg_long(index)]) ? 1 : 0;
    }
    return r;
}
