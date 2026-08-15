
extern zend_class_entry *appkit_ns_nsscrollview_nsscrollview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSScrollView_NSScrollView);

PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, create);
PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, destroy);
PHP_METHOD(AppKit_NS_NSScrollView_NSScrollView, setDocumentView);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrollview_nsscrollview_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrollview_nsscrollview_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, scroll, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsscrollview_nsscrollview_setdocumentview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, scroll, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsscrollview_nsscrollview_method_entry) {
	PHP_ME(AppKit_NS_NSScrollView_NSScrollView, create, arginfo_appkit_ns_nsscrollview_nsscrollview_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrollView_NSScrollView, destroy, arginfo_appkit_ns_nsscrollview_nsscrollview_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSScrollView_NSScrollView, setDocumentView, arginfo_appkit_ns_nsscrollview_nsscrollview_setdocumentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
