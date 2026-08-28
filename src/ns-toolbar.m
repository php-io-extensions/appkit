#include "ns-toolbar.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSToolbar                                                              */
/* ====================================================================== */

zend_long ns_nstoolbar_init_with_identifier(zval *identifier)
{
    @autoreleasepool {
        return ns_handle_for([[NSToolbar alloc] initWithIdentifier:ns_arg_string(identifier)]);
    }
}

zend_long ns_nstoolbar_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSToolbar alloc] init]);
    }
}

void ns_nstoolbar_insert_item_with_item_identifier_at_index(zval *handle, zval *itemIdentifier, zval *index)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        if (tb == nil) return;
        [tb insertItemWithItemIdentifier:ns_arg_string(itemIdentifier) atIndex:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nstoolbar_remove_item_at_index(zval *handle, zval *index)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        if (tb == nil) return;
        [tb removeItemAtIndex:(NSInteger) ns_arg_long(index)];
    }
}

void ns_nstoolbar_remove_item_with_item_identifier(zval *handle, zval *itemIdentifier)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        if (tb == nil) return;
        [tb removeItemWithItemIdentifier:ns_arg_string(itemIdentifier)];
    }
}

zend_long ns_nstoolbar_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        h = ns_handle_for(tb != nil ? [tb delegate] : nil);
    }
    return h;
}

void ns_nstoolbar_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        if (tb == nil) return;
        [tb setDelegate:ns_arg_object(delegate)];
    }
}

zend_long ns_nstoolbar_is_visible(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        r = (tb != nil && [tb isVisible]) ? 1 : 0;
    }
    return r;
}

void ns_nstoolbar_set_visible(zval *handle, zval *visible)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        if (tb == nil) return;
        [tb setVisible:ns_arg_bool(visible)];
    }
}

void ns_nstoolbar_run_customization_palette(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        if (tb == nil) return;
        [tb runCustomizationPalette:ns_arg_object(sender)];
    }
}

zend_long ns_nstoolbar_customization_palette_is_running(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        r = (tb != nil && [tb customizationPaletteIsRunning]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nstoolbar_display_mode(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        r = tb != nil ? (zend_long) [tb displayMode] : 0;
    }
    return r;
}

void ns_nstoolbar_set_display_mode(zval *handle, zval *displayMode)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        if (tb == nil) return;
        [tb setDisplayMode:(NSToolbarDisplayMode) ns_arg_long(displayMode)];
    }
}

void ns_nstoolbar_selected_item_identifier(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        ns_ret_string(return_value, tb != nil ? [tb selectedItemIdentifier] : nil);
    }
}

void ns_nstoolbar_set_selected_item_identifier(zval *handle, zval *selectedItemIdentifier)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        if (tb == nil) return;
        [tb setSelectedItemIdentifier:ns_arg_string(selectedItemIdentifier)];
    }
}

zend_long ns_nstoolbar_allows_user_customization(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        r = (tb != nil && [tb allowsUserCustomization]) ? 1 : 0;
    }
    return r;
}

void ns_nstoolbar_set_allows_user_customization(zval *handle, zval *allowsUserCustomization)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        if (tb == nil) return;
        [tb setAllowsUserCustomization:ns_arg_bool(allowsUserCustomization)];
    }
}

zend_long ns_nstoolbar_allows_display_mode_customization(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        r = (tb != nil && [tb allowsDisplayModeCustomization]) ? 1 : 0;
    }
    return r;
}

void ns_nstoolbar_set_allows_display_mode_customization(zval *handle, zval *allowsDisplayModeCustomization)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        if (tb == nil) return;
        [tb setAllowsDisplayModeCustomization:ns_arg_bool(allowsDisplayModeCustomization)];
    }
}

void ns_nstoolbar_identifier(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        ns_ret_string(return_value, tb != nil ? [tb identifier] : nil);
    }
}

void ns_nstoolbar_items(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        ns_ret_object_array(return_value, tb != nil ? [tb items] : nil);
    }
}

void ns_nstoolbar_visible_items(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        ns_ret_object_array(return_value, tb != nil ? [tb visibleItems] : nil);
    }
}

void ns_nstoolbar_item_identifiers(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        ns_ret_string_array(return_value, tb != nil ? [tb itemIdentifiers] : nil);
    }
}

void ns_nstoolbar_set_item_identifiers(zval *handle, zval *itemIdentifiers)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        if (tb == nil) return;
        [tb setItemIdentifiers:ns_arg_string_array(itemIdentifiers)];
    }
}

void ns_nstoolbar_centered_item_identifiers(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        ns_ret_string_set(return_value, tb != nil ? [tb centeredItemIdentifiers] : nil);
    }
}

void ns_nstoolbar_set_centered_item_identifiers(zval *handle, zval *centeredItemIdentifiers)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        if (tb == nil) return;
        [tb setCenteredItemIdentifiers:ns_arg_string_set(centeredItemIdentifiers)];
    }
}

zend_long ns_nstoolbar_autosaves_configuration(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        r = (tb != nil && [tb autosavesConfiguration]) ? 1 : 0;
    }
    return r;
}

void ns_nstoolbar_set_autosaves_configuration(zval *handle, zval *autosavesConfiguration)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        if (tb == nil) return;
        [tb setAutosavesConfiguration:ns_arg_bool(autosavesConfiguration)];
    }
}

void ns_nstoolbar_validate_visible_items(zval *handle)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        if (tb == nil) return;
        [tb validateVisibleItems];
    }
}

zend_long ns_nstoolbar_allows_extension_items(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        r = (tb != nil && [tb allowsExtensionItems]) ? 1 : 0;
    }
    return r;
}

void ns_nstoolbar_set_allows_extension_items(zval *handle, zval *allowsExtensionItems)
{
    @autoreleasepool {
        NSToolbar *tb = NS_ARG_AS(NSToolbar, handle);
        if (tb == nil) return;
        [tb setAllowsExtensionItems:ns_arg_bool(allowsExtensionItems)];
    }
}
