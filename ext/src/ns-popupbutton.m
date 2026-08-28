#include "ns-popupbutton.h"
#include "ns-value.h"

/* ====================================================================== */
/* Creating pop-up and pull-down buttons                                  */
/* ====================================================================== */

zend_long ns_nspopupbutton_pop_up_button_with_menu_target_action(zval *menu, zval *target, zval *action)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPopUpButton *b = [NSPopUpButton popUpButtonWithMenu:NS_ARG_AS(NSMenu, menu)
                                                       target:ns_arg_object(target)
                                                       action:ns_arg_sel(action)];
        h = ns_handle_for(b);
    }
    return h;
}

zend_long ns_nspopupbutton_pull_down_button_with_title_menu(zval *title, zval *menu)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPopUpButton *b = [NSPopUpButton pullDownButtonWithTitle:ns_arg_string(title)
                                                            menu:NS_ARG_AS(NSMenu, menu)];
        h = ns_handle_for(b);
    }
    return h;
}

zend_long ns_nspopupbutton_pull_down_button_with_image_menu(zval *image, zval *menu)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPopUpButton *b = [NSPopUpButton pullDownButtonWithImage:NS_ARG_AS(NSImage, image)
                                                            menu:NS_ARG_AS(NSMenu, menu)];
        h = ns_handle_for(b);
    }
    return h;
}

zend_long ns_nspopupbutton_pull_down_button_with_title_image_menu(zval *title, zval *image, zval *menu)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPopUpButton *b = [NSPopUpButton pullDownButtonWithTitle:ns_arg_string(title)
                                                           image:NS_ARG_AS(NSImage, image)
                                                            menu:NS_ARG_AS(NSMenu, menu)];
        h = ns_handle_for(b);
    }
    return h;
}

zend_long ns_nspopupbutton_init_with_frame_pulls_down(zval *x, zval *y, zval *width, zval *height, zval *flag)
{
    @autoreleasepool {
        return ns_handle_for([[NSPopUpButton alloc] initWithFrame:ns_arg_rect(x, y, width, height)
                                                       pullsDown:ns_arg_bool(flag)]);
    }
}

/* ====================================================================== */
/* Configuration                                                          */
/* ====================================================================== */

zend_long ns_nspopupbutton_menu(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        h = ns_handle_for(b != nil ? [b menu] : nil);
    }
    return h;
}

void ns_nspopupbutton_set_menu(zval *handle, zval *menu)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        if (b == nil) return;
        [b setMenu:NS_ARG_AS(NSMenu, menu)];
    }
}

zend_long ns_nspopupbutton_pulls_down(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        r = (b != nil && [b pullsDown]) ? 1 : 0;
    }
    return r;
}

void ns_nspopupbutton_set_pulls_down(zval *handle, zval *pullsDown)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        if (b == nil) return;
        [b setPullsDown:ns_arg_bool(pullsDown)];
    }
}

zend_long ns_nspopupbutton_autoenables_items(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        r = (b != nil && [b autoenablesItems]) ? 1 : 0;
    }
    return r;
}

void ns_nspopupbutton_set_autoenables_items(zval *handle, zval *autoenablesItems)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        if (b == nil) return;
        [b setAutoenablesItems:ns_arg_bool(autoenablesItems)];
    }
}

zend_long ns_nspopupbutton_preferred_edge(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        r = b != nil ? (zend_long) [b preferredEdge] : 0;
    }
    return r;
}

void ns_nspopupbutton_set_preferred_edge(zval *handle, zval *preferredEdge)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        if (b == nil) return;
        [b setPreferredEdge:(NSRectEdge) ns_arg_long(preferredEdge)];
    }
}

zend_long ns_nspopupbutton_uses_item_from_menu(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        r = (b != nil && [b usesItemFromMenu]) ? 1 : 0;
    }
    return r;
}

void ns_nspopupbutton_set_uses_item_from_menu(zval *handle, zval *usesItemFromMenu)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        if (b == nil) return;
        [b setUsesItemFromMenu:ns_arg_bool(usesItemFromMenu)];
    }
}

zend_long ns_nspopupbutton_alters_state_of_selected_item(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        r = (b != nil && [b altersStateOfSelectedItem]) ? 1 : 0;
    }
    return r;
}

void ns_nspopupbutton_set_alters_state_of_selected_item(zval *handle, zval *altersStateOfSelectedItem)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        if (b == nil) return;
        [b setAltersStateOfSelectedItem:ns_arg_bool(altersStateOfSelectedItem)];
    }
}

/* ====================================================================== */
/* Adding and Removing Items                                              */
/* ====================================================================== */

void ns_nspopupbutton_add_item_with_title(zval *handle, zval *title)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        if (b == nil) return;
        [b addItemWithTitle:ns_arg_string(title)];
    }
}

void ns_nspopupbutton_add_items_with_titles(zval *handle, zval *itemTitles)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        if (b == nil) return;
        [b addItemsWithTitles:ns_arg_string_array(itemTitles)];
    }
}

