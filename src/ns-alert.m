#include "ns-alert.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSAlert                                                                */
/* ====================================================================== */

zend_long ns_nsalert_init(void)
{
    @autoreleasepool {
        return ns_handle_for([[NSAlert alloc] init]);
    }
}

zend_long ns_nsalert_alert_with_error(zval *error)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSAlert alertWithError:NS_ARG_AS(NSError, error)]);
    }
    return h;
}

void ns_nsalert_message_text(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        ns_ret_string(return_value, a != nil ? [a messageText] : nil);
    }
}

void ns_nsalert_set_message_text(zval *handle, zval *messageText)
{
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        if (a == nil) return;
        [a setMessageText:ns_arg_string(messageText)];
    }
}

void ns_nsalert_informative_text(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        ns_ret_string(return_value, a != nil ? [a informativeText] : nil);
    }
}

void ns_nsalert_set_informative_text(zval *handle, zval *informativeText)
{
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        if (a == nil) return;
        [a setInformativeText:ns_arg_string(informativeText)];
    }
}

zend_long ns_nsalert_icon(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        h = ns_handle_for(a != nil ? [a icon] : nil);
    }
    return h;
}

void ns_nsalert_set_icon(zval *handle, zval *icon)
{
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        if (a == nil) return;
        [a setIcon:NS_ARG_AS(NSImage, icon)];
    }
}

zend_long ns_nsalert_add_button_with_title(zval *handle, zval *title)
{
    zend_long h = 0;
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        h = ns_handle_for(a != nil ? [a addButtonWithTitle:ns_arg_string(title)] : nil);
    }
    return h;
}

void ns_nsalert_buttons(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        ns_ret_object_array(return_value, a != nil ? [a buttons] : nil);
    }
}

zend_long ns_nsalert_alert_style(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        r = a != nil ? (zend_long) [a alertStyle] : 0;
    }
    return r;
}

void ns_nsalert_set_alert_style(zval *handle, zval *alertStyle)
{
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        if (a == nil) return;
        [a setAlertStyle:(NSAlertStyle) ns_arg_long(alertStyle)];
    }
}

zend_long ns_nsalert_shows_help(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        r = (a != nil && [a showsHelp]) ? 1 : 0;
    }
    return r;
}

void ns_nsalert_set_shows_help(zval *handle, zval *showsHelp)
{
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        if (a == nil) return;
        [a setShowsHelp:ns_arg_bool(showsHelp)];
    }
}

void ns_nsalert_help_anchor(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        ns_ret_string(return_value, a != nil ? [a helpAnchor] : nil);
    }
}

void ns_nsalert_set_help_anchor(zval *handle, zval *helpAnchor)
{
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        if (a == nil) return;
        [a setHelpAnchor:ns_arg_string(helpAnchor)];
    }
}

zend_long ns_nsalert_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        h = ns_handle_for(a != nil ? [a delegate] : nil);
    }
    return h;
}

void ns_nsalert_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        if (a == nil) return;
        [a setDelegate:ns_arg_object(delegate)];
    }
}

zend_long ns_nsalert_accessory_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        h = ns_handle_for(a != nil ? [a accessoryView] : nil);
    }
    return h;
}

void ns_nsalert_set_accessory_view(zval *handle, zval *accessoryView)
{
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        if (a == nil) return;
        [a setAccessoryView:NS_ARG_AS(NSView, accessoryView)];
    }
}

void ns_nsalert_layout(zval *handle)
{
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        if (a == nil) return;
        [a layout];
    }
}

zend_long ns_nsalert_run_modal(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        r = a != nil ? (zend_long) [a runModal] : 0;
    }
    return r;
}

zend_long ns_nsalert_shows_suppression_button(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        r = (a != nil && [a showsSuppressionButton]) ? 1 : 0;
    }
    return r;
}

void ns_nsalert_set_shows_suppression_button(zval *handle, zval *showsSuppressionButton)
{
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        if (a == nil) return;
        [a setShowsSuppressionButton:ns_arg_bool(showsSuppressionButton)];
    }
}

zend_long ns_nsalert_suppression_button(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        h = ns_handle_for(a != nil ? [a suppressionButton] : nil);
    }
    return h;
}

zend_long ns_nsalert_window(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSAlert *a = NS_ARG_AS(NSAlert, handle);
        h = ns_handle_for(a != nil ? [a window] : nil);
    }
    return h;
}
