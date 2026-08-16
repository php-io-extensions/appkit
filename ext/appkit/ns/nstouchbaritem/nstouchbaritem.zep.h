
extern zend_class_entry *appkit_ns_nstouchbaritem_nstouchbaritem_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTouchBarItem_NSTouchBarItem);

PHP_METHOD(AppKit_NS_NSTouchBarItem_NSTouchBarItem, create);
PHP_METHOD(AppKit_NS_NSTouchBarItem_NSTouchBarItem, wrap);
PHP_METHOD(AppKit_NS_NSTouchBarItem_NSTouchBarItem, destroy);
PHP_METHOD(AppKit_NS_NSTouchBarItem_NSTouchBarItem, nsTouchBarItem);
PHP_METHOD(AppKit_NS_NSTouchBarItem_NSTouchBarItem, getIdentifier);
PHP_METHOD(AppKit_NS_NSTouchBarItem_NSTouchBarItem, setVisibilityPriority);
PHP_METHOD(AppKit_NS_NSTouchBarItem_NSTouchBarItem, getVisibilityPriority);
PHP_METHOD(AppKit_NS_NSTouchBarItem_NSTouchBarItem, getCustomizationLabel);
PHP_METHOD(AppKit_NS_NSTouchBarItem_NSTouchBarItem, isVisible);
PHP_METHOD(AppKit_NS_NSTouchBarItem_NSTouchBarItem, getView);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbaritem_nstouchbaritem_create, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbaritem_nstouchbaritem_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTouchBarItemPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbaritem_nstouchbaritem_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbaritem_nstouchbaritem_nstouchbaritem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbaritem_nstouchbaritem_getidentifier, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbaritem_nstouchbaritem_setvisibilitypriority, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, priority, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbaritem_nstouchbaritem_getvisibilitypriority, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbaritem_nstouchbaritem_getcustomizationlabel, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbaritem_nstouchbaritem_isvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouchbaritem_nstouchbaritem_getview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstouchbaritem_nstouchbaritem_method_entry) {
	PHP_ME(AppKit_NS_NSTouchBarItem_NSTouchBarItem, create, arginfo_appkit_ns_nstouchbaritem_nstouchbaritem_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBarItem_NSTouchBarItem, wrap, arginfo_appkit_ns_nstouchbaritem_nstouchbaritem_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBarItem_NSTouchBarItem, destroy, arginfo_appkit_ns_nstouchbaritem_nstouchbaritem_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBarItem_NSTouchBarItem, nsTouchBarItem, arginfo_appkit_ns_nstouchbaritem_nstouchbaritem_nstouchbaritem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBarItem_NSTouchBarItem, getIdentifier, arginfo_appkit_ns_nstouchbaritem_nstouchbaritem_getidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBarItem_NSTouchBarItem, setVisibilityPriority, arginfo_appkit_ns_nstouchbaritem_nstouchbaritem_setvisibilitypriority, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBarItem_NSTouchBarItem, getVisibilityPriority, arginfo_appkit_ns_nstouchbaritem_nstouchbaritem_getvisibilitypriority, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBarItem_NSTouchBarItem, getCustomizationLabel, arginfo_appkit_ns_nstouchbaritem_nstouchbaritem_getcustomizationlabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBarItem_NSTouchBarItem, isVisible, arginfo_appkit_ns_nstouchbaritem_nstouchbaritem_isvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouchBarItem_NSTouchBarItem, getView, arginfo_appkit_ns_nstouchbaritem_nstouchbaritem_getview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
