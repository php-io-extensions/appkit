
extern zend_class_entry *appkit_ns_nstextview_nstextview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTextView_NSTextView);

PHP_METHOD(AppKit_NS_NSTextView_NSTextView, create);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, destroy);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, setString);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, getString);
PHP_METHOD(AppKit_NS_NSTextView_NSTextView, pollChange);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_setstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_getstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstextview_nstextview_pollchange, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstextview_nstextview_method_entry) {
	PHP_ME(AppKit_NS_NSTextView_NSTextView, create, arginfo_appkit_ns_nstextview_nstextview_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, destroy, arginfo_appkit_ns_nstextview_nstextview_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, setString, arginfo_appkit_ns_nstextview_nstextview_setstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, getString, arginfo_appkit_ns_nstextview_nstextview_getstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTextView_NSTextView, pollChange, arginfo_appkit_ns_nstextview_nstextview_pollchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
