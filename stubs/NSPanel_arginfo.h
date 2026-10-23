/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 16c29cd71394d79828eb4b06385a69f77e3bb39a */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSAlert_init, 0, 0, IS_STATIC, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSAlert_messageText, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSAlert_setMessageText, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, messageText, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSAlert_informativeText arginfo_class_NSAlert_messageText

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSAlert_setInformativeText, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, informativeText, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSAlert_addButtonWithTitle, 0, 1, NSButton, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSAlert_buttons, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSAlert_beginSheetModalForWindowCompletionHandler, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, sheetWindow, NSWindow, 0)
	ZEND_ARG_OBJ_INFO(0, handler, Closure, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSAlert_window, 0, 0, NSWindow, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSSavePanel_savePanel, 0, 0, NSSavePanel, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSSavePanel_URL, 0, 0, NSURL, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NSSavePanel_directoryURL arginfo_class_NSSavePanel_URL

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSSavePanel_setDirectoryURL, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, directoryURL, NSURL, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_NSSavePanel_nameFieldStringValue arginfo_class_NSAlert_messageText

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSSavePanel_setNameFieldStringValue, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, nameFieldStringValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSSavePanel_message arginfo_class_NSAlert_messageText

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSSavePanel_setMessage, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, message, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSSavePanel_beginSheetModalForWindowCompletionHandler, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, window, NSWindow, 0)
	ZEND_ARG_TYPE_INFO(0, handler, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_NSOpenPanel_openPanel, 0, 0, NSOpenPanel, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSOpenPanel_URLs arginfo_class_NSAlert_buttons

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSOpenPanel_canChooseFiles, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSOpenPanel_setCanChooseFiles, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, canChooseFiles, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSOpenPanel_canChooseDirectories arginfo_class_NSOpenPanel_canChooseFiles

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSOpenPanel_setCanChooseDirectories, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, canChooseDirectories, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_NSOpenPanel_allowsMultipleSelection arginfo_class_NSOpenPanel_canChooseFiles

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_NSOpenPanel_setAllowsMultipleSelection, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, allowsMultipleSelection, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(NSAlert, init);
ZEND_METHOD(NSAlert, messageText);
ZEND_METHOD(NSAlert, setMessageText);
ZEND_METHOD(NSAlert, informativeText);
ZEND_METHOD(NSAlert, setInformativeText);
ZEND_METHOD(NSAlert, addButtonWithTitle);
ZEND_METHOD(NSAlert, buttons);
ZEND_METHOD(NSAlert, beginSheetModalForWindowCompletionHandler);
ZEND_METHOD(NSAlert, window);
ZEND_METHOD(NSSavePanel, savePanel);
ZEND_METHOD(NSSavePanel, URL);
ZEND_METHOD(NSSavePanel, directoryURL);
ZEND_METHOD(NSSavePanel, setDirectoryURL);
ZEND_METHOD(NSSavePanel, nameFieldStringValue);
ZEND_METHOD(NSSavePanel, setNameFieldStringValue);
ZEND_METHOD(NSSavePanel, message);
ZEND_METHOD(NSSavePanel, setMessage);
ZEND_METHOD(NSSavePanel, beginSheetModalForWindowCompletionHandler);
ZEND_METHOD(NSOpenPanel, openPanel);
ZEND_METHOD(NSOpenPanel, URLs);
ZEND_METHOD(NSOpenPanel, canChooseFiles);
ZEND_METHOD(NSOpenPanel, setCanChooseFiles);
ZEND_METHOD(NSOpenPanel, canChooseDirectories);
ZEND_METHOD(NSOpenPanel, setCanChooseDirectories);
ZEND_METHOD(NSOpenPanel, allowsMultipleSelection);
ZEND_METHOD(NSOpenPanel, setAllowsMultipleSelection);

static const zend_function_entry class_NSAlert_methods[] = {
	ZEND_ME(NSAlert, init, arginfo_class_NSAlert_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSAlert, messageText, arginfo_class_NSAlert_messageText, ZEND_ACC_PUBLIC)
	ZEND_ME(NSAlert, setMessageText, arginfo_class_NSAlert_setMessageText, ZEND_ACC_PUBLIC)
	ZEND_ME(NSAlert, informativeText, arginfo_class_NSAlert_informativeText, ZEND_ACC_PUBLIC)
	ZEND_ME(NSAlert, setInformativeText, arginfo_class_NSAlert_setInformativeText, ZEND_ACC_PUBLIC)
	ZEND_ME(NSAlert, addButtonWithTitle, arginfo_class_NSAlert_addButtonWithTitle, ZEND_ACC_PUBLIC)
	ZEND_ME(NSAlert, buttons, arginfo_class_NSAlert_buttons, ZEND_ACC_PUBLIC)
	ZEND_ME(NSAlert, beginSheetModalForWindowCompletionHandler, arginfo_class_NSAlert_beginSheetModalForWindowCompletionHandler, ZEND_ACC_PUBLIC)
	ZEND_ME(NSAlert, window, arginfo_class_NSAlert_window, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSSavePanel_methods[] = {
	ZEND_ME(NSSavePanel, savePanel, arginfo_class_NSSavePanel_savePanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSSavePanel, URL, arginfo_class_NSSavePanel_URL, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSavePanel, directoryURL, arginfo_class_NSSavePanel_directoryURL, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSavePanel, setDirectoryURL, arginfo_class_NSSavePanel_setDirectoryURL, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSavePanel, nameFieldStringValue, arginfo_class_NSSavePanel_nameFieldStringValue, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSavePanel, setNameFieldStringValue, arginfo_class_NSSavePanel_setNameFieldStringValue, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSavePanel, message, arginfo_class_NSSavePanel_message, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSavePanel, setMessage, arginfo_class_NSSavePanel_setMessage, ZEND_ACC_PUBLIC)
	ZEND_ME(NSSavePanel, beginSheetModalForWindowCompletionHandler, arginfo_class_NSSavePanel_beginSheetModalForWindowCompletionHandler, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_NSOpenPanel_methods[] = {
	ZEND_ME(NSOpenPanel, openPanel, arginfo_class_NSOpenPanel_openPanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(NSOpenPanel, URLs, arginfo_class_NSOpenPanel_URLs, ZEND_ACC_PUBLIC)
	ZEND_ME(NSOpenPanel, canChooseFiles, arginfo_class_NSOpenPanel_canChooseFiles, ZEND_ACC_PUBLIC)
	ZEND_ME(NSOpenPanel, setCanChooseFiles, arginfo_class_NSOpenPanel_setCanChooseFiles, ZEND_ACC_PUBLIC)
	ZEND_ME(NSOpenPanel, canChooseDirectories, arginfo_class_NSOpenPanel_canChooseDirectories, ZEND_ACC_PUBLIC)
	ZEND_ME(NSOpenPanel, setCanChooseDirectories, arginfo_class_NSOpenPanel_setCanChooseDirectories, ZEND_ACC_PUBLIC)
	ZEND_ME(NSOpenPanel, allowsMultipleSelection, arginfo_class_NSOpenPanel_allowsMultipleSelection, ZEND_ACC_PUBLIC)
	ZEND_ME(NSOpenPanel, setAllowsMultipleSelection, arginfo_class_NSOpenPanel_setAllowsMultipleSelection, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_NSPanel_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("NSAlertFirstButtonReturn", NSAlertFirstButtonReturn, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSModalResponseOK", NSModalResponseOK, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NSModalResponseCancel", NSModalResponseCancel, CONST_PERSISTENT);
}

static zend_class_entry *register_class_NSPanel(zend_class_entry *class_entry_NSWindow)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSPanel", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSWindow, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSAlert(zend_class_entry *class_entry_NSObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSAlert", class_NSAlert_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSSavePanel(zend_class_entry *class_entry_NSPanel)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSSavePanel", class_NSSavePanel_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSPanel, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_NSOpenPanel(zend_class_entry *class_entry_NSSavePanel)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "NSOpenPanel", class_NSOpenPanel_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_NSSavePanel, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
