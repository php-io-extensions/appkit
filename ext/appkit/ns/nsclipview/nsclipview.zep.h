
extern zend_class_entry *appkit_ns_nsclipview_nsclipview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSClipView_NSClipView);

PHP_METHOD(AppKit_NS_NSClipView_NSClipView, initWithFrame);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, backgroundColor);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, setBackgroundColor);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, drawsBackground);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, setDrawsBackground);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, documentView);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, setDocumentView);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, documentRect);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, documentCursor);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, setDocumentCursor);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, documentVisibleRect);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, viewFrameChanged);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, viewBoundsChanged);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, autoscroll);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, scrollToPoint);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, constrainBoundsRect);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, contentInsets);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, setContentInsets);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, automaticallyAdjustsContentInsets);
PHP_METHOD(AppKit_NS_NSClipView_NSClipView, setAutomaticallyAdjustsContentInsets);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_backgroundcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_setbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backgroundColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_drawsbackground, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_setdrawsbackground, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, drawsBackground, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_documentview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_setdocumentview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, documentView, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_documentrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_documentcursor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_setdocumentcursor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, documentCursor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_documentvisiblerect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_viewframechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, notification, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_viewboundschanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, notification, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_autoscroll, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_scrolltopoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_constrainboundsrect, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_contentinsets, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_setcontentinsets, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, right, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_automaticallyadjustscontentinsets, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsclipview_nsclipview_setautomaticallyadjustscontentinsets, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, automaticallyAdjustsContentInsets, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsclipview_nsclipview_method_entry) {
	PHP_ME(AppKit_NS_NSClipView_NSClipView, initWithFrame, arginfo_appkit_ns_nsclipview_nsclipview_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, backgroundColor, arginfo_appkit_ns_nsclipview_nsclipview_backgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, setBackgroundColor, arginfo_appkit_ns_nsclipview_nsclipview_setbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, drawsBackground, arginfo_appkit_ns_nsclipview_nsclipview_drawsbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, setDrawsBackground, arginfo_appkit_ns_nsclipview_nsclipview_setdrawsbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, documentView, arginfo_appkit_ns_nsclipview_nsclipview_documentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, setDocumentView, arginfo_appkit_ns_nsclipview_nsclipview_setdocumentview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, documentRect, arginfo_appkit_ns_nsclipview_nsclipview_documentrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, documentCursor, arginfo_appkit_ns_nsclipview_nsclipview_documentcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, setDocumentCursor, arginfo_appkit_ns_nsclipview_nsclipview_setdocumentcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, documentVisibleRect, arginfo_appkit_ns_nsclipview_nsclipview_documentvisiblerect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, viewFrameChanged, arginfo_appkit_ns_nsclipview_nsclipview_viewframechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, viewBoundsChanged, arginfo_appkit_ns_nsclipview_nsclipview_viewboundschanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, autoscroll, arginfo_appkit_ns_nsclipview_nsclipview_autoscroll, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, scrollToPoint, arginfo_appkit_ns_nsclipview_nsclipview_scrolltopoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, constrainBoundsRect, arginfo_appkit_ns_nsclipview_nsclipview_constrainboundsrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, contentInsets, arginfo_appkit_ns_nsclipview_nsclipview_contentinsets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, setContentInsets, arginfo_appkit_ns_nsclipview_nsclipview_setcontentinsets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, automaticallyAdjustsContentInsets, arginfo_appkit_ns_nsclipview_nsclipview_automaticallyadjustscontentinsets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSClipView_NSClipView, setAutomaticallyAdjustsContentInsets, arginfo_appkit_ns_nsclipview_nsclipview_setautomaticallyadjustscontentinsets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
