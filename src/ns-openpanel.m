#include "ns-openpanel.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSOpenPanel                                                            */
/* ====================================================================== */

zend_long ns_nsopenpanel_open_panel(void)
{
    zend_long h = 0;
    @autoreleasepool {
        h = ns_handle_for([NSOpenPanel openPanel]);
    }
    return h;
}

void ns_nsopenpanel_urls(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSOpenPanel *p = NS_ARG_AS(NSOpenPanel, handle);
        ns_ret_object_array(return_value, p != nil ? [p URLs] : nil);
    }
}

zend_long ns_nsopenpanel_resolves_aliases(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenPanel *p = NS_ARG_AS(NSOpenPanel, handle);
        r = (p != nil && [p resolvesAliases]) ? 1 : 0;
    }
    return r;
}

void ns_nsopenpanel_set_resolves_aliases(zval *handle, zval *resolvesAliases)
{
    @autoreleasepool {
        NSOpenPanel *p = NS_ARG_AS(NSOpenPanel, handle);
        if (p == nil) return;
        [p setResolvesAliases:ns_arg_bool(resolvesAliases)];
    }
}

zend_long ns_nsopenpanel_can_choose_directories(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenPanel *p = NS_ARG_AS(NSOpenPanel, handle);
        r = (p != nil && [p canChooseDirectories]) ? 1 : 0;
    }
    return r;
}

void ns_nsopenpanel_set_can_choose_directories(zval *handle, zval *canChooseDirectories)
{
    @autoreleasepool {
        NSOpenPanel *p = NS_ARG_AS(NSOpenPanel, handle);
        if (p == nil) return;
        [p setCanChooseDirectories:ns_arg_bool(canChooseDirectories)];
    }
}

zend_long ns_nsopenpanel_allows_multiple_selection(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenPanel *p = NS_ARG_AS(NSOpenPanel, handle);
        r = (p != nil && [p allowsMultipleSelection]) ? 1 : 0;
    }
    return r;
}

void ns_nsopenpanel_set_allows_multiple_selection(zval *handle, zval *allowsMultipleSelection)
{
    @autoreleasepool {
        NSOpenPanel *p = NS_ARG_AS(NSOpenPanel, handle);
        if (p == nil) return;
        [p setAllowsMultipleSelection:ns_arg_bool(allowsMultipleSelection)];
    }
}

zend_long ns_nsopenpanel_can_choose_files(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenPanel *p = NS_ARG_AS(NSOpenPanel, handle);
        r = (p != nil && [p canChooseFiles]) ? 1 : 0;
    }
    return r;
}

void ns_nsopenpanel_set_can_choose_files(zval *handle, zval *canChooseFiles)
{
    @autoreleasepool {
        NSOpenPanel *p = NS_ARG_AS(NSOpenPanel, handle);
        if (p == nil) return;
        [p setCanChooseFiles:ns_arg_bool(canChooseFiles)];
    }
}

zend_long ns_nsopenpanel_can_resolve_ubiquitous_conflicts(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenPanel *p = NS_ARG_AS(NSOpenPanel, handle);
        r = (p != nil && [p canResolveUbiquitousConflicts]) ? 1 : 0;
    }
    return r;
}

void ns_nsopenpanel_set_can_resolve_ubiquitous_conflicts(zval *handle, zval *canResolveUbiquitousConflicts)
{
    @autoreleasepool {
        NSOpenPanel *p = NS_ARG_AS(NSOpenPanel, handle);
        if (p == nil) return;
        [p setCanResolveUbiquitousConflicts:ns_arg_bool(canResolveUbiquitousConflicts)];
    }
}

zend_long ns_nsopenpanel_can_download_ubiquitous_contents(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenPanel *p = NS_ARG_AS(NSOpenPanel, handle);
        r = (p != nil && [p canDownloadUbiquitousContents]) ? 1 : 0;
    }
    return r;
}

void ns_nsopenpanel_set_can_download_ubiquitous_contents(zval *handle, zval *canDownloadUbiquitousContents)
{
    @autoreleasepool {
        NSOpenPanel *p = NS_ARG_AS(NSOpenPanel, handle);
        if (p == nil) return;
        [p setCanDownloadUbiquitousContents:ns_arg_bool(canDownloadUbiquitousContents)];
    }
}

zend_long ns_nsopenpanel_is_accessory_view_disclosed(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSOpenPanel *p = NS_ARG_AS(NSOpenPanel, handle);
        r = (p != nil && [p isAccessoryViewDisclosed]) ? 1 : 0;
    }
    return r;
}

void ns_nsopenpanel_set_accessory_view_disclosed(zval *handle, zval *accessoryViewDisclosed)
{
    @autoreleasepool {
        NSOpenPanel *p = NS_ARG_AS(NSOpenPanel, handle);
        if (p == nil) return;
        [p setAccessoryViewDisclosed:ns_arg_bool(accessoryViewDisclosed)];
    }
}
