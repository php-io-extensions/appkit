
extern zend_class_entry *appkit_ns_nsslidercell_nsslidercell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSliderCell_NSSliderCell);

PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, initTextCell);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, initImageCell);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, prefersTrackingUntilMouseUp);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, minValue);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setMinValue);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, maxValue);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setMaxValue);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, altIncrementValue);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setAltIncrementValue);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, sliderType);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setSliderType);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, isVertical);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setVertical);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, trackRect);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, knobThickness);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, knobRectFlipped);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, barRectFlipped);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, drawKnobRect);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, drawKnob);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, drawBarInsideFlipped);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, numberOfTickMarks);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setNumberOfTickMarks);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, tickMarkPosition);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setTickMarkPosition);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, allowsTickMarkValuesOnly);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, setAllowsTickMarkValuesOnly);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, tickMarkValueAtIndex);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, rectOfTickMarkAtIndex);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, indexOfTickMarkAtPoint);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, closestTickMarkValueToValue);
PHP_METHOD(AppKit_NS_NSSliderCell_NSSliderCell, drawTickMarks);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_inittextcell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_initimagecell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_preferstrackinguntilmouseup, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_minvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_setminvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_maxvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_setmaxvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_altincrementvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_setaltincrementvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, altIncrementValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_slidertype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_setslidertype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sliderType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_isvertical, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_setvertical, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vertical, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_trackrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_knobthickness, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_knobrectflipped, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flipped, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_barrectflipped, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flipped, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_drawknobrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_drawknob, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_drawbarinsideflipped, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, flipped, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_numberoftickmarks, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_setnumberoftickmarks, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, numberOfTickMarks, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_tickmarkposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_settickmarkposition, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tickMarkPosition, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_allowstickmarkvaluesonly, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_setallowstickmarkvaluesonly, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsTickMarkValuesOnly, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_tickmarkvalueatindex, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_rectoftickmarkatindex, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_indexoftickmarkatpoint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_closesttickmarkvaluetovalue, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nsslidercell_nsslidercell_drawtickmarks, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nsslidercell_nsslidercell_method_entry) {
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, initTextCell, arginfo_appkit_ns_nsslidercell_nsslidercell_inittextcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, initImageCell, arginfo_appkit_ns_nsslidercell_nsslidercell_initimagecell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, prefersTrackingUntilMouseUp, arginfo_appkit_ns_nsslidercell_nsslidercell_preferstrackinguntilmouseup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, minValue, arginfo_appkit_ns_nsslidercell_nsslidercell_minvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, setMinValue, arginfo_appkit_ns_nsslidercell_nsslidercell_setminvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, maxValue, arginfo_appkit_ns_nsslidercell_nsslidercell_maxvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, setMaxValue, arginfo_appkit_ns_nsslidercell_nsslidercell_setmaxvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, altIncrementValue, arginfo_appkit_ns_nsslidercell_nsslidercell_altincrementvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, setAltIncrementValue, arginfo_appkit_ns_nsslidercell_nsslidercell_setaltincrementvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, sliderType, arginfo_appkit_ns_nsslidercell_nsslidercell_slidertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, setSliderType, arginfo_appkit_ns_nsslidercell_nsslidercell_setslidertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, isVertical, arginfo_appkit_ns_nsslidercell_nsslidercell_isvertical, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, setVertical, arginfo_appkit_ns_nsslidercell_nsslidercell_setvertical, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, trackRect, arginfo_appkit_ns_nsslidercell_nsslidercell_trackrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, knobThickness, arginfo_appkit_ns_nsslidercell_nsslidercell_knobthickness, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, knobRectFlipped, arginfo_appkit_ns_nsslidercell_nsslidercell_knobrectflipped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, barRectFlipped, arginfo_appkit_ns_nsslidercell_nsslidercell_barrectflipped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, drawKnobRect, arginfo_appkit_ns_nsslidercell_nsslidercell_drawknobrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, drawKnob, arginfo_appkit_ns_nsslidercell_nsslidercell_drawknob, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, drawBarInsideFlipped, arginfo_appkit_ns_nsslidercell_nsslidercell_drawbarinsideflipped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, numberOfTickMarks, arginfo_appkit_ns_nsslidercell_nsslidercell_numberoftickmarks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, setNumberOfTickMarks, arginfo_appkit_ns_nsslidercell_nsslidercell_setnumberoftickmarks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, tickMarkPosition, arginfo_appkit_ns_nsslidercell_nsslidercell_tickmarkposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, setTickMarkPosition, arginfo_appkit_ns_nsslidercell_nsslidercell_settickmarkposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, allowsTickMarkValuesOnly, arginfo_appkit_ns_nsslidercell_nsslidercell_allowstickmarkvaluesonly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, setAllowsTickMarkValuesOnly, arginfo_appkit_ns_nsslidercell_nsslidercell_setallowstickmarkvaluesonly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, tickMarkValueAtIndex, arginfo_appkit_ns_nsslidercell_nsslidercell_tickmarkvalueatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, rectOfTickMarkAtIndex, arginfo_appkit_ns_nsslidercell_nsslidercell_rectoftickmarkatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, indexOfTickMarkAtPoint, arginfo_appkit_ns_nsslidercell_nsslidercell_indexoftickmarkatpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, closestTickMarkValueToValue, arginfo_appkit_ns_nsslidercell_nsslidercell_closesttickmarkvaluetovalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSliderCell_NSSliderCell, drawTickMarks, arginfo_appkit_ns_nsslidercell_nsslidercell_drawtickmarks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
