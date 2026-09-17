/* Marker names a protocol no framework header defines. */

#include "php.h"

/*@audit adopts NS\NSDial NSSpinning no such protocol */
/*@zep NS\NSDial standardDial() -> int */
zend_long ns_nsdial_standard_dial(void);
/*@zep NS\NSDial label(int handle) -> string */
void ns_nsdial_label(zval *return_value, zval *handle);
