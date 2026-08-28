
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
#include "src/ns-steppercell.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSStepperCell_NSStepperCell)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSStepperCell, NSStepperCell, appkit, ns_nssteppercell_nssteppercell, appkit_ns_nssteppercell_nssteppercell_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, initTextCell)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string__param = NULL;
	zval string_;

	ZVAL_UNDEF(&string_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(string_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &string__param);
	zephir_get_strval(&string_, string__param);
	RETURN_MM_LONG(ns_nssteppercell_init_text_cell(&string_));
}

PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, initImageCell)
{
	zval *image_param = NULL, _0;
	zend_long image;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &image_param);
	ZVAL_LONG(&_0, image);
	RETURN_LONG(ns_nssteppercell_init_image_cell(&_0));
}

PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, minValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nssteppercell_min_value(&_0));
}

PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, setMinValue)
{
	double minValue;
	zval *handle_param = NULL, *minValue_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(minValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &minValue_param);
	minValue = zephir_get_doubleval(minValue_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, minValue);
	ns_nssteppercell_set_min_value(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, maxValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nssteppercell_max_value(&_0));
}

PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, setMaxValue)
{
	double maxValue;
	zval *handle_param = NULL, *maxValue_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(maxValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &maxValue_param);
	maxValue = zephir_get_doubleval(maxValue_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, maxValue);
	ns_nssteppercell_set_max_value(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, increment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nssteppercell_increment(&_0));
}

PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, setIncrement)
{
	double increment;
	zval *handle_param = NULL, *increment_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(increment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &increment_param);
	increment = zephir_get_doubleval(increment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, increment);
	ns_nssteppercell_set_increment(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, valueWraps)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nssteppercell_value_wraps(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, setValueWraps)
{
	zend_bool valueWraps;
	zval *handle_param = NULL, *valueWraps_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(valueWraps)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &valueWraps_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (valueWraps ? 1 : 0));
	ns_nssteppercell_set_value_wraps(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, autorepeat)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nssteppercell_autorepeat(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, setAutorepeat)
{
	zend_bool autorepeat;
	zval *handle_param = NULL, *autorepeat_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(autorepeat)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &autorepeat_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (autorepeat ? 1 : 0));
	ns_nssteppercell_set_autorepeat(&_0, &_1);
}

