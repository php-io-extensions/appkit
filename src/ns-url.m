#include "ns-url.h"
#include "ns-value.h"

/* ====================================================================== */
/* NSURL                                                                  */
/* ====================================================================== */

zend_long ns_nsurl_file_url_with_path(zval *path)
{
    @autoreleasepool {
        return ns_handle_for([NSURL fileURLWithPath:ns_arg_string(path)]);
    }
}

zend_long ns_nsurl_url_with_string(zval *str)
{
    @autoreleasepool {
        return ns_handle_for([NSURL URLWithString:ns_arg_string(str)]);
    }
}

void ns_nsurl_absolute_string(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSURL *u = NS_ARG_AS(NSURL, handle);
        ns_ret_string(return_value, u != nil ? [u absoluteString] : nil);
    }
}

void ns_nsurl_path(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSURL *u = NS_ARG_AS(NSURL, handle);
        ns_ret_string(return_value, u != nil ? [u path] : nil);
    }
}

zend_long ns_nsurl_is_file_url(zval *handle)
{
    zend_long r = 0;
    @autoreleasepool {
        NSURL *u = NS_ARG_AS(NSURL, handle);
        r = (u != nil && [u isFileURL]) ? 1 : 0;
    }
    return r;
}
