
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
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"

#include "ns-layoutguide.h"
#include <stdint.h>



/**
 * NSLayoutGuide — layout rectangle not backed by a view.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSLayoutGuide_NSLayoutGuide)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSLayoutGuide, NSLayoutGuide, appkit, ns_nslayoutguide_nslayoutguide, appkit_ns_nslayoutguide_nslayoutguide_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_layoutguide_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, wrap)
{
	zval *nsLayoutGuidePtr_param = NULL;
	zend_long nsLayoutGuidePtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsLayoutGuidePtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsLayoutGuidePtr_param);
	
            handle = (zend_long) ns_layoutguide_wrap((void *)(uintptr_t) nsLayoutGuidePtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, destroy)
{
	zval *guide_param = NULL;
	zend_long guide;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(guide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &guide_param);
	
            ns_layoutguide_destroy((uintptr_t) guide);
        
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, nsLayoutGuide)
{
	zval *guide_param = NULL;
	zend_long guide, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(guide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &guide_param);
	
            ptr = (zend_long)(uintptr_t) ns_layoutguide_nslayoutguide((uintptr_t) guide);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, getFrame)
{
	zval frame;
	zval *guide_param = NULL;
	zend_long guide;

	ZVAL_UNDEF(&frame);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(guide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &guide_param);
	
            double x = 0.0, y = 0.0, w = 0.0, h = 0.0;
            ns_layoutguide_frame((uintptr_t) guide, &x, &y, &w, &h);
            array_init(&frame);
            add_index_double(&frame, 0, x);
            add_index_double(&frame, 1, y);
            add_index_double(&frame, 2, w);
            add_index_double(&frame, 3, h);
        
	RETURN_CTORW(&frame);
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, setIdentifier)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval identifier;
	zval *guide_param = NULL, *identifier_param = NULL;
	zend_long guide;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(guide)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &guide_param, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	
            ns_layoutguide_set_identifier((uintptr_t) guide, Z_STRVAL(identifier));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, identifier)
{
	zval value;
	zval *guide_param = NULL;
	zend_long guide;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(guide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &guide_param);
	
            char buf[512];
            if (ns_layoutguide_identifier((uintptr_t) guide, buf, (int) sizeof(buf))) {
                ZVAL_STRING(&value, buf);
            } else {
                ZVAL_EMPTY_STRING(&value);
            }
        
	RETURN_CTORW(&value);
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, owningView)
{
	zval *guide_param = NULL;
	zend_long guide, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(guide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &guide_param);
	
            handle = (zend_long) ns_layoutguide_owning_view((uintptr_t) guide);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, addToView)
{
	zval *guide_param = NULL, *view_param = NULL;
	zend_long guide, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(guide)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &guide_param, &view_param);
	
            ns_layoutguide_add_to_view((uintptr_t) guide, (uintptr_t) view);
        
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, removeFromView)
{
	zval *guide_param = NULL, *view_param = NULL;
	zend_long guide, view;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(guide)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &guide_param, &view_param);
	
            ns_layoutguide_remove_from_view((uintptr_t) guide, (uintptr_t) view);
        
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, leadingAnchor)
{
	zval *guide_param = NULL;
	zend_long guide, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(guide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &guide_param);
	
            handle = (zend_long) ns_layoutguide_leading_anchor((uintptr_t) guide);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, trailingAnchor)
{
	zval *guide_param = NULL;
	zend_long guide, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(guide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &guide_param);
	
            handle = (zend_long) ns_layoutguide_trailing_anchor((uintptr_t) guide);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, leftAnchor)
{
	zval *guide_param = NULL;
	zend_long guide, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(guide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &guide_param);
	
            handle = (zend_long) ns_layoutguide_left_anchor((uintptr_t) guide);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, rightAnchor)
{
	zval *guide_param = NULL;
	zend_long guide, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(guide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &guide_param);
	
            handle = (zend_long) ns_layoutguide_right_anchor((uintptr_t) guide);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, topAnchor)
{
	zval *guide_param = NULL;
	zend_long guide, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(guide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &guide_param);
	
            handle = (zend_long) ns_layoutguide_top_anchor((uintptr_t) guide);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, bottomAnchor)
{
	zval *guide_param = NULL;
	zend_long guide, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(guide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &guide_param);
	
            handle = (zend_long) ns_layoutguide_bottom_anchor((uintptr_t) guide);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, widthAnchor)
{
	zval *guide_param = NULL;
	zend_long guide, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(guide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &guide_param);
	
            handle = (zend_long) ns_layoutguide_width_anchor((uintptr_t) guide);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, heightAnchor)
{
	zval *guide_param = NULL;
	zend_long guide, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(guide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &guide_param);
	
            handle = (zend_long) ns_layoutguide_height_anchor((uintptr_t) guide);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, centerXAnchor)
{
	zval *guide_param = NULL;
	zend_long guide, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(guide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &guide_param);
	
            handle = (zend_long) ns_layoutguide_center_x_anchor((uintptr_t) guide);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, centerYAnchor)
{
	zval *guide_param = NULL;
	zend_long guide, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(guide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &guide_param);
	
            handle = (zend_long) ns_layoutguide_center_y_anchor((uintptr_t) guide);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutGuide_NSLayoutGuide, hasAmbiguousLayout)
{
	zend_bool result = 0;
	zval *guide_param = NULL;
	zend_long guide;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(guide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &guide_param);
	
            result = ns_layoutguide_has_ambiguous_layout((uintptr_t) guide) == 1;
        
	RETURN_BOOL(result);
}

