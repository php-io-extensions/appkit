
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
#include "src/ns-toolbaritemgroup.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSToolbarItemGroup, NSToolbarItemGroup, appkit, ns_nstoolbaritemgroup_nstoolbaritemgroup, appkit_ns_nstoolbaritemgroup_nstoolbaritemgroup_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, initWithItemIdentifier)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *itemIdentifier_param = NULL;
	zval itemIdentifier;

	ZVAL_UNDEF(&itemIdentifier);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(itemIdentifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &itemIdentifier_param);
	zephir_get_strval(&itemIdentifier, itemIdentifier_param);
	RETURN_MM_LONG(ns_nstoolbaritemgroup_init_with_item_identifier(&itemIdentifier));
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, groupWithItemIdentifierTitlesSelectionModeLabelsTargetAction)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long selectionMode, target;
	zval titles;
	zval *itemIdentifier_param = NULL, *titles_param = NULL, *selectionMode_param = NULL, *labels = NULL, labels_sub, *target_param = NULL, *action = NULL, action_sub, _0, _1;
	zval itemIdentifier;

	ZVAL_UNDEF(&itemIdentifier);
	ZVAL_UNDEF(&labels_sub);
	ZVAL_UNDEF(&action_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&titles);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_STR(itemIdentifier)
		Z_PARAM_ARRAY(titles)
		Z_PARAM_LONG(selectionMode)
		Z_PARAM_ZVAL(labels)
		Z_PARAM_LONG(target)
		Z_PARAM_ZVAL(action)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &itemIdentifier_param, &titles_param, &selectionMode_param, &labels, &target_param, &action);
	zephir_get_strval(&itemIdentifier, itemIdentifier_param);
	zephir_get_arrval(&titles, titles_param);
	ZVAL_LONG(&_0, selectionMode);
	ZVAL_LONG(&_1, target);
	RETURN_MM_LONG(ns_nstoolbaritemgroup_group_with_item_identifier_titles_selection_mode_labels_target_action(&itemIdentifier, &titles, &_0, labels, &_1, action));
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, groupWithItemIdentifierImagesSelectionModeLabelsTargetAction)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long selectionMode, target;
	zval images;
	zval *itemIdentifier_param = NULL, *images_param = NULL, *selectionMode_param = NULL, *labels = NULL, labels_sub, *target_param = NULL, *action = NULL, action_sub, _0, _1;
	zval itemIdentifier;

	ZVAL_UNDEF(&itemIdentifier);
	ZVAL_UNDEF(&labels_sub);
	ZVAL_UNDEF(&action_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&images);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_STR(itemIdentifier)
		Z_PARAM_ARRAY(images)
		Z_PARAM_LONG(selectionMode)
		Z_PARAM_ZVAL(labels)
		Z_PARAM_LONG(target)
		Z_PARAM_ZVAL(action)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &itemIdentifier_param, &images_param, &selectionMode_param, &labels, &target_param, &action);
	zephir_get_strval(&itemIdentifier, itemIdentifier_param);
	zephir_get_arrval(&images, images_param);
	ZVAL_LONG(&_0, selectionMode);
	ZVAL_LONG(&_1, target);
	RETURN_MM_LONG(ns_nstoolbaritemgroup_group_with_item_identifier_images_selection_mode_labels_target_action(&itemIdentifier, &images, &_0, labels, &_1, action));
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, subitems)
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
	ns_nstoolbaritemgroup_subitems(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, setSubitems)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval subitems;
	zval *handle_param = NULL, *subitems_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&subitems);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(subitems)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &subitems_param);
	zephir_get_arrval(&subitems, subitems_param);
	ZVAL_LONG(&_0, handle);
	ns_nstoolbaritemgroup_set_subitems(&_0, &subitems);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, controlRepresentation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstoolbaritemgroup_control_representation(&_0));
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, setControlRepresentation)
{
	zval *handle_param = NULL, *controlRepresentation_param = NULL, _0, _1;
	zend_long handle, controlRepresentation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(controlRepresentation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &controlRepresentation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, controlRepresentation);
	ns_nstoolbaritemgroup_set_control_representation(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, selectionMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstoolbaritemgroup_selection_mode(&_0));
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, setSelectionMode)
{
	zval *handle_param = NULL, *selectionMode_param = NULL, _0, _1;
	zend_long handle, selectionMode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(selectionMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &selectionMode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, selectionMode);
	ns_nstoolbaritemgroup_set_selection_mode(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, selectedIndex)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstoolbaritemgroup_selected_index(&_0));
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, setSelectedIndex)
{
	zval *handle_param = NULL, *selectedIndex_param = NULL, _0, _1;
	zend_long handle, selectedIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(selectedIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &selectedIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, selectedIndex);
	ns_nstoolbaritemgroup_set_selected_index(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, setSelectedAtIndex)
{
	zend_bool selected;
	zval *handle_param = NULL, *selected_param = NULL, *index_param = NULL, _0, _1, _2;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(selected)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &selected_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (selected ? 1 : 0));
	ZVAL_LONG(&_2, index);
	ns_nstoolbaritemgroup_set_selected_at_index(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSToolbarItemGroup_NSToolbarItemGroup, isSelectedAtIndex)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	r = ns_nstoolbaritemgroup_is_selected_at_index(&_0, &_1);
	RETURN_BOOL(r == 1);
}

