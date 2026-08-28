#include "ns-savepanel.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSSavePanel                                                            */
/* ====================================================================== */

zend_long ns_nssavepanel_save_panel(void)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSSavePanel savePanel]);
    }
    return h;
}

zend_long ns_nssavepanel_url(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        h = ns_handle_for(p != nil ? [p URL] : nil);
    }
    return h;
}

void ns_nssavepanel_identifier(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        ns_ret_string(return_value, p != nil ? [p identifier] : nil);
    }
}

void ns_nssavepanel_set_identifier(zval *handle, zval *identifier)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p setIdentifier:ns_arg_string(identifier)];
    }
}

zend_long ns_nssavepanel_directory_url(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        h = ns_handle_for(p != nil ? [p directoryURL] : nil);
    }
    return h;
}

void ns_nssavepanel_set_directory_url(zval *handle, zval *directoryURL)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p setDirectoryURL:NS_ARG_AS(NSURL, directoryURL)];
    }
}

void ns_nssavepanel_allowed_content_types(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        ns_ret_object_array(return_value, p != nil ? [p allowedContentTypes] : nil);
    }
}

void ns_nssavepanel_set_allowed_content_types(zval *handle, zval *allowedContentTypes)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p setAllowedContentTypes:ns_arg_object_array(allowedContentTypes)];
    }
}

zend_long ns_nssavepanel_allows_other_file_types(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        r = (p != nil && [p allowsOtherFileTypes]) ? 1 : 0;
    }
    return r;
}

void ns_nssavepanel_set_allows_other_file_types(zval *handle, zval *allowsOtherFileTypes)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p setAllowsOtherFileTypes:ns_arg_bool(allowsOtherFileTypes)];
    }
}

zend_long ns_nssavepanel_current_content_type(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        h = ns_handle_for(p != nil ? [p currentContentType] : nil);
    }
    return h;
}

void ns_nssavepanel_set_current_content_type(zval *handle, zval *currentContentType)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p setCurrentContentType:(UTType *) ns_arg_object(currentContentType)];
    }
}

zend_long ns_nssavepanel_accessory_view(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        h = ns_handle_for(p != nil ? [p accessoryView] : nil);
    }
    return h;
}

void ns_nssavepanel_set_accessory_view(zval *handle, zval *accessoryView)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p setAccessoryView:NS_ARG_AS(NSView, accessoryView)];
    }
}

zend_long ns_nssavepanel_delegate(zval *handle)
{
    zend_long h = 0;
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        h = ns_handle_for(p != nil ? [p delegate] : nil);
    }
    return h;
}

void ns_nssavepanel_set_delegate(zval *handle, zval *delegate)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p setDelegate:ns_arg_object(delegate)];
    }
}

zend_long ns_nssavepanel_is_expanded(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        r = (p != nil && [p isExpanded]) ? 1 : 0;
    }
    return r;
}

zend_long ns_nssavepanel_can_create_directories(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        r = (p != nil && [p canCreateDirectories]) ? 1 : 0;
    }
    return r;
}

void ns_nssavepanel_set_can_create_directories(zval *handle, zval *canCreateDirectories)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p setCanCreateDirectories:ns_arg_bool(canCreateDirectories)];
    }
}

zend_long ns_nssavepanel_can_select_hidden_extension(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        r = (p != nil && [p canSelectHiddenExtension]) ? 1 : 0;
    }
    return r;
}

void ns_nssavepanel_set_can_select_hidden_extension(zval *handle, zval *canSelectHiddenExtension)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p setCanSelectHiddenExtension:ns_arg_bool(canSelectHiddenExtension)];
    }
}

zend_long ns_nssavepanel_is_extension_hidden(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        r = (p != nil && [p isExtensionHidden]) ? 1 : 0;
    }
    return r;
}

void ns_nssavepanel_set_extension_hidden(zval *handle, zval *extensionHidden)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p setExtensionHidden:ns_arg_bool(extensionHidden)];
    }
}

