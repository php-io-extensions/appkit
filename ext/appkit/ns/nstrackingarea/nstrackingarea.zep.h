
extern zend_class_entry *appkit_ns_nstrackingarea_nstrackingarea_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTrackingArea_NSTrackingArea);

PHP_METHOD(AppKit_NS_NSTrackingArea_NSTrackingArea, create);
PHP_METHOD(AppKit_NS_NSTrackingArea_NSTrackingArea, destroy);
PHP_METHOD(AppKit_NS_NSTrackingArea_NSTrackingArea, addToView);
PHP_METHOD(AppKit_NS_NSTrackingArea_NSTrackingArea, removeFromView);
PHP_METHOD(AppKit_NS_NSTrackingArea_NSTrackingArea, rect);
PHP_METHOD(AppKit_NS_NSTrackingArea_NSTrackingArea, options);
PHP_METHOD(AppKit_NS_NSTrackingArea_NSTrackingArea, nsTrackingArea);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstrackingarea_nstrackingarea_create, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstrackingarea_nstrackingarea_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstrackingarea_nstrackingarea_addtoview, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstrackingarea_nstrackingarea_removefromview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstrackingarea_nstrackingarea_rect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstrackingarea_nstrackingarea_options, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstrackingarea_nstrackingarea_nstrackingarea, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstrackingarea_nstrackingarea_method_entry) {
	PHP_ME(AppKit_NS_NSTrackingArea_NSTrackingArea, create, arginfo_appkit_ns_nstrackingarea_nstrackingarea_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTrackingArea_NSTrackingArea, destroy, arginfo_appkit_ns_nstrackingarea_nstrackingarea_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTrackingArea_NSTrackingArea, addToView, arginfo_appkit_ns_nstrackingarea_nstrackingarea_addtoview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTrackingArea_NSTrackingArea, removeFromView, arginfo_appkit_ns_nstrackingarea_nstrackingarea_removefromview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTrackingArea_NSTrackingArea, rect, arginfo_appkit_ns_nstrackingarea_nstrackingarea_rect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTrackingArea_NSTrackingArea, options, arginfo_appkit_ns_nstrackingarea_nstrackingarea_options, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTrackingArea_NSTrackingArea, nsTrackingArea, arginfo_appkit_ns_nstrackingarea_nstrackingarea_nstrackingarea, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
