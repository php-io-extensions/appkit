
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
#include "src/ns-application.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(AppKit_NS_NSApplication_NSApplication)
{
	ZEPHIR_REGISTER_CLASS(AppKit\\NS\\NSApplication, NSApplication, appkit, ns_nsapplication_nsapplication, appkit_ns_nsapplication_nsapplication_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, sharedApplication)
{

	RETURN_LONG(ns_nsapplication_shared_application());
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, delegate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_delegate(&_0));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setDelegate)
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
	ns_nsapplication_set_delegate(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, hide)
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
	ns_nsapplication_hide(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, unhide)
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
	ns_nsapplication_unhide(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, unhideWithoutActivation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsapplication_unhide_without_activation(&_0);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, windowWithWindowNumber)
{
	zval *handle_param = NULL, *windowNum_param = NULL, _0, _1;
	zend_long handle, windowNum;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(windowNum)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &windowNum_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, windowNum);
	RETURN_LONG(ns_nsapplication_window_with_window_number(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, mainWindow)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_main_window(&_0));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, keyWindow)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_key_window(&_0));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, isActive)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsapplication_is_active(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, isHidden)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsapplication_is_hidden(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, isRunning)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsapplication_is_running(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, deactivate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsapplication_deactivate(&_0);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, activate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsapplication_activate(&_0);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, yieldActivationToApplication)
{
	zval *handle_param = NULL, *application_param = NULL, _0, _1;
	zend_long handle, application;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(application)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &application_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, application);
	ns_nsapplication_yield_activation_to_application(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, yieldActivationToApplicationWithBundleIdentifier)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval bundleIdentifier;
	zval *handle_param = NULL, *bundleIdentifier_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&bundleIdentifier);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(bundleIdentifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &bundleIdentifier_param);
	zephir_get_strval(&bundleIdentifier, bundleIdentifier_param);
	ZVAL_LONG(&_0, handle);
	ns_nsapplication_yield_activation_to_application_with_bundle_identifier(&_0, &bundleIdentifier);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, hideOtherApplications)
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
	ns_nsapplication_hide_other_applications(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, unhideAllApplications)
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
	ns_nsapplication_unhide_all_applications(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, finishLaunching)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsapplication_finish_launching(&_0);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, run)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsapplication_run(&_0);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, runModalForWindow)
{
	zval *handle_param = NULL, *window_param = NULL, _0, _1;
	zend_long handle, window;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &window_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, window);
	RETURN_LONG(ns_nsapplication_run_modal_for_window(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, stop)
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
	ns_nsapplication_stop(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, stopModal)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsapplication_stop_modal(&_0);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, stopModalWithCode)
{
	zval *handle_param = NULL, *returnCode_param = NULL, _0, _1;
	zend_long handle, returnCode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(returnCode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &returnCode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, returnCode);
	ns_nsapplication_stop_modal_with_code(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, abortModal)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsapplication_abort_modal(&_0);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, modalWindow)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_modal_window(&_0));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, beginModalSessionForWindow)
{
	zval *handle_param = NULL, *window_param = NULL, _0, _1;
	zend_long handle, window;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &window_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, window);
	RETURN_LONG(ns_nsapplication_begin_modal_session_for_window(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, runModalSession)
{
	zval *handle_param = NULL, *session_param = NULL, _0, _1;
	zend_long handle, session;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(session)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &session_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, session);
	RETURN_LONG(ns_nsapplication_run_modal_session(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, endModalSession)
{
	zval *handle_param = NULL, *session_param = NULL, _0, _1;
	zend_long handle, session;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(session)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &session_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, session);
	ns_nsapplication_end_modal_session(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, terminate)
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
	ns_nsapplication_terminate(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, requestUserAttention)
{
	zval *handle_param = NULL, *requestType_param = NULL, _0, _1;
	zend_long handle, requestType;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(requestType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &requestType_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, requestType);
	RETURN_LONG(ns_nsapplication_request_user_attention(&_0, &_1));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, cancelUserAttentionRequest)
{
	zval *handle_param = NULL, *request_param = NULL, _0, _1;
	zend_long handle, request;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &request_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	ns_nsapplication_cancel_user_attention_request(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, preventWindowOrdering)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsapplication_prevent_window_ordering(&_0);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, windows)
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
	ns_nsapplication_windows(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setWindowsNeedUpdate)
{
	zend_bool needUpdate;
	zval *handle_param = NULL, *needUpdate_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(needUpdate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &needUpdate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (needUpdate ? 1 : 0));
	ns_nsapplication_set_windows_need_update(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, updateWindows)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsapplication_update_windows(&_0);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, mainMenu)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_main_menu(&_0));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setMainMenu)
{
	zval *handle_param = NULL, *menu_param = NULL, _0, _1;
	zend_long handle, menu;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(menu)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &menu_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, menu);
	ns_nsapplication_set_main_menu(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, helpMenu)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_help_menu(&_0));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setHelpMenu)
{
	zval *handle_param = NULL, *menu_param = NULL, _0, _1;
	zend_long handle, menu;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(menu)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &menu_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, menu);
	ns_nsapplication_set_help_menu(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, applicationIconImage)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_application_icon_image(&_0));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setApplicationIconImage)
{
	zval *handle_param = NULL, *image_param = NULL, _0, _1;
	zend_long handle, image;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &image_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, image);
	ns_nsapplication_set_application_icon_image(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, activationPolicy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_activation_policy(&_0));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setActivationPolicy)
{
	zval *handle_param = NULL, *activationPolicy_param = NULL, _0, _1;
	zend_long handle, activationPolicy, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(activationPolicy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &activationPolicy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, activationPolicy);
	r = ns_nsapplication_set_activation_policy(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, dockTile)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_dock_tile(&_0));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, reportException)
{
	zval *handle_param = NULL, *exception_param = NULL, _0, _1;
	zend_long handle, exception;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(exception)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &exception_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, exception);
	ns_nsapplication_report_exception(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, detachDrawingThread)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long target, argument;
	zval *selector_param = NULL, *target_param = NULL, *argument_param = NULL, _0, _1;
	zval selector;

	ZVAL_UNDEF(&selector);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(selector)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(argument)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &selector_param, &target_param, &argument_param);
	zephir_get_strval(&selector, selector_param);
	ZVAL_LONG(&_0, target);
	ZVAL_LONG(&_1, argument);
	ns_nsapplication_detach_drawing_thread(&selector, &_0, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, replyToApplicationShouldTerminate)
{
	zend_bool shouldTerminate;
	zval *handle_param = NULL, *shouldTerminate_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(shouldTerminate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &shouldTerminate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (shouldTerminate ? 1 : 0));
	ns_nsapplication_reply_to_application_should_terminate(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, replyToOpenOrPrint)
{
	zval *handle_param = NULL, *reply_param = NULL, _0, _1;
	zend_long handle, reply;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(reply)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &reply_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, reply);
	ns_nsapplication_reply_to_open_or_print(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, orderFrontCharacterPalette)
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
	ns_nsapplication_order_front_character_palette(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, presentationOptions)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_presentation_options(&_0));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setPresentationOptions)
{
	zval *handle_param = NULL, *options_param = NULL, _0, _1;
	zend_long handle, options;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &options_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, options);
	ns_nsapplication_set_presentation_options(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, currentSystemPresentationOptions)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_current_system_presentation_options(&_0));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, occlusionState)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_occlusion_state(&_0));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, isProtectedDataAvailable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsapplication_is_protected_data_available(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, appearance)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_appearance(&_0));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setAppearance)
{
	zval *handle_param = NULL, *appearance_param = NULL, _0, _1;
	zend_long handle, appearance;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(appearance)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &appearance_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, appearance);
	ns_nsapplication_set_appearance(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, effectiveAppearance)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_effective_appearance(&_0));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, sendEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ns_nsapplication_send_event(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, postEventAtStart)
{
	zend_bool atStart;
	zval *handle_param = NULL, *event_param = NULL, *atStart_param = NULL, _0, _1, _2;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
		Z_PARAM_BOOL(atStart)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &event_param, &atStart_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ZVAL_BOOL(&_2, (atStart ? 1 : 0));
	ns_nsapplication_post_event_at_start(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, currentEvent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_current_event(&_0));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, nextEventMatchingMaskUntilDateInModeDequeue)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool deqFlag;
	zval mode;
	zval *handle_param = NULL, *mask_param = NULL, *expiration_param = NULL, *mode_param = NULL, *deqFlag_param = NULL, _0, _1, _2, _3;
	zend_long handle, mask, expiration;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&mode);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mask)
		Z_PARAM_LONG(expiration)
		Z_PARAM_STR(mode)
		Z_PARAM_BOOL(deqFlag)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &mask_param, &expiration_param, &mode_param, &deqFlag_param);
	zephir_get_strval(&mode, mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mask);
	ZVAL_LONG(&_2, expiration);
	ZVAL_BOOL(&_3, (deqFlag ? 1 : 0));
	RETURN_MM_LONG(ns_nsapplication_next_event_matching_mask_until_date_in_mode_dequeue(&_0, &_1, &_2, &mode, &_3));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, discardEventsMatchingMaskBeforeEvent)
{
	zval *handle_param = NULL, *mask_param = NULL, *lastEvent_param = NULL, _0, _1, _2;
	zend_long handle, mask, lastEvent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mask)
		Z_PARAM_LONG(lastEvent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &mask_param, &lastEvent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mask);
	ZVAL_LONG(&_2, lastEvent);
	ns_nsapplication_discard_events_matching_mask_before_event(&_0, &_1, &_2);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, sendActionToFrom)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval action;
	zval *handle_param = NULL, *action_param = NULL, *target_param = NULL, *sender_param = NULL, _0, _1, _2;
	zend_long handle, target, sender, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&action);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(action)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &action_param, &target_param, &sender_param);
	zephir_get_strval(&action, action_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, sender);
	r = ns_nsapplication_send_action_to_from(&_0, &action, &_1, &_2);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, targetForAction)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval action;
	zval *handle_param = NULL, *action_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&action);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(action)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &action_param);
	zephir_get_strval(&action, action_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(ns_nsapplication_target_for_action(&_0, &action));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, targetForActionToFrom)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval action;
	zval *handle_param = NULL, *action_param = NULL, *target_param = NULL, *sender_param = NULL, _0, _1, _2;
	zend_long handle, target, sender;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&action);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(action)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(sender)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &action_param, &target_param, &sender_param);
	zephir_get_strval(&action, action_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, sender);
	RETURN_MM_LONG(ns_nsapplication_target_for_action_to_from(&_0, &action, &_1, &_2));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, tryToPerformWith)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval action;
	zval *handle_param = NULL, *action_param = NULL, *object__param = NULL, _0, _1;
	zend_long handle, object_, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&action);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(action)
		Z_PARAM_LONG(object_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &action_param, &object__param);
	zephir_get_strval(&action, action_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	r = ns_nsapplication_try_to_perform_with(&_0, &action, &_1);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, validRequestorForSendTypeReturnType)
{
	zval *handle_param = NULL, *sendType = NULL, sendType_sub, *returnType = NULL, returnType_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&sendType_sub);
	ZVAL_UNDEF(&returnType_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(sendType)
		Z_PARAM_ZVAL(returnType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &sendType, &returnType);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_valid_requestor_for_send_type_return_type(&_0, sendType, returnType));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, windowsMenu)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_windows_menu(&_0));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setWindowsMenu)
{
	zval *handle_param = NULL, *menu_param = NULL, _0, _1;
	zend_long handle, menu;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(menu)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &menu_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, menu);
	ns_nsapplication_set_windows_menu(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, arrangeInFront)
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
	ns_nsapplication_arrange_in_front(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, removeWindowsItem)
{
	zval *handle_param = NULL, *win_param = NULL, _0, _1;
	zend_long handle, win;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(win)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &win_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, win);
	ns_nsapplication_remove_windows_item(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, addWindowsItemTitleFilename)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool isFilename;
	zval title;
	zval *handle_param = NULL, *win_param = NULL, *title_param = NULL, *isFilename_param = NULL, _0, _1, _2;
	zend_long handle, win;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(win)
		Z_PARAM_STR(title)
		Z_PARAM_BOOL(isFilename)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &win_param, &title_param, &isFilename_param);
	zephir_get_strval(&title, title_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, win);
	ZVAL_BOOL(&_2, (isFilename ? 1 : 0));
	ns_nsapplication_add_windows_item_title_filename(&_0, &_1, &title, &_2);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, changeWindowsItemTitleFilename)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool isFilename;
	zval title;
	zval *handle_param = NULL, *win_param = NULL, *title_param = NULL, *isFilename_param = NULL, _0, _1, _2;
	zend_long handle, win;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(win)
		Z_PARAM_STR(title)
		Z_PARAM_BOOL(isFilename)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &win_param, &title_param, &isFilename_param);
	zephir_get_strval(&title, title_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, win);
	ZVAL_BOOL(&_2, (isFilename ? 1 : 0));
	ns_nsapplication_change_windows_item_title_filename(&_0, &_1, &title, &_2);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, updateWindowsItem)
{
	zval *handle_param = NULL, *win_param = NULL, _0, _1;
	zend_long handle, win;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(win)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &win_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, win);
	ns_nsapplication_update_windows_item(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, miniaturizeAll)
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
	ns_nsapplication_miniaturize_all(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, isFullKeyboardAccessEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsapplication_is_full_keyboard_access_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, servicesMenu)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_services_menu(&_0));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setServicesMenu)
{
	zval *handle_param = NULL, *menu_param = NULL, _0, _1;
	zend_long handle, menu;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(menu)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &menu_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, menu);
	ns_nsapplication_set_services_menu(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, registerServicesMenuSendTypesReturnTypes)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval sendTypes, returnTypes;
	zval *handle_param = NULL, *sendTypes_param = NULL, *returnTypes_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&sendTypes);
	ZVAL_UNDEF(&returnTypes);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(sendTypes)
		Z_PARAM_ARRAY(returnTypes)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &sendTypes_param, &returnTypes_param);
	zephir_get_arrval(&sendTypes, sendTypes_param);
	zephir_get_arrval(&returnTypes, returnTypes_param);
	ZVAL_LONG(&_0, handle);
	ns_nsapplication_register_services_menu_send_types_return_types(&_0, &sendTypes, &returnTypes);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, servicesProvider)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_services_provider(&_0));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, setServicesProvider)
{
	zval *handle_param = NULL, *provider_param = NULL, _0, _1;
	zend_long handle, provider;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(provider)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &provider_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, provider);
	ns_nsapplication_set_services_provider(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, orderFrontStandardAboutPanel)
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
	ns_nsapplication_order_front_standard_about_panel(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, orderFrontStandardAboutPanelWithOptions)
{
	zval *handle_param = NULL, *options = NULL, options_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&options_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &options);
	ZVAL_LONG(&_0, handle);
	ns_nsapplication_order_front_standard_about_panel_with_options(&_0, options);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, userInterfaceLayoutDirection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_user_interface_layout_direction(&_0));
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, disableRelaunchOnLogin)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsapplication_disable_relaunch_on_login(&_0);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, enableRelaunchOnLogin)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsapplication_enable_relaunch_on_login(&_0);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, registerForRemoteNotifications)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsapplication_register_for_remote_notifications(&_0);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, unregisterForRemoteNotifications)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	ns_nsapplication_unregister_for_remote_notifications(&_0);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, isRegisteredForRemoteNotifications)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = ns_nsapplication_is_registered_for_remote_notifications(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, registerForRemoteNotificationTypes)
{
	zval *handle_param = NULL, *types_param = NULL, _0, _1;
	zend_long handle, types;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(types)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &types_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, types);
	ns_nsapplication_register_for_remote_notification_types(&_0, &_1);
}

PHP_METHOD(AppKit_NS_NSApplication_NSApplication, enabledRemoteNotificationTypes)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(ns_nsapplication_enabled_remote_notification_types(&_0));
}

