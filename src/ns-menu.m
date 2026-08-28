#include "ns-menu.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSMenu                                                                 */
/* ====================================================================== */

zend_long ns_nsmenu_init_with_title(zval *title)
{
    @autoreleasepool {
        return ns_handle_for([[NSMenu alloc] initWithTitle:ns_arg_string(title)]);
    }
}

void ns_nsmenu_title(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_string(return_value, [menu title]);
    }
}

void ns_nsmenu_set_title(zval *handle, zval *title)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu setTitle:ns_arg_string(title)];
    }
}

void ns_nsmenu_pop_up_context_menu_with_event_for_view(zval *menu, zval *event, zval *view)
{
    @autoreleasepool {
        [NSMenu popUpContextMenu:NS_ARG_AS(NSMenu, menu) withEvent:NS_ARG_AS(NSEvent, event) forView:NS_ARG_AS(NSView, view)];
    }
}

void ns_nsmenu_pop_up_context_menu_with_event_for_view_with_font(zval *menu, zval *event, zval *view, zval *font)
{
    @autoreleasepool {
        [NSMenu popUpContextMenu:NS_ARG_AS(NSMenu, menu) withEvent:NS_ARG_AS(NSEvent, event) forView:NS_ARG_AS(NSView, view) withFont:NS_ARG_AS(NSFont, font)];
    }
}

zend_long ns_nsmenu_pop_up_menu_positioning_item_at_location_in_view(zval *handle, zval *item, zval *x, zval *y, zval *view)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return [menu popUpMenuPositioningItem:NS_ARG_AS(NSMenuItem, item) atLocation:ns_arg_point(x, y) inView:NS_ARG_AS(NSView, view)] ? 1 : 0;
    }
}

void ns_nsmenu_set_menu_bar_visible(zval *visible)
{
    @autoreleasepool {
        [NSMenu setMenuBarVisible:ns_arg_bool(visible)];
    }
}

zend_long ns_nsmenu_menu_bar_visible(void)
{
    @autoreleasepool {
        return [NSMenu menuBarVisible] ? 1 : 0;
    }
}

zend_long ns_nsmenu_supermenu(zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return ns_handle_for([menu supermenu]);
    }
}

void ns_nsmenu_set_supermenu(zval *handle, zval *supermenu)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu setSupermenu:NS_ARG_AS(NSMenu, supermenu)];
    }
}

void ns_nsmenu_insert_item_at_index(zval *handle, zval *newItem, zval *index)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu insertItem:NS_ARG_AS(NSMenuItem, newItem) atIndex:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nsmenu_add_item(zval *handle, zval *newItem)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu addItem:NS_ARG_AS(NSMenuItem, newItem)];
    }
}

zend_long ns_nsmenu_insert_item_with_title_action_key_equivalent_at_index(zval *handle, zval *title, zval *action, zval *keyEquivalent, zval *index)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return ns_handle_for([menu insertItemWithTitle:ns_arg_string(title) action:ns_arg_sel(action) keyEquivalent:ns_arg_string(keyEquivalent) atIndex:(NSInteger) ns_arg_long(index)]);
    }
}

zend_long ns_nsmenu_add_item_with_title_action_key_equivalent(zval *handle, zval *title, zval *action, zval *keyEquivalent)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return ns_handle_for([menu addItemWithTitle:ns_arg_string(title) action:ns_arg_sel(action) keyEquivalent:ns_arg_string(keyEquivalent)]);
    }
}

void ns_nsmenu_remove_item_at_index(zval *handle, zval *index)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu removeItemAtIndex:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nsmenu_remove_item(zval *handle, zval *item)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu removeItem:NS_ARG_AS(NSMenuItem, item)];
    }
}

void ns_nsmenu_set_submenu_for_item(zval *handle, zval *menu, zval *item)
{
    @autoreleasepool {
        NSMenu *receiver = NS_ARG_AS(NSMenu, handle);
        if (receiver == nil) { return; }
        [receiver setSubmenu:NS_ARG_AS(NSMenu, menu) forItem:NS_ARG_AS(NSMenuItem, item)];
    }
}

void ns_nsmenu_remove_all_items(zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu removeAllItems];
    }
}

void ns_nsmenu_item_array(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_object_array(return_value, [menu itemArray]);
    }
}

void ns_nsmenu_set_item_array(zval *handle, zval *itemArray)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu setItemArray:ns_arg_object_array(itemArray)];
    }
}

zend_long ns_nsmenu_number_of_items(zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return (zend_long) [menu numberOfItems];
    }
}

zend_long ns_nsmenu_item_at_index(zval *handle, zval *index)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return ns_handle_for([menu itemAtIndex:(NSInteger) ns_arg_long(index)]);
    }
}

zend_long ns_nsmenu_index_of_item(zval *handle, zval *item)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return (zend_long) [menu indexOfItem:NS_ARG_AS(NSMenuItem, item)];
    }
}

zend_long ns_nsmenu_index_of_item_with_title(zval *handle, zval *title)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return (zend_long) [menu indexOfItemWithTitle:ns_arg_string(title)];
    }
}

zend_long ns_nsmenu_index_of_item_with_tag(zval *handle, zval *tag)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return (zend_long) [menu indexOfItemWithTag:(NSInteger) ns_arg_long(tag)];
    }
}

zend_long ns_nsmenu_index_of_item_with_represented_object(zval *handle, zval *representedObject)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return (zend_long) [menu indexOfItemWithRepresentedObject:ns_arg_object(representedObject)];
    }
}

