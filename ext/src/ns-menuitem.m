#include "ns-menuitem.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSMenuItem                                                             */
/* ====================================================================== */

zend_long ns_nsmenuitem_uses_user_key_equivalents(void)
{
    zend_long r = 0;
    @autoreleasepool {
        r = [NSMenuItem usesUserKeyEquivalents] ? 1 : 0;
    }
    return r;
}

void ns_nsmenuitem_set_uses_user_key_equivalents(zval *flag)
{
    @autoreleasepool {
        [NSMenuItem setUsesUserKeyEquivalents:ns_arg_bool(flag)];
    }
}

zend_long ns_nsmenuitem_separator_item(void)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSMenuItem separatorItem]);
    }
    return h;
}

zend_long ns_nsmenuitem_section_header_with_title(zval *title)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSMenuItem sectionHeaderWithTitle:ns_arg_string(title)]);
    }
    return h;
}

void ns_nsmenuitem_writing_tools_items(zval *return_value)
{
    @autoreleasepool {
        ns_ret_object_array(return_value, [NSMenuItem writingToolsItems]);
    }
}

zend_long ns_nsmenuitem_init_with_title_action_key_equivalent(zval *title, zval *action, zval *keyEquivalent)
{
    zend_long h = 0;
    @autoreleasepool {
        NSMenuItem *item = [[NSMenuItem alloc] initWithTitle:ns_arg_string(title)
                                                      action:ns_arg_sel(action)
                                               keyEquivalent:ns_arg_string(keyEquivalent)];
        h = ns_handle_for(item);
    }
    return h;
}

zend_long ns_nsmenuitem_menu(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        h = ns_handle_for(item != nil ? [item menu] : nil);
    }
    return h;
}

void ns_nsmenuitem_set_menu(zval *handle, zval *menu)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setMenu:NS_ARG_AS(NSMenu, menu)];
    }
}

zend_long ns_nsmenuitem_has_submenu(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        r = (item != nil && [item hasSubmenu]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nsmenuitem_submenu(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        h = ns_handle_for(item != nil ? [item submenu] : nil);
    }
    return h;
}

void ns_nsmenuitem_set_submenu(zval *handle, zval *submenu)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setSubmenu:NS_ARG_AS(NSMenu, submenu)];
    }
}

zend_long ns_nsmenuitem_parent_item(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        h = ns_handle_for(item != nil ? [item parentItem] : nil);
    }
    return h;
}

void ns_nsmenuitem_title(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        ns_ret_string(return_value, item != nil ? [item title] : nil);
    }
}

void ns_nsmenuitem_set_title(zval *handle, zval *title)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setTitle:ns_arg_string(title)];
    }
}

void ns_nsmenuitem_subtitle(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        ns_ret_string(return_value, item != nil ? [item subtitle] : nil);
    }
}

void ns_nsmenuitem_set_subtitle(zval *handle, zval *subtitle)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setSubtitle:ns_arg_string(subtitle)];
    }
}

zend_long ns_nsmenuitem_is_separator_item(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        r = (item != nil && [item isSeparatorItem]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nsmenuitem_is_section_header(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        r = (item != nil && [item isSectionHeader]) ? 1 : 0;
    }
    return r;
}

void ns_nsmenuitem_key_equivalent(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        ns_ret_string(return_value, item != nil ? [item keyEquivalent] : nil);
    }
}

void ns_nsmenuitem_set_key_equivalent(zval *handle, zval *keyEquivalent)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setKeyEquivalent:ns_arg_string(keyEquivalent)];
    }
}

zend_long ns_nsmenuitem_key_equivalent_modifier_mask(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        r = item != nil ? (zend_long) [item keyEquivalentModifierMask] : 0;
    }
    return r;
}

void ns_nsmenuitem_set_key_equivalent_modifier_mask(zval *handle, zval *mask)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setKeyEquivalentModifierMask:(NSEventModifierFlags) ns_arg_long(mask)];
    }
}

void ns_nsmenuitem_user_key_equivalent(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        ns_ret_string(return_value, item != nil ? [item userKeyEquivalent] : nil);
    }
}

zend_long ns_nsmenuitem_allows_key_equivalent_when_hidden(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        r = (item != nil && [item allowsKeyEquivalentWhenHidden]) ? 1 : 0;
    }
    return r;
}

void ns_nsmenuitem_set_allows_key_equivalent_when_hidden(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setAllowsKeyEquivalentWhenHidden:ns_arg_bool(flag)];
    }
}

zend_long ns_nsmenuitem_allows_automatic_key_equivalent_localization(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        r = (item != nil && [item allowsAutomaticKeyEquivalentLocalization]) ? 1 : 0;
    }
    return r;
}

void ns_nsmenuitem_set_allows_automatic_key_equivalent_localization(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setAllowsAutomaticKeyEquivalentLocalization:ns_arg_bool(flag)];
    }
}

zend_long ns_nsmenuitem_allows_automatic_key_equivalent_mirroring(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        r = (item != nil && [item allowsAutomaticKeyEquivalentMirroring]) ? 1 : 0;
    }
    return r;
}

