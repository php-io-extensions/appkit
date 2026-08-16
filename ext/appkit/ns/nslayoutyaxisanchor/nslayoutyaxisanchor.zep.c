
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"

#include "ns-layoutanchor.h"
#include <stdint.h>



/**
 * NSLayoutYAxisAnchor — vertical layout anchor.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSLayoutYAxisAnchor_NSLayoutYAxisAnchor)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSLayoutYAxisAnchor, NSLayoutYAxisAnchor, appkit, ns_nslayoutyaxisanchor_nslayoutyaxisanchor, appkit_ns_nslayoutyaxisanchor_nslayoutyaxisanchor_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSLayoutYAxisAnchor_NSLayoutYAxisAnchor, anchorWithOffsetToAnchor)
{
	zval *anchor_param = NULL, *other_param = NULL;
	zend_long anchor, other, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(anchor)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &anchor_param, &other_param);
	
            handle = (zend_long) ns_layoutyaxisanchor_anchor_with_offset_to_anchor((uintptr_t) anchor, (uintptr_t) other);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutYAxisAnchor_NSLayoutYAxisAnchor, constraintEqualToSystemSpacingBelowAnchor)
{
	double multiplier;
	zval *anchor_param = NULL, *other_param = NULL, *multiplier_param = NULL;
	zend_long anchor, other, handle = 0;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(anchor)
		Z_PARAM_LONG(other)
		Z_PARAM_ZVAL(multiplier)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &anchor_param, &other_param, &multiplier_param);
	multiplier = zephir_get_doubleval(multiplier_param);
	
            handle = (zend_long) ns_layoutyaxisanchor_constraint_equal_to_system_spacing_below(
                (uintptr_t) anchor, (uintptr_t) other, multiplier);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutYAxisAnchor_NSLayoutYAxisAnchor, constraintGreaterThanOrEqualToSystemSpacingBelowAnchor)
{
	double multiplier;
	zval *anchor_param = NULL, *other_param = NULL, *multiplier_param = NULL;
	zend_long anchor, other, handle = 0;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(anchor)
		Z_PARAM_LONG(other)
		Z_PARAM_ZVAL(multiplier)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &anchor_param, &other_param, &multiplier_param);
	multiplier = zephir_get_doubleval(multiplier_param);
	
            handle = (zend_long) ns_layoutyaxisanchor_constraint_greater_than_or_equal_to_system_spacing_below(
                (uintptr_t) anchor, (uintptr_t) other, multiplier);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutYAxisAnchor_NSLayoutYAxisAnchor, constraintLessThanOrEqualToSystemSpacingBelowAnchor)
{
	double multiplier;
	zval *anchor_param = NULL, *other_param = NULL, *multiplier_param = NULL;
	zend_long anchor, other, handle = 0;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(anchor)
		Z_PARAM_LONG(other)
		Z_PARAM_ZVAL(multiplier)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &anchor_param, &other_param, &multiplier_param);
	multiplier = zephir_get_doubleval(multiplier_param);
	
            handle = (zend_long) ns_layoutyaxisanchor_constraint_less_than_or_equal_to_system_spacing_below(
                (uintptr_t) anchor, (uintptr_t) other, multiplier);
        
	RETURN_LONG(handle);
}

