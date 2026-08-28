#include "ns-toolbaritem.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSToolbarItem                                                          */
/* ====================================================================== */

zend_long ns_nstoolbaritem_init_with_item_identifier(zval *itemIdentifier)
{
    @autoreleasepool {
        return ns_handle_for([[NSToolbarItem alloc] initWithItemIdentifier:ns_arg_string(itemIdentifier)]);
    }
}

void ns_nstoolbaritem_item_identifier(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        ns_ret_string(return_value, item != nil ? [item itemIdentifier] : nil);
    }
}

zend_long ns_nstoolbaritem_toolbar(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        h = ns_handle_for(item != nil ? [item toolbar] : nil);
    }
    return h;
}

void ns_nstoolbaritem_label(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        ns_ret_string(return_value, item != nil ? [item label] : nil);
    }
}

void ns_nstoolbaritem_set_label(zval *handle, zval *label)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        if (item == nil) return;
        [item setLabel:ns_arg_string(label)];
    }
}

void ns_nstoolbaritem_palette_label(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        ns_ret_string(return_value, item != nil ? [item paletteLabel] : nil);
    }
}

void ns_nstoolbaritem_set_palette_label(zval *handle, zval *paletteLabel)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        if (item == nil) return;
        [item setPaletteLabel:ns_arg_string(paletteLabel)];
    }
}

void ns_nstoolbaritem_possible_labels(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        ns_ret_string_set(return_value, item != nil ? [item possibleLabels] : nil);
    }
}

void ns_nstoolbaritem_set_possible_labels(zval *handle, zval *possibleLabels)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        if (item == nil) return;
        [item setPossibleLabels:ns_arg_string_set(possibleLabels)];
    }
}

void ns_nstoolbaritem_tool_tip(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        ns_ret_string(return_value, item != nil ? [item toolTip] : nil);
    }
}

void ns_nstoolbaritem_set_tool_tip(zval *handle, zval *toolTip)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        if (item == nil) return;
        [item setToolTip:ns_arg_string(toolTip)];
    }
}

zend_long ns_nstoolbaritem_menu_form_representation(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        h = ns_handle_for(item != nil ? [item menuFormRepresentation] : nil);
    }
    return h;
}

void ns_nstoolbaritem_set_menu_form_representation(zval *handle, zval *menuFormRepresentation)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        if (item == nil) return;
        [item setMenuFormRepresentation:NS_ARG_AS(NSMenuItem, menuFormRepresentation)];
    }
}

zend_long ns_nstoolbaritem_tag(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        r = item != nil ? (zend_long) [item tag] : 0;
    }
    return r;
}

void ns_nstoolbaritem_set_tag(zval *handle, zval *tag)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        if (item == nil) return;
        [item setTag:(NSInteger) ns_arg_long(tag)];
    }
}

zend_long ns_nstoolbaritem_target(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        h = ns_handle_for(item != nil ? [item target] : nil);
    }
    return h;
}

void ns_nstoolbaritem_set_target(zval *handle, zval *target)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        if (item == nil) return;
        [item setTarget:ns_arg_object(target)];
    }
}

void ns_nstoolbaritem_action(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        ns_ret_sel(return_value, item != nil ? [item action] : NULL);
    }
}

void ns_nstoolbaritem_set_action(zval *handle, zval *action)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        if (item == nil) return;
        [item setAction:ns_arg_sel(action)];
    }
}

zend_long ns_nstoolbaritem_is_enabled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        r = (item != nil && [item isEnabled]) ? 1 : 0;
    }
    return r;
}

void ns_nstoolbaritem_set_enabled(zval *handle, zval *enabled)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        if (item == nil) return;
        [item setEnabled:ns_arg_bool(enabled)];
    }
}

zend_long ns_nstoolbaritem_image(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        h = ns_handle_for(item != nil ? [item image] : nil);
    }
    return h;
}

void ns_nstoolbaritem_set_image(zval *handle, zval *image)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        if (item == nil) return;
        [item setImage:NS_ARG_AS(NSImage, image)];
    }
}

void ns_nstoolbaritem_title(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        ns_ret_string(return_value, item != nil ? [item title] : nil);
    }
}

void ns_nstoolbaritem_set_title(zval *handle, zval *title)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        if (item == nil) return;
        [item setTitle:ns_arg_string(title)];
    }
}

zend_long ns_nstoolbaritem_is_bordered(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        r = (item != nil && [item isBordered]) ? 1 : 0;
    }
    return r;
}

void ns_nstoolbaritem_set_bordered(zval *handle, zval *bordered)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        if (item == nil) return;
        [item setBordered:ns_arg_bool(bordered)];
    }
}

zend_long ns_nstoolbaritem_is_navigational(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        r = (item != nil && [item isNavigational]) ? 1 : 0;
    }
    return r;
}

void ns_nstoolbaritem_set_navigational(zval *handle, zval *navigational)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        if (item == nil) return;
        [item setNavigational:ns_arg_bool(navigational)];
    }
}

zend_long ns_nstoolbaritem_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        h = ns_handle_for(item != nil ? [item view] : nil);
    }
    return h;
}

void ns_nstoolbaritem_set_view(zval *handle, zval *view)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        if (item == nil) return;
        [item setView:NS_ARG_AS(NSView, view)];
    }
}

zend_long ns_nstoolbaritem_is_visible(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        r = (item != nil && [item isVisible]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nstoolbaritem_is_hidden(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        r = (item != nil && [item isHidden]) ? 1 : 0;
    }
    return r;
}

void ns_nstoolbaritem_set_hidden(zval *handle, zval *hidden)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        if (item == nil) return;
        [item setHidden:ns_arg_bool(hidden)];
    }
}

zend_long ns_nstoolbaritem_visibility_priority(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        r = item != nil ? (zend_long) [item visibilityPriority] : 0;
    }
    return r;
}

void ns_nstoolbaritem_set_visibility_priority(zval *handle, zval *visibilityPriority)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        if (item == nil) return;
        [item setVisibilityPriority:(NSToolbarItemVisibilityPriority) ns_arg_long(visibilityPriority)];
    }
}

void ns_nstoolbaritem_validate(zval *handle)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        if (item == nil) return;
        [item validate];
    }
}

zend_long ns_nstoolbaritem_autovalidates(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        r = (item != nil && [item autovalidates]) ? 1 : 0;
    }
    return r;
}

void ns_nstoolbaritem_set_autovalidates(zval *handle, zval *autovalidates)
{
    @autoreleasepool {
        NSToolbarItem *item = NS_ARG_AS(NSToolbarItem, handle);
        if (item == nil) return;
        [item setAutovalidates:ns_arg_bool(autovalidates)];
    }
}
