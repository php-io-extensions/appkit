/* Negative fixture: NSRelic is deprecated in its entirety in the fixture SDK
 * header and every member is bound, but there is no @audit deprecated-class
 * marker. The audit must FAIL — the exemption has to be visible. */

#include "php.h"

/*@zep NS\NSRelic initWithSerial(int serial) -> int */
zend_long ns_nsrelic_init_with_serial(zval *serial);
/*@zep NS\NSRelic wind(int handle) -> void */
void ns_nsrelic_wind(zval *handle);
/*@zep NS\NSRelic label(int handle) -> string */
void ns_nsrelic_label(zval *return_value, zval *handle);
/*@zep NS\NSRelic setLabel(int handle, string label) -> void */
void ns_nsrelic_set_label(zval *handle, zval *label);
