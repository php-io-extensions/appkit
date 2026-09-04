#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ext.h"
#include "ns-attributedstring.h"
#include "ns-value.h"

zend_long ns_nsattributedstring_init_with_string(zval *str)
{
    @autoreleasepool {
        NSString *s = ns_arg_string(str);
        if (s == nil) return 0;
        return ns_handle_for([[NSAttributedString alloc] initWithString:s]);
    }
}

zend_long ns_nsattributedstring_init_with_string_attributes(zval *str, zval *attributes)
{
    @autoreleasepool {
        NSString *s = ns_arg_string(str);
        if (s == nil) return 0;
        return ns_handle_for([[NSAttributedString alloc] initWithString:s attributes:ns_arg_dictionary(attributes)]);
    }
}

void ns_nsattributedstring_string(zval *return_value, zval *handle)
{
    @autoreleasepool {
        NSAttributedString *a = NS_ARG_AS(NSAttributedString, handle);
        ns_ret_string(return_value, a != nil ? [a string] : nil);
    }
}

zend_long ns_nsattributedstring_length(zval *handle)
{
    @autoreleasepool {
        NSAttributedString *a = NS_ARG_AS(NSAttributedString, handle);
        return a != nil ? (zend_long) [a length] : 0;
    }
}
