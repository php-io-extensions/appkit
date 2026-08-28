
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
#include "src/ns-textstorage.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSTextStorage_NSTextStorage)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTextStorage, NSTextStorage, appkit, ns_nstextstorage_nstextstorage, appkit_ns_nstextstorage_nstextstorage_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, init)
{

	RETURN_LONG(ns_nstextstorage_init());
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, initWithString)
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
	RETURN_MM_LONG(ns_nstextstorage_init_with_string(&string_));
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, layoutManagers)
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
	ns_nstextstorage_layout_managers(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, addLayoutManager)
{
	zval *handle_param = NULL, *aLayoutManager_param = NULL, _0, _1;
	zend_long handle, aLayoutManager;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(aLayoutManager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &aLayoutManager_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, aLayoutManager);
	ns_nstextstorage_add_layout_manager(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, removeLayoutManager)
{
	zval *handle_param = NULL, *aLayoutManager_param = NULL, _0, _1;
	zend_long handle, aLayoutManager;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(aLayoutManager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &aLayoutManager_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, aLayoutManager);
	ns_nstextstorage_remove_layout_manager(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, editedMask)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextstorage_edited_mask(&_0));
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, editedRange)
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
	ns_nstextstorage_edited_range(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, changeInLength)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextstorage_change_in_length(&_0));
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, delegate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextstorage_delegate(&_0));
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, setDelegate)
{
	zval *handle_param = NULL, *delegate_param = NULL, _0, _1;
	zend_long handle, delegate;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(delegate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &delegate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, delegate);
	ns_nstextstorage_set_delegate(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, editedRangeChangeInLength)
{
	zval *handle_param = NULL, *editedMask_param = NULL, *location_param = NULL, *length_param = NULL, *delta_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, editedMask, location, length, delta;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(editedMask)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
		Z_PARAM_LONG(delta)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &editedMask_param, &location_param, &length_param, &delta_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, editedMask);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, length);
	ZVAL_LONG(&_4, delta);
	ns_nstextstorage_edited_range_change_in_length(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, processEditing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstextstorage_process_editing(&_0);
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, fixesAttributesLazily)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstextstorage_fixes_attributes_lazily(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, invalidateAttributesInRange)
{
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2;
	zend_long handle, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ns_nstextstorage_invalidate_attributes_in_range(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, ensureAttributesAreFixedInRange)
{
	zval *handle_param = NULL, *location_param = NULL, *length_param = NULL, _0, _1, _2;
	zend_long handle, location, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, length);
	ns_nstextstorage_ensure_attributes_are_fixed_in_range(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, textStorageObserver)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstextstorage_text_storage_observer(&_0));
}

PHP_METHOD(AppKit_NS_NSTextStorage_NSTextStorage, setTextStorageObserver)
{
	zval *handle_param = NULL, *textStorageObserver_param = NULL, _0, _1;
	zend_long handle, textStorageObserver;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(textStorageObserver)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &textStorageObserver_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, textStorageObserver);
	ns_nstextstorage_set_text_storage_observer(&_0, &_1);
}

