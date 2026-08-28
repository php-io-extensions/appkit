
extern zend_class_entry *appkit_ns_nsslider_nsslider_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSlider_NSSlider);

PHP_METHOD(AppKit_NS_NSSlider_NSSlider, sliderType);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, setSliderType);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, minValue);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, setMinValue);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, maxValue);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, setMaxValue);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, altIncrementValue);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, setAltIncrementValue);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, knobThickness);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, acceptsFirstMouse);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, isVertical);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, setVertical);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, trackFillColor);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, setTrackFillColor);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, numberOfTickMarks);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, setNumberOfTickMarks);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, tickMarkPosition);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, setTickMarkPosition);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, allowsTickMarkValuesOnly);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, setAllowsTickMarkValuesOnly);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, tickMarkValueAtIndex);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, rectOfTickMarkAtIndex);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, indexOfTickMarkAtPoint);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, closestTickMarkValueToValue);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, sliderWithTargetAction);
PHP_METHOD(AppKit_NS_NSSlider_NSSlider, sliderWithValueMinValueMaxValueTargetAction);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_slidertype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_setslidertype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sliderType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_minvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_setminvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_maxvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_setmaxvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_altincrementvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_setaltincrementvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, altIncrementValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_knobthickness, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_acceptsfirstmouse, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_isvertical, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_setvertical, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vertical, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_trackfillcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_settrackfillcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, trackFillColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_numberoftickmarks, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_setnumberoftickmarks, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, numberOfTickMarks, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_tickmarkposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_settickmarkposition, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tickMarkPosition, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_allowstickmarkvaluesonly, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_setallowstickmarkvaluesonly, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsTickMarkValuesOnly, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_tickmarkvalueatindex, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_rectoftickmarkatindex, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_indexoftickmarkatpoint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_closesttickmarkvaluetovalue, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_sliderwithtargetaction, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_INFO(0, action)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslider_nsslider_sliderwithvalueminvaluemaxvaluetargetaction, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, minValue, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, maxValue, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_INFO(0, action)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsslider_nsslider_method_entry) {
	PHP_ME(AppKit_NS_NSSlider_NSSlider, sliderType, arginfo_appkit_ns_nsslider_nsslider_slidertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, setSliderType, arginfo_appkit_ns_nsslider_nsslider_setslidertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, minValue, arginfo_appkit_ns_nsslider_nsslider_minvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, setMinValue, arginfo_appkit_ns_nsslider_nsslider_setminvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, maxValue, arginfo_appkit_ns_nsslider_nsslider_maxvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, setMaxValue, arginfo_appkit_ns_nsslider_nsslider_setmaxvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, altIncrementValue, arginfo_appkit_ns_nsslider_nsslider_altincrementvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, setAltIncrementValue, arginfo_appkit_ns_nsslider_nsslider_setaltincrementvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, knobThickness, arginfo_appkit_ns_nsslider_nsslider_knobthickness, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, acceptsFirstMouse, arginfo_appkit_ns_nsslider_nsslider_acceptsfirstmouse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, isVertical, arginfo_appkit_ns_nsslider_nsslider_isvertical, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, setVertical, arginfo_appkit_ns_nsslider_nsslider_setvertical, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, trackFillColor, arginfo_appkit_ns_nsslider_nsslider_trackfillcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, setTrackFillColor, arginfo_appkit_ns_nsslider_nsslider_settrackfillcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, numberOfTickMarks, arginfo_appkit_ns_nsslider_nsslider_numberoftickmarks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, setNumberOfTickMarks, arginfo_appkit_ns_nsslider_nsslider_setnumberoftickmarks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, tickMarkPosition, arginfo_appkit_ns_nsslider_nsslider_tickmarkposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, setTickMarkPosition, arginfo_appkit_ns_nsslider_nsslider_settickmarkposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, allowsTickMarkValuesOnly, arginfo_appkit_ns_nsslider_nsslider_allowstickmarkvaluesonly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, setAllowsTickMarkValuesOnly, arginfo_appkit_ns_nsslider_nsslider_setallowstickmarkvaluesonly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, tickMarkValueAtIndex, arginfo_appkit_ns_nsslider_nsslider_tickmarkvalueatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, rectOfTickMarkAtIndex, arginfo_appkit_ns_nsslider_nsslider_rectoftickmarkatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, indexOfTickMarkAtPoint, arginfo_appkit_ns_nsslider_nsslider_indexoftickmarkatpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, closestTickMarkValueToValue, arginfo_appkit_ns_nsslider_nsslider_closesttickmarkvaluetovalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, sliderWithTargetAction, arginfo_appkit_ns_nsslider_nsslider_sliderwithtargetaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSlider_NSSlider, sliderWithValueMinValueMaxValueTargetAction, arginfo_appkit_ns_nsslider_nsslider_sliderwithvalueminvaluemaxvaluetargetaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
