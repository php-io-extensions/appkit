
extern zend_class_entry *appkit_ns_nspathcontrol_nspathcontrol_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPathControl_NSPathControl);

PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, create);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, destroy);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setUrlPath);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, getUrlPath);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setPathStyle);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, getPathStyle);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setEditable);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, isEditable);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setPlaceholderString);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, getPlaceholderString);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setBackgroundColor);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setAllowedTypes);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, pollChange);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_create, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_seturlpath, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_geturlpath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_setpathstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_getpathstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_seteditable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_iseditable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_setplaceholderstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, placeholder, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_getplaceholderstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_setbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_setallowedtypes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, types, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_pollchange, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nspathcontrol_nspathcontrol_method_entry) {
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, create, arginfo_appkit_ns_nspathcontrol_nspathcontrol_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, destroy, arginfo_appkit_ns_nspathcontrol_nspathcontrol_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, setUrlPath, arginfo_appkit_ns_nspathcontrol_nspathcontrol_seturlpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, getUrlPath, arginfo_appkit_ns_nspathcontrol_nspathcontrol_geturlpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, setPathStyle, arginfo_appkit_ns_nspathcontrol_nspathcontrol_setpathstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, getPathStyle, arginfo_appkit_ns_nspathcontrol_nspathcontrol_getpathstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, setEditable, arginfo_appkit_ns_nspathcontrol_nspathcontrol_seteditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, isEditable, arginfo_appkit_ns_nspathcontrol_nspathcontrol_iseditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, setPlaceholderString, arginfo_appkit_ns_nspathcontrol_nspathcontrol_setplaceholderstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, getPlaceholderString, arginfo_appkit_ns_nspathcontrol_nspathcontrol_getplaceholderstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, setBackgroundColor, arginfo_appkit_ns_nspathcontrol_nspathcontrol_setbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, setAllowedTypes, arginfo_appkit_ns_nspathcontrol_nspathcontrol_setallowedtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, pollChange, arginfo_appkit_ns_nspathcontrol_nspathcontrol_pollchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
