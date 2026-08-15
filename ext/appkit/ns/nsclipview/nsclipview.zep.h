
extern zend_class_entry *appkit_ns_nsclipview_nsclipview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSClipView_NSClipView);

PHP_METHOD(AppKit_NS_NSClipView_NSClipView, create);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, wrap);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, destroy);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, nsClipView);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, setDocumentView);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, documentView);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, setDrawsBackground);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, drawsBackground);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, scrollToPoint);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, setContentInsets);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, setAutomaticallyAdjustsContentInsets);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, automaticallyAdjustsContentInsets);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, documentVisibleRect);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsClipViewPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, clip, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_nsclipview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, clip, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_setdocumentview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, clip, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_documentview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, clip, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_setdrawsbackground, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, clip, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_drawsbackground, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, clip, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_scrolltopoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, clip, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_setcontentinsets, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, clip, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, right, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_setautomaticallyadjustscontentinsets, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, clip, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_automaticallyadjustscontentinsets, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, clip, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_documentvisiblerect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, clip, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsclipview_nsclipview_method_entry) {
	PHP_ME(AppKit_NS_NSClipView_NSClipView, create, arginfo_appkit_ns_nsclipview_nsclipview_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, wrap, arginfo_appkit_ns_nsclipview_nsclipview_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, destroy, arginfo_appkit_ns_nsclipview_nsclipview_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, nsClipView, arginfo_appkit_ns_nsclipview_nsclipview_nsclipview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, setDocumentView, arginfo_appkit_ns_nsclipview_nsclipview_setdocumentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, documentView, arginfo_appkit_ns_nsclipview_nsclipview_documentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, setDrawsBackground, arginfo_appkit_ns_nsclipview_nsclipview_setdrawsbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, drawsBackground, arginfo_appkit_ns_nsclipview_nsclipview_drawsbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, scrollToPoint, arginfo_appkit_ns_nsclipview_nsclipview_scrolltopoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, setContentInsets, arginfo_appkit_ns_nsclipview_nsclipview_setcontentinsets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, setAutomaticallyAdjustsContentInsets, arginfo_appkit_ns_nsclipview_nsclipview_setautomaticallyadjustscontentinsets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, automaticallyAdjustsContentInsets, arginfo_appkit_ns_nsclipview_nsclipview_automaticallyadjustscontentinsets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, documentVisibleRect, arginfo_appkit_ns_nsclipview_nsclipview_documentvisiblerect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
