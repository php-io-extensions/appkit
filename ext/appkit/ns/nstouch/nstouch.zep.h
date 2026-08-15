
extern zend_class_entry *appkit_ns_nstouch_nstouch_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTouch_NSTouch);

PHP_METHOD(AppKit_NS_NSTouch_NSTouch, wrap);
PHP_METHOD(AppKit_NS_NSTouch_NSTouch, destroy);
PHP_METHOD(AppKit_NS_NSTouch_NSTouch, phase);
PHP_METHOD(AppKit_NS_NSTouch_NSTouch, type);
PHP_METHOD(AppKit_NS_NSTouch_NSTouch, isResting);
PHP_METHOD(AppKit_NS_NSTouch_NSTouch, normalizedPosition);
PHP_METHOD(AppKit_NS_NSTouch_NSTouch, deviceSize);
PHP_METHOD(AppKit_NS_NSTouch_NSTouch, locationInView);
PHP_METHOD(AppKit_NS_NSTouch_NSTouch, previousLocationInView);
PHP_METHOD(AppKit_NS_NSTouch_NSTouch, nsTouch);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouch_nstouch_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsTouchPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouch_nstouch_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, touch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouch_nstouch_phase, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, touch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouch_nstouch_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, touch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouch_nstouch_isresting, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, touch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouch_nstouch_normalizedposition, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, touch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouch_nstouch_devicesize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, touch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouch_nstouch_locationinview, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, touch, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouch_nstouch_previouslocationinview, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, touch, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstouch_nstouch_nstouch, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, touch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstouch_nstouch_method_entry) {
	PHP_ME(AppKit_NS_NSTouch_NSTouch, wrap, arginfo_appkit_ns_nstouch_nstouch_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouch_NSTouch, destroy, arginfo_appkit_ns_nstouch_nstouch_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouch_NSTouch, phase, arginfo_appkit_ns_nstouch_nstouch_phase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouch_NSTouch, type, arginfo_appkit_ns_nstouch_nstouch_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouch_NSTouch, isResting, arginfo_appkit_ns_nstouch_nstouch_isresting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouch_NSTouch, normalizedPosition, arginfo_appkit_ns_nstouch_nstouch_normalizedposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouch_NSTouch, deviceSize, arginfo_appkit_ns_nstouch_nstouch_devicesize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouch_NSTouch, locationInView, arginfo_appkit_ns_nstouch_nstouch_locationinview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouch_NSTouch, previousLocationInView, arginfo_appkit_ns_nstouch_nstouch_previouslocationinview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTouch_NSTouch, nsTouch, arginfo_appkit_ns_nstouch_nstouch_nstouch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
