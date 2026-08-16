
extern zend_class_entry *appkit_ns_nsaccessibilityelement_nsaccessibilityelement_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement);

PHP_METHOD(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, create);
PHP_METHOD(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, wrap);
PHP_METHOD(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, destroy);
PHP_METHOD(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, nsAccessibilityElement);
PHP_METHOD(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, addChild);
PHP_METHOD(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, setFrameInParent);
PHP_METHOD(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, frameInParent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsaccessibilityelement_nsaccessibilityelement_create, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsaccessibilityelement_nsaccessibilityelement_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsAccessibilityElementPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsaccessibilityelement_nsaccessibilityelement_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, element, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsaccessibilityelement_nsaccessibilityelement_nsaccessibilityelement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, element, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsaccessibilityelement_nsaccessibilityelement_addchild, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, element, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsaccessibilityelement_nsaccessibilityelement_setframeinparent, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, element, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsaccessibilityelement_nsaccessibilityelement_frameinparent, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, element, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsaccessibilityelement_nsaccessibilityelement_method_entry) {
	PHP_ME(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, create, arginfo_appkit_ns_nsaccessibilityelement_nsaccessibilityelement_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, wrap, arginfo_appkit_ns_nsaccessibilityelement_nsaccessibilityelement_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, destroy, arginfo_appkit_ns_nsaccessibilityelement_nsaccessibilityelement_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, nsAccessibilityElement, arginfo_appkit_ns_nsaccessibilityelement_nsaccessibilityelement_nsaccessibilityelement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, addChild, arginfo_appkit_ns_nsaccessibilityelement_nsaccessibilityelement_addchild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, setFrameInParent, arginfo_appkit_ns_nsaccessibilityelement_nsaccessibilityelement_setframeinparent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSAccessibilityElement_NSAccessibilityElement, frameInParent, arginfo_appkit_ns_nsaccessibilityelement_nsaccessibilityelement_frameinparent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