void ns_nspopupbutton_insert_item_with_title_at_index(zval *handle, zval *title, zval *index)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        if (b == nil) return;
        [b insertItemWithTitle:ns_arg_string(title) atIndex:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nspopupbutton_remove_item_with_title(zval *handle, zval *title)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        if (b == nil) return;
        [b removeItemWithTitle:ns_arg_string(title)];
    }
}

void ns_nspopupbutton_remove_item_at_index(zval *handle, zval *index)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        if (b == nil) return;
        [b removeItemAtIndex:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nspopupbutton_remove_all_items(zval *handle)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        if (b == nil) return;
        [b removeAllItems];
    }
}

/* ====================================================================== */
/* Accessing Items                                                        */
/* ====================================================================== */

void ns_nspopupbutton_item_array(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        if (b == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_object_array(return_value, [b itemArray]);
    }
}

zend_long ns_nspopupbutton_number_of_items(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        r = b != nil ? (zend_long) [b numberOfItems] : 0;
    }
    return r;
}

zend_long ns_nspopupbutton_index_of_item(zval *handle, zval *item)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        r = b != nil ? (zend_long) [b indexOfItem:NS_ARG_AS(NSMenuItem, item)] : 0;
    }
    return r;
}

zend_long ns_nspopupbutton_index_of_item_with_title(zval *handle, zval *title)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        r = b != nil ? (zend_long) [b indexOfItemWithTitle:ns_arg_string(title)] : 0;
    }
    return r;
}

zend_long ns_nspopupbutton_index_of_item_with_tag(zval *handle, zval *tag)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        r = b != nil ? (zend_long) [b indexOfItemWithTag:(NSInteger) ns_arg_long(tag)] : 0;
    }
    return r;
}

zend_long ns_nspopupbutton_index_of_item_with_represented_object(zval *handle, zval *obj)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        r = b != nil ? (zend_long) [b indexOfItemWithRepresentedObject:ns_arg_object(obj)] : 0;
    }
    return r;
}

zend_long ns_nspopupbutton_index_of_item_with_target_and_action(zval *handle, zval *target, zval *action)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        r = b != nil ? (zend_long) [b indexOfItemWithTarget:ns_arg_object(target) andAction:ns_arg_sel(action)] : 0;
    }
    return r;
}

zend_long ns_nspopupbutton_item_at_index(zval *handle, zval *index)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        h = ns_handle_for(b != nil ? [b itemAtIndex:(NSInteger) ns_arg_long(index)] : nil);
    }
    return h;
}

zend_long ns_nspopupbutton_item_with_title(zval *handle, zval *title)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        h = ns_handle_for(b != nil ? [b itemWithTitle:ns_arg_string(title)] : nil);
    }
    return h;
}

zend_long ns_nspopupbutton_last_item(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        h = ns_handle_for(b != nil ? [b lastItem] : nil);
    }
    return h;
}

/* ====================================================================== */
/* Selecting Items                                                        */
/* ====================================================================== */

void ns_nspopupbutton_select_item(zval *handle, zval *item)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        if (b == nil) return;
        [b selectItem:NS_ARG_AS(NSMenuItem, item)];
    }
}

void ns_nspopupbutton_select_item_at_index(zval *handle, zval *index)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        if (b == nil) return;
        [b selectItemAtIndex:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nspopupbutton_select_item_with_title(zval *handle, zval *title)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        if (b == nil) return;
        [b selectItemWithTitle:ns_arg_string(title)];
    }
}

zend_long ns_nspopupbutton_select_item_with_tag(zval *handle, zval *tag)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        r = (b != nil && [b selectItemWithTag:(NSInteger) ns_arg_long(tag)]) ? 1 : 0;
    }
    return r;
}

void ns_nspopupbutton_set_title(zval *handle, zval *title)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        if (b == nil) return;
        [b setTitle:ns_arg_string(title)];
    }
}

zend_long ns_nspopupbutton_selected_item(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        h = ns_handle_for(b != nil ? [b selectedItem] : nil);
    }
    return h;
}

zend_long ns_nspopupbutton_index_of_selected_item(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        r = b != nil ? (zend_long) [b indexOfSelectedItem] : 0;
    }
    return r;
}

zend_long ns_nspopupbutton_selected_tag(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        r = b != nil ? (zend_long) [b selectedTag] : 0;
    }
    return r;
}

void ns_nspopupbutton_synchronize_title_and_selected_item(zval *handle)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        if (b == nil) return;
        [b synchronizeTitleAndSelectedItem];
    }
}

/* ====================================================================== */
/* Item Title Conveniences                                                */
/* ====================================================================== */

void ns_nspopupbutton_item_title_at_index(zval *return_value, zval *handle, zval *index)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        ns_ret_string(return_value, b != nil ? [b itemTitleAtIndex:(NSInteger) ns_arg_long(index)] : nil);
    }
}

void ns_nspopupbutton_item_titles(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        if (b == nil) { ZVAL_NULL(return_value); return; }
        ns_ret_string_array(return_value, [b itemTitles]);
    }
}

void ns_nspopupbutton_title_of_selected_item(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSPopUpButton *b = NS_ARG_AS(NSPopUpButton, handle);
        ns_ret_string(return_value, b != nil ? [b titleOfSelectedItem] : nil);
    }
}
