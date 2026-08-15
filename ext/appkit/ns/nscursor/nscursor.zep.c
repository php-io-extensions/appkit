
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

#include "ns-cursor.h"
#include <stdint.h>



/**
 * NSCursor — mouse cursor display and system cursor instances.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSCursor_NSCursor)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSCursor, NSCursor, appkit, ns_nscursor_nscursor, appkit_ns_nscursor_nscursor_method_entry, 0);

	return SUCCESS;
}

/**
 * @return int Opaque cursor handle, or 0
 */
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, wrap)
{
	zval *nsCursorPtr_param = NULL;
	zend_long nsCursorPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsCursorPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsCursorPtr_param);
	
            handle = (zend_long) ns_cursor_wrap((void *)(uintptr_t) nsCursorPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCursor_NSCursor, destroy)
{
	zval *cursor_param = NULL;
	zend_long cursor;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cursor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cursor_param);
	
            ns_cursor_destroy((uintptr_t) cursor);
        
}

PHP_METHOD(AppKit_NS_NSCursor_NSCursor, hide)
{

	
            ns_cursor_hide();
        
}

PHP_METHOD(AppKit_NS_NSCursor_NSCursor, unhide)
{

	
            ns_cursor_unhide();
        
}

PHP_METHOD(AppKit_NS_NSCursor_NSCursor, setHiddenUntilMouseMoves)
{
	zval *flag_param = NULL;
	zend_bool flag;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &flag_param);
	
            ns_cursor_set_hidden_until_mouse_moves(flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSCursor_NSCursor, popStack)
{

	
            ns_cursor_pop_class();
        
}

PHP_METHOD(AppKit_NS_NSCursor_NSCursor, push)
{
	zval *cursor_param = NULL;
	zend_long cursor;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cursor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cursor_param);
	
            ns_cursor_push((uintptr_t) cursor);
        
}

PHP_METHOD(AppKit_NS_NSCursor_NSCursor, set)
{
	zval *cursor_param = NULL;
	zend_long cursor;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cursor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cursor_param);
	
            ns_cursor_set((uintptr_t) cursor);
        
}

PHP_METHOD(AppKit_NS_NSCursor_NSCursor, pop)
{
	zval *cursor_param = NULL;
	zend_long cursor;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cursor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cursor_param);
	
            ns_cursor_pop((uintptr_t) cursor);
        
}

/**
 * Hot spot as [x, y], or empty array.
 */
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, hotSpot)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *cursor_param = NULL;
	zend_long cursor;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cursor)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &cursor_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double x = 0.0, y = 0.0;
            if (ns_cursor_hot_spot((uintptr_t) cursor, &x, &y)) {
                add_next_index_double(&out, x);
                add_next_index_double(&out, y);
            }
        
	RETURN_CTOR(&out);
}

/**
 * @return int Opaque current cursor handle, or 0
 */
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, currentCursor)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_cursor_current();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCursor_NSCursor, arrowCursor)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_cursor_arrow();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCursor_NSCursor, crosshairCursor)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_cursor_crosshair();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCursor_NSCursor, pointingHandCursor)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_cursor_pointing_hand();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCursor_NSCursor, iBeamCursor)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_cursor_i_beam();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCursor_NSCursor, closedHandCursor)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_cursor_closed_hand();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCursor_NSCursor, openHandCursor)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_cursor_open_hand();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCursor_NSCursor, operationNotAllowedCursor)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_cursor_operation_not_allowed();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCursor_NSCursor, dragLinkCursor)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_cursor_drag_link();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCursor_NSCursor, dragCopyCursor)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_cursor_drag_copy();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSCursor_NSCursor, contextualMenuCursor)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_cursor_contextual_menu();
        
	RETURN_LONG(handle);
}

/**
 * @return int Borrowed NSCursor pointer, or 0
 */
PHP_METHOD(AppKit_NS_NSCursor_NSCursor, nsCursor)
{
	zval *cursor_param = NULL;
	zend_long cursor, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cursor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cursor_param);
	
            ptr = (zend_long)(uintptr_t) ns_cursor_nscursor((uintptr_t) cursor);
        
	RETURN_LONG(ptr);
}

