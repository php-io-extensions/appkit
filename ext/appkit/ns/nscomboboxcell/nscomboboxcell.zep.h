
extern zend_class_entry *appkit_ns_nscomboboxcell_nscomboboxcell_ce;

ZEPHIR_INIT_CLASS(AppKit_NS_NSComboBoxCell_NSComboBoxCell);

PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, initTextCell);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, hasVerticalScroller);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, setHasVerticalScroller);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, intercellSpacing);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, setIntercellSpacing);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, itemHeight);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, setItemHeight);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, numberOfVisibleItems);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, setNumberOfVisibleItems);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, isButtonBordered);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, setButtonBordered);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, reloadData);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, noteNumberOfItemsChanged);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, usesDataSource);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, setUsesDataSource);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, scrollItemAtIndexToTop);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, scrollItemAtIndexToVisible);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, selectItemAtIndex);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, deselectItemAtIndex);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, indexOfSelectedItem);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, numberOfItems);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, completes);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, setCompletes);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, completedString);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, dataSource);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, setDataSource);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, addItemWithObjectValue);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, addItemsWithObjectValues);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, insertItemWithObjectValueAtIndex);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, removeItemWithObjectValue);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, removeItemAtIndex);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, removeAllItems);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, selectItemWithObjectValue);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, itemObjectValueAtIndex);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, objectValueOfSelectedItem);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, indexOfItemWithObjectValue);
PHP_METHOD(AppKit_NS_NSComboBoxCell_NSComboBoxCell, objectValues);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_inittextcell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_hasverticalscroller, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_sethasverticalscroller, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hasVerticalScroller, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_intercellspacing, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_setintercellspacing, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_itemheight, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_setitemheight, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, itemHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_numberofvisibleitems, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_setnumberofvisibleitems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, numberOfVisibleItems, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_isbuttonbordered, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_setbuttonbordered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttonBordered, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_reloaddata, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_notenumberofitemschanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_usesdatasource, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_setusesdatasource, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usesDataSource, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_scrollitematindextotop, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_scrollitematindextovisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_selectitematindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_deselectitematindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_indexofselecteditem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_numberofitems, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_completes, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_setcompletes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, completes, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_completedstring, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_datasource, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_setdatasource, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dataSource, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_additemwithobjectvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_additemswithobjectvalues, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, objects, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_insertitemwithobjectvalueatindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_removeitemwithobjectvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_removeitematindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_removeallitems, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_selectitemwithobjectvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_itemobjectvalueatindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_objectvalueofselecteditem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_indexofitemwithobjectvalue, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_objectvalues, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(appkit_ns_nscomboboxcell_nscomboboxcell_method_entry) {
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, initTextCell, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_inittextcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, hasVerticalScroller, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_hasverticalscroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, setHasVerticalScroller, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_sethasverticalscroller, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, intercellSpacing, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_intercellspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, setIntercellSpacing, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_setintercellspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, itemHeight, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_itemheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, setItemHeight, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_setitemheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, numberOfVisibleItems, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_numberofvisibleitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, setNumberOfVisibleItems, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_setnumberofvisibleitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, isButtonBordered, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_isbuttonbordered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, setButtonBordered, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_setbuttonbordered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, reloadData, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_reloaddata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, noteNumberOfItemsChanged, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_notenumberofitemschanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, usesDataSource, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_usesdatasource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, setUsesDataSource, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_setusesdatasource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, scrollItemAtIndexToTop, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_scrollitematindextotop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, scrollItemAtIndexToVisible, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_scrollitematindextovisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, selectItemAtIndex, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_selectitematindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, deselectItemAtIndex, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_deselectitematindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, indexOfSelectedItem, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_indexofselecteditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, numberOfItems, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_numberofitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, completes, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_completes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, setCompletes, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_setcompletes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, completedString, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_completedstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, dataSource, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_datasource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, setDataSource, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_setdatasource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, addItemWithObjectValue, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_additemwithobjectvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, addItemsWithObjectValues, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_additemswithobjectvalues, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, insertItemWithObjectValueAtIndex, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_insertitemwithobjectvalueatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, removeItemWithObjectValue, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_removeitemwithobjectvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, removeItemAtIndex, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_removeitematindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, removeAllItems, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_removeallitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, selectItemWithObjectValue, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_selectitemwithobjectvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, itemObjectValueAtIndex, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_itemobjectvalueatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, objectValueOfSelectedItem, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_objectvalueofselecteditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, indexOfItemWithObjectValue, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_indexofitemwithobjectvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(AppKit_NS_NSComboBoxCell_NSComboBoxCell, objectValues, arginfo_appkit_ns_nscomboboxcell_nscomboboxcell_objectvalues, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
