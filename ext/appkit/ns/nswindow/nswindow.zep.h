
extern zend_class_entry *appkit_ns_nswindow_nswindow_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSWindow_NSWindow);

PHP_METHOD(AppKit_NS_NSWindow_NSWindow, create);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, destroy);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setTitle);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, show);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, hide);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, center);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, shouldClose);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, getWidth);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, getHeight);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, contentView);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, setContentView);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, makeFirstResponder);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, screenToContent);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, nsWindow);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, tab);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, tabGroup);
PHP_METHOD(AppKit_NS_NSWindow_NSWindow, addTitlebarAccessoryViewController);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_create, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_show, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_hide, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_center, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_shouldclose, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_getwidth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_getheight, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_contentview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_setcontentview, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_makefirstresponder, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_screentocontent, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, screenX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, screenY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_nswindow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_tab, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_tabgroup, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nswindow_nswindow_addtitlebaraccessoryviewcontroller, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, controller, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nswindow_nswindow_method_entry) {
	PHP_ME(AppKit_NS_NSWindow_NSWindow, create, arginfo_appkit_ns_nswindow_nswindow_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, destroy, arginfo_appkit_ns_nswindow_nswindow_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setTitle, arginfo_appkit_ns_nswindow_nswindow_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, show, arginfo_appkit_ns_nswindow_nswindow_show, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, hide, arginfo_appkit_ns_nswindow_nswindow_hide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, center, arginfo_appkit_ns_nswindow_nswindow_center, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, shouldClose, arginfo_appkit_ns_nswindow_nswindow_shouldclose, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, getWidth, arginfo_appkit_ns_nswindow_nswindow_getwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, getHeight, arginfo_appkit_ns_nswindow_nswindow_getheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, contentView, arginfo_appkit_ns_nswindow_nswindow_contentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, setContentView, arginfo_appkit_ns_nswindow_nswindow_setcontentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, makeFirstResponder, arginfo_appkit_ns_nswindow_nswindow_makefirstresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, screenToContent, arginfo_appkit_ns_nswindow_nswindow_screentocontent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, nsWindow, arginfo_appkit_ns_nswindow_nswindow_nswindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, tab, arginfo_appkit_ns_nswindow_nswindow_tab, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, tabGroup, arginfo_appkit_ns_nswindow_nswindow_tabgroup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSWindow_NSWindow, addTitlebarAccessoryViewController, arginfo_appkit_ns_nswindow_nswindow_addtitlebaraccessoryviewcontroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
