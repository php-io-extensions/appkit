#include "ns-searchfield.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSSearchField                                                          */
/* ====================================================================== */

zend_long ns_nssearchfield_init_with_frame(zval *x, zval *y, zval *width, zval *height)
{
    @autoreleasepool {
        return ns_handle_for([[NSSearchField alloc] initWithFrame:ns_arg_rect(x, y, width, height)]);
    }
}

void ns_nssearchfield_search_text_bounds(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSSearchField *f = NS_ARG_AS(NSSearchField, handle);
        ns_ret_rect(return_value, f != nil ? [f searchTextBounds] : NSZeroRect);
    }
}

void ns_nssearchfield_search_button_bounds(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSSearchField *f = NS_ARG_AS(NSSearchField, handle);
        ns_ret_rect(return_value, f != nil ? [f searchButtonBounds] : NSZeroRect);
    }
}

void ns_nssearchfield_cancel_button_bounds(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSSearchField *f = NS_ARG_AS(NSSearchField, handle);
        ns_ret_rect(return_value, f != nil ? [f cancelButtonBounds] : NSZeroRect);
    }
}

void ns_nssearchfield_recent_searches(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSSearchField *f = NS_ARG_AS(NSSearchField, handle);
        ns_ret_string_array(return_value, f != nil ? [f recentSearches] : nil);
    }
}

void ns_nssearchfield_set_recent_searches(zval *handle, zval *recentSearches)
{
    @autoreleasepool {
        NSSearchField *f = NS_ARG_AS(NSSearchField, handle);
        if (f == nil) return;
        [f setRecentSearches:ns_arg_string_array(recentSearches)];
    }
}

void ns_nssearchfield_recents_autosave_name(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSSearchField *f = NS_ARG_AS(NSSearchField, handle);
        ns_ret_string(return_value, f != nil ? [f recentsAutosaveName] : nil);
    }
}

void ns_nssearchfield_set_recents_autosave_name(zval *handle, zval *recentsAutosaveName)
{
    @autoreleasepool {
        NSSearchField *f = NS_ARG_AS(NSSearchField, handle);
        if (f == nil) return;
        [f setRecentsAutosaveName:ns_arg_string(recentsAutosaveName)];
    }
}

zend_long ns_nssearchfield_search_menu_template(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSearchField *f = NS_ARG_AS(NSSearchField, handle);
        h = ns_handle_for(f != nil ? [f searchMenuTemplate] : nil);
    }
    return h;
}

void ns_nssearchfield_set_search_menu_template(zval *handle, zval *searchMenuTemplate)
{
    @autoreleasepool {
        NSSearchField *f = NS_ARG_AS(NSSearchField, handle);
        if (f == nil) return;
        [f setSearchMenuTemplate:NS_ARG_AS(NSMenu, searchMenuTemplate)];
    }
}

zend_long ns_nssearchfield_sends_whole_search_string(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSearchField *f = NS_ARG_AS(NSSearchField, handle);
        r = (f != nil && [f sendsWholeSearchString]) ? 1 : 0;
    }
    return r;
}

void ns_nssearchfield_set_sends_whole_search_string(zval *handle, zval *sendsWholeSearchString)
{
    @autoreleasepool {
        NSSearchField *f = NS_ARG_AS(NSSearchField, handle);
        if (f == nil) return;
        [f setSendsWholeSearchString:ns_arg_bool(sendsWholeSearchString)];
    }
}

zend_long ns_nssearchfield_maximum_recents(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSearchField *f = NS_ARG_AS(NSSearchField, handle);
        r = f != nil ? (zend_long) [f maximumRecents] : 0;
    }
    return r;
}

void ns_nssearchfield_set_maximum_recents(zval *handle, zval *maximumRecents)
{
    @autoreleasepool {
        NSSearchField *f = NS_ARG_AS(NSSearchField, handle);
        if (f == nil) return;
        [f setMaximumRecents:(NSInteger) ns_arg_long(maximumRecents)];
    }
}

zend_long ns_nssearchfield_sends_search_string_immediately(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSearchField *f = NS_ARG_AS(NSSearchField, handle);
        r = (f != nil && [f sendsSearchStringImmediately]) ? 1 : 0;
    }
    return r;
}

void ns_nssearchfield_set_sends_search_string_immediately(zval *handle, zval *sendsSearchStringImmediately)
{
    @autoreleasepool {
        NSSearchField *f = NS_ARG_AS(NSSearchField, handle);
        if (f == nil) return;
        [f setSendsSearchStringImmediately:ns_arg_bool(sendsSearchStringImmediately)];
    }
}

zend_long ns_nssearchfield_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSearchField *f = NS_ARG_AS(NSSearchField, handle);
        h = ns_handle_for(f != nil ? [f delegate] : nil);
    }
    return h;
}

void ns_nssearchfield_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSSearchField *f = NS_ARG_AS(NSSearchField, handle);
        if (f == nil) return;
        [f setDelegate:ns_arg_object(delegate)];
    }
}
