#ifndef PHP_APPKIT_NS_STEPPERCELL_H
#define PHP_APPKIT_NS_STEPPERCELL_H

/*
 * Faithful 1:1 binding of AppKit NSStepperCell.h. Every member of
 * the class (the single base interface; no same-file categories) is
 * either bound or reserved. Nothing is reserved — the header has
 * no blocks, NSCoder, NSAttributedString, NSData, Class, or
 * API_DEPRECATED members. Inherited NSActionCell / NSCell members
 * stay on those classes. No designated initializer is declared
 * here — construction is synthesized initTextCell / initImageCell
 * (allocs NSStepperCell; nearest bound ancestor is NSCell).
 * minValue / maxValue / increment are doubles; valueWraps /
 * autorepeat are BOOL without getter=isX and emit as valueWraps /
 * autorepeat (not isValueWraps).
 */

#include "php.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ---- NSStepperCell ---- */

/*@zep-construct NS\NSStepperCell initTextCell(string string_) -> int */
zend_long ns_nssteppercell_init_text_cell(zval *string_);
/*@zep-construct NS\NSStepperCell initImageCell(int image) -> int */
zend_long ns_nssteppercell_init_image_cell(zval *image);

/*@zep NS\NSStepperCell minValue(int handle) -> double */
double ns_nssteppercell_min_value(zval *handle);
/*@zep NS\NSStepperCell setMinValue(int handle, double minValue) -> void */
void ns_nssteppercell_set_min_value(zval *handle, zval *minValue);

/*@zep NS\NSStepperCell maxValue(int handle) -> double */
double ns_nssteppercell_max_value(zval *handle);
/*@zep NS\NSStepperCell setMaxValue(int handle, double maxValue) -> void */
void ns_nssteppercell_set_max_value(zval *handle, zval *maxValue);

/*@zep NS\NSStepperCell increment(int handle) -> double */
double ns_nssteppercell_increment(zval *handle);
/*@zep NS\NSStepperCell setIncrement(int handle, double increment) -> void */
void ns_nssteppercell_set_increment(zval *handle, zval *increment);

/*@zep NS\NSStepperCell valueWraps(int handle) -> bool */
zend_long ns_nssteppercell_value_wraps(zval *handle);
/*@zep NS\NSStepperCell setValueWraps(int handle, bool valueWraps) -> void */
void ns_nssteppercell_set_value_wraps(zval *handle, zval *valueWraps);

/*@zep NS\NSStepperCell autorepeat(int handle) -> bool */
zend_long ns_nssteppercell_autorepeat(zval *handle);
/*@zep NS\NSStepperCell setAutorepeat(int handle, bool autorepeat) -> void */
void ns_nssteppercell_set_autorepeat(zval *handle, zval *autorepeat);

#ifdef __cplusplus
}
#endif

#endif /* PHP_APPKIT_NS_STEPPERCELL_H */
