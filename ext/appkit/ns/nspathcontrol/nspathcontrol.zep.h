
extern zend_class_entry *appkit_ns_nspathcontrol_nspathcontrol_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSPathControl_NSPathControl);

PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, initWithFrame);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, isEditable);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setEditable);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, allowedTypes);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setAllowedTypes);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, placeholderString);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setPlaceholderString);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, Url);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setURL);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, doubleAction);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setDoubleAction);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, pathStyle);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setPathStyle);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, clickedPathItem);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, pathItems);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setPathItems);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, backgroundColor);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setBackgroundColor);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, delegate);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setDelegate);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setDraggingSourceOperationMaskForLocal);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, menu);
PHP_METHOD(AppKit_NS_NSPathControl_NSPathControl, setMenu);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_iseditable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_seteditable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_allowedtypes, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_setallowedtypes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, allowedTypes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_placeholderstring, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_setplaceholderstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, placeholderString)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_url, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_seturl, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, Url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_doubleaction, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_setdoubleaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, doubleAction)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_pathstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_setpathstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pathStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_clickedpathitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_pathitems, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_setpathitems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, pathItems, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_backgroundcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_setbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backgroundColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_setdraggingsourceoperationmaskforlocal, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mask, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, isLocal, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_menu, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nspathcontrol_nspathcontrol_setmenu, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nspathcontrol_nspathcontrol_method_entry) {
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, initWithFrame, arginfo_appkit_ns_nspathcontrol_nspathcontrol_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, isEditable, arginfo_appkit_ns_nspathcontrol_nspathcontrol_iseditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, setEditable, arginfo_appkit_ns_nspathcontrol_nspathcontrol_seteditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, allowedTypes, arginfo_appkit_ns_nspathcontrol_nspathcontrol_allowedtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, setAllowedTypes, arginfo_appkit_ns_nspathcontrol_nspathcontrol_setallowedtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, placeholderString, arginfo_appkit_ns_nspathcontrol_nspathcontrol_placeholderstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, setPlaceholderString, arginfo_appkit_ns_nspathcontrol_nspathcontrol_setplaceholderstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, Url, arginfo_appkit_ns_nspathcontrol_nspathcontrol_url, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, setURL, arginfo_appkit_ns_nspathcontrol_nspathcontrol_seturl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, doubleAction, arginfo_appkit_ns_nspathcontrol_nspathcontrol_doubleaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, setDoubleAction, arginfo_appkit_ns_nspathcontrol_nspathcontrol_setdoubleaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, pathStyle, arginfo_appkit_ns_nspathcontrol_nspathcontrol_pathstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, setPathStyle, arginfo_appkit_ns_nspathcontrol_nspathcontrol_setpathstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, clickedPathItem, arginfo_appkit_ns_nspathcontrol_nspathcontrol_clickedpathitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, pathItems, arginfo_appkit_ns_nspathcontrol_nspathcontrol_pathitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, setPathItems, arginfo_appkit_ns_nspathcontrol_nspathcontrol_setpathitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, backgroundColor, arginfo_appkit_ns_nspathcontrol_nspathcontrol_backgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, setBackgroundColor, arginfo_appkit_ns_nspathcontrol_nspathcontrol_setbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, delegate, arginfo_appkit_ns_nspathcontrol_nspathcontrol_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, setDelegate, arginfo_appkit_ns_nspathcontrol_nspathcontrol_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, setDraggingSourceOperationMaskForLocal, arginfo_appkit_ns_nspathcontrol_nspathcontrol_setdraggingsourceoperationmaskforlocal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, menu, arginfo_appkit_ns_nspathcontrol_nspathcontrol_menu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSPathControl_NSPathControl, setMenu, arginfo_appkit_ns_nspathcontrol_nspathcontrol_setmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
