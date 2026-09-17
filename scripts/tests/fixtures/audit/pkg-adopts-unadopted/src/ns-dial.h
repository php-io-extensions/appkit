/* Marker names a protocol that exists but NSDial does not adopt. */

#include "php.h"

/*@audit adopts NS\NSDial NSWidgetDelegate not adopted by NSDial */
/*@zep NS\NSDial standardDial() -> int */
zend_long ns_nsdial_standard_dial(void);
/*@zep NS\NSDial label(int handle) -> string */
void ns_nsdial_label(zval *return_value, zval *handle);
