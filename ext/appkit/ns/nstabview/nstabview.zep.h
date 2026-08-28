
extern zend_class_entry *appkit_ns_nstabview_nstabview_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSTabView_NSTabView);

PHP_METHOD(AppKit_NS_NSTabView_NSTabView, initWithFrame);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, selectTabViewItem);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, selectTabViewItemAtIndex);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, selectTabViewItemWithIdentifier);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, takeSelectedTabViewItemFromSender);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, selectFirstTabViewItem);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, selectLastTabViewItem);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, selectNextTabViewItem);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, selectPreviousTabViewItem);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, selectedTabViewItem);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, font);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, setFont);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, tabViewType);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, setTabViewType);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, tabPosition);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, setTabPosition);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, tabViewBorderType);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, setTabViewBorderType);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, tabViewItems);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, setTabViewItems);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, allowsTruncatedLabels);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, setAllowsTruncatedLabels);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, minimumSize);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, drawsBackground);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, setDrawsBackground);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, controlSize);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, setControlSize);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, addTabViewItem);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, insertTabViewItemAtIndex);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, removeTabViewItem);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, delegate);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, setDelegate);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, tabViewItemAtPoint);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, contentRect);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, numberOfTabViewItems);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, indexOfTabViewItem);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, tabViewItemAtIndex);
PHP_METHOD(AppKit_NS_NSTabView_NSTabView, indexOfTabViewItemWithIdentifier);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_selecttabviewitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tabViewItem, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_selecttabviewitematindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_selecttabviewitemwithidentifier, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_takeselectedtabviewitemfromsender, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_selectfirsttabviewitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_selectlasttabviewitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_selectnexttabviewitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_selectprevioustabviewitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_selectedtabviewitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_font, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_setfont, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_tabviewtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_settabviewtype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tabViewType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_tabposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_settabposition, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tabPosition, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_tabviewbordertype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_settabviewbordertype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tabViewBorderType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_tabviewitems, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_settabviewitems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, tabViewItems, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_allowstruncatedlabels, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_setallowstruncatedlabels, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowsTruncatedLabels, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_minimumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_drawsbackground, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_setdrawsbackground, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, drawsBackground, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_controlsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_setcontrolsize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, controlSize, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_addtabviewitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tabViewItem, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_inserttabviewitematindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tabViewItem, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_removetabviewitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tabViewItem, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_tabviewitematpoint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_contentrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_numberoftabviewitems, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_indexoftabviewitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tabViewItem, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_tabviewitematindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nstabview_nstabview_indexoftabviewitemwithidentifier, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nstabview_nstabview_method_entry) {
	PHP_ME(AppKit_NS_NSTabView_NSTabView, initWithFrame, arginfo_appkit_ns_nstabview_nstabview_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, selectTabViewItem, arginfo_appkit_ns_nstabview_nstabview_selecttabviewitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, selectTabViewItemAtIndex, arginfo_appkit_ns_nstabview_nstabview_selecttabviewitematindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, selectTabViewItemWithIdentifier, arginfo_appkit_ns_nstabview_nstabview_selecttabviewitemwithidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, takeSelectedTabViewItemFromSender, arginfo_appkit_ns_nstabview_nstabview_takeselectedtabviewitemfromsender, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, selectFirstTabViewItem, arginfo_appkit_ns_nstabview_nstabview_selectfirsttabviewitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, selectLastTabViewItem, arginfo_appkit_ns_nstabview_nstabview_selectlasttabviewitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, selectNextTabViewItem, arginfo_appkit_ns_nstabview_nstabview_selectnexttabviewitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, selectPreviousTabViewItem, arginfo_appkit_ns_nstabview_nstabview_selectprevioustabviewitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, selectedTabViewItem, arginfo_appkit_ns_nstabview_nstabview_selectedtabviewitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, font, arginfo_appkit_ns_nstabview_nstabview_font, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, setFont, arginfo_appkit_ns_nstabview_nstabview_setfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, tabViewType, arginfo_appkit_ns_nstabview_nstabview_tabviewtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, setTabViewType, arginfo_appkit_ns_nstabview_nstabview_settabviewtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, tabPosition, arginfo_appkit_ns_nstabview_nstabview_tabposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, setTabPosition, arginfo_appkit_ns_nstabview_nstabview_settabposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, tabViewBorderType, arginfo_appkit_ns_nstabview_nstabview_tabviewbordertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, setTabViewBorderType, arginfo_appkit_ns_nstabview_nstabview_settabviewbordertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, tabViewItems, arginfo_appkit_ns_nstabview_nstabview_tabviewitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, setTabViewItems, arginfo_appkit_ns_nstabview_nstabview_settabviewitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, allowsTruncatedLabels, arginfo_appkit_ns_nstabview_nstabview_allowstruncatedlabels, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, setAllowsTruncatedLabels, arginfo_appkit_ns_nstabview_nstabview_setallowstruncatedlabels, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, minimumSize, arginfo_appkit_ns_nstabview_nstabview_minimumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, drawsBackground, arginfo_appkit_ns_nstabview_nstabview_drawsbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, setDrawsBackground, arginfo_appkit_ns_nstabview_nstabview_setdrawsbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, controlSize, arginfo_appkit_ns_nstabview_nstabview_controlsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, setControlSize, arginfo_appkit_ns_nstabview_nstabview_setcontrolsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, addTabViewItem, arginfo_appkit_ns_nstabview_nstabview_addtabviewitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, insertTabViewItemAtIndex, arginfo_appkit_ns_nstabview_nstabview_inserttabviewitematindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, removeTabViewItem, arginfo_appkit_ns_nstabview_nstabview_removetabviewitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, delegate, arginfo_appkit_ns_nstabview_nstabview_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, setDelegate, arginfo_appkit_ns_nstabview_nstabview_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, tabViewItemAtPoint, arginfo_appkit_ns_nstabview_nstabview_tabviewitematpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, contentRect, arginfo_appkit_ns_nstabview_nstabview_contentrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, numberOfTabViewItems, arginfo_appkit_ns_nstabview_nstabview_numberoftabviewitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, indexOfTabViewItem, arginfo_appkit_ns_nstabview_nstabview_indexoftabviewitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, tabViewItemAtIndex, arginfo_appkit_ns_nstabview_nstabview_tabviewitematindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSTabView_NSTabView, indexOfTabViewItemWithIdentifier, arginfo_appkit_ns_nstabview_nstabview_indexoftabviewitemwithidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
