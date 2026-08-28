
extern zend_class_entry *appkit_ns_nsalert_nsalert_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSAlert_NSAlert);

PHP_METHOD(AppKit_NS_NSAlert_NSAlert, init);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, alertWithError);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, messageText);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, setMessageText);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, informativeText);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, setInformativeText);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, icon);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, setIcon);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, addButtonWithTitle);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, buttons);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, alertStyle);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, setAlertStyle);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, showsHelp);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, setShowsHelp);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, helpAnchor);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, setHelpAnchor);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, delegate);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, setDelegate);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, accessoryView);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, setAccessoryView);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, layout);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, runModal);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, showsSuppressionButton);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, setShowsSuppressionButton);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, suppressionButton);
PHP_METHOD(AppKit_NS_NSAlert_NSAlert, window);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_init, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_alertwitherror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_messagetext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_setmessagetext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, messageText, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_informativetext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_setinformativetext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, informativeText, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_icon, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_seticon, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_addbuttonwithtitle, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_buttons, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_alertstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_setalertstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alertStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_showshelp, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_setshowshelp, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, showsHelp, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_helpanchor, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_sethelpanchor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, helpAnchor)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_accessoryview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_setaccessoryview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, accessoryView, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_layout, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_runmodal, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_showssuppressionbutton, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_setshowssuppressionbutton, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, showsSuppressionButton, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_suppressionbutton, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsalert_nsalert_window, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsalert_nsalert_method_entry) {
	PHP_ME(AppKit_NS_NSAlert_NSAlert, init, arginfo_appkit_ns_nsalert_nsalert_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, alertWithError, arginfo_appkit_ns_nsalert_nsalert_alertwitherror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, messageText, arginfo_appkit_ns_nsalert_nsalert_messagetext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, setMessageText, arginfo_appkit_ns_nsalert_nsalert_setmessagetext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, informativeText, arginfo_appkit_ns_nsalert_nsalert_informativetext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, setInformativeText, arginfo_appkit_ns_nsalert_nsalert_setinformativetext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, icon, arginfo_appkit_ns_nsalert_nsalert_icon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, setIcon, arginfo_appkit_ns_nsalert_nsalert_seticon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, addButtonWithTitle, arginfo_appkit_ns_nsalert_nsalert_addbuttonwithtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, buttons, arginfo_appkit_ns_nsalert_nsalert_buttons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, alertStyle, arginfo_appkit_ns_nsalert_nsalert_alertstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, setAlertStyle, arginfo_appkit_ns_nsalert_nsalert_setalertstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, showsHelp, arginfo_appkit_ns_nsalert_nsalert_showshelp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, setShowsHelp, arginfo_appkit_ns_nsalert_nsalert_setshowshelp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, helpAnchor, arginfo_appkit_ns_nsalert_nsalert_helpanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, setHelpAnchor, arginfo_appkit_ns_nsalert_nsalert_sethelpanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, delegate, arginfo_appkit_ns_nsalert_nsalert_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, setDelegate, arginfo_appkit_ns_nsalert_nsalert_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, accessoryView, arginfo_appkit_ns_nsalert_nsalert_accessoryview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, setAccessoryView, arginfo_appkit_ns_nsalert_nsalert_setaccessoryview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, layout, arginfo_appkit_ns_nsalert_nsalert_layout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, runModal, arginfo_appkit_ns_nsalert_nsalert_runmodal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, showsSuppressionButton, arginfo_appkit_ns_nsalert_nsalert_showssuppressionbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, setShowsSuppressionButton, arginfo_appkit_ns_nsalert_nsalert_setshowssuppressionbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, suppressionButton, arginfo_appkit_ns_nsalert_nsalert_suppressionbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAlert_NSAlert, window, arginfo_appkit_ns_nsalert_nsalert_window, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
