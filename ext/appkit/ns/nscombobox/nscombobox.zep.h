
extern zend_class_entry *appkit_ns_nscombobox_nscombobox_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSComboBox_NSComboBox);

PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, initWithFrame);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, hasVerticalScroller);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, setHasVerticalScroller);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, intercellSpacing);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, setIntercellSpacing);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, itemHeight);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, setItemHeight);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, numberOfVisibleItems);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, setNumberOfVisibleItems);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, isButtonBordered);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, setButtonBordered);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, reloadData);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, noteNumberOfItemsChanged);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, usesDataSource);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, setUsesDataSource);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, scrollItemAtIndexToTop);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, scrollItemAtIndexToVisible);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, selectItemAtIndex);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, deselectItemAtIndex);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, indexOfSelectedItem);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, numberOfItems);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, completes);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, setCompletes);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, delegate);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, setDelegate);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, dataSource);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, setDataSource);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, addItemWithObjectValue);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, addItemsWithObjectValues);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, insertItemWithObjectValueAtIndex);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, removeItemWithObjectValue);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, removeItemAtIndex);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, removeAllItems);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, selectItemWithObjectValue);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, itemObjectValueAtIndex);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, objectValueOfSelectedItem);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, indexOfItemWithObjectValue);
PHP_METHOD(AppKit_NS_NSComboBox_NSComboBox, objectValues);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_initwithframe, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_hasverticalscroller, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_sethasverticalscroller, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hasVerticalScroller, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_intercellspacing, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_setintercellspacing, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_itemheight, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_setitemheight, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, itemHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_numberofvisibleitems, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_setnumberofvisibleitems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, numberOfVisibleItems, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_isbuttonbordered, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_setbuttonbordered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttonBordered, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_reloaddata, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_notenumberofitemschanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_usesdatasource, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_setusesdatasource, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usesDataSource, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_scrollitematindextotop, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_scrollitematindextovisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_selectitematindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_deselectitematindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_indexofselecteditem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_numberofitems, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_completes, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_setcompletes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, completes, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_delegate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_setdelegate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delegate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_datasource, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_setdatasource, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dataSource, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_additemwithobjectvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_additemswithobjectvalues, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, objects, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_insertitemwithobjectvalueatindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_removeitemwithobjectvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_removeitematindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_removeallitems, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_selectitemwithobjectvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_itemobjectvalueatindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_objectvalueofselecteditem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_indexofitemwithobjectvalue, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscombobox_nscombobox_objectvalues, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscombobox_nscombobox_method_entry) {
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, initWithFrame, arginfo_appkit_ns_nscombobox_nscombobox_initwithframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, hasVerticalScroller, arginfo_appkit_ns_nscombobox_nscombobox_hasverticalscroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, setHasVerticalScroller, arginfo_appkit_ns_nscombobox_nscombobox_sethasverticalscroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, intercellSpacing, arginfo_appkit_ns_nscombobox_nscombobox_intercellspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, setIntercellSpacing, arginfo_appkit_ns_nscombobox_nscombobox_setintercellspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, itemHeight, arginfo_appkit_ns_nscombobox_nscombobox_itemheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, setItemHeight, arginfo_appkit_ns_nscombobox_nscombobox_setitemheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, numberOfVisibleItems, arginfo_appkit_ns_nscombobox_nscombobox_numberofvisibleitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, setNumberOfVisibleItems, arginfo_appkit_ns_nscombobox_nscombobox_setnumberofvisibleitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, isButtonBordered, arginfo_appkit_ns_nscombobox_nscombobox_isbuttonbordered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, setButtonBordered, arginfo_appkit_ns_nscombobox_nscombobox_setbuttonbordered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, reloadData, arginfo_appkit_ns_nscombobox_nscombobox_reloaddata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, noteNumberOfItemsChanged, arginfo_appkit_ns_nscombobox_nscombobox_notenumberofitemschanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, usesDataSource, arginfo_appkit_ns_nscombobox_nscombobox_usesdatasource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, setUsesDataSource, arginfo_appkit_ns_nscombobox_nscombobox_setusesdatasource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, scrollItemAtIndexToTop, arginfo_appkit_ns_nscombobox_nscombobox_scrollitematindextotop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, scrollItemAtIndexToVisible, arginfo_appkit_ns_nscombobox_nscombobox_scrollitematindextovisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, selectItemAtIndex, arginfo_appkit_ns_nscombobox_nscombobox_selectitematindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, deselectItemAtIndex, arginfo_appkit_ns_nscombobox_nscombobox_deselectitematindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, indexOfSelectedItem, arginfo_appkit_ns_nscombobox_nscombobox_indexofselecteditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, numberOfItems, arginfo_appkit_ns_nscombobox_nscombobox_numberofitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, completes, arginfo_appkit_ns_nscombobox_nscombobox_completes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, setCompletes, arginfo_appkit_ns_nscombobox_nscombobox_setcompletes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, delegate, arginfo_appkit_ns_nscombobox_nscombobox_delegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, setDelegate, arginfo_appkit_ns_nscombobox_nscombobox_setdelegate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, dataSource, arginfo_appkit_ns_nscombobox_nscombobox_datasource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, setDataSource, arginfo_appkit_ns_nscombobox_nscombobox_setdatasource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, addItemWithObjectValue, arginfo_appkit_ns_nscombobox_nscombobox_additemwithobjectvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, addItemsWithObjectValues, arginfo_appkit_ns_nscombobox_nscombobox_additemswithobjectvalues, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, insertItemWithObjectValueAtIndex, arginfo_appkit_ns_nscombobox_nscombobox_insertitemwithobjectvalueatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, removeItemWithObjectValue, arginfo_appkit_ns_nscombobox_nscombobox_removeitemwithobjectvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, removeItemAtIndex, arginfo_appkit_ns_nscombobox_nscombobox_removeitematindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, removeAllItems, arginfo_appkit_ns_nscombobox_nscombobox_removeallitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, selectItemWithObjectValue, arginfo_appkit_ns_nscombobox_nscombobox_selectitemwithobjectvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, itemObjectValueAtIndex, arginfo_appkit_ns_nscombobox_nscombobox_itemobjectvalueatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, objectValueOfSelectedItem, arginfo_appkit_ns_nscombobox_nscombobox_objectvalueofselecteditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, indexOfItemWithObjectValue, arginfo_appkit_ns_nscombobox_nscombobox_indexofitemwithobjectvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBox_NSComboBox, objectValues, arginfo_appkit_ns_nscombobox_nscombobox_objectvalues, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
