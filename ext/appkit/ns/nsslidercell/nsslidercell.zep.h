
extern zend_class_entry *appkit_ns_nsslidercell_nsslidercell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSliderCell_NSSliderCell);

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, createText);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, wrap);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, destroy);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, nsSliderCell);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setTitle);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, getTitle);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setState);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, getState);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setEnabled);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, isEnabled);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setTag);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, getTag);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setMinValue);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, getMinValue);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setMaxValue);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, getMaxValue);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setAltIncrementValue);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, getAltIncrementValue);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setSliderType);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, getSliderType);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setVertical);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, isVertical);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setNumberOfTickMarks);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, getNumberOfTickMarks);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setTickMarkPosition);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, getTickMarkPosition);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setAllowsTickMarkValuesOnly);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, allowsTickMarkValuesOnly);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, tickMarkValueAtIndex);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, closestTickMarkValueToValue);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_createtext, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_wrap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsSliderCellPtr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_nsslidercell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_gettitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_setstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_getstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_settag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_gettag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_setminvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_getminvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_setmaxvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_getmaxvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_setaltincrementvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_getaltincrementvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_setslidertype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_getslidertype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_setvertical, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_isvertical, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_setnumberoftickmarks, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_getnumberoftickmarks, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_settickmarkposition, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_gettickmarkposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_setallowstickmarkvaluesonly, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_allowstickmarkvaluesonly, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_tickmarkvalueatindex, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_closesttickmarkvaluetovalue, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsslidercell_nsslidercell_method_entry) {
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, createText, arginfo_appkit_ns_nsslidercell_nsslidercell_createtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, wrap, arginfo_appkit_ns_nsslidercell_nsslidercell_wrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, destroy, arginfo_appkit_ns_nsslidercell_nsslidercell_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, nsSliderCell, arginfo_appkit_ns_nsslidercell_nsslidercell_nsslidercell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, setTitle, arginfo_appkit_ns_nsslidercell_nsslidercell_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, getTitle, arginfo_appkit_ns_nsslidercell_nsslidercell_gettitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, setState, arginfo_appkit_ns_nsslidercell_nsslidercell_setstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, getState, arginfo_appkit_ns_nsslidercell_nsslidercell_getstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, setEnabled, arginfo_appkit_ns_nsslidercell_nsslidercell_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, isEnabled, arginfo_appkit_ns_nsslidercell_nsslidercell_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, setTag, arginfo_appkit_ns_nsslidercell_nsslidercell_settag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, getTag, arginfo_appkit_ns_nsslidercell_nsslidercell_gettag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, setMinValue, arginfo_appkit_ns_nsslidercell_nsslidercell_setminvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, getMinValue, arginfo_appkit_ns_nsslidercell_nsslidercell_getminvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, setMaxValue, arginfo_appkit_ns_nsslidercell_nsslidercell_setmaxvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, getMaxValue, arginfo_appkit_ns_nsslidercell_nsslidercell_getmaxvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, setAltIncrementValue, arginfo_appkit_ns_nsslidercell_nsslidercell_setaltincrementvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, getAltIncrementValue, arginfo_appkit_ns_nsslidercell_nsslidercell_getaltincrementvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, setSliderType, arginfo_appkit_ns_nsslidercell_nsslidercell_setslidertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, getSliderType, arginfo_appkit_ns_nsslidercell_nsslidercell_getslidertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, setVertical, arginfo_appkit_ns_nsslidercell_nsslidercell_setvertical, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, isVertical, arginfo_appkit_ns_nsslidercell_nsslidercell_isvertical, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, setNumberOfTickMarks, arginfo_appkit_ns_nsslidercell_nsslidercell_setnumberoftickmarks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, getNumberOfTickMarks, arginfo_appkit_ns_nsslidercell_nsslidercell_getnumberoftickmarks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, setTickMarkPosition, arginfo_appkit_ns_nsslidercell_nsslidercell_settickmarkposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, getTickMarkPosition, arginfo_appkit_ns_nsslidercell_nsslidercell_gettickmarkposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, setAllowsTickMarkValuesOnly, arginfo_appkit_ns_nsslidercell_nsslidercell_setallowstickmarkvaluesonly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, allowsTickMarkValuesOnly, arginfo_appkit_ns_nsslidercell_nsslidercell_allowstickmarkvaluesonly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, tickMarkValueAtIndex, arginfo_appkit_ns_nsslidercell_nsslidercell_tickmarkvalueatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, closestTickMarkValueToValue, arginfo_appkit_ns_nsslidercell_nsslidercell_closesttickmarkvaluetovalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