zend_long ns_nsmenu_index_of_item_with_submenu(zval *handle, zval *submenu)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return (zend_long) [menu indexOfItemWithSubmenu:NS_ARG_AS(NSMenu, submenu)];
    }
}

zend_long ns_nsmenu_index_of_item_with_target_and_action(zval *handle, zval *target, zval *action)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return (zend_long) [menu indexOfItemWithTarget:ns_arg_object(target) andAction:ns_arg_sel(action)];
    }
}

zend_long ns_nsmenu_item_with_title(zval *handle, zval *title)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return ns_handle_for([menu itemWithTitle:ns_arg_string(title)]);
    }
}

zend_long ns_nsmenu_item_with_tag(zval *handle, zval *tag)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return ns_handle_for([menu itemWithTag:(NSInteger) ns_arg_long(tag)]);
    }
}

zend_long ns_nsmenu_autoenables_items(zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return [menu autoenablesItems] ? 1 : 0;
    }
}

void ns_nsmenu_set_autoenables_items(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu setAutoenablesItems:ns_arg_bool(flag)];
    }
}

void ns_nsmenu_update(zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu update];
    }
}

zend_long ns_nsmenu_perform_key_equivalent(zval *handle, zval *event)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return [menu performKeyEquivalent:NS_ARG_AS(NSEvent, event)] ? 1 : 0;
    }
}

void ns_nsmenu_item_changed(zval *handle, zval *item)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu itemChanged:NS_ARG_AS(NSMenuItem, item)];
    }
}

void ns_nsmenu_perform_action_for_item_at_index(zval *handle, zval *index)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu performActionForItemAtIndex:(NSInteger) ns_arg_long(index)];
    }
}

zend_long ns_nsmenu_delegate(zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return ns_handle_for([menu delegate]);
    }
}

void ns_nsmenu_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu setDelegate:ns_arg_object(delegate)];
    }
}

double ns_nsmenu_menu_bar_height(zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        return menu != nil ? [menu menuBarHeight] : 0.0;
    }
}

void ns_nsmenu_cancel_tracking(zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu cancelTracking];
    }
}

void ns_nsmenu_cancel_tracking_without_animation(zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu cancelTrackingWithoutAnimation];
    }
}

zend_long ns_nsmenu_highlighted_item(zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return ns_handle_for([menu highlightedItem]);
    }
}

double ns_nsmenu_minimum_width(zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        return menu != nil ? [menu minimumWidth] : 0.0;
    }
}

void ns_nsmenu_set_minimum_width(zval *handle, zval *width)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu setMinimumWidth:(CGFloat) ns_arg_double(width)];
    }
}

void ns_nsmenu_size(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_size(return_value, [menu size]);
    }
}

zend_long ns_nsmenu_font(zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return ns_handle_for([menu font]);
    }
}

void ns_nsmenu_set_font(zval *handle, zval *font)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu setFont:NS_ARG_AS(NSFont, font)];
    }
}

zend_long ns_nsmenu_allows_context_menu_plug_ins(zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return [menu allowsContextMenuPlugIns] ? 1 : 0;
    }
}

void ns_nsmenu_set_allows_context_menu_plug_ins(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu setAllowsContextMenuPlugIns:ns_arg_bool(flag)];
    }
}

zend_long ns_nsmenu_automatically_inserts_writing_tools_items(zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return [menu automaticallyInsertsWritingToolsItems] ? 1 : 0;
    }
}

void ns_nsmenu_set_automatically_inserts_writing_tools_items(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu setAutomaticallyInsertsWritingToolsItems:ns_arg_bool(flag)];
    }
}

zend_long ns_nsmenu_shows_state_column(zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return [menu showsStateColumn] ? 1 : 0;
    }
}

void ns_nsmenu_set_shows_state_column(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu setShowsStateColumn:ns_arg_bool(flag)];
    }
}

zend_long ns_nsmenu_user_interface_layout_direction(zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return (zend_long) [menu userInterfaceLayoutDirection];
    }
}

void ns_nsmenu_set_user_interface_layout_direction(zval *handle, zval *direction)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu setUserInterfaceLayoutDirection:(NSUserInterfaceLayoutDirection) ns_arg_long(direction)];
    }
}

zend_long ns_nsmenu_presentation_style(zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return (zend_long) [menu presentationStyle];
    }
}

void ns_nsmenu_set_presentation_style(zval *handle, zval *style)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu setPresentationStyle:(NSMenuPresentationStyle) ns_arg_long(style)];
    }
}

zend_long ns_nsmenu_selection_mode(zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return (zend_long) [menu selectionMode];
    }
}

void ns_nsmenu_set_selection_mode(zval *handle, zval *mode)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu setSelectionMode:(NSMenuSelectionMode) ns_arg_long(mode)];
    }
}

void ns_nsmenu_selected_items(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_object_array(return_value, [menu selectedItems]);
    }
}

void ns_nsmenu_set_selected_items(zval *handle, zval *selectedItems)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu setSelectedItems:ns_arg_object_array(selectedItems)];
    }
}

void ns_nsmenu_submenu_action(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return; }
        [menu submenuAction:ns_arg_object(sender)];
    }
}

zend_long ns_nsmenu_properties_to_update(zval *handle)
{
    @autoreleasepool {
        NSMenu *menu = NS_ARG_AS(NSMenu, handle);
        if (menu == nil) { return 0; }
        return (zend_long) [menu propertiesToUpdate];
    }
}
