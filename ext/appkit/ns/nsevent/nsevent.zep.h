
extern zend_class_entry *appkit_ns_nsevent_nsevent_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSEvent_NSEvent);

PHP_METHOD(AppKit_NS_NSEvent_NSEvent, keyDown);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, mouseButtonDown);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, mousePosition);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, mouseScrollDelta);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, mouseX);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, mouseY);
PHP_METHOD(AppKit_NS_NSEvent_NSEvent, mouseScrollY);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_keydown, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, keycode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_mousebuttondown, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_mouseposition, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_mousescrolldelta, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_mousex, 0, 0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_mousey, 0, 0, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsevent_nsevent_mousescrolly, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsevent_nsevent_method_entry) {
	PHP_ME(AppKit_NS_NSEvent_NSEvent, keyDown, arginfo_appkit_ns_nsevent_nsevent_keydown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, mouseButtonDown, arginfo_appkit_ns_nsevent_nsevent_mousebuttondown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, mousePosition, arginfo_appkit_ns_nsevent_nsevent_mouseposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, mouseScrollDelta, arginfo_appkit_ns_nsevent_nsevent_mousescrolldelta, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, mouseX, arginfo_appkit_ns_nsevent_nsevent_mousex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, mouseY, arginfo_appkit_ns_nsevent_nsevent_mousey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSEvent_NSEvent, mouseScrollY, arginfo_appkit_ns_nsevent_nsevent_mousescrolly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
