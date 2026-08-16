
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

#include "ns-treecontroller.h"
#include <stdint.h>



/**
 * NSTreeController — hierarchical Cocoa bindings controller with index-path selection.
 */
ZEPHIR_INIT_CLASS(AppKit_NS_NSTreeController_NSTreeController)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSTreeController, NSTreeController, appkit, ns_nstreecontroller_nstreecontroller, appkit_ns_nstreecontroller_nstreecontroller_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, create)
{
	zend_long handle = 0;
	
            handle = (zend_long) ns_treecontroller_create();
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, wrap)
{
	zval *nsTreeControllerPtr_param = NULL;
	zend_long nsTreeControllerPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsTreeControllerPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsTreeControllerPtr_param);
	
            handle = (zend_long) ns_treecontroller_wrap((void *)(uintptr_t) nsTreeControllerPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, destroy)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_treecontroller_destroy((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, nsTreeController)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_treecontroller_nstreecontroller((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, discardEditing)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_treecontroller_discard_editing((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, commitEditing)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_treecontroller_commit_editing((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, isEditing)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_treecontroller_is_editing((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, rearrangeObjects)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ns_treecontroller_rearrange_objects((uintptr_t) controller);
        
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, arrangedObjectsRootNode)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_treecontroller_arranged_objects_root_node((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, setChildrenKeyPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	zval *controller_param = NULL, *path_param = NULL;
	zend_long controller;

	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &controller_param, &path_param);
	zephir_get_strval(&path, path_param);
	
            ns_treecontroller_set_children_key_path((uintptr_t) controller, Z_STRVAL(path));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, childrenKeyPath)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_treecontroller_children_key_path((uintptr_t) controller, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, setCountKeyPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	zval *controller_param = NULL, *path_param = NULL;
	zend_long controller;

	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &controller_param, &path_param);
	zephir_get_strval(&path, path_param);
	
            ns_treecontroller_set_count_key_path((uintptr_t) controller, Z_STRVAL(path));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, countKeyPath)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_treecontroller_count_key_path((uintptr_t) controller, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, setLeafKeyPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	zval *controller_param = NULL, *path_param = NULL;
	zend_long controller;

	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &controller_param, &path_param);
	zephir_get_strval(&path, path_param);
	
            ns_treecontroller_set_leaf_key_path((uintptr_t) controller, Z_STRVAL(path));
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, leafKeyPath)
{
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            char buf[4096];
            buf[0] = '\0';
            if (ns_treecontroller_leaf_key_path((uintptr_t) controller, buf, (int) sizeof(buf))) {
                RETURN_STRING(buf);
            }
            RETURN_EMPTY_STRING();
        
	RETURN_STRING("");
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, setContent)
{
	zval *controller_param = NULL, *contentPtr_param = NULL;
	zend_long controller, contentPtr;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(contentPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &contentPtr_param);
	
            ns_treecontroller_set_content((uintptr_t) controller, (void *)(uintptr_t) contentPtr);
        
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, content)
{
	zval *controller_param = NULL;
	zend_long controller, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            ptr = (zend_long)(uintptr_t) ns_treecontroller_content((uintptr_t) controller);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, canInsert)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_treecontroller_can_insert((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, canInsertChild)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_treecontroller_can_insert_child((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, canAddChild)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_treecontroller_can_add_child((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, setAvoidsEmptySelection)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_treecontroller_set_avoids_empty_selection((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, avoidsEmptySelection)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_treecontroller_avoids_empty_selection((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, setPreservesSelection)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_treecontroller_set_preserves_selection((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, preservesSelection)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_treecontroller_preserves_selection((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, setSelectsInsertedObjects)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_treecontroller_set_selects_inserted_objects((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, selectsInsertedObjects)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_treecontroller_selects_inserted_objects((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, setAlwaysUsesMultipleValuesMarker)
{
	zend_bool value;
	zval *controller_param = NULL, *value_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &value_param);
	
            ns_treecontroller_set_always_uses_multiple_values_marker((uintptr_t) controller, value ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, alwaysUsesMultipleValuesMarker)
{
	zend_bool result = 0;
	zval *controller_param = NULL;
	zend_long controller;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            result = ns_treecontroller_always_uses_multiple_values_marker((uintptr_t) controller) == 1;
        
	RETURN_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, selectedObjectsCount)
{
	zval *controller_param = NULL;
	zend_long controller, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            count = ns_treecontroller_selected_objects_count((uintptr_t) controller);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, selectedObjectAt)
{
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            ptr = (zend_long)(uintptr_t) ns_treecontroller_selected_object_at((uintptr_t) controller, (int) index);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, selectedNodesCount)
{
	zval *controller_param = NULL;
	zend_long controller, count = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            count = ns_treecontroller_selected_nodes_count((uintptr_t) controller);
        
	RETURN_LONG(count);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, selectedNodeAt)
{
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            ptr = (zend_long)(uintptr_t) ns_treecontroller_selected_node_at((uintptr_t) controller, (int) index);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, setSelectionIndexPath)
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
            result = ns_treecontroller_set_selection_index_path((uintptr_t) controller, cindexes, count) == 1;
        
	RETURN_MM_BOOL(result);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, selectionIndexPathLength)
{
	zval *controller_param = NULL;
	zend_long controller, length = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(controller)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &controller_param);
	
            length = ns_treecontroller_selection_index_path_length((uintptr_t) controller);
        
	RETURN_LONG(length);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, selectionIndexPathComponentAt)
{
	zval *controller_param = NULL, *index_param = NULL;
	zend_long controller, index, component = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &controller_param, &index_param);
	
            component = ns_treecontroller_selection_index_path_component_at((uintptr_t) controller, (int) index);
        
	RETURN_LONG(component);
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, insertObjectAtArrangedObjectIndexPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval indexes;
	zval *controller_param = NULL, *objectPtr_param = NULL, *indexes_param = NULL;
	zend_long controller, objectPtr;

	ZVAL_UNDEF(&indexes);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(controller)
		Z_PARAM_LONG(objectPtr)
		Z_PARAM_ARRAY(indexes)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &controller_param, &objectPtr_param, &indexes_param);
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
            ns_treecontroller_insert_object_at_arranged_object_index_path((uintptr_t) controller, (void *)(uintptr_t) objectPtr, cindexes, count);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSTreeController_NSTreeController, removeObjectAtArrangedObjectIndexPath)
{
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
            ns_treecontroller_remove_object_at_arranged_object_index_path((uintptr_t) controller, cindexes, count);
        
	ZEPHIR_MM_RESTORE();
}

