
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
#include "src/ns-toolbar.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSToolbar_NSToolbar)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSToolbar, NSToolbar, appkit, ns_nstoolbar_nstoolbar, appkit_ns_nstoolbar_nstoolbar_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, initWithIdentifier)
{
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
	RETURN_MM_LONG(ns_nstoolbar_init_with_identifier(&identifier));
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, init)
{

	RETURN_LONG(ns_nstoolbar_init());
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, insertItemWithItemIdentifierAtIndex)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval itemIdentifier;
	zval *handle_param = NULL, *itemIdentifier_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&itemIdentifier);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(itemIdentifier)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &itemIdentifier_param, &index_param);
	zephir_get_strval(&itemIdentifier, itemIdentifier_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ns_nstoolbar_insert_item_with_item_identifier_at_index(&_0, &itemIdentifier, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, removeItemAtIndex)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ns_nstoolbar_remove_item_at_index(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, removeItemWithItemIdentifier)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval itemIdentifier;
	zval *handle_param = NULL, *itemIdentifier_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&itemIdentifier);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(itemIdentifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &itemIdentifier_param);
	zephir_get_strval(&itemIdentifier, itemIdentifier_param);
	ZVAL_LONG(&_0, handle);
	ns_nstoolbar_remove_item_with_item_identifier(&_0, &itemIdentifier);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, delegate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstoolbar_delegate(&_0));
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, setDelegate)
{
	zval *handle_param = NULL, *delegate_param = NULL, _0, _1;
	zend_long handle, delegate;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(delegate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &delegate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, delegate);
	ns_nstoolbar_set_delegate(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, isVisible)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstoolbar_is_visible(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, setVisible)
{
	zend_bool visible;
	zval *handle_param = NULL, *visible_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(visible)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &visible_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (visible ? 1 : 0));
	ns_nstoolbar_set_visible(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, runCustomizationPalette)
{
	zval *handle_param = NULL, *sender_param = NULL, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sender_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	ns_nstoolbar_run_customization_palette(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, customizationPaletteIsRunning)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstoolbar_customization_palette_is_running(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, displayMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nstoolbar_display_mode(&_0));
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, setDisplayMode)
{
	zval *handle_param = NULL, *displayMode_param = NULL, _0, _1;
	zend_long handle, displayMode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(displayMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &displayMode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, displayMode);
	ns_nstoolbar_set_display_mode(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, selectedItemIdentifier)
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
	ns_nstoolbar_selected_item_identifier(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, setSelectedItemIdentifier)
{
	zval *handle_param = NULL, *selectedItemIdentifier = NULL, selectedItemIdentifier_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&selectedItemIdentifier_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(selectedItemIdentifier)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &selectedItemIdentifier);
	ZVAL_LONG(&_0, handle);
	ns_nstoolbar_set_selected_item_identifier(&_0, selectedItemIdentifier);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, allowsUserCustomization)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstoolbar_allows_user_customization(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, setAllowsUserCustomization)
{
	zend_bool allowsUserCustomization;
	zval *handle_param = NULL, *allowsUserCustomization_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsUserCustomization)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsUserCustomization_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsUserCustomization ? 1 : 0));
	ns_nstoolbar_set_allows_user_customization(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, allowsDisplayModeCustomization)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstoolbar_allows_display_mode_customization(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, setAllowsDisplayModeCustomization)
{
	zend_bool allowsDisplayModeCustomization;
	zval *handle_param = NULL, *allowsDisplayModeCustomization_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsDisplayModeCustomization)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsDisplayModeCustomization_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsDisplayModeCustomization ? 1 : 0));
	ns_nstoolbar_set_allows_display_mode_customization(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, identifier)
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
	ns_nstoolbar_identifier(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, items)
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
	ns_nstoolbar_items(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, visibleItems)
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
	ns_nstoolbar_visible_items(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, itemIdentifiers)
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
	ns_nstoolbar_item_identifiers(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, setItemIdentifiers)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval itemIdentifiers;
	zval *handle_param = NULL, *itemIdentifiers_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&itemIdentifiers);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(itemIdentifiers)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &itemIdentifiers_param);
	zephir_get_arrval(&itemIdentifiers, itemIdentifiers_param);
	ZVAL_LONG(&_0, handle);
	ns_nstoolbar_set_item_identifiers(&_0, &itemIdentifiers);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, centeredItemIdentifiers)
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
	ns_nstoolbar_centered_item_identifiers(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, setCenteredItemIdentifiers)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval centeredItemIdentifiers;
	zval *handle_param = NULL, *centeredItemIdentifiers_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&centeredItemIdentifiers);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(centeredItemIdentifiers)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &centeredItemIdentifiers_param);
	zephir_get_arrval(&centeredItemIdentifiers, centeredItemIdentifiers_param);
	ZVAL_LONG(&_0, handle);
	ns_nstoolbar_set_centered_item_identifiers(&_0, &centeredItemIdentifiers);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, autosavesConfiguration)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstoolbar_autosaves_configuration(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, setAutosavesConfiguration)
{
	zend_bool autosavesConfiguration;
	zval *handle_param = NULL, *autosavesConfiguration_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(autosavesConfiguration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &autosavesConfiguration_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (autosavesConfiguration ? 1 : 0));
	ns_nstoolbar_set_autosaves_configuration(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, validateVisibleItems)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nstoolbar_validate_visible_items(&_0);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, allowsExtensionItems)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nstoolbar_allows_extension_items(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSToolbar_NSToolbar, setAllowsExtensionItems)
{
	zend_bool allowsExtensionItems;
	zval *handle_param = NULL, *allowsExtensionItems_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsExtensionItems)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsExtensionItems_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsExtensionItems ? 1 : 0));
	ns_nstoolbar_set_allows_extension_items(&_0, &_1);
}

