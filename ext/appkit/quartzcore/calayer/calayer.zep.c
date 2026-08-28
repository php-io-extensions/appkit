
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
#include "src/ca-layer.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(AppKit_QuartzCore_CALayer_CALayer)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\QuartzCore\\CALayer, CALayer, appkit, quartzcore_calayer_calayer, appkit_quartzcore_calayer_calayer_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_QuartzCore_CALayer_CALayer, init)
{

	RETURN_LONG(ns_calayer_init());
}

PHP_METHOD(AppKit_QuartzCore_CALayer_CALayer, backgroundColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_calayer_background_color(&_0));
}

PHP_METHOD(AppKit_QuartzCore_CALayer_CALayer, setBackgroundColor)
{
	zval *handle_param = NULL, *backgroundColor_param = NULL, _0, _1;
	zend_long handle, backgroundColor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(backgroundColor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &backgroundColor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, backgroundColor);
	ns_calayer_set_background_color(&_0, &_1);
}

PHP_METHOD(AppKit_QuartzCore_CALayer_CALayer, contentsGravity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ns_calayer_contents_gravity(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_QuartzCore_CALayer_CALayer, setContentsGravity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval contentsGravity;
	zval *handle_param = NULL, *contentsGravity_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&contentsGravity);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(contentsGravity)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &contentsGravity_param);
	zephir_get_strval(&contentsGravity, contentsGravity_param);
	ZVAL_LONG(&_0, handle);
	ns_calayer_set_contents_gravity(&_0, &contentsGravity);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_QuartzCore_CALayer_CALayer, cornerRadius)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_calayer_corner_radius(&_0));
}

PHP_METHOD(AppKit_QuartzCore_CALayer_CALayer, setCornerRadius)
{
	double cornerRadius;
	zval *handle_param = NULL, *cornerRadius_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(cornerRadius)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cornerRadius_param);
	cornerRadius = zephir_get_doubleval(cornerRadius_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, cornerRadius);
	ns_calayer_set_corner_radius(&_0, &_1);
}

PHP_METHOD(AppKit_QuartzCore_CALayer_CALayer, masksToBounds)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_calayer_masks_to_bounds(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_QuartzCore_CALayer_CALayer, setMasksToBounds)
{
	zend_bool masksToBounds;
	zval *handle_param = NULL, *masksToBounds_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(masksToBounds)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &masksToBounds_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (masksToBounds ? 1 : 0));
	ns_calayer_set_masks_to_bounds(&_0, &_1);
}

