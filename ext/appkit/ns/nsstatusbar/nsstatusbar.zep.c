
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
#include "src/ns-statusbar.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSStatusBar_NSStatusBar)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSStatusBar, NSStatusBar, appkit, ns_nsstatusbar_nsstatusbar, appkit_ns_nsstatusbar_nsstatusbar_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSStatusBar_NSStatusBar, systemStatusBar)
{

	RETURN_LONG(ns_nsstatusbar_system_status_bar());
}

PHP_METHOD(AppKit_NS_NSStatusBar_NSStatusBar, statusItemWithLength)
{
	double length;
	zval *handle_param = NULL, *length_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &length_param);
	length = zephir_get_doubleval(length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, length);
	RETURN_LONG(ns_nsstatusbar_status_item_with_length(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSStatusBar_NSStatusBar, removeStatusItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	ns_nsstatusbar_remove_status_item(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSStatusBar_NSStatusBar, isVertical)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsstatusbar_is_vertical(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSStatusBar_NSStatusBar, thickness)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(ns_nsstatusbar_thickness(&_0));
}

