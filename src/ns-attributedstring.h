#ifndef PHP_APPKIT_NS_ATTRIBUTEDSTRING_H
#define PHP_APPKIT_NS_ATTRIBUTEDSTRING_H

/*
 * Foundation NSAttributedString — curated minimum for styled titles and
 * the About panel's Credits key. Attributes arrive as a PHP assoc array
 * through ns_arg_dictionary: keys are attribute names ("NSColor",
 * "NSFont", …), values are handles (resolved to their objects) or
 * scalars. The full class (ranges, enumeration, mutation) stays unbound
 * until something needs it.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/*@zep-construct NS\NSAttributedString initWithString(string str) -> int */
zend_long ns_nsattributedstring_init_with_string(zval *str);
/*@zep-construct NS\NSAttributedString initWithStringAttributes(string str, var attributes) -> int */
zend_long ns_nsattributedstring_init_with_string_attributes(zval *str, zval *attributes);
/*@zep NS\NSAttributedString string(int handle) -> var */
void ns_nsattributedstring_string(zval *return_value, zval *handle);
/*@zep NS\NSAttributedString length(int handle) -> int */
zend_long ns_nsattributedstring_length(zval *handle);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_ATTRIBUTEDSTRING_H */
