#include "ns-searchfieldcell.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSSearchFieldCell                                                      */
/* ====================================================================== */

zend_long ns_nssearchfieldcell_init_text_cell(zval *string_)
{
    @autoreleasepool {
        return ns_handle_for([[NSSearchFieldCell alloc] initTextCell:ns_arg_string(string_)]);
    }
}

zend_long ns_nssearchfieldcell_search_button_cell(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        h = ns_handle_for(c != nil ? [c searchButtonCell] : nil);
    }
    return h;
}

void ns_nssearchfieldcell_set_search_button_cell(zval *handle, zval *searchButtonCell)
{
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        if (c == nil) return;
        [c setSearchButtonCell:NS_ARG_AS(NSButtonCell, searchButtonCell)];
    }
}

zend_long ns_nssearchfieldcell_cancel_button_cell(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        h = ns_handle_for(c != nil ? [c cancelButtonCell] : nil);
    }
    return h;
}

void ns_nssearchfieldcell_set_cancel_button_cell(zval *handle, zval *cancelButtonCell)
{
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        if (c == nil) return;
        [c setCancelButtonCell:NS_ARG_AS(NSButtonCell, cancelButtonCell)];
    }
}

void ns_nssearchfieldcell_reset_search_button_cell(zval *handle)
{
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        if (c == nil) return;
        [c resetSearchButtonCell];
    }
}

void ns_nssearchfieldcell_reset_cancel_button_cell(zval *handle)
{
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        if (c == nil) return;
        [c resetCancelButtonCell];
    }
}

void ns_nssearchfieldcell_search_text_rect_for_bounds(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        ns_ret_rect(return_value, c != nil ? [c searchTextRectForBounds:ns_arg_rect(x, y, width, height)] : NSZeroRect);
    }
}

void ns_nssearchfieldcell_search_button_rect_for_bounds(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        ns_ret_rect(return_value, c != nil ? [c searchButtonRectForBounds:ns_arg_rect(x, y, width, height)] : NSZeroRect);
    }
}

void ns_nssearchfieldcell_cancel_button_rect_for_bounds(zval *return_value, zval *handle, zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        ns_ret_rect(return_value, c != nil ? [c cancelButtonRectForBounds:ns_arg_rect(x, y, width, height)] : NSZeroRect);
    }
}

zend_long ns_nssearchfieldcell_search_menu_template(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        h = ns_handle_for(c != nil ? [c searchMenuTemplate] : nil);
    }
    return h;
}

void ns_nssearchfieldcell_set_search_menu_template(zval *handle, zval *searchMenuTemplate)
{
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        if (c == nil) return;
        [c setSearchMenuTemplate:NS_ARG_AS(NSMenu, searchMenuTemplate)];
    }
}

zend_long ns_nssearchfieldcell_sends_whole_search_string(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        r = (c != nil && [c sendsWholeSearchString]) ? 1 : 0;
    }
    return r;
}

void ns_nssearchfieldcell_set_sends_whole_search_string(zval *handle, zval *sendsWholeSearchString)
{
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        if (c == nil) return;
        [c setSendsWholeSearchString:ns_arg_bool(sendsWholeSearchString)];
    }
}

zend_long ns_nssearchfieldcell_maximum_recents(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        r = c != nil ? (zend_long) [c maximumRecents] : 0;
    }
    return r;
}

void ns_nssearchfieldcell_set_maximum_recents(zval *handle, zval *maximumRecents)
{
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        if (c == nil) return;
        [c setMaximumRecents:(NSInteger) ns_arg_long(maximumRecents)];
    }
}

void ns_nssearchfieldcell_recent_searches(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        ns_ret_string_array(return_value, c != nil ? [c recentSearches] : nil);
    }
}

void ns_nssearchfieldcell_set_recent_searches(zval *handle, zval *recentSearches)
{
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        if (c == nil) return;
        zval *z = ns_deref(recentSearches);
        NSArray<NSString *> *searches = (z != NULL && Z_TYPE_P(z) == IS_ARRAY) ? ns_arg_string_array(recentSearches) : nil;
        [c setRecentSearches:searches];
    }
}

void ns_nssearchfieldcell_recents_autosave_name(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        ns_ret_string(return_value, c != nil ? [c recentsAutosaveName] : nil);
    }
}

void ns_nssearchfieldcell_set_recents_autosave_name(zval *handle, zval *recentsAutosaveName)
{
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        if (c == nil) return;
        [c setRecentsAutosaveName:ns_arg_string(recentsAutosaveName)];
    }
}

zend_long ns_nssearchfieldcell_sends_search_string_immediately(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        r = (c != nil && [c sendsSearchStringImmediately]) ? 1 : 0;
    }
    return r;
}

void ns_nssearchfieldcell_set_sends_search_string_immediately(zval *handle, zval *sendsSearchStringImmediately)
{
    @autoreleasepool {
        NSSearchFieldCell *c = NS_ARG_AS(NSSearchFieldCell, handle);
        if (c == nil) return;
        [c setSendsSearchStringImmediately:ns_arg_bool(sendsSearchStringImmediately)];
    }
}
