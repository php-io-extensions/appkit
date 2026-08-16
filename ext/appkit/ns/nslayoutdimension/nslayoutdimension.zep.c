
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
 * NSLayoutDimension — width/height layout anchor.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSLayoutDimension_NSLayoutDimension)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSLayoutDimension, NSLayoutDimension, appkit, ns_nslayoutdimension_nslayoutdimension, appkit_ns_nslayoutdimension_nslayoutdimension_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintEqualToConstant)
{
	double constant;
	zval *anchor_param = NULL, *constant_param = NULL;
	zend_long anchor, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(anchor)
		Z_PARAM_ZVAL(constant)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &anchor_param, &constant_param);
	constant = zephir_get_doubleval(constant_param);
	
            handle = (zend_long) ns_layoutdimension_constraint_equal_to_constant((uintptr_t) anchor, constant);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintGreaterThanOrEqualToConstant)
{
	double constant;
	zval *anchor_param = NULL, *constant_param = NULL;
	zend_long anchor, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(anchor)
		Z_PARAM_ZVAL(constant)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &anchor_param, &constant_param);
	constant = zephir_get_doubleval(constant_param);
	
            handle = (zend_long) ns_layoutdimension_constraint_greater_than_or_equal_to_constant((uintptr_t) anchor, constant);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintLessThanOrEqualToConstant)
{
	double constant;
	zval *anchor_param = NULL, *constant_param = NULL;
	zend_long anchor, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(anchor)
		Z_PARAM_ZVAL(constant)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &anchor_param, &constant_param);
	constant = zephir_get_doubleval(constant_param);
	
            handle = (zend_long) ns_layoutdimension_constraint_less_than_or_equal_to_constant((uintptr_t) anchor, constant);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintEqualToAnchor)
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
	
            handle = (zend_long) ns_layoutdimension_constraint_equal_to_anchor_multiplier(
                (uintptr_t) anchor, (uintptr_t) other, multiplier);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintGreaterThanOrEqualToAnchor)
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
	
            handle = (zend_long) ns_layoutdimension_constraint_greater_than_or_equal_to_anchor_multiplier(
                (uintptr_t) anchor, (uintptr_t) other, multiplier);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintLessThanOrEqualToAnchor)
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
	
            handle = (zend_long) ns_layoutdimension_constraint_less_than_or_equal_to_anchor_multiplier(
                (uintptr_t) anchor, (uintptr_t) other, multiplier);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintEqualToAnchorConstant)
{
	double multiplier, constant;
	zval *anchor_param = NULL, *other_param = NULL, *multiplier_param = NULL, *constant_param = NULL;
	zend_long anchor, other, handle = 0;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(anchor)
		Z_PARAM_LONG(other)
		Z_PARAM_ZVAL(multiplier)
		Z_PARAM_ZVAL(constant)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &anchor_param, &other_param, &multiplier_param, &constant_param);
	multiplier = zephir_get_doubleval(multiplier_param);
	constant = zephir_get_doubleval(constant_param);
	
            handle = (zend_long) ns_layoutdimension_constraint_equal_to_anchor_multiplier_constant(
                (uintptr_t) anchor, (uintptr_t) other, multiplier, constant);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintGreaterThanOrEqualToAnchorConstant)
{
	double multiplier, constant;
	zval *anchor_param = NULL, *other_param = NULL, *multiplier_param = NULL, *constant_param = NULL;
	zend_long anchor, other, handle = 0;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(anchor)
		Z_PARAM_LONG(other)
		Z_PARAM_ZVAL(multiplier)
		Z_PARAM_ZVAL(constant)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &anchor_param, &other_param, &multiplier_param, &constant_param);
	multiplier = zephir_get_doubleval(multiplier_param);
	constant = zephir_get_doubleval(constant_param);
	
            handle = (zend_long) ns_layoutdimension_constraint_greater_than_or_equal_to_anchor_multiplier_constant(
                (uintptr_t) anchor, (uintptr_t) other, multiplier, constant);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutDimension_NSLayoutDimension, constraintLessThanOrEqualToAnchorConstant)
{
	double multiplier, constant;
	zval *anchor_param = NULL, *other_param = NULL, *multiplier_param = NULL, *constant_param = NULL;
	zend_long anchor, other, handle = 0;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(anchor)
		Z_PARAM_LONG(other)
		Z_PARAM_ZVAL(multiplier)
		Z_PARAM_ZVAL(constant)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &anchor_param, &other_param, &multiplier_param, &constant_param);
	multiplier = zephir_get_doubleval(multiplier_param);
	constant = zephir_get_doubleval(constant_param);
	
            handle = (zend_long) ns_layoutdimension_constraint_less_than_or_equal_to_anchor_multiplier_constant(
                (uintptr_t) anchor, (uintptr_t) other, multiplier, constant);
        
	RETURN_LONG(handle);
}

