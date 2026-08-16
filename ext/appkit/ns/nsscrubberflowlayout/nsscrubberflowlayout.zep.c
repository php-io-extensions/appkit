
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

#include "ns-scrubberflowlayout.h"
#include <stdint.h>



/**
 * NSScrubberFlowLayout — linear end-to-end scrubber item layout.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSScrubberFlowLayout_NSScrubberFlowLayout)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSScrubberFlowLayout, NSScrubberFlowLayout, appkit, ns_nsscrubberflowlayout_nsscrubberflowlayout, appkit_ns_nsscrubberflowlayout_nsscrubberflowlayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSScrubberFlowLayout_NSScrubberFlowLayout, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_scrubberflowlayout_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSScrubberFlowLayout_NSScrubberFlowLayout, wrap)
{
	zval *nsScrubberFlowLayoutPtr_param = NULL;
	zend_long nsScrubberFlowLayoutPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsScrubberFlowLayoutPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsScrubberFlowLayoutPtr_param);
	
            handle = (zend_long) ns_scrubberflowlayout_wrap((void *)(uintptr_t) nsScrubberFlowLayoutPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSScrubberFlowLayout_NSScrubberFlowLayout, destroy)
{
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ns_scrubberflowlayout_destroy((uintptr_t) layout);
        
}

PHP_METHOD(AppKit_NS_NSScrubberFlowLayout_NSScrubberFlowLayout, nsScrubberFlowLayout)
{
	zval *layout_param = NULL;
	zend_long layout, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            ptr = (zend_long)(uintptr_t) ns_scrubberflowlayout_nsscrubberflowlayout((uintptr_t) layout);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSScrubberFlowLayout_NSScrubberFlowLayout, setItemSpacing)
{
	double spacing;
	zval *layout_param = NULL, *spacing_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(layout)
		Z_PARAM_ZVAL(spacing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &layout_param, &spacing_param);
	spacing = zephir_get_doubleval(spacing_param);
	
            ns_scrubberflowlayout_set_item_spacing((uintptr_t) layout, spacing);
        
}

PHP_METHOD(AppKit_NS_NSScrubberFlowLayout_NSScrubberFlowLayout, getItemSpacing)
{
	double value = 0;
	zval *layout_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &layout_param);
	
            value = ns_scrubberflowlayout_get_item_spacing((uintptr_t) layout);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSScrubberFlowLayout_NSScrubberFlowLayout, setItemSize)
{
	double width, height;
	zval *layout_param = NULL, *width_param = NULL, *height_param = NULL;
	zend_long layout;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(layout)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &layout_param, &width_param, &height_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	
            ns_scrubberflowlayout_set_item_size((uintptr_t) layout, width, height);
        
}

/**
 * @return array [width, height] or empty array
 */
PHP_METHOD(AppKit_NS_NSScrubberFlowLayout_NSScrubberFlowLayout, getItemSize)
{
	zval out;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *layout_param = NULL;
	zend_long layout;

	ZVAL_UNDEF(&out);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &layout_param);
	ZEPHIR_INIT_VAR(&out);
	array_init(&out);
	
            double w = 0.0, h = 0.0;
            if (ns_scrubberflowlayout_get_item_size((uintptr_t) layout, &w, &h)) {
                add_next_index_double(&out, w);
                add_next_index_double(&out, h);
            }
        
	RETURN_CTOR(&out);
}

PHP_METHOD(AppKit_NS_NSScrubberFlowLayout_NSScrubberFlowLayout, invalidateItemsAtIndexes)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval indexes;
	zval *layout_param = NULL, *indexes_param = NULL;
	zend_long layout;

	ZVAL_UNDEF(&indexes);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(layout)
		Z_PARAM_ARRAY(indexes)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &layout_param, &indexes_param);
	zephir_get_arrval(&indexes, indexes_param);
	
            int count = (int) zend_hash_num_elements(Z_ARRVAL(indexes));
            if (count <= 0) {
                return;
            }
            int *buf = (int *) ecalloc((size_t) count, sizeof(int));
            int n = 0;
            zval *item;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(indexes), item) {
                if (Z_TYPE_P(item) == IS_LONG) {
                    buf[n++] = (int) Z_LVAL_P(item);
                } else if (Z_TYPE_P(item) == IS_DOUBLE) {
                    buf[n++] = (int) Z_DVAL_P(item);
                }
            } ZEND_HASH_FOREACH_END();
            if (n > 0) {
                ns_scrubberflowlayout_invalidate_items_at_indexes((uintptr_t) layout, buf, n);
            }
            efree(buf);
        
	ZEPHIR_MM_RESTORE();
}

