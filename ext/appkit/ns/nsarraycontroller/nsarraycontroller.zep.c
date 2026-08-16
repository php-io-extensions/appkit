
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

#include "ns-arraycontroller.h"
#include <stdint.h>



/**
 * NSArrayController — array Cocoa bindings controller with arranged objects and selection.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSArrayController_NSArrayController)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSArrayController, NSArrayController, appkit, ns_nsarraycontroller_nsarraycontroller, appkit_ns_nsarraycontroller_nsarraycontroller_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_arraycontroller_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, wrap)
{
	zval *nsArrayControllerPtr_param = NULL;
	zend_long nsArrayControllerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsArrayControllerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsArrayControllerPtr_param);
	
            handle = (zend_long) ns_arraycontroller_wrap((void *)(uintptr_t) nsArrayControllerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, destroy)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_arraycontroller_destroy((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, nsArrayController)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_arraycontroller_nsarraycontroller((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, discardEditing)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_arraycontroller_discard_editing((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, commitEditing)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_arraycontroller_commit_editing((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, isEditing)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_arraycontroller_is_editing((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, setContent)
{
	zval *controller_param = NULL, *contentPtr_param = NULL;
	zend_long controller, contentPtr;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(contentPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &contentPtr_param);
	
            ns_arraycontroller_set_content((uintptr_t) controller, (void *)(uintptr_t) contentPtr);
        
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, content)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_arraycontroller_content((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, setEditable)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_arraycontroller_set_editable((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, isEditable)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_arraycontroller_is_editable((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, canAdd)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_arraycontroller_can_add((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, canRemove)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_arraycontroller_can_remove((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, prepareContent)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_arraycontroller_prepare_content((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, newObject)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_arraycontroller_new_object((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, selectedObjectsCount)
{
	zval *controller_param = NULL;
	zend_long controller, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            count = ns_arraycontroller_selected_objects_count((uintptr_t) controller);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, selectedObjectAt)
{
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            ptr = (zend_long)(uintptr_t) ns_arraycontroller_selected_object_at((uintptr_t) controller, (int) index);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, rearrangeObjects)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_arraycontroller_rearrange_objects((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, setAutomaticallyRearrangesObjects)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_arraycontroller_set_automatically_rearranges_objects((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, automaticallyRearrangesObjects)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_arraycontroller_automatically_rearranges_objects((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, automaticRearrangementKeyPathsCount)
{
	zval *controller_param = NULL;
	zend_long controller, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            count = ns_arraycontroller_automatic_rearrangement_key_paths_count((uintptr_t) controller);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, automaticRearrangementKeyPathAt)
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
            if (ns_arraycontroller_automatic_rearrangement_key_path_at((uintptr_t) controller, (int) index, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, didChangeArrangementCriteria)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_arraycontroller_did_change_arrangement_criteria((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, setClearsFilterPredicateOnInsertion)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_arraycontroller_set_clears_filter_predicate_on_insertion((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, clearsFilterPredicateOnInsertion)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_arraycontroller_clears_filter_predicate_on_insertion((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, arrangedObjectsCount)
{
	zval *controller_param = NULL;
	zend_long controller, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            count = ns_arraycontroller_arranged_objects_count((uintptr_t) controller);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, arrangedObjectAt)
{
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            ptr = (zend_long)(uintptr_t) ns_arraycontroller_arranged_object_at((uintptr_t) controller, (int) index);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, setAvoidsEmptySelection)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_arraycontroller_set_avoids_empty_selection((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, avoidsEmptySelection)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_arraycontroller_avoids_empty_selection((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, setPreservesSelection)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_arraycontroller_set_preserves_selection((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, preservesSelection)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_arraycontroller_preserves_selection((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, setSelectsInsertedObjects)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_arraycontroller_set_selects_inserted_objects((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, selectsInsertedObjects)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_arraycontroller_selects_inserted_objects((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, setAlwaysUsesMultipleValuesMarker)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_arraycontroller_set_always_uses_multiple_values_marker((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, alwaysUsesMultipleValuesMarker)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_arraycontroller_always_uses_multiple_values_marker((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, setSelectionIndex)
{
	zend_bool result = 0;
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            result = ns_arraycontroller_set_selection_index((uintptr_t) controller, (int) index) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, selectionIndex)
{
	zval *controller_param = NULL;
	zend_long controller, index = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            index = ns_arraycontroller_selection_index((uintptr_t) controller);
        
	RETURN_LONG(index);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, setSelectionIndexes)
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
	
            zval *item;
            int cindexes[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(indexes), item) {
                if (count >= 256) {
                    break;
                }
                convert_to_long(item);
                cindexes[count++] = (int) Z_LVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            result = ns_arraycontroller_set_selection_indexes((uintptr_t) controller, cindexes, count) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, selectionIndexesCount)
{
	zval *controller_param = NULL;
	zend_long controller, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            count = ns_arraycontroller_selection_indexes_count((uintptr_t) controller);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, selectionIndexAtOrdinal)
{
	zval *controller_param = NULL, *ordinal_param = NULL;
	zend_long controller, ordinal, index = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(ordinal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &ordinal_param);
	
            index = ns_arraycontroller_selection_index_at_ordinal((uintptr_t) controller, (int) ordinal);
        
	RETURN_LONG(index);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, canInsert)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_arraycontroller_can_insert((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, canSelectNext)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_arraycontroller_can_select_next((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, canSelectPrevious)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_arraycontroller_can_select_previous((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, insertObjectAtArrangedObjectIndex)
{
	zval *controller_param = NULL, *objectPtr_param = NULL, *index_param = NULL;
	zend_long controller, objectPtr, index;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(objectPtr)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &controller_param, &objectPtr_param, &index_param);
	
            ns_arraycontroller_insert_object_at_arranged_object_index((uintptr_t) controller, (void *)(uintptr_t) objectPtr, (int) index);
        
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, removeObjectAtArrangedObjectIndex)
{
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            ns_arraycontroller_remove_object_at_arranged_object_index((uintptr_t) controller, (int) index);
        
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, addObject)
{
	zval *controller_param = NULL, *objectPtr_param = NULL;
	zend_long controller, objectPtr;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(objectPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &objectPtr_param);
	
            ns_arraycontroller_add_object((uintptr_t) controller, (void *)(uintptr_t) objectPtr);
        
}

PHP_METHOD(AppKit_NS_NSArrayController_NSArrayController, removeObject)
{
	zval *controller_param = NULL, *objectPtr_param = NULL;
	zend_long controller, objectPtr;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(objectPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &objectPtr_param);
	
            ns_arraycontroller_remove_object((uintptr_t) controller, (void *)(uintptr_t) objectPtr);
        
}

