
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

#include "ns-toolbaritemgroup.h"
#include <stdint.h>



/** NSToolbarItemGroup — grouped toolbar items (macOS 10.5+, segmented factory 10.15+). */
ZEPHIR_INIT_CLASS(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSToolbarItemGroup, NSToolbarItemGroup, appkit, ns_nstoolbaritemgroup_nstoolbaritemgroup, appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, create)
{
	zend_long handle = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *identifier_param = NULL;
	zval identifier;

	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	
            handle = (zend_long) ns_toolbaritemgroup_create(Z_STRVAL(identifier));
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, groupWithTitles)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long selectionMode, handle = 0;
	zval titles;
	zval *identifier_param = NULL, *titles_param = NULL, *selectionMode_param = NULL, *labels = NULL, labels_sub, __$null;
	zval identifier;

	ZVAL_UNDEF(&identifier);
	ZVAL_UNDEF(&labels_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&titles);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_STR(identifier)
		Z_PARAM_ARRAY(titles)
		Z_PARAM_LONG(selectionMode)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(labels)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &identifier_param, &titles_param, &selectionMode_param, &labels);
	zephir_get_strval(&identifier, identifier_param);
	zephir_get_arrval(&titles, titles_param);
	if (!labels) {
		labels = &labels_sub;
		labels = &__$null;
	}
	
            zval *item;
            const char *ctitles[256];
            const char *clabels[256];
            int titleCount = 0;
            int labelCount = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(titles), item) {
                if (titleCount >= 256) {
                    break;
                }
                convert_to_string(item);
                ctitles[titleCount++] = Z_STRVAL_P(item);
            } ZEND_HASH_FOREACH_END();
            if (labels && Z_TYPE_P(labels) == IS_ARRAY) {
                ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(labels), item) {
                    if (labelCount >= 256) {
                        break;
                    }
                    convert_to_string(item);
                    clabels[labelCount++] = Z_STRVAL_P(item);
                } ZEND_HASH_FOREACH_END();
            }
            handle = (zend_long) ns_toolbaritemgroup_group_with_titles(
                Z_STRVAL(identifier),
                ctitles,
                titleCount,
                (int) selectionMode,
                labelCount > 0 ? clabels : NULL,
                labelCount
            );
        
	RETURN_MM_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, wrap)
{
	zval *nsToolbarItemGroupPtr_param = NULL;
	zend_long nsToolbarItemGroupPtr, handle = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(nsToolbarItemGroupPtr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &nsToolbarItemGroupPtr_param);
	
            handle = (zend_long) ns_toolbaritemgroup_wrap((void *)(uintptr_t) nsToolbarItemGroupPtr);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, destroy)
{
	zval *item_param = NULL;
	zend_long item;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ns_toolbaritemgroup_destroy((uintptr_t) item);
        
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, nsToolbarItemGroup)
{
	zval *item_param = NULL;
	zend_long item, ptr = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            ptr = (zend_long)(uintptr_t) ns_toolbaritemgroup_nstoolbaritemgroup((uintptr_t) item);
        
	RETURN_LONG(ptr);
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, setSubitems)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval subitems;
	zval *item_param = NULL, *subitems_param = NULL;
	zend_long item;

	ZVAL_UNDEF(&subitems);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_ARRAY(subitems)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &item_param, &subitems_param);
	zephir_get_arrval(&subitems, subitems_param);
	
            zval *entry;
            uintptr_t handles[256];
            int count = 0;
            ZEND_HASH_FOREACH_VAL(Z_ARRVAL(subitems), entry) {
                if (count >= 256) {
                    break;
                }
                convert_to_long(entry);
                handles[count++] = (uintptr_t) Z_LVAL_P(entry);
            } ZEND_HASH_FOREACH_END();
            ns_toolbaritemgroup_set_subitems((uintptr_t) item, handles, count);
        
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, subitemsCount)
{
	zval *item_param = NULL;
	zend_long item, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            value = (zend_long) ns_toolbaritemgroup_subitems_count((uintptr_t) item);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, subitemAt)
{
	zval *item_param = NULL, *index_param = NULL;
	zend_long item, index, handle = 0;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &index_param);
	
            handle = (zend_long) ns_toolbaritemgroup_subitem_at((uintptr_t) item, (int) index);
        
	RETURN_LONG(handle);
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, setControlRepresentation)
{
	zval *item_param = NULL, *representation_param = NULL;
	zend_long item, representation;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(representation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &representation_param);
	
            ns_toolbaritemgroup_set_control_representation((uintptr_t) item, (int) representation);
        
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, getControlRepresentation)
{
	zval *item_param = NULL;
	zend_long item, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            value = (zend_long) ns_toolbaritemgroup_get_control_representation((uintptr_t) item);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, setSelectionMode)
{
	zval *item_param = NULL, *mode_param = NULL;
	zend_long item, mode;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &mode_param);
	
            ns_toolbaritemgroup_set_selection_mode((uintptr_t) item, (int) mode);
        
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, getSelectionMode)
{
	zval *item_param = NULL;
	zend_long item, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            value = (zend_long) ns_toolbaritemgroup_get_selection_mode((uintptr_t) item);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, setSelectedIndex)
{
	zval *item_param = NULL, *index_param = NULL;
	zend_long item, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &index_param);
	
            ns_toolbaritemgroup_set_selected_index((uintptr_t) item, (int) index);
        
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, getSelectedIndex)
{
	zval *item_param = NULL;
	zend_long item, value = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &item_param);
	
            value = (zend_long) ns_toolbaritemgroup_get_selected_index((uintptr_t) item);
        
	RETURN_LONG(value);
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, setSelectedAtIndex)
{
	zend_bool flag;
	zval *item_param = NULL, *index_param = NULL, *flag_param = NULL;
	zend_long item, index;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(index)
		Z_PARAM_BOOL(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &item_param, &index_param, &flag_param);
	
            ns_toolbaritemgroup_set_selected_at_index((uintptr_t) item, (int) index, flag ? 1 : 0);
        
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, isSelectedAtIndex)
{
	zend_bool result = 0;
	zval *item_param = NULL, *index_param = NULL;
	zend_long item, index;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &item_param, &index_param);
	
            result = ns_toolbaritemgroup_is_selected_at_index((uintptr_t) item, (int) index) == 1;
        
	RETURN_BOOL(result);
}

