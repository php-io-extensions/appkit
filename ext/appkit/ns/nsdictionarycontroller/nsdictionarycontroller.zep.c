
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

#include "ns-dictionarycontroller.h"
#include <stdint.h>



/**
 * NSDictionaryController — Cocoa bindings controller for dictionary content.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSDictionaryController_NSDictionaryController)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSDictionaryController, NSDictionaryController, appkit, ns_nsdictionarycontroller_nsdictionarycontroller, appkit_ns_nsdictionarycontroller_nsdictionarycontroller_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_dictionarycontroller_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, wrap)
{
	zval *nsDictionaryControllerPtr_param = NULL;
	zend_long nsDictionaryControllerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsDictionaryControllerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsDictionaryControllerPtr_param);
	
            handle = (zend_long) ns_dictionarycontroller_wrap((void *)(uintptr_t) nsDictionaryControllerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, destroy)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_dictionarycontroller_destroy((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, nsDictionaryController)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_dictionarycontroller_nsdictionarycontroller((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, discardEditing)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_dictionarycontroller_discard_editing((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, commitEditing)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_dictionarycontroller_commit_editing((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, isEditing)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_dictionarycontroller_is_editing((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, rearrangeObjects)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_dictionarycontroller_rearrange_objects((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, setAutomaticallyRearrangesObjects)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_dictionarycontroller_set_automatically_rearranges_objects((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, automaticallyRearrangesObjects)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_dictionarycontroller_automatically_rearranges_objects((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, automaticRearrangementKeyPathsCount)
{
	zval *controller_param = NULL;
	zend_long controller, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            count = ns_dictionarycontroller_automatic_rearrangement_key_paths_count((uintptr_t) controller);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, automaticRearrangementKeyPathAt)
{
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_dictionarycontroller_automatic_rearrangement_key_path_at((uintptr_t) controller, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, didChangeArrangementCriteria)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_dictionarycontroller_did_change_arrangement_criteria((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, setClearsFilterPredicateOnInsertion)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_dictionarycontroller_set_clears_filter_predicate_on_insertion((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, clearsFilterPredicateOnInsertion)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_dictionarycontroller_clears_filter_predicate_on_insertion((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, arrangedObjectsCount)
{
	zval *controller_param = NULL;
	zend_long controller, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            count = ns_dictionarycontroller_arranged_objects_count((uintptr_t) controller);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, arrangedObjectAt)
{
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            ptr = (zend_long)(uintptr_t) ns_dictionarycontroller_arranged_object_at((uintptr_t) controller, (int) index);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, setAvoidsEmptySelection)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_dictionarycontroller_set_avoids_empty_selection((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, avoidsEmptySelection)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_dictionarycontroller_avoids_empty_selection((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, setPreservesSelection)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_dictionarycontroller_set_preserves_selection((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, preservesSelection)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_dictionarycontroller_preserves_selection((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, setSelectsInsertedObjects)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_dictionarycontroller_set_selects_inserted_objects((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, selectsInsertedObjects)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_dictionarycontroller_selects_inserted_objects((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, setAlwaysUsesMultipleValuesMarker)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_dictionarycontroller_set_always_uses_multiple_values_marker((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, alwaysUsesMultipleValuesMarker)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_dictionarycontroller_always_uses_multiple_values_marker((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, setSelectionIndex)
{
	zend_bool result = 0;
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            result = ns_dictionarycontroller_set_selection_index((uintptr_t) controller, (int) index) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, selectionIndex)
{
	zval *controller_param = NULL;
	zend_long controller, index = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            index = ns_dictionarycontroller_selection_index((uintptr_t) controller);
        
	RETURN_LONG(index);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, setSelectionIndexes)
{
	zend_bool result = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval indexes;
	zval *controller_param = NULL, *indexes_param = NULL;
	zend_long controller;

	ZVAL_UNDEF(&indexes);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_ARRAY(indexes)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &controller_param, &indexes_param);
	zephir_get_arrval(&indexes, indexes_param);
	
            int count = (int) zend_hash_num_elements(Z_ARRVAL(indexes));
            if (count <= 0) {
                result = ns_dictionarycontroller_set_selection_indexes((uintptr_t) controller, NULL, 0) == 1;
            } else {
                int *buf = (int *) ecalloc((size_t) count, sizeof(int));
                int n = 0;
                zval *item;
                ZEND_HASH_FOREACH_VAL(Z_ARRVAL(indexes), item) {
                    if (Z_TYPE_P(item) == IS_LONG) {
                        buf[n++] = (int) Z_LVAL_P(item);
                    } else if (Z_TYPE_P(item) == IS_DOUBLE) {
                        buf[n++] = (int) Z_DVAL_P(item);
                    } else {
                        convert_to_long(item);
                        buf[n++] = (int) Z_LVAL_P(item);
                    }
                } ZEND_HASH_FOREACH_END();
                result = ns_dictionarycontroller_set_selection_indexes((uintptr_t) controller, buf, n) == 1;
                efree(buf);
            }
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, selectionIndexesCount)
{
	zval *controller_param = NULL;
	zend_long controller, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            count = ns_dictionarycontroller_selection_indexes_count((uintptr_t) controller);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, selectionIndexAtOrdinal)
{
	zval *controller_param = NULL, *ordinal_param = NULL;
	zend_long controller, ordinal, index = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(ordinal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &ordinal_param);
	
            index = ns_dictionarycontroller_selection_index_at_ordinal((uintptr_t) controller, (int) ordinal);
        
	RETURN_LONG(index);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, canInsert)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_dictionarycontroller_can_insert((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, canSelectNext)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_dictionarycontroller_can_select_next((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, canSelectPrevious)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_dictionarycontroller_can_select_previous((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, insertObjectAtArrangedObjectIndex)
{
	zval *controller_param = NULL, *objectPtr_param = NULL, *index_param = NULL;
	zend_long controller, objectPtr, index;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(objectPtr)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &controller_param, &objectPtr_param, &index_param);
	
            ns_dictionarycontroller_insert_object_at_arranged_object_index((uintptr_t) controller, (void *)(uintptr_t) objectPtr, (int) index);
        
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, removeObjectAtArrangedObjectIndex)
{
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            ns_dictionarycontroller_remove_object_at_arranged_object_index((uintptr_t) controller, (int) index);
        
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, addObject)
{
	zval *controller_param = NULL, *objectPtr_param = NULL;
	zend_long controller, objectPtr;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(objectPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &objectPtr_param);
	
            ns_dictionarycontroller_add_object((uintptr_t) controller, (void *)(uintptr_t) objectPtr);
        
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, removeObject)
{
	zval *controller_param = NULL, *objectPtr_param = NULL;
	zend_long controller, objectPtr;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(objectPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &objectPtr_param);
	
            ns_dictionarycontroller_remove_object((uintptr_t) controller, (void *)(uintptr_t) objectPtr);
        
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, setContent)
{
	zval *controller_param = NULL, *contentPtr_param = NULL;
	zend_long controller, contentPtr;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(contentPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &contentPtr_param);
	
            ns_dictionarycontroller_set_content((uintptr_t) controller, (void *)(uintptr_t) contentPtr);
        
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, content)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_dictionarycontroller_content((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, setEditable)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_dictionarycontroller_set_editable((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, isEditable)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_dictionarycontroller_is_editable((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, canAdd)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_dictionarycontroller_can_add((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, canRemove)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_dictionarycontroller_can_remove((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, prepareContent)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_dictionarycontroller_prepare_content((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, newObject)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_dictionarycontroller_new_object((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, selectedObjectsCount)
{
	zval *controller_param = NULL;
	zend_long controller, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            count = ns_dictionarycontroller_selected_objects_count((uintptr_t) controller);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, selectedObjectAt)
{
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            ptr = (zend_long)(uintptr_t) ns_dictionarycontroller_selected_object_at((uintptr_t) controller, (int) index);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, setInitialKey)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *controller_param = NULL, *key_param = NULL;
	zend_long controller;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &controller_param, &key_param);
	zephir_get_strval(&key, key_param);
	
            ns_dictionarycontroller_set_initial_key((uintptr_t) controller, Z_STRVAL(key));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, initialKey)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_dictionarycontroller_initial_key((uintptr_t) controller, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, setInitialValue)
{
	zval *controller_param = NULL, *valuePtr_param = NULL;
	zend_long controller, valuePtr;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(valuePtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &valuePtr_param);
	
            ns_dictionarycontroller_set_initial_value((uintptr_t) controller, (void *)(uintptr_t) valuePtr);
        
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, initialValue)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_dictionarycontroller_initial_value((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, setIncludedKeys)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval keys;
	zval *controller_param = NULL, *keys_param = NULL;
	zend_long controller;

	ZVAL_UNDEF(&keys);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_ARRAY(keys)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &controller_param, &keys_param);
	zephir_get_arrval(&keys, keys_param);
	
            zval *item;
            const char *cnames[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(keys), item) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(item);
                cnames[count++] = Z_STRVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            ns_dictionarycontroller_set_included_keys((uintptr_t) controller, cnames, count);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, includedKeysCount)
{
	zval *controller_param = NULL;
	zend_long controller, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            count = ns_dictionarycontroller_included_keys_count((uintptr_t) controller);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, includedKeyAt)
{
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_dictionarycontroller_included_key_at((uintptr_t) controller, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, setExcludedKeys)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval keys;
	zval *controller_param = NULL, *keys_param = NULL;
	zend_long controller;

	ZVAL_UNDEF(&keys);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_ARRAY(keys)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &controller_param, &keys_param);
	zephir_get_arrval(&keys, keys_param);
	
            zval *item;
            const char *cnames[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(keys), item) {
                if (count >= 256) {
                    break;
                }
                convert_to_string(item);
                cnames[count++] = Z_STRVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            ns_dictionarycontroller_set_excluded_keys((uintptr_t) controller, cnames, count);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, excludedKeysCount)
{
	zval *controller_param = NULL;
	zend_long controller, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            count = ns_dictionarycontroller_excluded_keys_count((uintptr_t) controller);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, excludedKeyAt)
{
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_dictionarycontroller_excluded_key_at((uintptr_t) controller, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, setLocalizedKeyDictionary)
{
	zval *controller_param = NULL, *dictionaryHandle_param = NULL;
	zend_long controller, dictionaryHandle;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(dictionaryHandle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &dictionaryHandle_param);
	
            ns_dictionarycontroller_set_localized_key_dictionary((uintptr_t) controller, (uintptr_t) dictionaryHandle);
        
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, localizedKeyDictionary)
{
	zval *controller_param = NULL;
	zend_long controller, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            handle = (zend_long) ns_dictionarycontroller_localized_key_dictionary((uintptr_t) controller);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, setLocalizedKeyTable)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval table;
	zval *controller_param = NULL, *table_param = NULL;
	zend_long controller;

	ZVAL_UNDEF(&table);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_STR(table)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &controller_param, &table_param);
	zephir_get_strval(&table, table_param);
	
            ns_dictionarycontroller_set_localized_key_table((uintptr_t) controller, Z_STRVAL(table));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSDictionaryController_NSDictionaryController, localizedKeyTable)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_dictionarycontroller_localized_key_table((uintptr_t) controller, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