zend_long ns_nssavepanel_treats_file_packages_as_directories(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        r = (p != nil && [p treatsFilePackagesAsDirectories]) ? 1 : 0;
    }
    return r;
}

void ns_nssavepanel_set_treats_file_packages_as_directories(zval *handle, zval *treatsFilePackagesAsDirectories)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p setTreatsFilePackagesAsDirectories:ns_arg_bool(treatsFilePackagesAsDirectories)];
    }
}

void ns_nssavepanel_prompt(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        ns_ret_string(return_value, p != nil ? [p prompt] : nil);
    }
}

void ns_nssavepanel_set_prompt(zval *handle, zval *prompt)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p setPrompt:ns_arg_string(prompt)];
    }
}

void ns_nssavepanel_title(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        ns_ret_string(return_value, p != nil ? [p title] : nil);
    }
}

void ns_nssavepanel_set_title(zval *handle, zval *title)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p setTitle:ns_arg_string(title)];
    }
}

void ns_nssavepanel_name_field_label(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        ns_ret_string(return_value, p != nil ? [p nameFieldLabel] : nil);
    }
}

void ns_nssavepanel_set_name_field_label(zval *handle, zval *nameFieldLabel)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p setNameFieldLabel:ns_arg_string(nameFieldLabel)];
    }
}

void ns_nssavepanel_name_field_string_value(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        ns_ret_string(return_value, p != nil ? [p nameFieldStringValue] : nil);
    }
}

void ns_nssavepanel_set_name_field_string_value(zval *handle, zval *nameFieldStringValue)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p setNameFieldStringValue:ns_arg_string(nameFieldStringValue)];
    }
}

void ns_nssavepanel_message(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        ns_ret_string(return_value, p != nil ? [p message] : nil);
    }
}

void ns_nssavepanel_set_message(zval *handle, zval *message)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p setMessage:ns_arg_string(message)];
    }
}

zend_long ns_nssavepanel_shows_hidden_files(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        r = (p != nil && [p showsHiddenFiles]) ? 1 : 0;
    }
    return r;
}

void ns_nssavepanel_set_shows_hidden_files(zval *handle, zval *showsHiddenFiles)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p setShowsHiddenFiles:ns_arg_bool(showsHiddenFiles)];
    }
}

zend_long ns_nssavepanel_shows_tag_field(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        r = (p != nil && [p showsTagField]) ? 1 : 0;
    }
    return r;
}

void ns_nssavepanel_set_shows_tag_field(zval *handle, zval *showsTagField)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p setShowsTagField:ns_arg_bool(showsTagField)];
    }
}

void ns_nssavepanel_tag_names(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        ns_ret_string_array(return_value, p != nil ? [p tagNames] : nil);
    }
}

void ns_nssavepanel_set_tag_names(zval *handle, zval *tagNames)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p setTagNames:ns_arg_string_array(tagNames)];
    }
}

zend_long ns_nssavepanel_shows_content_types(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        r = (p != nil && [p showsContentTypes]) ? 1 : 0;
    }
    return r;
}

void ns_nssavepanel_set_shows_content_types(zval *handle, zval *showsContentTypes)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p setShowsContentTypes:ns_arg_bool(showsContentTypes)];
    }
}

void ns_nssavepanel_validate_visible_columns(zval *handle)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p validateVisibleColumns];
    }
}

void ns_nssavepanel_ok(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p ok:ns_arg_object(sender)];
    }
}

void ns_nssavepanel_cancel(zval *handle, zval *sender)
{
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        if (p == nil) return;
        [p cancel:ns_arg_object(sender)];
    }
}

zend_long ns_nssavepanel_run_modal(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSSavePanel *p = NS_ARG_AS(NSSavePanel, handle);
        r = p != nil ? (zend_long) [p runModal] : 0;
    }
    return r;
}
