
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
#include "src/ns-savepanel.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSSavePanel_NSSavePanel)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSSavePanel, NSSavePanel, appkit, ns_nssavepanel_nssavepanel, appkit_ns_nssavepanel_nssavepanel_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, savePanel)
{

	RETURN_LONG(ns_nssavepanel_save_panel());
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, Url)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssavepanel_url(&_0));
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, identifier)
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
	ns_nssavepanel_identifier(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setIdentifier)
{
	zval *handle_param = NULL, *identifier = NULL, identifier_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&identifier_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(identifier)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &identifier);
	ZVAL_LONG(&_0, handle);
	ns_nssavepanel_set_identifier(&_0, identifier);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, directoryURL)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssavepanel_directory_url(&_0));
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setDirectoryURL)
{
	zval *handle_param = NULL, *directoryURL_param = NULL, _0, _1;
	zend_long handle, directoryURL;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(directoryURL)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &directoryURL_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, directoryURL);
	ns_nssavepanel_set_directory_url(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, allowedContentTypes)
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
	ns_nssavepanel_allowed_content_types(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setAllowedContentTypes)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval allowedContentTypes;
	zval *handle_param = NULL, *allowedContentTypes_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&allowedContentTypes);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(allowedContentTypes)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &allowedContentTypes_param);
	zephir_get_arrval(&allowedContentTypes, allowedContentTypes_param);
	ZVAL_LONG(&_0, handle);
	ns_nssavepanel_set_allowed_content_types(&_0, &allowedContentTypes);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, allowsOtherFileTypes)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nssavepanel_allows_other_file_types(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setAllowsOtherFileTypes)
{
	zend_bool allowsOtherFileTypes;
	zval *handle_param = NULL, *allowsOtherFileTypes_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowsOtherFileTypes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowsOtherFileTypes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowsOtherFileTypes ? 1 : 0));
	ns_nssavepanel_set_allows_other_file_types(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, currentContentType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssavepanel_current_content_type(&_0));
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setCurrentContentType)
{
	zval *handle_param = NULL, *currentContentType_param = NULL, _0, _1;
	zend_long handle, currentContentType;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(currentContentType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &currentContentType_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, currentContentType);
	ns_nssavepanel_set_current_content_type(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, accessoryView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssavepanel_accessory_view(&_0));
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setAccessoryView)
{
	zval *handle_param = NULL, *accessoryView_param = NULL, _0, _1;
	zend_long handle, accessoryView;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(accessoryView)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &accessoryView_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, accessoryView);
	ns_nssavepanel_set_accessory_view(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, delegate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssavepanel_delegate(&_0));
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setDelegate)
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
	ns_nssavepanel_set_delegate(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, isExpanded)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nssavepanel_is_expanded(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, canCreateDirectories)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nssavepanel_can_create_directories(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setCanCreateDirectories)
{
	zend_bool canCreateDirectories;
	zval *handle_param = NULL, *canCreateDirectories_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(canCreateDirectories)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &canCreateDirectories_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (canCreateDirectories ? 1 : 0));
	ns_nssavepanel_set_can_create_directories(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, canSelectHiddenExtension)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nssavepanel_can_select_hidden_extension(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setCanSelectHiddenExtension)
{
	zend_bool canSelectHiddenExtension;
	zval *handle_param = NULL, *canSelectHiddenExtension_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(canSelectHiddenExtension)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &canSelectHiddenExtension_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (canSelectHiddenExtension ? 1 : 0));
	ns_nssavepanel_set_can_select_hidden_extension(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, isExtensionHidden)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nssavepanel_is_extension_hidden(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setExtensionHidden)
{
	zend_bool extensionHidden;
	zval *handle_param = NULL, *extensionHidden_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(extensionHidden)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &extensionHidden_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (extensionHidden ? 1 : 0));
	ns_nssavepanel_set_extension_hidden(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, treatsFilePackagesAsDirectories)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nssavepanel_treats_file_packages_as_directories(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setTreatsFilePackagesAsDirectories)
{
	zend_bool treatsFilePackagesAsDirectories;
	zval *handle_param = NULL, *treatsFilePackagesAsDirectories_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(treatsFilePackagesAsDirectories)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &treatsFilePackagesAsDirectories_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (treatsFilePackagesAsDirectories ? 1 : 0));
	ns_nssavepanel_set_treats_file_packages_as_directories(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, prompt)
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
	ns_nssavepanel_prompt(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setPrompt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval prompt;
	zval *handle_param = NULL, *prompt_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&prompt);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(prompt)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &prompt_param);
	zephir_get_strval(&prompt, prompt_param);
	ZVAL_LONG(&_0, handle);
	ns_nssavepanel_set_prompt(&_0, &prompt);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, title)
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
	ns_nssavepanel_title(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *handle_param = NULL, *title_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &title_param);
	zephir_get_strval(&title, title_param);
	ZVAL_LONG(&_0, handle);
	ns_nssavepanel_set_title(&_0, &title);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, nameFieldLabel)
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
	ns_nssavepanel_name_field_label(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setNameFieldLabel)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval nameFieldLabel;
	zval *handle_param = NULL, *nameFieldLabel_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&nameFieldLabel);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(nameFieldLabel)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &nameFieldLabel_param);
	zephir_get_strval(&nameFieldLabel, nameFieldLabel_param);
	ZVAL_LONG(&_0, handle);
	ns_nssavepanel_set_name_field_label(&_0, &nameFieldLabel);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, nameFieldStringValue)
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
	ns_nssavepanel_name_field_string_value(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setNameFieldStringValue)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval nameFieldStringValue;
	zval *handle_param = NULL, *nameFieldStringValue_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&nameFieldStringValue);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(nameFieldStringValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &nameFieldStringValue_param);
	zephir_get_strval(&nameFieldStringValue, nameFieldStringValue_param);
	ZVAL_LONG(&_0, handle);
	ns_nssavepanel_set_name_field_string_value(&_0, &nameFieldStringValue);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, message)
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
	ns_nssavepanel_message(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setMessage)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval message;
	zval *handle_param = NULL, *message_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&message);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(message)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &message_param);
	zephir_get_strval(&message, message_param);
	ZVAL_LONG(&_0, handle);
	ns_nssavepanel_set_message(&_0, &message);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, showsHiddenFiles)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nssavepanel_shows_hidden_files(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setShowsHiddenFiles)
{
	zend_bool showsHiddenFiles;
	zval *handle_param = NULL, *showsHiddenFiles_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(showsHiddenFiles)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &showsHiddenFiles_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (showsHiddenFiles ? 1 : 0));
	ns_nssavepanel_set_shows_hidden_files(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, showsTagField)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nssavepanel_shows_tag_field(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setShowsTagField)
{
	zend_bool showsTagField;
	zval *handle_param = NULL, *showsTagField_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(showsTagField)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &showsTagField_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (showsTagField ? 1 : 0));
	ns_nssavepanel_set_shows_tag_field(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, tagNames)
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
	ns_nssavepanel_tag_names(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setTagNames)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval tagNames;
	zval *handle_param = NULL, *tagNames_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&tagNames);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(tagNames)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &tagNames_param);
	zephir_get_arrval(&tagNames, tagNames_param);
	ZVAL_LONG(&_0, handle);
	ns_nssavepanel_set_tag_names(&_0, &tagNames);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, showsContentTypes)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nssavepanel_shows_content_types(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, setShowsContentTypes)
{
	zend_bool showsContentTypes;
	zval *handle_param = NULL, *showsContentTypes_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(showsContentTypes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &showsContentTypes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (showsContentTypes ? 1 : 0));
	ns_nssavepanel_set_shows_content_types(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, validateVisibleColumns)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nssavepanel_validate_visible_columns(&_0);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, ok)
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
	ns_nssavepanel_ok(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, cancel)
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
	ns_nssavepanel_cancel(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSSavePanel_NSSavePanel, runModal)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nssavepanel_run_modal(&_0));
}

