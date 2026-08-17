
extern zend_class_entry *appkit_ns_nscontrol_nscontrol_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSControl_NSControl);

PHP_METHOD(AppKit_NS_NSControl_NSControl, setEnabled);
PHP_METHOD(AppKit_NS_NSControl_NSControl, isEnabled);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setStringValue);
PHP_METHOD(AppKit_NS_NSControl_NSControl, getStringValue);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setIntValue);
PHP_METHOD(AppKit_NS_NSControl_NSControl, getIntValue);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setTag);
PHP_METHOD(AppKit_NS_NSControl_NSControl, getTag);
PHP_METHOD(AppKit_NS_NSControl_NSControl, performClick);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setContinuous);
PHP_METHOD(AppKit_NS_NSControl_NSControl, isContinuous);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setState);
PHP_METHOD(AppKit_NS_NSControl_NSControl, getState);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setControlSize);
PHP_METHOD(AppKit_NS_NSControl_NSControl, getControlSize);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setAlignment);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setFont);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setstringvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_getstringvalue, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setintvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_getintvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_settag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_gettag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_performclick, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setcontinuous, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, continuous, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_iscontinuous, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_getstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setcontrolsize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_getcontrolsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setfont, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscontrol_nscontrol_method_entry) {
	PHP_ME(AppKit_NS_NSControl_NSControl, setEnabled, arginfo_appkit_ns_nscontrol_nscontrol_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, isEnabled, arginfo_appkit_ns_nscontrol_nscontrol_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setStringValue, arginfo_appkit_ns_nscontrol_nscontrol_setstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, getStringValue, arginfo_appkit_ns_nscontrol_nscontrol_getstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setIntValue, arginfo_appkit_ns_nscontrol_nscontrol_setintvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, getIntValue, arginfo_appkit_ns_nscontrol_nscontrol_getintvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setTag, arginfo_appkit_ns_nscontrol_nscontrol_settag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, getTag, arginfo_appkit_ns_nscontrol_nscontrol_gettag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, performClick, arginfo_appkit_ns_nscontrol_nscontrol_performclick, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setContinuous, arginfo_appkit_ns_nscontrol_nscontrol_setcontinuous, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, isContinuous, arginfo_appkit_ns_nscontrol_nscontrol_iscontinuous, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setState, arginfo_appkit_ns_nscontrol_nscontrol_setstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, getState, arginfo_appkit_ns_nscontrol_nscontrol_getstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setControlSize, arginfo_appkit_ns_nscontrol_nscontrol_setcontrolsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, getControlSize, arginfo_appkit_ns_nscontrol_nscontrol_getcontrolsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setAlignment, arginfo_appkit_ns_nscontrol_nscontrol_setalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setFont, arginfo_appkit_ns_nscontrol_nscontrol_setfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