void ns_nsmenuitem_set_allows_automatic_key_equivalent_mirroring(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setAllowsAutomaticKeyEquivalentMirroring:ns_arg_bool(flag)];
    }
}

zend_long ns_nsmenuitem_image(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        h = ns_handle_for(item != nil ? [item image] : nil);
    }
    return h;
}

void ns_nsmenuitem_set_image(zval *handle, zval *image)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setImage:NS_ARG_AS(NSImage, image)];
    }
}

zend_long ns_nsmenuitem_state(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        r = item != nil ? (zend_long) [item state] : 0;
    }
    return r;
}

void ns_nsmenuitem_set_state(zval *handle, zval *state)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setState:(NSControlStateValue) ns_arg_long(state)];
    }
}

zend_long ns_nsmenuitem_on_state_image(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        h = ns_handle_for(item != nil ? [item onStateImage] : nil);
    }
    return h;
}

void ns_nsmenuitem_set_on_state_image(zval *handle, zval *image)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setOnStateImage:NS_ARG_AS(NSImage, image)];
    }
}

zend_long ns_nsmenuitem_off_state_image(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        h = ns_handle_for(item != nil ? [item offStateImage] : nil);
    }
    return h;
}

void ns_nsmenuitem_set_off_state_image(zval *handle, zval *image)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setOffStateImage:NS_ARG_AS(NSImage, image)];
    }
}

zend_long ns_nsmenuitem_mixed_state_image(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        h = ns_handle_for(item != nil ? [item mixedStateImage] : nil);
    }
    return h;
}

void ns_nsmenuitem_set_mixed_state_image(zval *handle, zval *image)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setMixedStateImage:NS_ARG_AS(NSImage, image)];
    }
}

zend_long ns_nsmenuitem_is_enabled(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        r = (item != nil && [item isEnabled]) ? 1 : 0;
    }
    return r;
}

void ns_nsmenuitem_set_enabled(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setEnabled:ns_arg_bool(flag)];
    }
}

zend_long ns_nsmenuitem_is_alternate(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        r = (item != nil && [item isAlternate]) ? 1 : 0;
    }
    return r;
}

void ns_nsmenuitem_set_alternate(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setAlternate:ns_arg_bool(flag)];
    }
}

zend_long ns_nsmenuitem_indentation_level(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        r = item != nil ? (zend_long) [item indentationLevel] : 0;
    }
    return r;
}

void ns_nsmenuitem_set_indentation_level(zval *handle, zval *level)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setIndentationLevel:(NSInteger) ns_arg_long(level)];
    }
}

zend_long ns_nsmenuitem_target(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        h = ns_handle_for(item != nil ? [item target] : nil);
    }
    return h;
}

void ns_nsmenuitem_set_target(zval *handle, zval *target)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setTarget:ns_arg_object(target)];
    }
}

void ns_nsmenuitem_action(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        ns_ret_sel(return_value, item != nil ? [item action] : NULL);
    }
}

void ns_nsmenuitem_set_action(zval *handle, zval *action)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setAction:ns_arg_sel(action)];
    }
}

zend_long ns_nsmenuitem_tag(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        r = item != nil ? (zend_long) [item tag] : 0;
    }
    return r;
}

void ns_nsmenuitem_set_tag(zval *handle, zval *tag)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setTag:(NSInteger) ns_arg_long(tag)];
    }
}

zend_long ns_nsmenuitem_represented_object(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        h = ns_handle_for(item != nil ? [item representedObject] : nil);
    }
    return h;
}

void ns_nsmenuitem_set_represented_object(zval *handle, zval *representedObject)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setRepresentedObject:ns_arg_object(representedObject)];
    }
}

zend_long ns_nsmenuitem_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        h = ns_handle_for(item != nil ? [item view] : nil);
    }
    return h;
}

void ns_nsmenuitem_set_view(zval *handle, zval *view)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setView:NS_ARG_AS(NSView, view)];
    }
}

zend_long ns_nsmenuitem_is_highlighted(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        r = (item != nil && [item isHighlighted]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nsmenuitem_is_hidden(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        r = (item != nil && [item isHidden]) ? 1 : 0;
    }
    return r;
}

void ns_nsmenuitem_set_hidden(zval *handle, zval *flag)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setHidden:ns_arg_bool(flag)];
    }
}

zend_long ns_nsmenuitem_is_hidden_or_has_hidden_ancestor(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        r = (item != nil && [item isHiddenOrHasHiddenAncestor]) ? 1 : 0;
    }
    return r;
}

void ns_nsmenuitem_tool_tip(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        ns_ret_string(return_value, item != nil ? [item toolTip] : nil);
    }
}

void ns_nsmenuitem_set_tool_tip(zval *handle, zval *toolTip)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setToolTip:ns_arg_string(toolTip)];
    }
}

zend_long ns_nsmenuitem_badge(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        h = ns_handle_for(item != nil ? [item badge] : nil);
    }
    return h;
}

void ns_nsmenuitem_set_badge(zval *handle, zval *badge)
{
    @autoreleasepool {
        NSMenuItem *item = NS_ARG_AS(NSMenuItem, handle);
        if (item == nil) return;
        [item setBadge:NS_ARG_AS(NSMenuItemBadge, badge)];
    }
}
