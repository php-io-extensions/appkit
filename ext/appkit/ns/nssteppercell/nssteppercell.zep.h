
extern zend_class_entry *appkit_ns_nssteppercell_nssteppercell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSStepperCell_NSStepperCell);

PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, initTextCell);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, initImageCell);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, minValue);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, setMinValue);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, maxValue);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, setMaxValue);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, increment);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, setIncrement);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, valueWraps);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, setValueWraps);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, autorepeat);
PHP_METHOD(AppKit_NS_NSStepperCell_NSStepperCell, setAutorepeat);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_inittextcell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_initimagecell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_minvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_setminvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_maxvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_setmaxvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_increment, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_setincrement, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, increment, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_valuewraps, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_setvaluewraps, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueWraps, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_autorepeat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssteppercell_nssteppercell_setautorepeat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, autorepeat, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nssteppercell_nssteppercell_method_entry) {
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, initTextCell, arginfo_appkit_ns_nssteppercell_nssteppercell_inittextcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, initImageCell, arginfo_appkit_ns_nssteppercell_nssteppercell_initimagecell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, minValue, arginfo_appkit_ns_nssteppercell_nssteppercell_minvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, setMinValue, arginfo_appkit_ns_nssteppercell_nssteppercell_setminvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, maxValue, arginfo_appkit_ns_nssteppercell_nssteppercell_maxvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, setMaxValue, arginfo_appkit_ns_nssteppercell_nssteppercell_setmaxvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, increment, arginfo_appkit_ns_nssteppercell_nssteppercell_increment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, setIncrement, arginfo_appkit_ns_nssteppercell_nssteppercell_setincrement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, valueWraps, arginfo_appkit_ns_nssteppercell_nssteppercell_valuewraps, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, setValueWraps, arginfo_appkit_ns_nssteppercell_nssteppercell_setvaluewraps, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, autorepeat, arginfo_appkit_ns_nssteppercell_nssteppercell_autorepeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSStepperCell_NSStepperCell, setAutorepeat, arginfo_appkit_ns_nssteppercell_nssteppercell_setautorepeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
