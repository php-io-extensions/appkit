
extern zend_class_entry *appkit_ns_nsrulermarker_nsrulermarker_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSRulerMarker_NSRulerMarker);

PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, create);
PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, wrap);
PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, destroy);
PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, nsRulerMarker);
PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, setLocation);
PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, getLocation);
PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, setMovable);
PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, isMovable);
PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, setRemovable);
PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, isRemovable);
PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, thicknessRequired);
PHP_METHOD(AppKit_NS_NSRulerMarker_NSRulerMarker, isDragging);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulermarker_nsrulermarker_create, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ruler, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulermarker_nsrulermarker_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsRulerMarkerPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulermarker_nsrulermarker_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulermarker_nsrulermarker_nsrulermarker, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulermarker_nsrulermarker_setlocation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, location, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulermarker_nsrulermarker_getlocation, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulermarker_nsrulermarker_setmovable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulermarker_nsrulermarker_ismovable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulermarker_nsrulermarker_setremovable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulermarker_nsrulermarker_isremovable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulermarker_nsrulermarker_thicknessrequired, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsrulermarker_nsrulermarker_isdragging, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsrulermarker_nsrulermarker_method_entry) {
	PHP_ME(AppKit_NS_NSRulerMarker_NSRulerMarker, create, arginfo_appkit_ns_nsrulermarker_nsrulermarker_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerMarker_NSRulerMarker, wrap, arginfo_appkit_ns_nsrulermarker_nsrulermarker_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerMarker_NSRulerMarker, destroy, arginfo_appkit_ns_nsrulermarker_nsrulermarker_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerMarker_NSRulerMarker, nsRulerMarker, arginfo_appkit_ns_nsrulermarker_nsrulermarker_nsrulermarker, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerMarker_NSRulerMarker, setLocation, arginfo_appkit_ns_nsrulermarker_nsrulermarker_setlocation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerMarker_NSRulerMarker, getLocation, arginfo_appkit_ns_nsrulermarker_nsrulermarker_getlocation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerMarker_NSRulerMarker, setMovable, arginfo_appkit_ns_nsrulermarker_nsrulermarker_setmovable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerMarker_NSRulerMarker, isMovable, arginfo_appkit_ns_nsrulermarker_nsrulermarker_ismovable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerMarker_NSRulerMarker, setRemovable, arginfo_appkit_ns_nsrulermarker_nsrulermarker_setremovable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerMarker_NSRulerMarker, isRemovable, arginfo_appkit_ns_nsrulermarker_nsrulermarker_isremovable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerMarker_NSRulerMarker, thicknessRequired, arginfo_appkit_ns_nsrulermarker_nsrulermarker_thicknessrequired, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSRulerMarker_NSRulerMarker, isDragging, arginfo_appkit_ns_nsrulermarker_nsrulermarker_isdragging, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
