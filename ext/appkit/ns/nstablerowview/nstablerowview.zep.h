
extern zend_class_entry *appkit_ns_nstablerowview_nstablerowview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTableRowView_NSTableRowView);

PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, initWithFrame);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, selectionHighlightStyle);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, setSelectionHighlightStyle);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, isEmphasized);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, setEmphasized);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, isGroupRowStyle);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, setGroupRowStyle);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, isSelected);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, setSelected);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, isPreviousRowSelected);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, setPreviousRowSelected);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, isNextRowSelected);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, setNextRowSelected);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, isFloating);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, setFloating);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, isTargetForDropOperation);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, setTargetForDropOperation);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, draggingDestinationFeedbackStyle);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, setDraggingDestinationFeedbackStyle);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, indentationForDropOperation);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, setIndentationForDropOperation);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, interiorBackgroundStyle);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, backgroundColor);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, setBackgroundColor);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, drawBackgroundInRect);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, drawSelectionInRect);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, drawSeparatorInRect);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, drawDraggingDestinationFeedbackInRect);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, viewAtColumn);
PHP_METHOD(AppKit_NS_NSTableRowView_NSTableRowView, numberOfColumns);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_selectionhighlightstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_setselectionhighlightstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selectionHighlightStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_isemphasized, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_setemphasized, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, emphasized, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_isgrouprowstyle, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_setgrouprowstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, groupRowStyle, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_isselected, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_setselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selected, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_ispreviousrowselected, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_setpreviousrowselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, previousRowSelected, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_isnextrowselected, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_setnextrowselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nextRowSelected, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_isfloating, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_setfloating, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, floating, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_istargetfordropoperation, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_settargetfordropoperation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetForDropOperation, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_draggingdestinationfeedbackstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_setdraggingdestinationfeedbackstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, draggingDestinationFeedbackStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_indentationfordropoperation, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_setindentationfordropoperation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indentationForDropOperation, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_interiorbackgroundstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_backgroundcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_setbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backgroundColor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_drawbackgroundinrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_drawselectioninrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_drawseparatorinrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_drawdraggingdestinationfeedbackinrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_viewatcolumn, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstablerowview_nstablerowview_numberofcolumns, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstablerowview_nstablerowview_method_entry) {
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, initWithFrame, arginfo_appkit_ns_nstablerowview_nstablerowview_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, selectionHighlightStyle, arginfo_appkit_ns_nstablerowview_nstablerowview_selectionhighlightstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, setSelectionHighlightStyle, arginfo_appkit_ns_nstablerowview_nstablerowview_setselectionhighlightstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, isEmphasized, arginfo_appkit_ns_nstablerowview_nstablerowview_isemphasized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, setEmphasized, arginfo_appkit_ns_nstablerowview_nstablerowview_setemphasized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, isGroupRowStyle, arginfo_appkit_ns_nstablerowview_nstablerowview_isgrouprowstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, setGroupRowStyle, arginfo_appkit_ns_nstablerowview_nstablerowview_setgrouprowstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, isSelected, arginfo_appkit_ns_nstablerowview_nstablerowview_isselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, setSelected, arginfo_appkit_ns_nstablerowview_nstablerowview_setselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, isPreviousRowSelected, arginfo_appkit_ns_nstablerowview_nstablerowview_ispreviousrowselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, setPreviousRowSelected, arginfo_appkit_ns_nstablerowview_nstablerowview_setpreviousrowselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, isNextRowSelected, arginfo_appkit_ns_nstablerowview_nstablerowview_isnextrowselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, setNextRowSelected, arginfo_appkit_ns_nstablerowview_nstablerowview_setnextrowselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, isFloating, arginfo_appkit_ns_nstablerowview_nstablerowview_isfloating, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, setFloating, arginfo_appkit_ns_nstablerowview_nstablerowview_setfloating, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, isTargetForDropOperation, arginfo_appkit_ns_nstablerowview_nstablerowview_istargetfordropoperation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, setTargetForDropOperation, arginfo_appkit_ns_nstablerowview_nstablerowview_settargetfordropoperation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, draggingDestinationFeedbackStyle, arginfo_appkit_ns_nstablerowview_nstablerowview_draggingdestinationfeedbackstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, setDraggingDestinationFeedbackStyle, arginfo_appkit_ns_nstablerowview_nstablerowview_setdraggingdestinationfeedbackstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, indentationForDropOperation, arginfo_appkit_ns_nstablerowview_nstablerowview_indentationfordropoperation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, setIndentationForDropOperation, arginfo_appkit_ns_nstablerowview_nstablerowview_setindentationfordropoperation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, interiorBackgroundStyle, arginfo_appkit_ns_nstablerowview_nstablerowview_interiorbackgroundstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, backgroundColor, arginfo_appkit_ns_nstablerowview_nstablerowview_backgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, setBackgroundColor, arginfo_appkit_ns_nstablerowview_nstablerowview_setbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, drawBackgroundInRect, arginfo_appkit_ns_nstablerowview_nstablerowview_drawbackgroundinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, drawSelectionInRect, arginfo_appkit_ns_nstablerowview_nstablerowview_drawselectioninrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, drawSeparatorInRect, arginfo_appkit_ns_nstablerowview_nstablerowview_drawseparatorinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, drawDraggingDestinationFeedbackInRect, arginfo_appkit_ns_nstablerowview_nstablerowview_drawdraggingdestinationfeedbackinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, viewAtColumn, arginfo_appkit_ns_nstablerowview_nstablerowview_viewatcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTableRowView_NSTableRowView, numberOfColumns, arginfo_appkit_ns_nstablerowview_nstablerowview_numberofcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
