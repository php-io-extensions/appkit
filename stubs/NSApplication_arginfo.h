/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 0b3bbb5f5b257a1fbf5e7e38c029ee16e92c48f5 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSApplication_sharedApplication, 0, 0, NSApplication, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSApplication_finishLaunching, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSApplication_run arginfo_class_NSApplication_finishLaunching

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSApplication_stop, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, sender, NSObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSApplication_isRunning, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSApplication_isActive arginfo_class_NSApplication_isRunning

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSApplication_activationPolicy, 0, 0, NSApplicationActivationPolicy, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSApplication_setActivationPolicy, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, activationPolicy, NSApplicationActivationPolicy, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSApplication_activate arginfo_class_NSApplication_finishLaunching

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSApplication_activateIgnoringOtherApps, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, ignoreOtherApps, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSApplication_deactivate arginfo_class_NSApplication_finishLaunching

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSApplication_nextEventMatchingMaskUntilDateInModeDequeue, 0, 4, NSEvent, 1)
	ZEND_ARG_OBJ_TYPE_MASK(0, mask, NSEventMask, MAY_BE_LONG, NULL)
	ZEND_ARG_OBJ_INFO(0, expiration, NSDate, 1)
	ZEND_ARG_TYPE_INFO(0, mode, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, deqFlag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSApplication_discardEventsMatchingMaskBeforeEvent, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, mask, NSEventMask, MAY_BE_LONG, NULL)
	ZEND_ARG_OBJ_INFO(0, lastEvent, NSEvent, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSApplication_sendEvent, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, event, NSEvent, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSApplication_postEventAtStart, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, event, NSEvent, 0)
	ZEND_ARG_TYPE_INFO(0, atStart, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSApplication_currentEvent, 0, 0, NSEvent, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NSApplication_updateWindows arginfo_class_NSApplication_finishLaunching

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSApplication_delegate, 0, 0, NSObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSApplication_setDelegate, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, delegate, NSObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSApplication_mainMenu, 0, 0, NSMenu, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSApplication_setMainMenu, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, mainMenu, NSMenu, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSApplication_keyWindow, 0, 0, NSWindow, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NSApplication_mainWindow arginfo_class_NSApplication_keyWindow

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSApplication_windows, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSApplication_orderFrontStandardAboutPanel arginfo_class_NSApplication_stop

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSApplication_orderFrontStandardAboutPanelWithOptions, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, optionsDictionary, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSApplication, sharedApplication);
ZEND_METHOD(NSApplication, finishLaunching);
ZEND_METHOD(NSApplication, run);
ZEND_METHOD(NSApplication, stop);
ZEND_METHOD(NSApplication, isRunning);
ZEND_METHOD(NSApplication, isActive);
ZEND_METHOD(NSApplication, activationPolicy);
ZEND_METHOD(NSApplication, setActivationPolicy);
ZEND_METHOD(NSApplication, activate);
ZEND_METHOD(NSApplication, activateIgnoringOtherApps);
ZEND_METHOD(NSApplication, deactivate);
ZEND_METHOD(NSApplication, nextEventMatchingMaskUntilDateInModeDequeue);
ZEND_METHOD(NSApplication, discardEventsMatchingMaskBeforeEvent);
ZEND_METHOD(NSApplication, sendEvent);
ZEND_METHOD(NSApplication, postEventAtStart);
ZEND_METHOD(NSApplication, currentEvent);
ZEND_METHOD(NSApplication, updateWindows);
ZEND_METHOD(NSApplication, delegate);
ZEND_METHOD(NSApplication, setDelegate);
ZEND_METHOD(NSApplication, mainMenu);
ZEND_METHOD(NSApplication, setMainMenu);
ZEND_METHOD(NSApplication, keyWindow);
ZEND_METHOD(NSApplication, mainWindow);
ZEND_METHOD(NSApplication, windows);
ZEND_METHOD(NSApplication, orderFrontStandardAboutPanel);
ZEND_METHOD(NSApplication, orderFrontStandardAboutPanelWithOptions);

static const zend_function_entry class_NSApplication_methods[] = {
	ZEND_ME(NSApplication, sharedApplication, arginfo_class_NSApplication_sharedApplication, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSApplication, finishLaunching, arginfo_class_NSApplication_finishLaunching, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, run, arginfo_class_NSApplication_run, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, stop, arginfo_class_NSApplication_stop, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, isRunning, arginfo_class_NSApplication_isRunning, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, isActive, arginfo_class_NSApplication_isActive, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, activationPolicy, arginfo_class_NSApplication_activationPolicy, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, setActivationPolicy, arginfo_class_NSApplication_setActivationPolicy, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, activate, arginfo_class_NSApplication_activate, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, activateIgnoringOtherApps, arginfo_class_NSApplication_activateIgnoringOtherApps, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, deactivate, arginfo_class_NSApplication_deactivate, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, nextEventMatchingMaskUntilDateInModeDequeue, arginfo_class_NSApplication_nextEventMatchingMaskUntilDateInModeDequeue, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, discardEventsMatchingMaskBeforeEvent, arginfo_class_NSApplication_discardEventsMatchingMaskBeforeEvent, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, sendEvent, arginfo_class_NSApplication_sendEvent, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, postEventAtStart, arginfo_class_NSApplication_postEventAtStart, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, currentEvent, arginfo_class_NSApplication_currentEvent, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, updateWindows, arginfo_class_NSApplication_updateWindows, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, delegate, arginfo_class_NSApplication_delegate, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, setDelegate, arginfo_class_NSApplication_setDelegate, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, mainMenu, arginfo_class_NSApplication_mainMenu, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, setMainMenu, arginfo_class_NSApplication_setMainMenu, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, keyWindow, arginfo_class_NSApplication_keyWindow, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, mainWindow, arginfo_class_NSApplication_mainWindow, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, windows, arginfo_class_NSApplication_windows, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, orderFrontStandardAboutPanel, arginfo_class_NSApplication_orderFrontStandardAboutPanel, ZEND_ACC_PUBLIC)
	ZEND_ME(NSApplication, orderFrontStandardAboutPanelWithOptions, arginfo_class_NSApplication_orderFrontStandardAboutPanelWithOptions, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_NSApplicationActivationPolicy(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("NSApplicationActivationPolicy", IS_LONG, NULL);

	zval enum_case_REGULAR_value;
	ZVAL_LONG(&enum_case_REGULAR_value, 0);
	zend_enum_add_case_cstr(class_entry, "REGULAR", &enum_case_REGULAR_value);

	zval enum_case_ACCESSORY_value;
	ZVAL_LONG(&enum_case_ACCESSORY_value, 1);
	zend_enum_add_case_cstr(class_entry, "ACCESSORY", &enum_case_ACCESSORY_value);

	zval enum_case_PROHIBITED_value;
	ZVAL_LONG(&enum_case_PROHIBITED_value, 2);
	zend_enum_add_case_cstr(class_entry, "PROHIBITED", &enum_case_PROHIBITED_value);

	return class_entry;
}

static zend_class_entry *register_class_NSApplication(zend_class_entry *class_entry_NSResponder)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSApplication", class_NSApplication_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSResponder, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
