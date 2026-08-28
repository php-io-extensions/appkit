
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
#include "src/ns-openpanel.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSOpenPanel_NSOpenPanel)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSOpenPanel, NSOpenPanel, appkit, ns_nsopenpanel_nsopenpanel, appkit_ns_nsopenpanel_nsopenpanel_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, openPanel)
{

	RETURN_LONG(ns_nsopenpanel_open_panel());
}

PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, URLs)
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
	ns_nsopenpanel_urls(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, resolvesAliases)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsopenpanel_resolves_aliases(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, setResolvesAliases)
{
	zend_bool resolvesAliases;
	zval *handle_param = NULL, *resolvesAliases_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(resolvesAliases)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &resolvesAliases_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (resolvesAliases ? 1 : 0));
	ns_nsopenpanel_set_resolves_aliases(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, canChooseDirectories)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsopenpanel_can_choose_directories(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, setCanChooseDirectories)
{
	zend_bool canChooseDirectories;
	zval *handle_param = NULL, *canChooseDirectories_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(canChooseDirectories)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &canChooseDirectories_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (canChooseDirectories ? 1 : 0));
	ns_nsopenpanel_set_can_choose_directories(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, allowsMultipleSelection)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsopenpanel_allows_multiple_selection(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, setAllowsMultipleSelection)
{
	zend_bool allowsMultipleSelection;
	zval *handle_param = NULL, *allowsMultipleSelection_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsMultipleSelection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsMultipleSelection_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsMultipleSelection ? 1 : 0));
	ns_nsopenpanel_set_allows_multiple_selection(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, canChooseFiles)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsopenpanel_can_choose_files(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, setCanChooseFiles)
{
	zend_bool canChooseFiles;
	zval *handle_param = NULL, *canChooseFiles_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(canChooseFiles)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &canChooseFiles_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (canChooseFiles ? 1 : 0));
	ns_nsopenpanel_set_can_choose_files(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, canResolveUbiquitousConflicts)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsopenpanel_can_resolve_ubiquitous_conflicts(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, setCanResolveUbiquitousConflicts)
{
	zend_bool canResolveUbiquitousConflicts;
	zval *handle_param = NULL, *canResolveUbiquitousConflicts_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(canResolveUbiquitousConflicts)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &canResolveUbiquitousConflicts_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (canResolveUbiquitousConflicts ? 1 : 0));
	ns_nsopenpanel_set_can_resolve_ubiquitous_conflicts(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, canDownloadUbiquitousContents)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsopenpanel_can_download_ubiquitous_contents(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, setCanDownloadUbiquitousContents)
{
	zend_bool canDownloadUbiquitousContents;
	zval *handle_param = NULL, *canDownloadUbiquitousContents_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(canDownloadUbiquitousContents)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &canDownloadUbiquitousContents_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (canDownloadUbiquitousContents ? 1 : 0));
	ns_nsopenpanel_set_can_download_ubiquitous_contents(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, isAccessoryViewDisclosed)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsopenpanel_is_accessory_view_disclosed(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSOpenPanel_NSOpenPanel, setAccessoryViewDisclosed)
{
	zend_bool accessoryViewDisclosed;
	zval *handle_param = NULL, *accessoryViewDisclosed_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(accessoryViewDisclosed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &accessoryViewDisclosed_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (accessoryViewDisclosed ? 1 : 0));
	ns_nsopenpanel_set_accessory_view_disclosed(&_0, &_1);
}

