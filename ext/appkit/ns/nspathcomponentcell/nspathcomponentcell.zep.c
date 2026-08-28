
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
#include "src/ns-pathcomponentcell.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSPathComponentCell_NSPathComponentCell)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSPathComponentCell, NSPathComponentCell, appkit, ns_nspathcomponentcell_nspathcomponentcell, appkit_ns_nspathcomponentcell_nspathcomponentcell_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSPathComponentCell_NSPathComponentCell, initTextCell)
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
	RETURN_MM_LONG(ns_nspathcomponentcell_init_text_cell(&string_));
}

PHP_METHOD(AppKit_NS_NSPathComponentCell_NSPathComponentCell, image)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nspathcomponentcell_image(&_0));
}

PHP_METHOD(AppKit_NS_NSPathComponentCell_NSPathComponentCell, setImage)
{
	zval *handle_param = NULL, *image_param = NULL, _0, _1;
	zend_long handle, image;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &image_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, image);
	ns_nspathcomponentcell_set_image(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSPathComponentCell_NSPathComponentCell, Url)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nspathcomponentcell_url(&_0));
}

PHP_METHOD(AppKit_NS_NSPathComponentCell_NSPathComponentCell, setURL)
{
	zval *handle_param = NULL, *Url_param = NULL, _0, _1;
	zend_long handle, Url;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(Url)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &Url_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, Url);
	ns_nspathcomponentcell_set_url(&_0, &_1);
}

