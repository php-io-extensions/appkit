
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
 * NSLayoutAnchor — base layout anchor for constraint creation.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSLayoutAnchor, NSLayoutAnchor, appkit, ns_nslayoutanchor_nslayoutanchor, appkit_ns_nslayoutanchor_nslayoutanchor_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, wrap)
{
	zval *nsLayoutAnchorPtr_param = NULL;
	zend_long nsLayoutAnchorPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsLayoutAnchorPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsLayoutAnchorPtr_param);
	
            handle = (zend_long) ns_layoutanchor_wrap((void *)(uintptr_t) nsLayoutAnchorPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, destroy)
{
	zval *anchor_param = NULL;
	zend_long anchor;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(anchor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &anchor_param);
	
            ns_layoutanchor_destroy((uintptr_t) anchor);
        
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, nsLayoutAnchor)
{
	zval *anchor_param = NULL;
	zend_long anchor, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(anchor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &anchor_param);
	
            ptr = (zend_long)(uintptr_t) ns_layoutanchor_nslayoutanchor((uintptr_t) anchor);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, constraintEqualToAnchor)
{
	zend_bool hasConstant;
	double constant;
	zval *anchor_param = NULL, *other_param = NULL, *constant_param = NULL, *hasConstant_param = NULL;
	zend_long anchor, other, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(anchor)
		Z_PARAM_LONG(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(constant)
		Z_PARAM_BOOL(hasConstant)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &anchor_param, &other_param, &constant_param, &hasConstant_param);
	if (!constant_param) {
		constant = 0.0;
	} else {
		constant = zephir_get_doubleval(constant_param);
	}
	if (!hasConstant_param) {
		hasConstant = 0;
	} else {
		}
	
            handle = (zend_long) ns_layoutanchor_constraint_equal_to_anchor(
                (uintptr_t) anchor, (uintptr_t) other, hasConstant ? 1 : 0, constant);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, constraintGreaterThanOrEqualToAnchor)
{
	zend_bool hasConstant;
	double constant;
	zval *anchor_param = NULL, *other_param = NULL, *constant_param = NULL, *hasConstant_param = NULL;
	zend_long anchor, other, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(anchor)
		Z_PARAM_LONG(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(constant)
		Z_PARAM_BOOL(hasConstant)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &anchor_param, &other_param, &constant_param, &hasConstant_param);
	if (!constant_param) {
		constant = 0.0;
	} else {
		constant = zephir_get_doubleval(constant_param);
	}
	if (!hasConstant_param) {
		hasConstant = 0;
	} else {
		}
	
            handle = (zend_long) ns_layoutanchor_constraint_greater_than_or_equal_to_anchor(
                (uintptr_t) anchor, (uintptr_t) other, hasConstant ? 1 : 0, constant);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, constraintLessThanOrEqualToAnchor)
{
	zend_bool hasConstant;
	double constant;
	zval *anchor_param = NULL, *other_param = NULL, *constant_param = NULL, *hasConstant_param = NULL;
	zend_long anchor, other, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(anchor)
		Z_PARAM_LONG(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(constant)
		Z_PARAM_BOOL(hasConstant)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &anchor_param, &other_param, &constant_param, &hasConstant_param);
	if (!constant_param) {
		constant = 0.0;
	} else {
		constant = zephir_get_doubleval(constant_param);
	}
	if (!hasConstant_param) {
		hasConstant = 0;
	} else {
		}
	
            handle = (zend_long) ns_layoutanchor_constraint_less_than_or_equal_to_anchor(
                (uintptr_t) anchor, (uintptr_t) other, hasConstant ? 1 : 0, constant);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, name)
{
	zval value;
	zval *anchor_param = NULL;
	zend_long anchor;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(anchor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &anchor_param);
	
            char buf[512];
            if (ns_layoutanchor_name((uintptr_t) anchor, buf, (int) sizeof(buf))) {
                ZVAL_STRING(&value, buf);
            } else {
                ZVAL_EMPTY_STRING(&value);
            }
        
	RETURN_CTORW(&value);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, item)
{
	zval *anchor_param = NULL;
	zend_long anchor, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(anchor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &anchor_param);
	
            ptr = (zend_long)(uintptr_t) ns_layoutanchor_item((uintptr_t) anchor);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, hasAmbiguousLayout)
{
	zend_bool result = 0;
	zval *anchor_param = NULL;
	zend_long anchor;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(anchor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &anchor_param);
	
            result = ns_layoutanchor_has_ambiguous_layout((uintptr_t) anchor) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, constraintsAffectingLayoutCount)
{
	zval *anchor_param = NULL;
	zend_long anchor, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(anchor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &anchor_param);
	
            value = (zend_long) ns_layoutanchor_constraints_affecting_layout_count((uintptr_t) anchor);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, constraintAffectingLayoutAt)
{
	zval *anchor_param = NULL, *index_param = NULL;
	zend_long anchor, index, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(anchor)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &anchor_param, &index_param);
	
            handle = (zend_long) ns_layoutanchor_constraint_affecting_layout_at((uintptr_t) anchor, (int) index);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewLeadingAnchor)
{
	zval *view_param = NULL;
	zend_long view, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            handle = (zend_long) ns_view_leading_anchor((uintptr_t) view);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewTrailingAnchor)
{
	zval *view_param = NULL;
	zend_long view, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            handle = (zend_long) ns_view_trailing_anchor((uintptr_t) view);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewLeftAnchor)
{
	zval *view_param = NULL;
	zend_long view, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            handle = (zend_long) ns_view_left_anchor((uintptr_t) view);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewRightAnchor)
{
	zval *view_param = NULL;
	zend_long view, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            handle = (zend_long) ns_view_right_anchor((uintptr_t) view);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewTopAnchor)
{
	zval *view_param = NULL;
	zend_long view, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            handle = (zend_long) ns_view_top_anchor((uintptr_t) view);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewBottomAnchor)
{
	zval *view_param = NULL;
	zend_long view, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            handle = (zend_long) ns_view_bottom_anchor((uintptr_t) view);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewWidthAnchor)
{
	zval *view_param = NULL;
	zend_long view, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            handle = (zend_long) ns_view_width_anchor((uintptr_t) view);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewHeightAnchor)
{
	zval *view_param = NULL;
	zend_long view, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            handle = (zend_long) ns_view_height_anchor((uintptr_t) view);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewCenterXAnchor)
{
	zval *view_param = NULL;
	zend_long view, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            handle = (zend_long) ns_view_center_x_anchor((uintptr_t) view);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewCenterYAnchor)
{
	zval *view_param = NULL;
	zend_long view, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            handle = (zend_long) ns_view_center_y_anchor((uintptr_t) view);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewFirstBaselineAnchor)
{
	zval *view_param = NULL;
	zend_long view, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            handle = (zend_long) ns_view_first_baseline_anchor((uintptr_t) view);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutAnchor_NSLayoutAnchor, viewLastBaselineAnchor)
{
	zval *view_param = NULL;
	zend_long view, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(view)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &view_param);
	
            handle = (zend_long) ns_view_last_baseline_anchor((uintptr_t) view);
        
	RETURN_LONG(handle);
}

