
extern zend_class_entry *appkit_ns_nscontrol_nscontrol_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSControl_NSControl);

PHP_METHOD(AppKit_NS_NSControl_NSControl, initWithFrame);
PHP_METHOD(AppKit_NS_NSControl_NSControl, target);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setTarget);
PHP_METHOD(AppKit_NS_NSControl_NSControl, action);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setAction);
PHP_METHOD(AppKit_NS_NSControl_NSControl, tag);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setTag);
PHP_METHOD(AppKit_NS_NSControl_NSControl, ignoresMultiClick);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setIgnoresMultiClick);
PHP_METHOD(AppKit_NS_NSControl_NSControl, isContinuous);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setContinuous);
PHP_METHOD(AppKit_NS_NSControl_NSControl, isEnabled);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setEnabled);
PHP_METHOD(AppKit_NS_NSControl_NSControl, refusesFirstResponder);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setRefusesFirstResponder);
PHP_METHOD(AppKit_NS_NSControl_NSControl, isHighlighted);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setHighlighted);
PHP_METHOD(AppKit_NS_NSControl_NSControl, controlSize);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setControlSize);
PHP_METHOD(AppKit_NS_NSControl_NSControl, formatter);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setFormatter);
PHP_METHOD(AppKit_NS_NSControl_NSControl, objectValue);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setObjectValue);
PHP_METHOD(AppKit_NS_NSControl_NSControl, stringValue);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setStringValue);
PHP_METHOD(AppKit_NS_NSControl_NSControl, intValue);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setIntValue);
PHP_METHOD(AppKit_NS_NSControl_NSControl, integerValue);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setIntegerValue);
PHP_METHOD(AppKit_NS_NSControl_NSControl, floatValue);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setFloatValue);
PHP_METHOD(AppKit_NS_NSControl_NSControl, doubleValue);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setDoubleValue);
PHP_METHOD(AppKit_NS_NSControl_NSControl, sizeThatFits);
PHP_METHOD(AppKit_NS_NSControl_NSControl, sizeToFit);
PHP_METHOD(AppKit_NS_NSControl_NSControl, sendActionOn);
PHP_METHOD(AppKit_NS_NSControl_NSControl, sendActionTo);
PHP_METHOD(AppKit_NS_NSControl_NSControl, takeIntValueFrom);
PHP_METHOD(AppKit_NS_NSControl_NSControl, takeFloatValueFrom);
PHP_METHOD(AppKit_NS_NSControl_NSControl, takeDoubleValueFrom);
PHP_METHOD(AppKit_NS_NSControl_NSControl, takeStringValueFrom);
PHP_METHOD(AppKit_NS_NSControl_NSControl, takeObjectValueFrom);
PHP_METHOD(AppKit_NS_NSControl_NSControl, takeIntegerValueFrom);
PHP_METHOD(AppKit_NS_NSControl_NSControl, mouseDown);
PHP_METHOD(AppKit_NS_NSControl_NSControl, performClick);
PHP_METHOD(AppKit_NS_NSControl_NSControl, font);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setFont);
PHP_METHOD(AppKit_NS_NSControl_NSControl, usesSingleLineMode);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setUsesSingleLineMode);
PHP_METHOD(AppKit_NS_NSControl_NSControl, lineBreakMode);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setLineBreakMode);
PHP_METHOD(AppKit_NS_NSControl_NSControl, alignment);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setAlignment);
PHP_METHOD(AppKit_NS_NSControl_NSControl, baseWritingDirection);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setBaseWritingDirection);
PHP_METHOD(AppKit_NS_NSControl_NSControl, allowsExpansionToolTips);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setAllowsExpansionToolTips);
PHP_METHOD(AppKit_NS_NSControl_NSControl, expansionFrameWithFrame);
PHP_METHOD(AppKit_NS_NSControl_NSControl, drawWithExpansionFrameInView);
PHP_METHOD(AppKit_NS_NSControl_NSControl, currentEditor);
PHP_METHOD(AppKit_NS_NSControl_NSControl, abortEditing);
PHP_METHOD(AppKit_NS_NSControl_NSControl, validateEditing);
PHP_METHOD(AppKit_NS_NSControl_NSControl, editWithFrameEditorDelegateEvent);
PHP_METHOD(AppKit_NS_NSControl_NSControl, selectWithFrameEditorDelegateStartLength);
PHP_METHOD(AppKit_NS_NSControl_NSControl, endEditing);
PHP_METHOD(AppKit_NS_NSControl_NSControl, cell);
PHP_METHOD(AppKit_NS_NSControl_NSControl, setCell);
PHP_METHOD(AppKit_NS_NSControl_NSControl, selectedCell);
PHP_METHOD(AppKit_NS_NSControl_NSControl, selectedTag);
PHP_METHOD(AppKit_NS_NSControl_NSControl, updateCell);
PHP_METHOD(AppKit_NS_NSControl_NSControl, updateCellInside);
PHP_METHOD(AppKit_NS_NSControl_NSControl, drawCellInside);
PHP_METHOD(AppKit_NS_NSControl_NSControl, drawCell);
PHP_METHOD(AppKit_NS_NSControl_NSControl, selectCell);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_target, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_settarget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_action, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, action)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_tag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_settag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_ignoresmulticlick, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setignoresmulticlick, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ignoresMultiClick, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_iscontinuous, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setcontinuous, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, continuous, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_refusesfirstresponder, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setrefusesfirstresponder, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, refusesFirstResponder, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_ishighlighted, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_sethighlighted, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, highlighted, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_controlsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setcontrolsize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, controlSize, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_formatter, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setformatter, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, formatter, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_objectvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setobjectvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, objectValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_stringvalue, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setstringvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stringValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_intvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setintvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, intValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_integervalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setintegervalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, integerValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_floatvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setfloatvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, floatValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_doublevalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setdoublevalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, doubleValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_sizethatfits, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_sizetofit, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_sendactionon, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mask, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_sendactionto, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, action)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_takeintvaluefrom, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_takefloatvaluefrom, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_takedoublevaluefrom, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_takestringvaluefrom, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_takeobjectvaluefrom, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_takeintegervaluefrom, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_mousedown, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_performclick, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_font, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setfont, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_usessinglelinemode, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setusessinglelinemode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usesSingleLineMode, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_linebreakmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setlinebreakmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineBreakMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_alignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_basewritingdirection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setbasewritingdirection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, baseWritingDirection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_allowsexpansiontooltips, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setallowsexpansiontooltips, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsExpansionToolTips, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_expansionframewithframe, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_drawwithexpansionframeinview, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_currenteditor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_abortediting, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_validateediting, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_editwithframeeditordelegateevent, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, textObj, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_selectwithframeeditordelegatestartlength, 0, 9, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, textObj, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_endediting, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, textObj, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_cell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_setcell, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_selectedcell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_selectedtag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_updatecell, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_updatecellinside, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_drawcellinside, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_drawcell, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscontrol_nscontrol_selectcell, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cell, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscontrol_nscontrol_method_entry) {
	PHP_ME(AppKit_NS_NSControl_NSControl, initWithFrame, arginfo_appkit_ns_nscontrol_nscontrol_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, target, arginfo_appkit_ns_nscontrol_nscontrol_target, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setTarget, arginfo_appkit_ns_nscontrol_nscontrol_settarget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, action, arginfo_appkit_ns_nscontrol_nscontrol_action, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setAction, arginfo_appkit_ns_nscontrol_nscontrol_setaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, tag, arginfo_appkit_ns_nscontrol_nscontrol_tag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setTag, arginfo_appkit_ns_nscontrol_nscontrol_settag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, ignoresMultiClick, arginfo_appkit_ns_nscontrol_nscontrol_ignoresmulticlick, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setIgnoresMultiClick, arginfo_appkit_ns_nscontrol_nscontrol_setignoresmulticlick, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, isContinuous, arginfo_appkit_ns_nscontrol_nscontrol_iscontinuous, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setContinuous, arginfo_appkit_ns_nscontrol_nscontrol_setcontinuous, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, isEnabled, arginfo_appkit_ns_nscontrol_nscontrol_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setEnabled, arginfo_appkit_ns_nscontrol_nscontrol_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, refusesFirstResponder, arginfo_appkit_ns_nscontrol_nscontrol_refusesfirstresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setRefusesFirstResponder, arginfo_appkit_ns_nscontrol_nscontrol_setrefusesfirstresponder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, isHighlighted, arginfo_appkit_ns_nscontrol_nscontrol_ishighlighted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setHighlighted, arginfo_appkit_ns_nscontrol_nscontrol_sethighlighted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, controlSize, arginfo_appkit_ns_nscontrol_nscontrol_controlsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setControlSize, arginfo_appkit_ns_nscontrol_nscontrol_setcontrolsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, formatter, arginfo_appkit_ns_nscontrol_nscontrol_formatter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setFormatter, arginfo_appkit_ns_nscontrol_nscontrol_setformatter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, objectValue, arginfo_appkit_ns_nscontrol_nscontrol_objectvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setObjectValue, arginfo_appkit_ns_nscontrol_nscontrol_setobjectvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, stringValue, arginfo_appkit_ns_nscontrol_nscontrol_stringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setStringValue, arginfo_appkit_ns_nscontrol_nscontrol_setstringvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, intValue, arginfo_appkit_ns_nscontrol_nscontrol_intvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setIntValue, arginfo_appkit_ns_nscontrol_nscontrol_setintvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, integerValue, arginfo_appkit_ns_nscontrol_nscontrol_integervalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setIntegerValue, arginfo_appkit_ns_nscontrol_nscontrol_setintegervalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, floatValue, arginfo_appkit_ns_nscontrol_nscontrol_floatvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setFloatValue, arginfo_appkit_ns_nscontrol_nscontrol_setfloatvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, doubleValue, arginfo_appkit_ns_nscontrol_nscontrol_doublevalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setDoubleValue, arginfo_appkit_ns_nscontrol_nscontrol_setdoublevalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, sizeThatFits, arginfo_appkit_ns_nscontrol_nscontrol_sizethatfits, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, sizeToFit, arginfo_appkit_ns_nscontrol_nscontrol_sizetofit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, sendActionOn, arginfo_appkit_ns_nscontrol_nscontrol_sendactionon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, sendActionTo, arginfo_appkit_ns_nscontrol_nscontrol_sendactionto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, takeIntValueFrom, arginfo_appkit_ns_nscontrol_nscontrol_takeintvaluefrom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, takeFloatValueFrom, arginfo_appkit_ns_nscontrol_nscontrol_takefloatvaluefrom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, takeDoubleValueFrom, arginfo_appkit_ns_nscontrol_nscontrol_takedoublevaluefrom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, takeStringValueFrom, arginfo_appkit_ns_nscontrol_nscontrol_takestringvaluefrom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, takeObjectValueFrom, arginfo_appkit_ns_nscontrol_nscontrol_takeobjectvaluefrom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, takeIntegerValueFrom, arginfo_appkit_ns_nscontrol_nscontrol_takeintegervaluefrom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, mouseDown, arginfo_appkit_ns_nscontrol_nscontrol_mousedown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, performClick, arginfo_appkit_ns_nscontrol_nscontrol_performclick, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, font, arginfo_appkit_ns_nscontrol_nscontrol_font, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setFont, arginfo_appkit_ns_nscontrol_nscontrol_setfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, usesSingleLineMode, arginfo_appkit_ns_nscontrol_nscontrol_usessinglelinemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setUsesSingleLineMode, arginfo_appkit_ns_nscontrol_nscontrol_setusessinglelinemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, lineBreakMode, arginfo_appkit_ns_nscontrol_nscontrol_linebreakmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setLineBreakMode, arginfo_appkit_ns_nscontrol_nscontrol_setlinebreakmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, alignment, arginfo_appkit_ns_nscontrol_nscontrol_alignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setAlignment, arginfo_appkit_ns_nscontrol_nscontrol_setalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, baseWritingDirection, arginfo_appkit_ns_nscontrol_nscontrol_basewritingdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setBaseWritingDirection, arginfo_appkit_ns_nscontrol_nscontrol_setbasewritingdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, allowsExpansionToolTips, arginfo_appkit_ns_nscontrol_nscontrol_allowsexpansiontooltips, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setAllowsExpansionToolTips, arginfo_appkit_ns_nscontrol_nscontrol_setallowsexpansiontooltips, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, expansionFrameWithFrame, arginfo_appkit_ns_nscontrol_nscontrol_expansionframewithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, drawWithExpansionFrameInView, arginfo_appkit_ns_nscontrol_nscontrol_drawwithexpansionframeinview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, currentEditor, arginfo_appkit_ns_nscontrol_nscontrol_currenteditor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, abortEditing, arginfo_appkit_ns_nscontrol_nscontrol_abortediting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, validateEditing, arginfo_appkit_ns_nscontrol_nscontrol_validateediting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, editWithFrameEditorDelegateEvent, arginfo_appkit_ns_nscontrol_nscontrol_editwithframeeditordelegateevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, selectWithFrameEditorDelegateStartLength, arginfo_appkit_ns_nscontrol_nscontrol_selectwithframeeditordelegatestartlength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, endEditing, arginfo_appkit_ns_nscontrol_nscontrol_endediting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, cell, arginfo_appkit_ns_nscontrol_nscontrol_cell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, setCell, arginfo_appkit_ns_nscontrol_nscontrol_setcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, selectedCell, arginfo_appkit_ns_nscontrol_nscontrol_selectedcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, selectedTag, arginfo_appkit_ns_nscontrol_nscontrol_selectedtag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, updateCell, arginfo_appkit_ns_nscontrol_nscontrol_updatecell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, updateCellInside, arginfo_appkit_ns_nscontrol_nscontrol_updatecellinside, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, drawCellInside, arginfo_appkit_ns_nscontrol_nscontrol_drawcellinside, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, drawCell, arginfo_appkit_ns_nscontrol_nscontrol_drawcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSControl_NSControl, selectCell, arginfo_appkit_ns_nscontrol_nscontrol_selectcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
