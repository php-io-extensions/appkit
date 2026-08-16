
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

#include "ns-layoutconstraint.h"
#include <stdint.h>



/**
 * NSLayoutConstraint — Auto Layout constraint.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSLayoutConstraint, NSLayoutConstraint, appkit, ns_nslayoutconstraint_nslayoutconstraint, appkit_ns_nslayoutconstraint_nslayoutconstraint_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, wrap)
{
	zval *nsLayoutConstraintPtr_param = NULL;
	zend_long nsLayoutConstraintPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsLayoutConstraintPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsLayoutConstraintPtr_param);
	
            handle = (zend_long) ns_layoutconstraint_wrap((void *)(uintptr_t) nsLayoutConstraintPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, destroy)
{
	zval *constraint_param = NULL;
	zend_long constraint;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(constraint)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &constraint_param);
	
            ns_layoutconstraint_destroy((uintptr_t) constraint);
        
}

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, nsLayoutConstraint)
{
	zval *constraint_param = NULL;
	zend_long constraint, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(constraint)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &constraint_param);
	
            ptr = (zend_long)(uintptr_t) ns_layoutconstraint_nslayoutconstraint((uintptr_t) constraint);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, constraintWithItem)
{
	double multiplier, constant;
	zval *view1_param = NULL, *attr1_param = NULL, *relation_param = NULL, *view2_param = NULL, *attr2_param = NULL, *multiplier_param = NULL, *constant_param = NULL;
	zend_long view1, attr1, relation, view2, attr2, handle = 0;

	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(view1)
		Z_PARAM_LONG(attr1)
		Z_PARAM_LONG(relation)
		Z_PARAM_LONG(view2)
		Z_PARAM_LONG(attr2)
		Z_PARAM_ZVAL(multiplier)
		Z_PARAM_ZVAL(constant)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &view1_param, &attr1_param, &relation_param, &view2_param, &attr2_param, &multiplier_param, &constant_param);
	multiplier = zephir_get_doubleval(multiplier_param);
	constant = zephir_get_doubleval(constant_param);
	
            handle = (zend_long) ns_layoutconstraint_constraint_with_item(
                (uintptr_t) view1, (int) attr1, (int) relation, (uintptr_t) view2, (int) attr2, multiplier, constant);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, activateConstraints)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *constraints_param = NULL;
	zval constraints;

	ZVAL_UNDEF(&constraints);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(constraints)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &constraints_param);
	zephir_get_arrval(&constraints, constraints_param);
	
            zval *entry;
            uintptr_t handles[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(constraints), entry) {
                if (count >= 256) {
                    break;
                }
                convert_to_long(entry);
                handles[count++] = (uintptr_t) Z_LVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            ns_layoutconstraint_activate(handles, count);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, deactivateConstraints)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *constraints_param = NULL;
	zval constraints;

	ZVAL_UNDEF(&constraints);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(constraints)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &constraints_param);
	zephir_get_arrval(&constraints, constraints_param);
	
            zval *entry;
            uintptr_t handles[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(constraints), entry) {
                if (count >= 256) {
                    break;
                }
                convert_to_long(entry);
                handles[count++] = (uintptr_t) Z_LVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            ns_layoutconstraint_deactivate(handles, count);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, setActive)
{
	zend_bool active;
	zval *constraint_param = NULL, *active_param = NULL;
	zend_long constraint;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(constraint)
		Z_PARAM_BOOL(active)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &constraint_param, &active_param);
	
            ns_layoutconstraint_set_active((uintptr_t) constraint, active ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, isActive)
{
	zend_bool result = 0;
	zval *constraint_param = NULL;
	zend_long constraint;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(constraint)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &constraint_param);
	
            result = ns_layoutconstraint_is_active((uintptr_t) constraint) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, setPriority)
{
	double priority;
	zval *constraint_param = NULL, *priority_param = NULL;
	zend_long constraint;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(constraint)
		Z_PARAM_ZVAL(priority)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &constraint_param, &priority_param);
	priority = zephir_get_doubleval(priority_param);
	
            ns_layoutconstraint_set_priority((uintptr_t) constraint, (float) priority);
        
}

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, priority)
{
	double value = 0;
	zval *constraint_param = NULL;
	zend_long constraint;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(constraint)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &constraint_param);
	
            value = (double) ns_layoutconstraint_priority((uintptr_t) constraint);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, setConstant)
{
	double constant;
	zval *constraint_param = NULL, *constant_param = NULL;
	zend_long constraint;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(constraint)
		Z_PARAM_ZVAL(constant)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &constraint_param, &constant_param);
	constant = zephir_get_doubleval(constant_param);
	
            ns_layoutconstraint_set_constant((uintptr_t) constraint, constant);
        
}

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, constant)
{
	double value = 0;
	zval *constraint_param = NULL;
	zend_long constraint;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(constraint)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &constraint_param);
	
            value = ns_layoutconstraint_constant((uintptr_t) constraint);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, setIdentifier)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval identifier;
	zval *constraint_param = NULL, *identifier_param = NULL;
	zend_long constraint;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(constraint)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &constraint_param, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	
            ns_layoutconstraint_set_identifier((uintptr_t) constraint, Z_STRVAL(identifier));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, identifier)
{
	zval value;
	zval *constraint_param = NULL;
	zend_long constraint;

	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(constraint)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &constraint_param);
	
            char buf[512];
            if (ns_layoutconstraint_identifier((uintptr_t) constraint, buf, (int) sizeof(buf))) {
                ZVAL_STRING(&value, buf);
            } else {
                ZVAL_EMPTY_STRING(&value);
            }
        
	RETURN_CTORW(&value);
}

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, firstAttribute)
{
	zval *constraint_param = NULL;
	zend_long constraint, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(constraint)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &constraint_param);
	
            value = (zend_long) ns_layoutconstraint_first_attribute((uintptr_t) constraint);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, secondAttribute)
{
	zval *constraint_param = NULL;
	zend_long constraint, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(constraint)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &constraint_param);
	
            value = (zend_long) ns_layoutconstraint_second_attribute((uintptr_t) constraint);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, relation)
{
	zval *constraint_param = NULL;
	zend_long constraint, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(constraint)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &constraint_param);
	
            value = (zend_long) ns_layoutconstraint_relation((uintptr_t) constraint);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, multiplier)
{
	double value = 0;
	zval *constraint_param = NULL;
	zend_long constraint;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(constraint)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &constraint_param);
	
            value = ns_layoutconstraint_multiplier((uintptr_t) constraint);
        
	RETURN_DOUBLE(value);
}

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, firstAnchor)
{
	zval *constraint_param = NULL;
	zend_long constraint, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(constraint)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &constraint_param);
	
            handle = (zend_long) ns_layoutconstraint_first_anchor((uintptr_t) constraint);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSLayoutConstraint_NSLayoutConstraint, secondAnchor)
{
	zval *constraint_param = NULL;
	zend_long constraint, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(constraint)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &constraint_param);
	
            handle = (zend_long) ns_layoutconstraint_second_anchor((uintptr_t) constraint);
        
	RETURN_LONG(handle);
}

