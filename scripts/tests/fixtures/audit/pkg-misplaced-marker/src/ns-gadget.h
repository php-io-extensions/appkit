/* Negative fixture: the marker sits on NSGadget, which the fixture SDK
 * header does not deprecate at all. The audit must FAIL — the exemption
 * may not spread to live classes. */

#include "php.h"

/*@audit deprecated-class NS\NSGadget claims an exemption this class has no right to */
/*@zep NS\NSGadget standardGadget() -> int */
zend_long ns_nsgadget_standard_gadget(void);
/*@zep NS\NSGadget spinUp(int handle) -> void */
void ns_nsgadget_spin_up(zval *handle);
/*@zep NS\NSGadget spinDown(int handle) -> void */
void ns_nsgadget_spin_down(zval *handle);
/*@zep NS\NSGadget label(int handle) -> string */
void ns_nsgadget_label(zval *return_value, zval *handle);
/*@zep NS\NSGadget setLabel(int handle, string label) -> void */
void ns_nsgadget_set_label(zval *handle, zval *label);
