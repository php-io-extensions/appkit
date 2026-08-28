
extern zend_class_entry *appkit_ns_nssplitview_nssplitview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSSplitView_NSSplitView);

PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, initWithFrame);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, isVertical);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, setVertical);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, dividerStyle);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, setDividerStyle);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, autosaveName);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, setAutosaveName);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, delegate);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, setDelegate);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, drawDividerInRect);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, dividerColor);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, dividerThickness);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, adjustSubviews);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, isSubviewCollapsed);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, minPossiblePositionOfDividerAtIndex);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, maxPossiblePositionOfDividerAtIndex);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, setPositionOfDividerAtIndex);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, holdingPriorityForSubviewAtIndex);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, setHoldingPriorityForSubviewAtIndex);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, arrangesAllSubviews);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, setArrangesAllSubviews);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, arrangedSubviews);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, addArrangedSubview);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, insertArrangedSubviewAtIndex);
PHP_METHOD(AppKit_NS_NSSplitView_NSSplitView, removeArrangedSubview);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_isvertical, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_setvertical, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vertical, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_dividerstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_setdividerstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dividerStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_autosavename, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_setautosavename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, autosaveName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_drawdividerinrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_dividercolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_dividerthickness, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_adjustsubviews, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_issubviewcollapsed, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, subview, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_minpossiblepositionofdivideratindex, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dividerIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_maxpossiblepositionofdivideratindex, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dividerIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_setpositionofdivideratindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dividerIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_holdingpriorityforsubviewatindex, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, subviewIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_setholdingpriorityforsubviewatindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, priority, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, subviewIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_arrangesallsubviews, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_setarrangesallsubviews, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arrangesAllSubviews, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_arrangedsubviews, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_addarrangedsubview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_insertarrangedsubviewatindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nssplitview_nssplitview_removearrangedsubview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nssplitview_nssplitview_method_entry) {
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, initWithFrame, arginfo_appkit_ns_nssplitview_nssplitview_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, isVertical, arginfo_appkit_ns_nssplitview_nssplitview_isvertical, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, setVertical, arginfo_appkit_ns_nssplitview_nssplitview_setvertical, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, dividerStyle, arginfo_appkit_ns_nssplitview_nssplitview_dividerstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, setDividerStyle, arginfo_appkit_ns_nssplitview_nssplitview_setdividerstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, autosaveName, arginfo_appkit_ns_nssplitview_nssplitview_autosavename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, setAutosaveName, arginfo_appkit_ns_nssplitview_nssplitview_setautosavename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, delegate, arginfo_appkit_ns_nssplitview_nssplitview_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, setDelegate, arginfo_appkit_ns_nssplitview_nssplitview_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, drawDividerInRect, arginfo_appkit_ns_nssplitview_nssplitview_drawdividerinrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, dividerColor, arginfo_appkit_ns_nssplitview_nssplitview_dividercolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, dividerThickness, arginfo_appkit_ns_nssplitview_nssplitview_dividerthickness, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, adjustSubviews, arginfo_appkit_ns_nssplitview_nssplitview_adjustsubviews, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, isSubviewCollapsed, arginfo_appkit_ns_nssplitview_nssplitview_issubviewcollapsed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, minPossiblePositionOfDividerAtIndex, arginfo_appkit_ns_nssplitview_nssplitview_minpossiblepositionofdivideratindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, maxPossiblePositionOfDividerAtIndex, arginfo_appkit_ns_nssplitview_nssplitview_maxpossiblepositionofdivideratindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, setPositionOfDividerAtIndex, arginfo_appkit_ns_nssplitview_nssplitview_setpositionofdivideratindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, holdingPriorityForSubviewAtIndex, arginfo_appkit_ns_nssplitview_nssplitview_holdingpriorityforsubviewatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, setHoldingPriorityForSubviewAtIndex, arginfo_appkit_ns_nssplitview_nssplitview_setholdingpriorityforsubviewatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, arrangesAllSubviews, arginfo_appkit_ns_nssplitview_nssplitview_arrangesallsubviews, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, setArrangesAllSubviews, arginfo_appkit_ns_nssplitview_nssplitview_setarrangesallsubviews, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, arrangedSubviews, arginfo_appkit_ns_nssplitview_nssplitview_arrangedsubviews, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, addArrangedSubview, arginfo_appkit_ns_nssplitview_nssplitview_addarrangedsubview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, insertArrangedSubviewAtIndex, arginfo_appkit_ns_nssplitview_nssplitview_insertarrangedsubviewatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSSplitView_NSSplitView, removeArrangedSubview, arginfo_appkit_ns_nssplitview_nssplitview_removearrangedsubview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
