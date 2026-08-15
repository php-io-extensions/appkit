
extern zend_class_entry *appkit_ns_nssteppercell_nssteppercell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSStepperCell_NSStepperCell);

PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, createText);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, wrap);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, destroy);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, nsStepperCell);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, setTitle);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, getTitle);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, setState);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, getState);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, setEnabled);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, isEnabled);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, setTag);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, getTag);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, setMinValue);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, getMinValue);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, setMaxValue);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, getMaxValue);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, setIncrement);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, getIncrement);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, setValueWraps);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, valueWraps);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, setAutorepeat);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, autorepeat);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_createtext, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsStepperCellPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_nssteppercell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_gettitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_setstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_getstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_settag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_gettag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_setminvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_getminvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_setmaxvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_getmaxvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_setincrement, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_getincrement, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_setvaluewraps, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_valuewraps, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_setautorepeat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_autorepeat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nssteppercell_nssteppercell_method_entry) {
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, createText, arginfo_appkit_ns_nssteppercell_nssteppercell_createtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, wrap, arginfo_appkit_ns_nssteppercell_nssteppercell_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, destroy, arginfo_appkit_ns_nssteppercell_nssteppercell_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, nsStepperCell, arginfo_appkit_ns_nssteppercell_nssteppercell_nssteppercell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, setTitle, arginfo_appkit_ns_nssteppercell_nssteppercell_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, getTitle, arginfo_appkit_ns_nssteppercell_nssteppercell_gettitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, setState, arginfo_appkit_ns_nssteppercell_nssteppercell_setstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, getState, arginfo_appkit_ns_nssteppercell_nssteppercell_getstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, setEnabled, arginfo_appkit_ns_nssteppercell_nssteppercell_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, isEnabled, arginfo_appkit_ns_nssteppercell_nssteppercell_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, setTag, arginfo_appkit_ns_nssteppercell_nssteppercell_settag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, getTag, arginfo_appkit_ns_nssteppercell_nssteppercell_gettag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, setMinValue, arginfo_appkit_ns_nssteppercell_nssteppercell_setminvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, getMinValue, arginfo_appkit_ns_nssteppercell_nssteppercell_getminvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, setMaxValue, arginfo_appkit_ns_nssteppercell_nssteppercell_setmaxvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, getMaxValue, arginfo_appkit_ns_nssteppercell_nssteppercell_getmaxvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, setIncrement, arginfo_appkit_ns_nssteppercell_nssteppercell_setincrement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, getIncrement, arginfo_appkit_ns_nssteppercell_nssteppercell_getincrement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, setValueWraps, arginfo_appkit_ns_nssteppercell_nssteppercell_setvaluewraps, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, valueWraps, arginfo_appkit_ns_nssteppercell_nssteppercell_valuewraps, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, setAutorepeat, arginfo_appkit_ns_nssteppercell_nssteppercell_setautorepeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, autorepeat, arginfo_appkit_ns_nssteppercell_nssteppercell_autorepeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
