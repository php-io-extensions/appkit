
extern zend_class_entry *appkit_ns_nsdraggingitem_nsdraggingitem_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSDraggingItem_NSDraggingItem);

PHP_METHOD(AppKit_NS_NSDraggingItem_NSDraggingItem, createWithString);
PHP_METHOD(AppKit_NS_NSDraggingItem_NSDraggingItem, wrap);
PHP_METHOD(AppKit_NS_NSDraggingItem_NSDraggingItem, destroy);
PHP_METHOD(AppKit_NS_NSDraggingItem_NSDraggingItem, nsDraggingItem);
PHP_METHOD(AppKit_NS_NSDraggingItem_NSDraggingItem, getItem);
PHP_METHOD(AppKit_NS_NSDraggingItem_NSDraggingItem, getDraggingFrame);
PHP_METHOD(AppKit_NS_NSDraggingItem_NSDraggingItem, setDraggingFrame);
PHP_METHOD(AppKit_NS_NSDraggingItem_NSDraggingItem, setDraggingFrameContents);
PHP_METHOD(AppKit_NS_NSDraggingItem_NSDraggingItem, imageComponentsCount);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdraggingitem_nsdraggingitem_createwithstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdraggingitem_nsdraggingitem_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsDraggingItemPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdraggingitem_nsdraggingitem_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdraggingitem_nsdraggingitem_nsdraggingitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdraggingitem_nsdraggingitem_getitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdraggingitem_nsdraggingitem_getdraggingframe, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdraggingitem_nsdraggingitem_setdraggingframe, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdraggingitem_nsdraggingitem_setdraggingframecontents, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, contentsPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsdraggingitem_nsdraggingitem_imagecomponentscount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsdraggingitem_nsdraggingitem_method_entry) {
	PHP_ME(AppKit_NS_NSDraggingItem_NSDraggingItem, createWithString, arginfo_appkit_ns_nsdraggingitem_nsdraggingitem_createwithstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDraggingItem_NSDraggingItem, wrap, arginfo_appkit_ns_nsdraggingitem_nsdraggingitem_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDraggingItem_NSDraggingItem, destroy, arginfo_appkit_ns_nsdraggingitem_nsdraggingitem_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDraggingItem_NSDraggingItem, nsDraggingItem, arginfo_appkit_ns_nsdraggingitem_nsdraggingitem_nsdraggingitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDraggingItem_NSDraggingItem, getItem, arginfo_appkit_ns_nsdraggingitem_nsdraggingitem_getitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDraggingItem_NSDraggingItem, getDraggingFrame, arginfo_appkit_ns_nsdraggingitem_nsdraggingitem_getdraggingframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDraggingItem_NSDraggingItem, setDraggingFrame, arginfo_appkit_ns_nsdraggingitem_nsdraggingitem_setdraggingframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDraggingItem_NSDraggingItem, setDraggingFrameContents, arginfo_appkit_ns_nsdraggingitem_nsdraggingitem_setdraggingframecontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSDraggingItem_NSDraggingItem, imageComponentsCount, arginfo_appkit_ns_nsdraggingitem_nsdraggingitem_imagecomponentscount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
