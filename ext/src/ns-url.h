#ifndef PHP_APPKIT_NS_URL_H
#define PHP_APPKIT_NS_URL_H

/*
 * Foundation NSURL — curated minimum for handing locations to the AV
 * classes and anything else that takes a URL handle. The two factories
 * cover the two real cases: a local file and a remote address. The full
 * class (components, resource values, bookmarks) stays unbound until
 * something needs it.
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/*@zep NS\NSURL fileURLWithPath(string path) -> int */
zend_long ns_nsurl_file_url_with_path(zval *path);
/*@zep NS\NSURL URLWithString(string str) -> int */
zend_long ns_nsurl_url_with_string(zval *str);
/*@zep NS\NSURL absoluteString(int handle) -> var */
void ns_nsurl_absolute_string(zval *return_value, zval *handle);
/*@zep NS\NSURL path(int handle) -> var */
void ns_nsurl_path(zval *return_value, zval *handle);
/*@zep NS\NSURL isFileURL(int handle) -> bool */
zend_long ns_nsurl_is_file_url(zval *handle);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_URL_H */
